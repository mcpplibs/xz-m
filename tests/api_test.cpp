// The module's functions over compat.xz: a buffer round trip, a stream through
// LZMA_STREAM_INIT and lzma_code, a filter chain with a BCJ filter, the two
// checksums against published values, the error of garbage input, the .lzma
// format, and the version against its macros.
#include <mwrap/xz/macros.hpp>
import std.compat;
import mcpplibs.mwrap.xz;

namespace m = mcpplibs::mwrap::xz::macros;

int main()
{
    int failures = 0;
    auto check = [&](bool ok, std::string_view what) {
        std::println("{} {}", ok ? "ok  " : "FAIL", what);
        failures += ok ? 0 : 1;
    };

    constexpr auto unlimited = std::numeric_limits<std::uint64_t>::max();
    std::string text;
    for (int i = 0; i < 3000; ++i) text += std::format("entry {} of a repetitive journal\n", i % 29);
    const auto* bytes = reinterpret_cast<const std::uint8_t*>(text.data());

    // Buffers, one call each way.
    std::vector<std::uint8_t> xz(lzma_stream_buffer_bound(text.size()));
    std::size_t xz_size = 0;
    check(lzma_easy_buffer_encode(m::LZMA_PRESET_DEFAULT, LZMA_CHECK_CRC64, nullptr, bytes, text.size(), xz.data(),
                                  &xz_size, xz.size()) == LZMA_OK && xz_size < text.size() / 10,
          "lzma_easy_buffer_encode shrinks the text");
    std::string back(text.size(), '\0');
    std::uint64_t limit = unlimited;
    std::size_t in_pos = 0, out_pos = 0;
    check(lzma_stream_buffer_decode(&limit, 0, nullptr, xz.data(), &in_pos, xz_size,
                                    reinterpret_cast<std::uint8_t*>(back.data()), &out_pos, back.size()) == LZMA_OK
              && out_pos == text.size() && back == text, "lzma_stream_buffer_decode restores it");

    // A stream: LZMA_STREAM_INIT is a macro, lzma_code runs it to LZMA_STREAM_END.
    auto run = [](lzma_stream& s, const std::uint8_t* in, std::size_t n, std::vector<std::uint8_t>& out) {
        s.next_in = in;
        s.avail_in = n;
        lzma_ret rc = LZMA_OK;
        while (rc == LZMA_OK) {
            std::uint8_t chunk[4096];
            s.next_out = chunk;
            s.avail_out = sizeof chunk;
            rc = lzma_code(&s, LZMA_FINISH);
            out.insert(out.end(), chunk, chunk + (sizeof chunk - s.avail_out));
        }
        lzma_end(&s);
        return rc;
    };
    lzma_stream enc = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> streamed;
    check(lzma_easy_encoder(&enc, 6 | m::LZMA_PRESET_EXTREME, LZMA_CHECK_SHA256) == LZMA_OK
              && run(enc, bytes, text.size(), streamed) == LZMA_STREAM_END, "lzma_easy_encoder, extreme, SHA-256");
    lzma_stream dec = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> restored;
    check(lzma_stream_decoder(&dec, unlimited, m::LZMA_CONCATENATED) == LZMA_OK
              && run(dec, streamed.data(), streamed.size(), restored) == LZMA_STREAM_END
              && std::string(restored.begin(), restored.end()) == text, "lzma_stream_decoder restores the stream");

    // A filter chain: x86 BCJ before LZMA2.
    lzma_options_lzma lzma2{};
    check(!lzma_lzma_preset(&lzma2, 1), "lzma_lzma_preset");
    lzma_filter chain[] = {{m::LZMA_FILTER_X86, nullptr}, {m::LZMA_FILTER_LZMA2, &lzma2}, {m::LZMA_VLI_UNKNOWN, nullptr}};
    check(lzma_filter_encoder_is_supported(m::LZMA_FILTER_X86) && lzma_filter_decoder_is_supported(m::LZMA_FILTER_LZMA2),
          "the filters are built");
    lzma_stream chained = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> filtered;
    check(lzma_stream_encoder(&chained, chain, LZMA_CHECK_CRC32) == LZMA_OK
              && run(chained, bytes, text.size(), filtered) == LZMA_STREAM_END, "lzma_stream_encoder with BCJ and LZMA2");
    lzma_stream auto_dec = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> unfiltered;
    check(lzma_auto_decoder(&auto_dec, unlimited, 0) == LZMA_OK
              && run(auto_dec, filtered.data(), filtered.size(), unfiltered) == LZMA_STREAM_END
              && std::string(unfiltered.begin(), unfiltered.end()) == text, "lzma_auto_decoder restores it");

    // The .lzma format.
    lzma_stream alone = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> legacy;
    check(lzma_alone_encoder(&alone, &lzma2) == LZMA_OK && run(alone, bytes, text.size(), legacy) == LZMA_STREAM_END,
          "lzma_alone_encoder writes .lzma");

    // Checks of "123456789" as their specifications publish them.
    const auto* digits = reinterpret_cast<const std::uint8_t*>("123456789");
    check(lzma_crc32(digits, 9, 0) == 0xCBF43926u, "lzma_crc32 of 123456789");
    check(lzma_crc64(digits, 9, 0) == 0x995DC9BBDF1939FAull, "lzma_crc64 of 123456789");
    check(lzma_check_is_supported(LZMA_CHECK_SHA256) && lzma_check_size(LZMA_CHECK_SHA256) == 32, "SHA-256 is built");

    // Errors, macros and the version.
    lzma_stream bad = LZMA_STREAM_INIT;
    std::vector<std::uint8_t> nothing;
    const std::uint8_t garbage[] = "this is not an xz stream";
    check(lzma_stream_decoder(&bad, unlimited, 0) == LZMA_OK
              && run(bad, garbage, sizeof garbage, nothing) == LZMA_FORMAT_ERROR, "garbage is LZMA_FORMAT_ERROR");
    check(lzma_vli_is_valid(m::LZMA_VLI_MAX) && !lzma_vli_is_valid(m::LZMA_VLI_MAX + 1), "lzma_vli_is_valid");
    check(lzma_version_number() == m::LZMA_VERSION && std::string_view(lzma_version_string()) == m::LZMA_VERSION_STRING,
          "the library is the headers' version");
    std::println("{} failures", failures);
    return failures != 0;
}

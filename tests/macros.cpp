// Each constant and type of mcpplibs.mwrap.xz.macros equals its macro. A macro
// expands even in a qualified name, so the values of the headers are taken under other
// names and the macros undefined before the mapped names are used. Written by
// tools/generate.py.
#ifndef LZMA_API_STATIC
#define LZMA_API_STATIC
#endif
#include <lzma.h>

namespace header {
inline constexpr auto value_LZMA_BACKWARD_SIZE_MAX = (LZMA_BACKWARD_SIZE_MAX);
inline constexpr auto value_LZMA_BACKWARD_SIZE_MIN = (LZMA_BACKWARD_SIZE_MIN);
inline constexpr auto value_LZMA_BLOCK_HEADER_SIZE_MAX = (LZMA_BLOCK_HEADER_SIZE_MAX);
inline constexpr auto value_LZMA_BLOCK_HEADER_SIZE_MIN = (LZMA_BLOCK_HEADER_SIZE_MIN);
inline constexpr auto value_LZMA_CHECK_ID_MAX = (LZMA_CHECK_ID_MAX);
inline constexpr auto value_LZMA_CHECK_SIZE_MAX = (LZMA_CHECK_SIZE_MAX);
inline constexpr auto value_LZMA_CONCATENATED = (LZMA_CONCATENATED);
inline constexpr auto value_LZMA_DELTA_DIST_MAX = (LZMA_DELTA_DIST_MAX);
inline constexpr auto value_LZMA_DELTA_DIST_MIN = (LZMA_DELTA_DIST_MIN);
inline constexpr auto value_LZMA_DICT_SIZE_DEFAULT = (LZMA_DICT_SIZE_DEFAULT);
inline constexpr auto value_LZMA_DICT_SIZE_MIN = (LZMA_DICT_SIZE_MIN);
inline constexpr auto value_LZMA_FAIL_FAST = (LZMA_FAIL_FAST);
inline constexpr auto value_LZMA_FILTERS_MAX = (LZMA_FILTERS_MAX);
inline constexpr auto value_LZMA_FILTER_ARM = (LZMA_FILTER_ARM);
inline constexpr auto value_LZMA_FILTER_ARM64 = (LZMA_FILTER_ARM64);
inline constexpr auto value_LZMA_FILTER_ARMTHUMB = (LZMA_FILTER_ARMTHUMB);
inline constexpr auto value_LZMA_FILTER_DELTA = (LZMA_FILTER_DELTA);
inline constexpr auto value_LZMA_FILTER_IA64 = (LZMA_FILTER_IA64);
inline constexpr auto value_LZMA_FILTER_LZMA1 = (LZMA_FILTER_LZMA1);
inline constexpr auto value_LZMA_FILTER_LZMA1EXT = (LZMA_FILTER_LZMA1EXT);
inline constexpr auto value_LZMA_FILTER_LZMA2 = (LZMA_FILTER_LZMA2);
inline constexpr auto value_LZMA_FILTER_POWERPC = (LZMA_FILTER_POWERPC);
inline constexpr auto value_LZMA_FILTER_RISCV = (LZMA_FILTER_RISCV);
inline constexpr auto value_LZMA_FILTER_SPARC = (LZMA_FILTER_SPARC);
inline constexpr auto value_LZMA_FILTER_X86 = (LZMA_FILTER_X86);
inline constexpr auto value_LZMA_IGNORE_CHECK = (LZMA_IGNORE_CHECK);
inline constexpr auto value_LZMA_INDEX_CHECK_MASK_CRC32 = (LZMA_INDEX_CHECK_MASK_CRC32);
inline constexpr auto value_LZMA_INDEX_CHECK_MASK_CRC64 = (LZMA_INDEX_CHECK_MASK_CRC64);
inline constexpr auto value_LZMA_INDEX_CHECK_MASK_NONE = (LZMA_INDEX_CHECK_MASK_NONE);
inline constexpr auto value_LZMA_INDEX_CHECK_MASK_SHA256 = (LZMA_INDEX_CHECK_MASK_SHA256);
inline constexpr auto value_LZMA_LCLP_MAX = (LZMA_LCLP_MAX);
inline constexpr auto value_LZMA_LCLP_MIN = (LZMA_LCLP_MIN);
inline constexpr auto value_LZMA_LC_DEFAULT = (LZMA_LC_DEFAULT);
inline constexpr auto value_LZMA_LP_DEFAULT = (LZMA_LP_DEFAULT);
inline constexpr auto value_LZMA_LZMA1EXT_ALLOW_EOPM = (LZMA_LZMA1EXT_ALLOW_EOPM);
inline constexpr auto value_LZMA_PB_DEFAULT = (LZMA_PB_DEFAULT);
inline constexpr auto value_LZMA_PB_MAX = (LZMA_PB_MAX);
inline constexpr auto value_LZMA_PB_MIN = (LZMA_PB_MIN);
inline constexpr auto value_LZMA_PRESET_DEFAULT = (LZMA_PRESET_DEFAULT);
inline constexpr auto value_LZMA_PRESET_EXTREME = (LZMA_PRESET_EXTREME);
inline constexpr auto value_LZMA_PRESET_LEVEL_MASK = (LZMA_PRESET_LEVEL_MASK);
inline constexpr auto value_LZMA_STREAM_HEADER_SIZE = (LZMA_STREAM_HEADER_SIZE);
inline constexpr auto value_LZMA_STR_ALL_FILTERS = (LZMA_STR_ALL_FILTERS);
inline constexpr auto value_LZMA_STR_DECODER = (LZMA_STR_DECODER);
inline constexpr auto value_LZMA_STR_ENCODER = (LZMA_STR_ENCODER);
inline constexpr auto value_LZMA_STR_GETOPT_LONG = (LZMA_STR_GETOPT_LONG);
inline constexpr auto value_LZMA_STR_NO_SPACES = (LZMA_STR_NO_SPACES);
inline constexpr auto value_LZMA_STR_NO_VALIDATION = (LZMA_STR_NO_VALIDATION);
inline constexpr auto value_LZMA_TELL_ANY_CHECK = (LZMA_TELL_ANY_CHECK);
inline constexpr auto value_LZMA_TELL_NO_CHECK = (LZMA_TELL_NO_CHECK);
inline constexpr auto value_LZMA_TELL_UNSUPPORTED_CHECK = (LZMA_TELL_UNSUPPORTED_CHECK);
inline constexpr auto value_LZMA_VERSION = (LZMA_VERSION);
inline constexpr auto value_LZMA_VERSION_COMMIT = (LZMA_VERSION_COMMIT);
inline constexpr auto value_LZMA_VERSION_MAJOR = (LZMA_VERSION_MAJOR);
inline constexpr auto value_LZMA_VERSION_MINOR = (LZMA_VERSION_MINOR);
inline constexpr auto value_LZMA_VERSION_PATCH = (LZMA_VERSION_PATCH);
inline constexpr auto value_LZMA_VERSION_STABILITY = (LZMA_VERSION_STABILITY);
inline constexpr auto value_LZMA_VERSION_STABILITY_ALPHA = (LZMA_VERSION_STABILITY_ALPHA);
inline constexpr auto value_LZMA_VERSION_STABILITY_BETA = (LZMA_VERSION_STABILITY_BETA);
inline constexpr auto value_LZMA_VERSION_STABILITY_STABLE = (LZMA_VERSION_STABILITY_STABLE);
inline constexpr auto value_LZMA_VERSION_STABILITY_STRING = (LZMA_VERSION_STABILITY_STRING);
inline constexpr auto value_LZMA_VERSION_STRING = (LZMA_VERSION_STRING);
inline constexpr auto value_LZMA_VLI_BYTES_MAX = (LZMA_VLI_BYTES_MAX);
inline constexpr auto value_LZMA_VLI_MAX = (LZMA_VLI_MAX);
inline constexpr auto value_LZMA_VLI_UNKNOWN = (LZMA_VLI_UNKNOWN);
}
#undef LZMA_BACKWARD_SIZE_MAX
#undef LZMA_BACKWARD_SIZE_MIN
#undef LZMA_BLOCK_HEADER_SIZE_MAX
#undef LZMA_BLOCK_HEADER_SIZE_MIN
#undef LZMA_CHECK_ID_MAX
#undef LZMA_CHECK_SIZE_MAX
#undef LZMA_CONCATENATED
#undef LZMA_DELTA_DIST_MAX
#undef LZMA_DELTA_DIST_MIN
#undef LZMA_DICT_SIZE_DEFAULT
#undef LZMA_DICT_SIZE_MIN
#undef LZMA_FAIL_FAST
#undef LZMA_FILTERS_MAX
#undef LZMA_FILTER_ARM
#undef LZMA_FILTER_ARM64
#undef LZMA_FILTER_ARMTHUMB
#undef LZMA_FILTER_DELTA
#undef LZMA_FILTER_IA64
#undef LZMA_FILTER_LZMA1
#undef LZMA_FILTER_LZMA1EXT
#undef LZMA_FILTER_LZMA2
#undef LZMA_FILTER_POWERPC
#undef LZMA_FILTER_RISCV
#undef LZMA_FILTER_SPARC
#undef LZMA_FILTER_X86
#undef LZMA_IGNORE_CHECK
#undef LZMA_INDEX_CHECK_MASK_CRC32
#undef LZMA_INDEX_CHECK_MASK_CRC64
#undef LZMA_INDEX_CHECK_MASK_NONE
#undef LZMA_INDEX_CHECK_MASK_SHA256
#undef LZMA_LCLP_MAX
#undef LZMA_LCLP_MIN
#undef LZMA_LC_DEFAULT
#undef LZMA_LP_DEFAULT
#undef LZMA_LZMA1EXT_ALLOW_EOPM
#undef LZMA_PB_DEFAULT
#undef LZMA_PB_MAX
#undef LZMA_PB_MIN
#undef LZMA_PRESET_DEFAULT
#undef LZMA_PRESET_EXTREME
#undef LZMA_PRESET_LEVEL_MASK
#undef LZMA_STREAM_HEADER_SIZE
#undef LZMA_STR_ALL_FILTERS
#undef LZMA_STR_DECODER
#undef LZMA_STR_ENCODER
#undef LZMA_STR_GETOPT_LONG
#undef LZMA_STR_NO_SPACES
#undef LZMA_STR_NO_VALIDATION
#undef LZMA_TELL_ANY_CHECK
#undef LZMA_TELL_NO_CHECK
#undef LZMA_TELL_UNSUPPORTED_CHECK
#undef LZMA_VERSION
#undef LZMA_VERSION_COMMIT
#undef LZMA_VERSION_MAJOR
#undef LZMA_VERSION_MINOR
#undef LZMA_VERSION_PATCH
#undef LZMA_VERSION_STABILITY
#undef LZMA_VERSION_STABILITY_ALPHA
#undef LZMA_VERSION_STABILITY_BETA
#undef LZMA_VERSION_STABILITY_STABLE
#undef LZMA_VERSION_STABILITY_STRING
#undef LZMA_VERSION_STRING
#undef LZMA_VLI_BYTES_MAX
#undef LZMA_VLI_MAX
#undef LZMA_VLI_UNKNOWN

import std;
import mcpplibs.mwrap.xz.macros;

namespace m = mcpplibs::mwrap::xz::macros;


template <class A, class B>
bool same(A a, B b)
{
    if constexpr (std::is_convertible_v<A, const char*> && std::is_convertible_v<B, const char*>)
        return std::string_view(a) == std::string_view(b);
    else
        return a == b;
}

int main()
{
    int differ = 0;
    if (!same(m::LZMA_BACKWARD_SIZE_MAX, header::value_LZMA_BACKWARD_SIZE_MAX)) { std::println("FAIL LZMA_BACKWARD_SIZE_MAX"); ++differ; }
    if (!same(m::LZMA_BACKWARD_SIZE_MIN, header::value_LZMA_BACKWARD_SIZE_MIN)) { std::println("FAIL LZMA_BACKWARD_SIZE_MIN"); ++differ; }
    if (!same(m::LZMA_BLOCK_HEADER_SIZE_MAX, header::value_LZMA_BLOCK_HEADER_SIZE_MAX)) { std::println("FAIL LZMA_BLOCK_HEADER_SIZE_MAX"); ++differ; }
    if (!same(m::LZMA_BLOCK_HEADER_SIZE_MIN, header::value_LZMA_BLOCK_HEADER_SIZE_MIN)) { std::println("FAIL LZMA_BLOCK_HEADER_SIZE_MIN"); ++differ; }
    if (!same(m::LZMA_CHECK_ID_MAX, header::value_LZMA_CHECK_ID_MAX)) { std::println("FAIL LZMA_CHECK_ID_MAX"); ++differ; }
    if (!same(m::LZMA_CHECK_SIZE_MAX, header::value_LZMA_CHECK_SIZE_MAX)) { std::println("FAIL LZMA_CHECK_SIZE_MAX"); ++differ; }
    if (!same(m::LZMA_CONCATENATED, header::value_LZMA_CONCATENATED)) { std::println("FAIL LZMA_CONCATENATED"); ++differ; }
    if (!same(m::LZMA_DELTA_DIST_MAX, header::value_LZMA_DELTA_DIST_MAX)) { std::println("FAIL LZMA_DELTA_DIST_MAX"); ++differ; }
    if (!same(m::LZMA_DELTA_DIST_MIN, header::value_LZMA_DELTA_DIST_MIN)) { std::println("FAIL LZMA_DELTA_DIST_MIN"); ++differ; }
    if (!same(m::LZMA_DICT_SIZE_DEFAULT, header::value_LZMA_DICT_SIZE_DEFAULT)) { std::println("FAIL LZMA_DICT_SIZE_DEFAULT"); ++differ; }
    if (!same(m::LZMA_DICT_SIZE_MIN, header::value_LZMA_DICT_SIZE_MIN)) { std::println("FAIL LZMA_DICT_SIZE_MIN"); ++differ; }
    if (!same(m::LZMA_FAIL_FAST, header::value_LZMA_FAIL_FAST)) { std::println("FAIL LZMA_FAIL_FAST"); ++differ; }
    if (!same(m::LZMA_FILTERS_MAX, header::value_LZMA_FILTERS_MAX)) { std::println("FAIL LZMA_FILTERS_MAX"); ++differ; }
    if (!same(m::LZMA_FILTER_ARM, header::value_LZMA_FILTER_ARM)) { std::println("FAIL LZMA_FILTER_ARM"); ++differ; }
    if (!same(m::LZMA_FILTER_ARM64, header::value_LZMA_FILTER_ARM64)) { std::println("FAIL LZMA_FILTER_ARM64"); ++differ; }
    if (!same(m::LZMA_FILTER_ARMTHUMB, header::value_LZMA_FILTER_ARMTHUMB)) { std::println("FAIL LZMA_FILTER_ARMTHUMB"); ++differ; }
    if (!same(m::LZMA_FILTER_DELTA, header::value_LZMA_FILTER_DELTA)) { std::println("FAIL LZMA_FILTER_DELTA"); ++differ; }
    if (!same(m::LZMA_FILTER_IA64, header::value_LZMA_FILTER_IA64)) { std::println("FAIL LZMA_FILTER_IA64"); ++differ; }
    if (!same(m::LZMA_FILTER_LZMA1, header::value_LZMA_FILTER_LZMA1)) { std::println("FAIL LZMA_FILTER_LZMA1"); ++differ; }
    if (!same(m::LZMA_FILTER_LZMA1EXT, header::value_LZMA_FILTER_LZMA1EXT)) { std::println("FAIL LZMA_FILTER_LZMA1EXT"); ++differ; }
    if (!same(m::LZMA_FILTER_LZMA2, header::value_LZMA_FILTER_LZMA2)) { std::println("FAIL LZMA_FILTER_LZMA2"); ++differ; }
    if (!same(m::LZMA_FILTER_POWERPC, header::value_LZMA_FILTER_POWERPC)) { std::println("FAIL LZMA_FILTER_POWERPC"); ++differ; }
    if (!same(m::LZMA_FILTER_RISCV, header::value_LZMA_FILTER_RISCV)) { std::println("FAIL LZMA_FILTER_RISCV"); ++differ; }
    if (!same(m::LZMA_FILTER_SPARC, header::value_LZMA_FILTER_SPARC)) { std::println("FAIL LZMA_FILTER_SPARC"); ++differ; }
    if (!same(m::LZMA_FILTER_X86, header::value_LZMA_FILTER_X86)) { std::println("FAIL LZMA_FILTER_X86"); ++differ; }
    if (!same(m::LZMA_IGNORE_CHECK, header::value_LZMA_IGNORE_CHECK)) { std::println("FAIL LZMA_IGNORE_CHECK"); ++differ; }
    if (!same(m::LZMA_INDEX_CHECK_MASK_CRC32, header::value_LZMA_INDEX_CHECK_MASK_CRC32)) { std::println("FAIL LZMA_INDEX_CHECK_MASK_CRC32"); ++differ; }
    if (!same(m::LZMA_INDEX_CHECK_MASK_CRC64, header::value_LZMA_INDEX_CHECK_MASK_CRC64)) { std::println("FAIL LZMA_INDEX_CHECK_MASK_CRC64"); ++differ; }
    if (!same(m::LZMA_INDEX_CHECK_MASK_NONE, header::value_LZMA_INDEX_CHECK_MASK_NONE)) { std::println("FAIL LZMA_INDEX_CHECK_MASK_NONE"); ++differ; }
    if (!same(m::LZMA_INDEX_CHECK_MASK_SHA256, header::value_LZMA_INDEX_CHECK_MASK_SHA256)) { std::println("FAIL LZMA_INDEX_CHECK_MASK_SHA256"); ++differ; }
    if (!same(m::LZMA_LCLP_MAX, header::value_LZMA_LCLP_MAX)) { std::println("FAIL LZMA_LCLP_MAX"); ++differ; }
    if (!same(m::LZMA_LCLP_MIN, header::value_LZMA_LCLP_MIN)) { std::println("FAIL LZMA_LCLP_MIN"); ++differ; }
    if (!same(m::LZMA_LC_DEFAULT, header::value_LZMA_LC_DEFAULT)) { std::println("FAIL LZMA_LC_DEFAULT"); ++differ; }
    if (!same(m::LZMA_LP_DEFAULT, header::value_LZMA_LP_DEFAULT)) { std::println("FAIL LZMA_LP_DEFAULT"); ++differ; }
    if (!same(m::LZMA_LZMA1EXT_ALLOW_EOPM, header::value_LZMA_LZMA1EXT_ALLOW_EOPM)) { std::println("FAIL LZMA_LZMA1EXT_ALLOW_EOPM"); ++differ; }
    if (!same(m::LZMA_PB_DEFAULT, header::value_LZMA_PB_DEFAULT)) { std::println("FAIL LZMA_PB_DEFAULT"); ++differ; }
    if (!same(m::LZMA_PB_MAX, header::value_LZMA_PB_MAX)) { std::println("FAIL LZMA_PB_MAX"); ++differ; }
    if (!same(m::LZMA_PB_MIN, header::value_LZMA_PB_MIN)) { std::println("FAIL LZMA_PB_MIN"); ++differ; }
    if (!same(m::LZMA_PRESET_DEFAULT, header::value_LZMA_PRESET_DEFAULT)) { std::println("FAIL LZMA_PRESET_DEFAULT"); ++differ; }
    if (!same(m::LZMA_PRESET_EXTREME, header::value_LZMA_PRESET_EXTREME)) { std::println("FAIL LZMA_PRESET_EXTREME"); ++differ; }
    if (!same(m::LZMA_PRESET_LEVEL_MASK, header::value_LZMA_PRESET_LEVEL_MASK)) { std::println("FAIL LZMA_PRESET_LEVEL_MASK"); ++differ; }
    if (!same(m::LZMA_STREAM_HEADER_SIZE, header::value_LZMA_STREAM_HEADER_SIZE)) { std::println("FAIL LZMA_STREAM_HEADER_SIZE"); ++differ; }
    if (!same(m::LZMA_STR_ALL_FILTERS, header::value_LZMA_STR_ALL_FILTERS)) { std::println("FAIL LZMA_STR_ALL_FILTERS"); ++differ; }
    if (!same(m::LZMA_STR_DECODER, header::value_LZMA_STR_DECODER)) { std::println("FAIL LZMA_STR_DECODER"); ++differ; }
    if (!same(m::LZMA_STR_ENCODER, header::value_LZMA_STR_ENCODER)) { std::println("FAIL LZMA_STR_ENCODER"); ++differ; }
    if (!same(m::LZMA_STR_GETOPT_LONG, header::value_LZMA_STR_GETOPT_LONG)) { std::println("FAIL LZMA_STR_GETOPT_LONG"); ++differ; }
    if (!same(m::LZMA_STR_NO_SPACES, header::value_LZMA_STR_NO_SPACES)) { std::println("FAIL LZMA_STR_NO_SPACES"); ++differ; }
    if (!same(m::LZMA_STR_NO_VALIDATION, header::value_LZMA_STR_NO_VALIDATION)) { std::println("FAIL LZMA_STR_NO_VALIDATION"); ++differ; }
    if (!same(m::LZMA_TELL_ANY_CHECK, header::value_LZMA_TELL_ANY_CHECK)) { std::println("FAIL LZMA_TELL_ANY_CHECK"); ++differ; }
    if (!same(m::LZMA_TELL_NO_CHECK, header::value_LZMA_TELL_NO_CHECK)) { std::println("FAIL LZMA_TELL_NO_CHECK"); ++differ; }
    if (!same(m::LZMA_TELL_UNSUPPORTED_CHECK, header::value_LZMA_TELL_UNSUPPORTED_CHECK)) { std::println("FAIL LZMA_TELL_UNSUPPORTED_CHECK"); ++differ; }
    if (!same(m::LZMA_VERSION, header::value_LZMA_VERSION)) { std::println("FAIL LZMA_VERSION"); ++differ; }
    if (!same(m::LZMA_VERSION_COMMIT, header::value_LZMA_VERSION_COMMIT)) { std::println("FAIL LZMA_VERSION_COMMIT"); ++differ; }
    if (!same(m::LZMA_VERSION_MAJOR, header::value_LZMA_VERSION_MAJOR)) { std::println("FAIL LZMA_VERSION_MAJOR"); ++differ; }
    if (!same(m::LZMA_VERSION_MINOR, header::value_LZMA_VERSION_MINOR)) { std::println("FAIL LZMA_VERSION_MINOR"); ++differ; }
    if (!same(m::LZMA_VERSION_PATCH, header::value_LZMA_VERSION_PATCH)) { std::println("FAIL LZMA_VERSION_PATCH"); ++differ; }
    if (!same(m::LZMA_VERSION_STABILITY, header::value_LZMA_VERSION_STABILITY)) { std::println("FAIL LZMA_VERSION_STABILITY"); ++differ; }
    if (!same(m::LZMA_VERSION_STABILITY_ALPHA, header::value_LZMA_VERSION_STABILITY_ALPHA)) { std::println("FAIL LZMA_VERSION_STABILITY_ALPHA"); ++differ; }
    if (!same(m::LZMA_VERSION_STABILITY_BETA, header::value_LZMA_VERSION_STABILITY_BETA)) { std::println("FAIL LZMA_VERSION_STABILITY_BETA"); ++differ; }
    if (!same(m::LZMA_VERSION_STABILITY_STABLE, header::value_LZMA_VERSION_STABILITY_STABLE)) { std::println("FAIL LZMA_VERSION_STABILITY_STABLE"); ++differ; }
    if (!same(m::LZMA_VERSION_STABILITY_STRING, header::value_LZMA_VERSION_STABILITY_STRING)) { std::println("FAIL LZMA_VERSION_STABILITY_STRING"); ++differ; }
    if (!same(m::LZMA_VERSION_STRING, header::value_LZMA_VERSION_STRING)) { std::println("FAIL LZMA_VERSION_STRING"); ++differ; }
    if (!same(m::LZMA_VLI_BYTES_MAX, header::value_LZMA_VLI_BYTES_MAX)) { std::println("FAIL LZMA_VLI_BYTES_MAX"); ++differ; }
    if (!same(m::LZMA_VLI_MAX, header::value_LZMA_VLI_MAX)) { std::println("FAIL LZMA_VLI_MAX"); ++differ; }
    if (!same(m::LZMA_VLI_UNKNOWN, header::value_LZMA_VLI_UNKNOWN)) { std::println("FAIL LZMA_VLI_UNKNOWN"); ++differ; }
    std::println("65 constants and 0 types compared, {} differ", differ);
    return differ != 0;
}

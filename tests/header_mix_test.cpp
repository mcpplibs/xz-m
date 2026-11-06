// The header and the module in one translation unit: the same entities, so a
// stream set up through one spelling is ended through the other.
#include <lzma.h>
import std;
import mcpplibs.mwrap.xz;

int main()
{
    lzma_stream s = LZMA_STREAM_INIT;                                 // the header's macro
    const bool init = ::lzma_easy_encoder(&s, LZMA_PRESET_DEFAULT, LZMA_CHECK_CRC64) == LZMA_OK;
    lzma_end(&s);                                                     // the module's
    const bool same = &::lzma_code == &lzma_code;
    std::println("{}", init && same ? "header and module agree" : "FAIL");
    return init && same ? 0 : 1;
}

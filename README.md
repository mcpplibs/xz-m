# xz

> liblzma of XZ Utils, the .xz and .lzma compression library, through C++23 modules.

**English** · [简体中文](README.zh.md) · [Upstream](https://github.com/tukaani-project/xz) · [Releases](https://github.com/mcpplibs/xz-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [Index](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/xz-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/xz-m/actions/workflows/ci.yml)

The upstream API is unchanged. `lzma_easy_encoder`, `lzma_stream_decoder`,
`lzma_code`, `lzma_stream`, `lzma_filter`, `lzma_ret` and its enumerators are
the upstream entities of `<lzma.h>`, in the global namespace where upstream
declares them. The package keeps the identity of `compat.xz` 5.8.3, its only
implementation. The constant macros are C++ constants. Every CI run decodes
upstream's own test files with the same library.

## Modules

- `import mcpplibs.mwrap.xz;`: the functions, types and enumerators of `<lzma.h>` and its `lzma/*.h`, re-exporting the macros module
- `import mcpplibs.mwrap.xz.macros;`: `LZMA_PRESET_DEFAULT`, `LZMA_PRESET_EXTREME`, `LZMA_CONCATENATED`, `LZMA_FILTER_LZMA2`, `LZMA_VLI_UNKNOWN`, `LZMA_VERSION` … in `mcpplibs::mwrap::xz::macros`
- `#include <mwrap/xz/macros.hpp>`: `LZMA_STREAM_INIT`, `lzma_vli_is_valid`, `lzma_set_ext_size`, `lzma_block_header_size_decode`, `LZMA_VLI_C`

> More Modules API -> [Usage and API](docs/usage.md)

## Getting started

```sh
mcpp new pack --template mcpplibs.mwrap.xz@5.8.3
cd pack
mcpp run
```

The default template packs a text into an .xz stream with a CRC-64, unpacks
it, and prints the sizes and the checksum.

```toml
[dependencies]
"mcpplibs.mwrap.xz" = "5.8.3"
```

```cpp
import std;
import mcpplibs.mwrap.xz;

namespace x = mcpplibs::mwrap::xz::macros;

int main() {
    std::string text(10000, 'x');
    std::vector<std::uint8_t> out(lzma_stream_buffer_bound(text.size()));
    std::size_t size = 0;
    lzma_easy_buffer_encode(x::LZMA_PRESET_DEFAULT, LZMA_CHECK_CRC64, nullptr,
                            reinterpret_cast<const std::uint8_t*>(text.data()), text.size(), out.data(), &size, out.size());
    std::println("{} -> {} bytes", text.size(), size);
}
```

## Scope and macros

`compat.xz` builds the single-threaded coders, every filter (LZMA1, LZMA2,
delta, the BCJ filters for x86, ARM, ARM64, ARM-Thumb, PowerPC, IA-64, SPARC,
RISC-V), the three checks and the .lzip decoder. It does not build the
multithreaded coders: `lzma_stream_encoder_mt`, `lzma_stream_decoder_mt`,
`lzma_stream_encoder_mt_memusage` and `lzma_cputhreads` are not exported.

A named module cannot export a macro. The constants are `inline constexpr`
of the same names in `mcpplibs::mwrap::xz::macros`. `LZMA_STREAM_INIT` (an
initializer) and the macros with arguments stay macros in
`<mwrap/xz/macros.hpp>`; two of them cast to `uint32_t`, so the unit imports
`std.compat`. A macro expands even in a qualified name. A unit that includes
`<lzma.h>` beside the module reads the constants through the header's macros
([docs/usage.md](docs/usage.md)).

## Build and testing

Linux, macOS and Windows CI build the modules with GCC and LLVM and run the
tests: a buffer round trip, a stream through `LZMA_STREAM_INIT`, a BCJ and
LZMA2 filter chain read back by the automatic decoder, the .lzma format, the
published CRC-32 and CRC-64 of `123456789`, the error of garbage input, the
version against its macros, every constant against its macro, every exported
function linked, and header mixing. CI also runs:

- the export audit ([tools/generate.py](tools/generate.py) `--check`): the
  module, the macro mapping, the macro header and the generated tests are
  regenerated from the headers as clang reads them and compared, and on macOS
  and Windows every name the headers declare there is exported;
- upstream's 89 test files: each good file decodes, each bad file is refused
  ([tools/run_conformance.py](tools/run_conformance.py)).

A separate job scaffolds the default template as an installed package and runs
it.

## License

[Apache-2.0](LICENSE) for the wrapper, by mcpp-community ([NOTICE](NOTICE)).
liblzma remains under the BSD Zero Clause License
([upstream/xz/COPYING](upstream/xz/COPYING),
[COPYING.0BSD](upstream/xz/COPYING.0BSD), [README](upstream/xz/README)).

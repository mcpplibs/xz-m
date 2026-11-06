# Usage and API

`mcpplibs.mwrap.xz` 5.8.3 exports the public API of liblzma, upstream's names
unchanged. This page lists what each module holds and the places where a module
and a header differ. [tools/generate.py](../tools/generate.py) writes the lists
from the headers, and CI checks them on every target.

## Modules

| Module | Holds |
|---|---|
| `mcpplibs.mwrap.xz` | everything `<lzma.h>` declares through `lzma/*.h`: `lzma_stream`, `lzma_code`, `lzma_end`, `lzma_ret`, `lzma_action` and the memory and progress queries (base.h); the .xz, .lzma, .lz and raw coders and their buffer forms (`lzma_easy_*`, `lzma_stream_*`, `lzma_alone_*`, `lzma_lzip_decoder`, `lzma_auto_decoder`, `lzma_raw_*`, `lzma_microlzma_*`, container.h); filters (`lzma_filter`, `lzma_options_lzma`, `lzma_options_delta`, `lzma_options_bcj`, `lzma_lzma_preset`, `lzma_filters_*`, `lzma_str_to_filters`, filter.h, lzma12.h, delta.h, bcj.h); blocks, stream flags, indexes and index hashes; checks (`lzma_check`, `lzma_crc32`, `lzma_crc64`, `lzma_check_size`); integers (`lzma_vli` and its coders); `lzma_physmem`; `lzma_version_number`, `lzma_version_string`. Re-exports the macros module |
| `mcpplibs.mwrap.xz.macros` | in `mcpplibs::mwrap::xz::macros`: the presets and their flags (`LZMA_PRESET_DEFAULT`, `LZMA_PRESET_EXTREME`, `LZMA_PRESET_LEVEL_MASK`), the decoder flags (`LZMA_CONCATENATED`, `LZMA_TELL_*`, `LZMA_IGNORE_CHECK`, `LZMA_FAIL_FAST`), the filter IDs (`LZMA_FILTER_*`), the limits and defaults of the LZMA options, of blocks, streams, indexes and VLIs, the `LZMA_STR_*` flags, and the version (`LZMA_VERSION`, `LZMA_VERSION_STRING`, `LZMA_VERSION_MAJOR` …) |

## What is not exported

`compat.xz` does not build `hardware_cputhreads.c`, `stream_encoder_mt.c` or
`stream_decoder_mt.c`: the multithreaded coders need a thread library the
package does not configure. Their functions (`lzma_cputhreads`,
`lzma_stream_encoder_mt`, `lzma_stream_encoder_mt_memusage`,
`lzma_stream_decoder_mt`) would not link and are not exported; `lzma_mt`, the
options structure, is. tools/surface.toml lists them as `unbuilt`, and
tests/linked.cpp links every function that is exported.

## Macros

- **Constants.** Each object-like macro whose expansion is a constant
  expression is an `inline constexpr` of the same name and value;
  tests/macros.cpp compares every one with its macro.
- **`LZMA_STREAM_INIT`** is an initializer, not a value, and stays a macro in
  `<mwrap/xz/macros.hpp>`, with upstream's `NULL` written `nullptr`.
- **Macros with arguments.** `lzma_vli_is_valid(vli)` (reading `LZMA_VLI_MAX`
  and `LZMA_VLI_UNKNOWN` from the macros module), `lzma_set_ext_size(opt,
  size)`, `lzma_block_header_size_decode(b)` and `LZMA_VLI_C(n)` stay macros
  there. The second and third cast to `uint32_t` and `uint64_t`: import
  `std.compat`. `LZMA_VLI_C` expands to `<stdint.h>`'s `UINT64_C`; in a
  module-only unit write `lzma_vli{n}`.
- **Declaration syntax.** `LZMA_API`, `LZMA_API_CALL`, `LZMA_API_IMPORT`,
  `lzma_attribute`, `lzma_attr_*`, `lzma_nothrow`, and the stringification
  steps `LZMA_VERSION_STRING_C` and `LZMA_VERSION_STRING_C_` are not offered.
  tools/surface.toml lists them.

## A header beside the module

`#include <lzma.h>` and `import mcpplibs.mwrap.xz;` may appear in one unit:
they declare the same entities. A macro expands even inside a qualified name,
so `mcpplibs::mwrap::xz::macros::LZMA_CONCATENATED` written after the header is
`...::macros::0x08`. In such a unit use the header's macros, or read their
values under other names and `#undef` the macros before naming the constants
(tests/macros.cpp does this).

## Linking

The package depends on `compat.xz` 5.8.3, which builds liblzma from the release
sources with the target's toolchain. A program that imports the module links
that library; it does not look for a system liblzma.

// <mwrap/xz/macros.hpp> --- the macros of the headers that are neither a constant
// nor a type: they take arguments, or call a function. A named module cannot export a
// macro: include this header before `import mcpplibs.mwrap.xz;`. Each definition is
// upstream's (liblzma of XZ Utils 5.8.3, 0BSD), made only where the upstream header has
// not defined it, with the constants it names read from mcpplibs::mwrap::xz::macros
// and NULL written nullptr.
// The upstream header included after this one redefines these macros.
// Written by tools/generate.py.
#ifndef MWRAP_XZ_MACROS_HPP
#define MWRAP_XZ_MACROS_HPP

#ifndef LZMA_STREAM_INIT
#define LZMA_STREAM_INIT { nullptr, 0, 0, nullptr, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, 0, 0, 0, 0, LZMA_RESERVED_ENUM, LZMA_RESERVED_ENUM }
#endif

#ifndef LZMA_VLI_C
#define LZMA_VLI_C(n) UINT64_C(n)
#endif

#ifndef lzma_block_header_size_decode
#define lzma_block_header_size_decode(b) (((uint32_t)(b) + 1) * 4)
#endif

#ifndef lzma_set_ext_size
#define lzma_set_ext_size(opt_lzma2,u64size) do { (opt_lzma2).ext_size_low = (uint32_t)(u64size); (opt_lzma2).ext_size_high = (uint32_t)((uint64_t)(u64size) >> 32); } while (0)
#endif

#ifndef lzma_vli_is_valid
#define lzma_vli_is_valid(vli) ((vli) <= ::mcpplibs::mwrap::xz::macros::LZMA_VLI_MAX || (vli) == ::mcpplibs::mwrap::xz::macros::LZMA_VLI_UNKNOWN)
#endif

#endif  // MWRAP_XZ_MACROS_HPP

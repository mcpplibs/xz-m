// mcpplibs.mwrap.xz.macros --- the macros of the headers that are a constant or a
// type, under their original names in mcpplibs::mwrap::xz::macros, each equal to
// the macro where the module is built (a named module cannot export a macro). The
// other macros are in <mwrap/xz/macros.hpp>. Written by tools/generate.py.
module;
#ifndef LZMA_API_STATIC
#define LZMA_API_STATIC
#endif
#include <lzma.h>

// The values, taken under other names while the macros are defined.
namespace mwrap_xz_capture {
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

export module mcpplibs.mwrap.xz.macros;

export namespace mcpplibs::mwrap::xz::macros {
inline constexpr auto LZMA_BACKWARD_SIZE_MAX = mwrap_xz_capture::value_LZMA_BACKWARD_SIZE_MAX;
inline constexpr auto LZMA_BACKWARD_SIZE_MIN = mwrap_xz_capture::value_LZMA_BACKWARD_SIZE_MIN;
inline constexpr auto LZMA_BLOCK_HEADER_SIZE_MAX = mwrap_xz_capture::value_LZMA_BLOCK_HEADER_SIZE_MAX;
inline constexpr auto LZMA_BLOCK_HEADER_SIZE_MIN = mwrap_xz_capture::value_LZMA_BLOCK_HEADER_SIZE_MIN;
inline constexpr auto LZMA_CHECK_ID_MAX = mwrap_xz_capture::value_LZMA_CHECK_ID_MAX;
inline constexpr auto LZMA_CHECK_SIZE_MAX = mwrap_xz_capture::value_LZMA_CHECK_SIZE_MAX;
inline constexpr auto LZMA_CONCATENATED = mwrap_xz_capture::value_LZMA_CONCATENATED;
inline constexpr auto LZMA_DELTA_DIST_MAX = mwrap_xz_capture::value_LZMA_DELTA_DIST_MAX;
inline constexpr auto LZMA_DELTA_DIST_MIN = mwrap_xz_capture::value_LZMA_DELTA_DIST_MIN;
inline constexpr auto LZMA_DICT_SIZE_DEFAULT = mwrap_xz_capture::value_LZMA_DICT_SIZE_DEFAULT;
inline constexpr auto LZMA_DICT_SIZE_MIN = mwrap_xz_capture::value_LZMA_DICT_SIZE_MIN;
inline constexpr auto LZMA_FAIL_FAST = mwrap_xz_capture::value_LZMA_FAIL_FAST;
inline constexpr auto LZMA_FILTERS_MAX = mwrap_xz_capture::value_LZMA_FILTERS_MAX;
inline constexpr auto LZMA_FILTER_ARM = mwrap_xz_capture::value_LZMA_FILTER_ARM;
inline constexpr auto LZMA_FILTER_ARM64 = mwrap_xz_capture::value_LZMA_FILTER_ARM64;
inline constexpr auto LZMA_FILTER_ARMTHUMB = mwrap_xz_capture::value_LZMA_FILTER_ARMTHUMB;
inline constexpr auto LZMA_FILTER_DELTA = mwrap_xz_capture::value_LZMA_FILTER_DELTA;
inline constexpr auto LZMA_FILTER_IA64 = mwrap_xz_capture::value_LZMA_FILTER_IA64;
inline constexpr auto LZMA_FILTER_LZMA1 = mwrap_xz_capture::value_LZMA_FILTER_LZMA1;
inline constexpr auto LZMA_FILTER_LZMA1EXT = mwrap_xz_capture::value_LZMA_FILTER_LZMA1EXT;
inline constexpr auto LZMA_FILTER_LZMA2 = mwrap_xz_capture::value_LZMA_FILTER_LZMA2;
inline constexpr auto LZMA_FILTER_POWERPC = mwrap_xz_capture::value_LZMA_FILTER_POWERPC;
inline constexpr auto LZMA_FILTER_RISCV = mwrap_xz_capture::value_LZMA_FILTER_RISCV;
inline constexpr auto LZMA_FILTER_SPARC = mwrap_xz_capture::value_LZMA_FILTER_SPARC;
inline constexpr auto LZMA_FILTER_X86 = mwrap_xz_capture::value_LZMA_FILTER_X86;
inline constexpr auto LZMA_IGNORE_CHECK = mwrap_xz_capture::value_LZMA_IGNORE_CHECK;
inline constexpr auto LZMA_INDEX_CHECK_MASK_CRC32 = mwrap_xz_capture::value_LZMA_INDEX_CHECK_MASK_CRC32;
inline constexpr auto LZMA_INDEX_CHECK_MASK_CRC64 = mwrap_xz_capture::value_LZMA_INDEX_CHECK_MASK_CRC64;
inline constexpr auto LZMA_INDEX_CHECK_MASK_NONE = mwrap_xz_capture::value_LZMA_INDEX_CHECK_MASK_NONE;
inline constexpr auto LZMA_INDEX_CHECK_MASK_SHA256 = mwrap_xz_capture::value_LZMA_INDEX_CHECK_MASK_SHA256;
inline constexpr auto LZMA_LCLP_MAX = mwrap_xz_capture::value_LZMA_LCLP_MAX;
inline constexpr auto LZMA_LCLP_MIN = mwrap_xz_capture::value_LZMA_LCLP_MIN;
inline constexpr auto LZMA_LC_DEFAULT = mwrap_xz_capture::value_LZMA_LC_DEFAULT;
inline constexpr auto LZMA_LP_DEFAULT = mwrap_xz_capture::value_LZMA_LP_DEFAULT;
inline constexpr auto LZMA_LZMA1EXT_ALLOW_EOPM = mwrap_xz_capture::value_LZMA_LZMA1EXT_ALLOW_EOPM;
inline constexpr auto LZMA_PB_DEFAULT = mwrap_xz_capture::value_LZMA_PB_DEFAULT;
inline constexpr auto LZMA_PB_MAX = mwrap_xz_capture::value_LZMA_PB_MAX;
inline constexpr auto LZMA_PB_MIN = mwrap_xz_capture::value_LZMA_PB_MIN;
inline constexpr auto LZMA_PRESET_DEFAULT = mwrap_xz_capture::value_LZMA_PRESET_DEFAULT;
inline constexpr auto LZMA_PRESET_EXTREME = mwrap_xz_capture::value_LZMA_PRESET_EXTREME;
inline constexpr auto LZMA_PRESET_LEVEL_MASK = mwrap_xz_capture::value_LZMA_PRESET_LEVEL_MASK;
inline constexpr auto LZMA_STREAM_HEADER_SIZE = mwrap_xz_capture::value_LZMA_STREAM_HEADER_SIZE;
inline constexpr auto LZMA_STR_ALL_FILTERS = mwrap_xz_capture::value_LZMA_STR_ALL_FILTERS;
inline constexpr auto LZMA_STR_DECODER = mwrap_xz_capture::value_LZMA_STR_DECODER;
inline constexpr auto LZMA_STR_ENCODER = mwrap_xz_capture::value_LZMA_STR_ENCODER;
inline constexpr auto LZMA_STR_GETOPT_LONG = mwrap_xz_capture::value_LZMA_STR_GETOPT_LONG;
inline constexpr auto LZMA_STR_NO_SPACES = mwrap_xz_capture::value_LZMA_STR_NO_SPACES;
inline constexpr auto LZMA_STR_NO_VALIDATION = mwrap_xz_capture::value_LZMA_STR_NO_VALIDATION;
inline constexpr auto LZMA_TELL_ANY_CHECK = mwrap_xz_capture::value_LZMA_TELL_ANY_CHECK;
inline constexpr auto LZMA_TELL_NO_CHECK = mwrap_xz_capture::value_LZMA_TELL_NO_CHECK;
inline constexpr auto LZMA_TELL_UNSUPPORTED_CHECK = mwrap_xz_capture::value_LZMA_TELL_UNSUPPORTED_CHECK;
inline constexpr auto LZMA_VERSION = mwrap_xz_capture::value_LZMA_VERSION;
inline constexpr auto LZMA_VERSION_COMMIT = mwrap_xz_capture::value_LZMA_VERSION_COMMIT;
inline constexpr auto LZMA_VERSION_MAJOR = mwrap_xz_capture::value_LZMA_VERSION_MAJOR;
inline constexpr auto LZMA_VERSION_MINOR = mwrap_xz_capture::value_LZMA_VERSION_MINOR;
inline constexpr auto LZMA_VERSION_PATCH = mwrap_xz_capture::value_LZMA_VERSION_PATCH;
inline constexpr auto LZMA_VERSION_STABILITY = mwrap_xz_capture::value_LZMA_VERSION_STABILITY;
inline constexpr auto LZMA_VERSION_STABILITY_ALPHA = mwrap_xz_capture::value_LZMA_VERSION_STABILITY_ALPHA;
inline constexpr auto LZMA_VERSION_STABILITY_BETA = mwrap_xz_capture::value_LZMA_VERSION_STABILITY_BETA;
inline constexpr auto LZMA_VERSION_STABILITY_STABLE = mwrap_xz_capture::value_LZMA_VERSION_STABILITY_STABLE;
inline constexpr auto LZMA_VERSION_STABILITY_STRING = mwrap_xz_capture::value_LZMA_VERSION_STABILITY_STRING;
inline constexpr auto LZMA_VERSION_STRING = mwrap_xz_capture::value_LZMA_VERSION_STRING;
inline constexpr auto LZMA_VLI_BYTES_MAX = mwrap_xz_capture::value_LZMA_VLI_BYTES_MAX;
inline constexpr auto LZMA_VLI_MAX = mwrap_xz_capture::value_LZMA_VLI_MAX;
inline constexpr auto LZMA_VLI_UNKNOWN = mwrap_xz_capture::value_LZMA_VLI_UNKNOWN;
}

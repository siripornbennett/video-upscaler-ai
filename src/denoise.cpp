// denoise.cpp — part of video-upscaler-ai.

#include "videoupscalerai/denoise.h"

#include <cstdio>

namespace videoupscalerai {

Denoise::Denoise(const std::string& config_path)
    : config_path_(config_path) {}

void Denoise::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Denoise::run() {
    if (verbose_) std::fprintf(stderr, "[video-upscaler-ai] denoise: run\n");
    // core logic lives here
    return true;
}

}  // namespace videoupscalerai

// upscale.cpp — part of video-upscaler-ai.

#include "videoupscalerai/upscale.h"

#include <cstdio>

namespace videoupscalerai {

Upscale::Upscale(const std::string& config_path)
    : config_path_(config_path) {}

void Upscale::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Upscale::run() {
    if (verbose_) std::fprintf(stderr, "[video-upscaler-ai] upscale: run\n");
    // core logic lives here
    return true;
}

}  // namespace videoupscalerai

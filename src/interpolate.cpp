// interpolate.cpp — part of video-upscaler-ai.

#include "videoupscalerai/interpolate.h"

#include <cstdio>

namespace videoupscalerai {

Interpolate::Interpolate(const std::string& config_path)
    : config_path_(config_path) {}

void Interpolate::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Interpolate::run() {
    if (verbose_) std::fprintf(stderr, "[video-upscaler-ai] interpolate: run\n");
    // core logic lives here
    return true;
}

}  // namespace videoupscalerai

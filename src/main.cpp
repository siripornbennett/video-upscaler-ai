// main.cpp — entry point. Wires config and subsystems together.

#include "videoupscalerai/settings.h"
#include "videoupscalerai/upscale.h"
#include "videoupscalerai/interpolate.h"
#include "videoupscalerai/denoise.h"
#include "videoupscalerai/cli.h"
#include "videoupscalerai/state.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    videoupscalerai::Settings settings = videoupscalerai::Settings::load_default();
    videoupscalerai::Upscale upscale(settings.store_path);
    videoupscalerai::Interpolate interpolate(settings.store_path);
    videoupscalerai::Denoise denoise(settings.store_path);
    videoupscalerai::Cli cli(settings.store_path);
    videoupscalerai::State state(settings.store_path);
    std::fprintf(stderr, "[video-upscaler-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

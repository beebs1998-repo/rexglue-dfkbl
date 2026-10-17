// dfkbl - ReXGlue Recompiled Project
//
// Customize your app by overriding virtual hooks from rex::ReXApp.

#pragma once

#include <rex/rex_app.h>
#include <rex/chrono/clock.h>
#include <chrono>

class DfkblApp : public rex::ReXApp {
 public:
  using rex::ReXApp::ReXApp;

  static std::unique_ptr<rex::ui::WindowedApp> Create(
      rex::ui::WindowedAppContext& ctx) {
    return std::unique_ptr<DfkblApp>(new DfkblApp(ctx, "dfkbl",
        PPCImageConfig));
  }

  void OnPostSetup() override {
    // Set up frame stats provider for debug overlay (F3 to toggle)
    SetGuestFrameStats([this]() {
      return GetFrameStats();
    });
  }

 private:
  rex::ui::FrameStats GetFrameStats() {
    auto now = std::chrono::steady_clock::now();
    static auto last_frame = now;
    static uint64_t frame_count = 0;
    static double fps = 0.0;
    static double frame_time_ms = 0.0;

    auto elapsed = std::chrono::duration<double, std::milli>(now - last_frame).count();
    frame_time_ms = elapsed;
    last_frame = now;
    frame_count++;

    // Calculate FPS over 1 second windows
    static auto fps_window_start = now;
    static uint64_t frames_in_window = 0;
    frames_in_window++;

    auto window_elapsed = std::chrono::duration<double>(now - fps_window_start).count();
    if (window_elapsed >= 1.0) {
      fps = frames_in_window / window_elapsed;
      frames_in_window = 0;
      fps_window_start = now;
    }

    rex::ui::FrameStats stats;
    stats.frame_time_ms = frame_time_ms;
    stats.fps = fps;
    stats.frame_count = frame_count;
    return stats;
  }

  // Override virtual hooks for customization:
  // void OnPostInitLogging() override {}
  // void OnPreSetup(rex::RuntimeConfig& config) override {}
  // void OnLoadXexImage(std::string& xex_image) override {}
  // void OnPostLoadXexImage() override {}
  // void OnCreateDialogs(rex::ui::ImGuiDrawer* drawer) override {}
  // std::unique_ptr<rex::ui::ImGuiDialog> CreateAchievementsOverlay() override;
  // std::unique_ptr<rex::ui::AchievementNotificationDialog>
  // CreateAchievementNotificationDialog() override;
  // void OnShutdown() override {}
  // void OnConfigurePaths(rex::PathConfig& paths) override {}
};
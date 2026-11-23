// Feedback beneath the original settings panel; settings themselves are normal
// game objects, sharing its rendering, touch and controller navigation.

void drawSettingsStatus() {
    const std::string& message = vita_settings_message();
    if (!message.empty())
        pixelText(160 - int(message.size()) * 2, 203, message.c_str(), Color(239, 182, 92));
}

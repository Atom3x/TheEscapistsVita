#ifndef ESCAPISTS_VITA_GAME_SETTINGS_H
#define ESCAPISTS_VITA_GAME_SETTINGS_H
#include <string>
class Frames;

void vita_settings_reset();
void vita_settings_initialize_language(Frames& frame);
void vita_settings_update(Frames& frame);
void vita_settings_handle_input(Frames& frame);
bool vita_settings_change_language(Frames& frame, int direction);
const std::string& vita_settings_message();

#endif

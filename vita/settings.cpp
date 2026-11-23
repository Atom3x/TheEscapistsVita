#include "game-settings.h"
#include "common.h"
#include "events.h"
#include "objects.h"
#include "objects/active.h"
#include "objects/assarray.h"
#include "objects/ini.h"
#include "objects/iniparser.h"
#include "objects/text.h"
#include "languages.h"
#include "vitaperformance.h"
#include <utility>

namespace {
    std::string message;

    FrameObject* findObject(Frames& frame, int type) {
        ObjectList& objects = frame.instances.items[type];
        for (auto entry = objects.begin(); entry != objects.end(); ++entry)
            if (entry->obj && !(entry->obj->flags & DESTROYING)) return entry->obj;

        return nullptr;
    }

    bool settingsOpen(const Frames& frame) {
        return frame.index == 9 && frame.group_base_layer_1 && frame.next_frame == -1;
    }

    int collectTranslation(void* context, const char* section, const char* name, const char* value) {
        // Match INI's default behavior: the first value for a duplicate key wins.
        (*static_cast<SectionMap*>(context))[section].insert(
            std::make_pair(std::string(name), std::string(value)));
        return 1;
    }

    void setText(Frames& frame, int type, const std::string& text) {
        Text* object = static_cast<Text*>(findObject(frame, type));
        if (object && object->text != text) object->set_string(text);
    }

    bool pressed(Frames& frame, int type) {
        Active* object = static_cast<Active*>(findObject(frame, type));
        if (!object || !(object->flags & VISIBLE) || (object->flags & INACTIVE) ||
            !object->mouse_over()) return false;
        object->force_animation(5);
        return true;
    }

    bool changePerformance(int direction) {
#ifdef CHOWDREN_VITA_60FPS
        if (!vita_native60_available()) return false;

        const int current = vita_performance().native60 ? 1 : 0;
        const bool native60 = (current + (direction < 0 ? -1 : 1) + 2) % 2 != 0;
        const bool applied = vita_performance_set(native60);
        message = vita_performance().message;
        return applied;
#else
        message = "THIS BUILD USES 45 FPS";
        return false;
#endif
    }
}

void vita_settings_reset() {
    message.clear();
}

const std::string& vita_settings_message() {
    return message;
}

void vita_settings_initialize_language(Frames& frame) {
    if (frame.index != 0) return;

    INI* settings = static_cast<INI*>(findObject(frame, gameSettings_type));
    if (!settings || settings->filename.empty()) return;

    const std::string saved = settings->get_string_default("Settings", "Lang", "");
    std::string code = saved.empty() ? vita_language_from_system(platform_get_language())
                                    : vita_languages[vita_language_index(saved)].code;
    if (saved.empty()) {
        for (const char* prefix : {"data_", "items_", "speech_"}) {
            std::string contents;
            if (!read_file(convert_path(std::string("Data/") + prefix + code + ".dat").c_str(), contents) || contents.empty()) {
                code = "eng";
                break;
            }
        }
        settings->set_string("Settings", "Lang", code);
        settings->save_file();
    }

    manager.strings->set(6, code);
}

bool vita_settings_change_language(Frames& frame, int direction) {
    if (!settingsOpen(frame)) return false;

    INI* settings = static_cast<INI*>(findObject(frame, gameSettings_type));
    INI* translations = static_cast<INI*>(findObject(frame, translationData_type));

    if (!settings || !translations || settings->filename.empty()) {
        message = "SETTINGS ARE STILL LOADING";
        return false;
    }

    const int index = vita_language_step(vita_language_index(manager.strings->get(6)), direction);
    const std::string code = vita_languages[index].code;
    const std::string filename = convert_path("Data/data_" + code + ".dat");

    std::string contents;
    std::string otherData;

    if (!read_file(filename.c_str(), contents) || contents.empty() ||
        !read_file(convert_path("Data/items_" + code + ".dat").c_str(), otherData) || otherData.empty() ||
        !read_file(convert_path("Data/speech_" + code + ".dat").c_str(), otherData) || otherData.empty()) {
        message = "LANGUAGE FILES MISSING - UNCHANGED";
        return false;
    }

    // Original files can contain recoverable syntax errors (Italian has one).
    // Like the normal loader, retain parsed entries; require the menu's keys.
    SectionMap replacement;
    ini_parse_string(contents, collectTranslation, &replacement);
    if (replacement["Title"]["3"].empty() || replacement["Settings"]["1"].empty() ||
        replacement["Settings"]["7"].empty() || replacement["Settings"]["17"].empty()) {
        message = "INVALID LANGUAGE DATA - UNCHANGED";
        return false;
    }

    // Replace this reader's map without modifying shared INI caches or writing
    // to the original translation file. Menu labels refresh in this frame;
    // subsequent menus and prison loading use the newly selected language.
    SectionMap* previous = translations->data;
    const bool shared = translations->is_global;
    translations->data = new SectionMap(std::move(replacement));
    translations->is_global = false;
    translations->auto_save = false;
    translations->read_only = true;
    translations->changed = false;
    translations->filename = filename;

    if (!shared) delete previous;

    manager.strings->set(6, code);
    settings->set_string("Settings", "Lang", code);
    settings->save_file();
    message.clear();

    std::string saved;
    SectionMap savedSettings;
    if (!read_file(settings->filename.c_str(), saved) ||
        ini_parse_string(saved, collectTranslation, &savedSettings) != 0 ||
        savedSettings["Settings"]["Lang"] != code)
        message = "LANGUAGE ACTIVE - COULD NOT SAVE";

    vita_settings_update(frame);
    return true;
}

void vita_settings_update(Frames& frame) {
    if (!settingsOpen(frame)) return;

    const int index = vita_language_index(manager.strings->get(6));
    setText(frame, settingsLanguageValue_type, lowercase_string(vita_languages[index].label));
    setText(frame, settingsFrameRateLabel_type, "FPS:");
    setText(frame, settingsFrameRateValue_type, vita_presentation_fps() == 60 ? "60 fps" : "45 fps");

    INI* translations = static_cast<INI*>(findObject(frame, translationData_type));
    if (translations) setText(frame, settingsLanguageLabel_type,
        translations->get_string_default("Settings", "17", "Language") + ":");
    if (!vita_native60_available()) {
        for (int type : {settingsFrameRatePrevious_type, settingsFrameRateNext_type}) {
            FrameObject* arrow = findObject(frame, type);
            if (arrow) arrow->set_visible(false);
        }
    }
}

void vita_settings_handle_input(Frames& frame) {
    if (!settingsOpen(frame) || !is_mouse_pressed_once(SDL_BUTTON_LEFT)) return;

    AssociateArray* variables = static_cast<AssociateArray*>(findObject(frame, gameVariables_type));
    if (!variables || variables->get_value("LClick") != 0) return;

    bool handled = true;
    if (pressed(frame, settingsLanguagePrevious_type)) vita_settings_change_language(frame, -1);
    else if (pressed(frame, settingsLanguageNext_type)) vita_settings_change_language(frame, 1);
    else if (pressed(frame, settingsFrameRatePrevious_type)) changePerformance(-1);
    else if (pressed(frame, settingsFrameRateNext_type)) changePerformance(1);
    else handled = false;

    if (handled) variables->set_value("LClick", 1);
}

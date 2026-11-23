#ifndef ESCAPISTS_VITA_LANGUAGES_H
#define ESCAPISTS_VITA_LANGUAGES_H
#include <string>

struct VitaLanguage {
    const char *code, *label, *systemName;
};
static const VitaLanguage vita_languages[] = {
    {"eng", "English", "English"}, {"fre", u8"Français", "French"}, {"ger", "Deutsch", "German"},
    {"ita", "Italiano", "Italian"}, {"spa", u8"Español", "Spanish"}, {"pol", "Polski", "Polish"},
    {"rus", u8"Русский", "Russian"}};
static const int vita_language_count = sizeof(vita_languages) / sizeof(vita_languages[0]);

inline int vita_language_index(const std::string& code) {
    for (int index = 0; index < vita_language_count; ++index)
        if (code == vita_languages[index].code) return index;

    return 0;
}

inline int vita_language_step(int index, int direction) {
    return (index + (direction < 0 ? -1 : 1) + vita_language_count) % vita_language_count;
}

inline const char* vita_language_from_system(const std::string& name) {
    for (const VitaLanguage& language : vita_languages)
        if (name == language.systemName) return language.code;

    return "eng";
}
#endif

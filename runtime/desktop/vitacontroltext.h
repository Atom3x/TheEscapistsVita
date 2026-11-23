#ifndef CHOWDREN_VITA_CONTROL_TEXT_H
#define CHOWDREN_VITA_CONTROL_TEXT_H
#include "vitabindings.h"
#include <unordered_map>

inline std::string vita_ascii_lower(std::string value) {
    for (char &c : value) c=char(std::tolower(static_cast<unsigned char>(c)));
    return value;
}
inline bool vita_word(char c) {
    return std::isalnum(static_cast<unsigned char>(c)) || c=='_';
}
inline void vita_text_alias(std::string &text, const std::string &from, const std::string &to) {
    std::string lower=vita_ascii_lower(text), needle=vita_ascii_lower(from);
    size_t pos=0;
    while ((pos=lower.find(needle,pos)) != std::string::npos) {
        size_t end=pos+needle.size();
        if ((pos && vita_word(text[pos-1]) && vita_word(from.front())) ||
            (end<text.size() && vita_word(text[end]) && vita_word(from.back()))) { pos=end; continue; }
        text.replace(pos,needle.size(),to);
        lower.replace(pos,needle.size(),vita_ascii_lower(to)); pos+=to.size();
    }
}
// Convert legacy instructions into action variables; retain the source string
// and resolve buttons only at presentation, never inside game-data lookups.
inline std::string vita_control_template(const std::string &source) {
    std::string lower=vita_ascii_lower(source);
    if (lower.find_first_of("{$")==std::string::npos && lower.find("click")==std::string::npos &&
        lower.find("mouse")==std::string::npos && lower.find("maustaste")==std::string::npos &&
        lower.find("clic")==std::string::npos && lower.find(" key")==std::string::npos &&
        lower.find("press ")==std::string::npos && lower.find("wasd")==std::string::npos &&
        lower.find("w, a")==std::string::npos && lower.find("q/e")==std::string::npos &&
        lower.find("q and e")==std::string::npos &&
        lower.find("spacebar")==std::string::npos && lower.find("esc")==std::string::npos &&
        lower.find("backspace")==std::string::npos &&
        lower.find("bot")==std::string::npos) return source;
    static std::unordered_map<std::string,std::string> cache;
    auto found=cache.find(source);
    if (found!=cache.end()) return found->second;
    std::string text=source;
    const char *movement[] = {
        "$up, $left, $down and $right keys", "$up, $left, $right and $down keys",
        "$up, $left, $down and $right", "$up, $left, $right and $down",
        "W, A, S and D keys", "W, A, D and S keys", "W, A, S and D", "W, A, D and S",
        "W, A, S, D", "W, A, D, S", "W, A, S und D", "W, A, D und S",
        "W, A, S et D", "W, A, D et S", "W, A, S y D", "W, A, D y S", "WASD"
    };
    for (const char *alias : movement) vita_text_alias(text,alias,"{move}");
    if (lower.find("combat")!=std::string::npos || lower.find("attack mode")!=std::string::npos)
        vita_text_alias(text,"SPACE","{combat}");
    vita_text_alias(text,"You can also use the 1-6 number keys as shortcuts for selecting items.",
        "Use {slots} to browse inventory slots.");
    struct Alias { const char *from, *to; };
    static const Alias aliases[] = {
        {"The mouse cursor will change purple","The selected inventory slot is highlighted"},
        {"hovering the mouse over them","targeting them with {aim}"},
        {"using LEFT CLICK","pressing {use}"},{"using RIGHT CLICK","pressing {secondary}"},
        {"using CLICK","pressing {use}"},{"pressing CLICK","pressing {use}"},
        {"COMMAND CLICK on","press {secondary} on"},
        {"COMMAND + LEFT CLICK","{secondary}"},{"COMMAND + CLICK","{secondary}"},
        {"COMMAND CLICK","{secondary}"},
        {"LEFT CLICKING","pressing {use}"},{"RIGHT CLICKING","pressing {secondary}"},
        {"LEFT CLICK on","press {use} on"},{"RIGHT CLICK on","press {secondary} on"},
        {"LEFT CLICK an","press {use} on an"},{"RIGHT CLICK an","press {secondary} on an"},
        {"LEFT CLICK to","press {use} to"},{"RIGHT CLICK to","press {secondary} to"},
        {"LEFT CLICK again","press {use} again"},{"RIGHT CLICK again","press {secondary} again"},
        {"LEFT MOUSE BUTTON","{use}"},{"RIGHT MOUSE BUTTON","{secondary}"},
        {"LEFT MOUSE","{use}"},{"RIGHT MOUSE","{secondary}"},
        {"LEFT-CLICK","{use}"},{"RIGHT-CLICK","{secondary}"},
        {"LEFT CLICK","{use}"},{"RIGHT CLICK","{secondary}"},
        {"CLICKING","pressing {use}"},{"CLICK on","press {use} on"},
        {"CLICK the","press {use} on the"},{"CLICK to","press {use} to"},
        {"CLICK again","press {use} again"},{"CLICK elsewhere","press {use} elsewhere"},
        {"CLICK","{use}"},
        {"CLIC GAUCHE","{use}"},{"CLIC DROIT","{secondary}"},
        {"LINKE MAUSTASTE","{use}"},{"RECHTE MAUSTASTE","{secondary}"},
        {"BOT\xf3n IZQUIERDO","{use}"},{"BOT\xf3n DERECHO","{secondary}"},
        {"BOTON IZQUIERDO","{use}"},{"BOTON DERECHO","{secondary}"},
        {"ESC to pause","{pause} to pause"},{"ESCAPE to pause","{pause} to pause"},
        {"ESCAPE","{back}"},{"ESC","{back}"},
        {"SPACEBAR","{combat}"},{"SPACE KEY","{combat}"},{"press SPACE","press {combat}"},
        {"ENTER key","{confirm}"},{"press ENTER","press {confirm}"},{"BACKSPACE","{secondary}"},
        {"Q/E","{exercise}"},{"Q and E","{exercise1} and {exercise2}"},
        {"Q et E","{exercise1} et {exercise2}"},{"Q und E","{exercise1} und {exercise2}"},
        {"Q e E","{exercise1} e {exercise2}"},{"Q y E","{exercise1} y {exercise2}"},
        {"Q i E","{exercise1} i {exercise2}"},{"Q и E","{exercise1} и {exercise2}"},
        {"press Q","press {action1}"},{"press E","press {action2}"},
        {"Q key","{action1}"},{"E key","{action2}"},
        {"W key","{up}"},{"S key","{down}"},{"D key","{right}"},
        {"press W","press {up}"},
        {"press S","press {down}"},{"press D","press {right}"},
        {"{action1} and {action2} keys","{action1} and {action2} buttons"},
        {"{action1} key","{action1} button"},{"{action2} key","{action2} button"},
        {"{combat} key","{combat} button"}
    };
    // The basic-controls paragraph also describes recruiting: only its exercise
    // clause uses direct shoulders; the recruit action keeps its modifier.
    vita_text_alias(text, "Variations of $action1 and $action2 to exercise.",
        "Use {exercise} to exercise; alternate for weights, press-ups and running.");
    size_t exerciseStart = 0;
    while ((exerciseStart = text.find("$action1", exerciseStart)) != std::string::npos) {
        size_t exerciseEnd = text.find("$action2", exerciseStart + 8);
        if (exerciseEnd != std::string::npos && exerciseEnd - exerciseStart < 40 &&
            text.find_first_of("#\r\n.", exerciseStart) > exerciseEnd) {
            text.replace(exerciseEnd, 8, "{exercise2}");
            text.replace(exerciseStart, 8, "{exercise1}");
        }
        exerciseStart += 8;
    }
    for (const Alias &alias : aliases) vita_text_alias(text,alias.from,alias.to);
    if (cache.size() >= 512) cache.clear();
    cache[source]=text;
    return text;
}
inline std::string vita_control_text(const std::string &source) {
    return vita_bindings().format(vita_control_template(source));
}
#endif

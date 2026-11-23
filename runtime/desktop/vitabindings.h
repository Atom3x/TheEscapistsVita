#ifndef CHOWDREN_VITA_BINDINGS_H
#define CHOWDREN_VITA_BINDINGS_H
#include "vitacontrols.h"
#include <array>
#include <cctype>
#include <cstdint>
#include <string>

enum class VitaAction {
    Use, Secondary, Inventory, Back, PreviousItem, NextItem, Combat, Pause,
    Action1, Action2, Controls, Settings, Up, Down, Left, Right, Count
};
enum VitaButton : std::uint32_t {
    VitaCross=1<<0, VitaCircle=1<<1, VitaSquare=1<<2, VitaTriangle=1<<3,
    VitaL=1<<4, VitaR=1<<5, VitaSelect=1<<6, VitaStart=1<<7,
    VitaUp=1<<8, VitaDown=1<<9, VitaLeft=1<<10, VitaRight=1<<11
};
struct VitaActionBinding {
    const char *token;
    const char *function;
    std::uint32_t buttons; // A bitwise OR describes a chord; zero is unbound.
};

struct VitaBindings {
    std::array<VitaActionBinding,static_cast<size_t>(VitaAction::Count)> actions;
    std::uint64_t revision = 0;
    VitaBindings() { reset(); }
    void reset() {
        actions = {{
            {"use","Use / confirm / talk",VitaCross},
            {"secondary","Pick up / drop / profile",VitaSquare},
            {"inventory","Inventory / HUD focus",VitaTriangle},
            {"back","Back / close dialog",VitaCircle},
            {"prev_item","Previous inventory slot",VitaL},
            {"next_item","Next inventory slot",VitaR},
            {"combat","Toggle combat",VitaSelect},
            {"pause","Pause / resume",VitaStart},
            {"action1","Exercise / recruit",VitaTriangle|VitaL},
            {"action2","Exercise",VitaTriangle|VitaR},
            {"controls","Pause controls guide",VitaTriangle},
            {"settings","Vita performance settings",VitaSelect},
            {"up","Move / navigate up",VitaUp},
            {"down","Move / navigate down",VitaDown},
            {"left","Move / navigate left",VitaLeft},
            {"right","Move / navigate right",VitaRight}
        }};
        ++revision;
    }
    bool set(VitaAction action, std::uint32_t buttons) {
        const size_t i = static_cast<size_t>(action);
        if (i >= actions.size() || (buttons & ~std::uint32_t((1<<12)-1))) return false;
        if (actions[i].buttons != buttons) { actions[i].buttons = buttons; ++revision; }
        return true;
    }
    bool down(VitaAction action, const VitaPadState &p) const {
        if (static_cast<size_t>(action) >= actions.size()) return false;
        std::uint32_t held = (p.cross?VitaCross:0)|(p.circle?VitaCircle:0)|
            (p.square?VitaSquare:0)|(p.triangle?VitaTriangle:0)|(p.l?VitaL:0)|
            (p.r?VitaR:0)|(p.select?VitaSelect:0)|(p.start?VitaStart:0)|
            (p.up?VitaUp:0)|(p.down?VitaDown:0)|(p.left?VitaLeft:0)|(p.right?VitaRight:0);
        std::uint32_t required = actions[static_cast<size_t>(action)].buttons;
        return required && (held & required) == required;
    }
    VitaPadState map(const VitaPadState &p) const {
        VitaPadState out = p; // Sticks retain their axis values and dead zones.
        out.cross=down(VitaAction::Use,p); out.square=down(VitaAction::Secondary,p);
        out.circle=down(VitaAction::Back,p); out.triangle=down(VitaAction::Inventory,p);
        out.l=down(VitaAction::PreviousItem,p); out.r=down(VitaAction::NextItem,p);
        out.select=down(VitaAction::Combat,p); out.start=down(VitaAction::Pause,p);
        out.up=down(VitaAction::Up,p); out.down=down(VitaAction::Down,p);
        out.left=down(VitaAction::Left,p); out.right=down(VitaAction::Right,p);
        return out;
    }
    static std::string button_names(std::uint32_t mask, bool compact=false) {
        struct Name { std::uint32_t bit; const char *name, *short_name; };
        static const Name names[] = {
            {VitaTriangle,"Triangle","TRIANGLE"},{VitaL,"L","L"},{VitaR,"R","R"},
            {VitaCross,"Cross","X"},{VitaCircle,"Circle","O"},{VitaSquare,"Square","SQUARE"},
            {VitaSelect,"Select","SELECT"},{VitaStart,"Start","START"},
            {VitaUp,"D-pad Up","D-PAD UP"},{VitaDown,"D-pad Down","D-PAD DOWN"},
            {VitaLeft,"D-pad Left","D-PAD LEFT"},{VitaRight,"D-pad Right","D-PAD RIGHT"}
        };
        std::string out;
        for (const Name &n : names) if (mask & n.bit) {
            if (!out.empty()) out += compact ? "+" : " + ";
            out += compact ? n.short_name : n.name;
        }
        return out.empty() ? (compact ? "UNBOUND" : "Unbound") : out;
    }
    std::string label(VitaAction action, bool compact=false) const {
        if (static_cast<size_t>(action) >= actions.size()) return compact?"UNBOUND":"Unbound";
        return button_names(actions[static_cast<size_t>(action)].buttons,compact);
    }
    std::string pair(VitaAction a, VitaAction b, bool compact=false) const {
        std::uint32_t x=actions[static_cast<size_t>(a)].buttons, y=actions[static_cast<size_t>(b)].buttons;
        if (x == y) return button_names(x,compact);
        std::uint32_t common = x & y;
        if (common && (x & ~common) && (y & ~common))
            return button_names(common,compact)+(compact?"+":" + ")+
                button_names(x & ~common,compact)+"/"+button_names(y & ~common,compact);
        return button_names(x,compact)+"/"+button_names(y,compact);
    }
    bool token(std::string name, std::string &result, bool compact=false) const {
        for (char &c : name) c = char(std::tolower(static_cast<unsigned char>(c)));
        if (name == "confirm" || name == "talk") name = "use";
        if (name == "drop" || name == "profile") name = "secondary";
        if (name == "move") {
            const size_t up=static_cast<size_t>(VitaAction::Up), right=static_cast<size_t>(VitaAction::Right);
            bool normal = actions[up].buttons == VitaUp && actions[up+1].buttons == VitaDown &&
                actions[up+2].buttons == VitaLeft && actions[right].buttons == VitaRight;
            result = compact ? "LEFT STICK" : "Left Stick";
            if (normal) result = (compact?"D-PAD / ":"D-pad / ")+result;
            else for (size_t i=up; i<=right; ++i) result += " / "+button_names(actions[i].buttons,compact);
            return true;
        }
        if (name == "aim") { result = compact?"RIGHT STICK":"Right Stick"; return true; }
        if (name == "slots") { result=pair(VitaAction::PreviousItem,VitaAction::NextItem,compact); return true; }
        if (name == "exercise") { result=pair(VitaAction::PreviousItem,VitaAction::NextItem,compact); return true; }
        if (name == "exercise1") { result=label(VitaAction::PreviousItem,compact); return true; }
        if (name == "exercise2") { result=label(VitaAction::NextItem,compact); return true; }
        for (size_t i=0; i<actions.size(); ++i) if (actions[i].token && name == actions[i].token) {
            result=label(static_cast<VitaAction>(i),compact); return true;
        }
        return false;
    }
    std::string format(const std::string &source, bool compact=false) const {
        std::string out;
        for (size_t i=0; i<source.size();) {
            if (source[i] == '{' || source[i] == '$') {
                bool brace=source[i]=='{'; size_t end=i+1;
                while (end<source.size() && (std::isalnum(static_cast<unsigned char>(source[end])) || source[end]=='_')) ++end;
                std::string value;
                if ((!brace || (end<source.size() && source[end]=='}')) && token(source.substr(i+1,end-i-1),value,compact)) {
                    out += value; i=end+(brace?1:0); continue;
                }
            }
            out += source[i++];
        }
        return out;
    }
};
inline VitaBindings &vita_bindings() { static VitaBindings bindings; return bindings; }
// Future settings UI should call this wrapper so held input is released safely.
bool vita_controls_rebind(VitaAction action, std::uint32_t buttons);
#endif

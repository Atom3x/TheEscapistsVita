#ifndef CHOWDREN_VITA_PERFORMANCE_H
#define CHOWDREN_VITA_PERFORMANCE_H
struct VitaPerformanceState {
    bool native60 = false;
    const char *message = "";
};
inline VitaPerformanceState &vita_performance() {
    static VitaPerformanceState state;
    return state;
}
inline bool vita_native60_available() { return false; }
inline int vita_presentation_fps() { return vita_native60_available() && vita_performance().native60 ? 60 : 45; }
bool vita_performance_set(bool native60);
void vita_performance_load();
void vita_performance_suspend();
void vita_performance_resume();
#endif

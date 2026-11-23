#ifndef CHOWDREN_VITA_FRAME_TIME_H
#define CHOWDREN_VITA_FRAME_TIME_H
#include "vitaperformance.h"
#include <algorithm>
#include <cmath>
#include <string>

// Presentation and authoritative simulation share the selected 45/60 Hz rate.
// Bound catch-up after stalls; never replay an entire suspended interval.
class VitaFrameClock {
    double pending;
public:
    static double step() { return 1.0/vita_presentation_fps(); }
    VitaFrameClock() : pending(step()) {}
    void reset() { pending = step(); }
    int advance(double elapsed) {
        if (!std::isfinite(elapsed) || elapsed < 0) elapsed = 0;
        pending += std::min(elapsed,step()*4);
        int count = std::min(4,int(std::floor((pending+1e-9)/step())));
        pending = std::max(0.0,pending-count*step());
        if (pending >= step()) pending = std::fmod(pending,step());
        return count;
    }
    double alpha() const { return std::min(1.0,pending/step()); }
};

class Frame;
class FrameObject;
class AssociateArray;
VitaFrameClock &vita_frame_clock();
void vita_timing_reset();
void vita_timing_begin_tick(Frame *frame);
void vita_timing_forget(FrameObject *object);
// Saved integer countdowns remain in original 45 Hz units. Accumulate elapsed
// time rather than changing save formats or skipping threshold values.
bool vita_legacy_tick();
double vita_time_scale();
void vita_timing_move(FrameObject *object, bool horizontal, double delta);
void vita_timing_follow(FrameObject *object, bool horizontal, double target, double retention);
void vita_timing_add(AssociateArray *object, int slot, const std::string &key, int delta);
int vita_animation_step(FrameObject *object, int legacy_increment);
float vita_legacy_multiplier(Frame *frame);

#ifdef CHOWDREN_VITA_60FPS
#define VITA_LEGACY_EVENT() do { if (!vita_legacy_tick()) return; } while (0)
#define VITA_MOVE(obj, axis, delta) vita_timing_move(obj,axis,delta)
#define VITA_FOLLOW(obj, axis, target, keep) vita_timing_follow(obj,axis,target,keep)
#define VITA_ADD(obj, slot, key, delta) vita_timing_add(obj,slot,key,delta)
#else
#define VITA_LEGACY_EVENT() do {} while (0)
#define VITA_MOVE(obj, axis, delta) do { if (axis) (obj)->set_x((obj)->get_x()+(delta)); else (obj)->set_y((obj)->get_y()+(delta)); } while (0)
#define VITA_FOLLOW(obj, axis, target, keep) do { if (axis) (obj)->set_x(target); else (obj)->set_y(target); } while (0)
#define VITA_ADD(obj, slot, key, delta) (obj)->add_value(slot,key,delta)
#endif
#endif

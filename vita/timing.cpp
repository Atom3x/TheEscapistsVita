#include "common.h"
#include "objects/active.h"
#include "objects/assarray.h"
#include "vitaframetime.h"
#include <unordered_map>
#include <cstdint>

namespace {
    struct Scalar {
        double remainder = 0;
        int expected = 0;
        bool valid = false;
    };
    struct ObjectTiming {
        int type = -1;
        int index = -1;
        int layer = -1;
        Scalar x, y;
        double animation = 0;
        int animationId = -1;
        int animationDirection = -1;
        std::unordered_map<int, Scalar> values;
    };

    std::unordered_map<FrameObject*, ObjectTiming>& objects() {
        // Objects in other translation units may be destroyed after static teardown.
        static auto* state = new std::unordered_map<FrameObject*, ObjectTiming>;
        return *state;
    }

    Frame* currentFrame = NULL;
    int currentScene = -1;
    VitaFrameClock frameClock;
    double legacyPending = 0;
    bool legacyTick = true;
    bool firstTick = true;

    ObjectTiming& timing(FrameObject* obj) {
        ObjectTiming& s = objects()[obj];
        int layer = obj->layer ? obj->layer->index : -1;
        if (s.type != obj->id || s.index != obj->index || s.layer != layer) {
            s = ObjectTiming();
            s.type = obj->id;
            s.index = obj->index;
            s.layer = layer;
        }

        return s;
    }

    int quantize(Scalar& s, int before, double change) {
        // A collision rollback, teleport or explicit reset discards stale subpixels.
        if (!s.valid || s.expected != before) s.remainder = 0;
        s.remainder += change;
        int whole = int(std::trunc(s.remainder));
        s.remainder -= whole;
        s.expected = before + whole;
        s.valid = true;
        return whole;
    }

    void move(FrameObject* obj, bool horizontal, double delta, double scale) {
        ObjectTiming& s = timing(obj);
        int before = horizontal ? obj->get_x() : obj->get_y();
        Scalar& axis = horizontal ? s.x : s.y;
        int after = before + quantize(axis, before, delta * scale);
        if (horizontal) obj->set_x(after);
        else obj->set_y(after);
    }
}

VitaFrameClock& vita_frame_clock() {
    return frameClock;
}

double vita_time_scale() {
    return 45.0 / vita_presentation_fps();
}

bool vita_legacy_tick() {
    return legacyTick;
}

void vita_timing_reset() {
    objects().clear();
    currentFrame = NULL;
    currentScene = -1;
    legacyPending = 0;
    legacyTick = firstTick = true;
    frameClock.reset();
}

void vita_timing_begin_tick(Frame* frame) {
    if (frame != currentFrame || (frame && frame->index != currentScene)) {
        objects().clear();
        legacyPending = 0;
        firstTick = true;
        currentFrame = frame;
        currentScene = frame ? frame->index : -1;
    }

    legacyPending += vita_time_scale();
    legacyTick = firstTick || legacyPending >= 1.0 - 1e-9;
    if (firstTick) legacyPending = 0;
    else if (legacyTick) legacyPending -= 1;
    firstTick = false;
}

void vita_timing_forget(FrameObject* obj) {
    objects().erase(obj);
}

void vita_timing_move(FrameObject* obj, bool horizontal, double delta) {
    move(obj, horizontal, delta, vita_time_scale());
}

void vita_timing_follow(FrameObject* obj, bool horizontal, double target, double retention) {
    int before = horizontal ? obj->get_x() : obj->get_y();

    // Preserve the original integer target/dead zone and exponential response.
    double gain = vita_time_scale() == 1 ? 1 : (1 - std::pow(retention, vita_time_scale())) / (1 - retention);
    move(obj, horizontal, int(target) - before, gain);
}

void vita_timing_add(AssociateArray* obj, int slot, const std::string& key, int delta) {
    Scalar& s = timing(obj).values[slot];
    int whole = quantize(s, obj->get_value(slot, key), delta * vita_time_scale());
    obj->add_value(slot, key, whole);
}

float vita_legacy_multiplier(Frame* frame) {
    return frame->timer_base == 0 ? 1.f : (1.f / 45.f) * frame->timer_base;
}

int vita_animation_step(FrameObject* obj, int legacyIncrement) {
    ObjectTiming& s = timing(obj);
    Active* active = static_cast<Active*>(obj);
    if (s.animationId != active->current_animation || s.animationDirection != active->animation_direction) {
        s.animation = 0;
        s.animationId = active->current_animation;
        s.animationDirection = active->animation_direction;
    }

    s.animation += legacyIncrement * vita_time_scale();
    int whole = int(std::floor(s.animation + 1e-9));
    s.animation -= whole;
    return whole;
}

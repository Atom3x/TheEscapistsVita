#ifndef CHOWDREN_VITACONTROLS_H
#define CHOWDREN_VITACONTROLS_H

struct VitaPadState
{
    float lx = 0, ly = 0, rx = 0, ry = 0;
    bool up = false, down = false, left = false, right = false;
    bool cross = false, circle = false, square = false, triangle = false;
    bool l = false, r = false, start = false, select = false;
};

void vita_controls_update(const VitaPadState &pad, float dt);
void vita_controls_release();
void vita_controls_pointer(int *x, int *y);
// phase: 0 = down, 1 = move, 2 = up; coordinates are logical game pixels.
void vita_controls_touch(int phase, int x, int y);
void vita_controls_draw();
bool vita_controls_hide_object(int type);

#endif

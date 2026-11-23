#include "transition.h"
#include "manager.h"
#include "render.h"
#include "vitaview.h"

void Transition::draw()
{
    Color transitionColor = manager.fade_color;
    float closingFraction = manager.fade_value;
    switch (manager.fade_type) {
        case FADE:
            transitionColor.set_alpha(int(closingFraction * 255));
            Render::draw_quad(0, 0, VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT, transitionColor);
            break;
        case DOOR:
            int curtainWidth = (VITA_CANVAS_WIDTH / 2.0f) * closingFraction;
            Render::draw_quad(0, 0, curtainWidth, VITA_CANVAS_HEIGHT, transitionColor);
            Render::draw_quad(VITA_CANVAS_WIDTH - curtainWidth, 0,
                              VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT, transitionColor);
            break;
    }
}

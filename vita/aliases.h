#pragma once
#include "wide-config.h"
// #include "media.h"
#include "common.h"
#include "lists.h"
#include "objects.h"
#include "frame.h"
#include "vitaview.h"
#include "alias/layout.h"
#include "alias/version.h"

namespace esc {

    inline FrameObject* createTextFrames(FrameObject* parent) {
        return create_tutorialDialogText(parent->x + help_text_dx, parent->y + help_text_dy);
    }

    inline void createYellowPopUpCloud(Active* cloud, Anchor anchor, int pos_x, int pos_y, int animation = 1, int direction = 8) {
        cloud->force_animation(animation);
        cloud->set_direction(direction);

        int top = VITA_VIEW_TOP(cloud, cloud->frame->frame_top());
        int target_x = (anchor == Anchor::Right)
                           ? VITA_VIEW_RIGHT(cloud, cloud->frame->frame_right()) - pos_x - cloud->get_box_index(2)
                           : VITA_VIEW_LEFT(cloud, cloud->frame->frame_left()) + pos_x - cloud->get_box_index(0);

        cloud->set_x(cloud->x + target_x);
        cloud->set_y(cloud->y + (top + pos_y - cloud->get_box_index(1)));
    }

    inline void sidePanelState(ObjectList& panels, EnableStates state) {
        panels.clear_selection();
        for (ObjectIterator it(panels); !it.end(); ++it)
            ((Active*)*it)->set_visible(state == EnableStates::On);
    }
}

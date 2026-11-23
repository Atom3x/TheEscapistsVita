#include "common.h"
#include "objects.h"
#include "objects/active.h"
#include "objects/text.h"
#include "activity-panel.h"
#include "vitaview.h"
#include <limits>

bool vitaDrawActivityPanel(FrameObject* object) {
    if (!object || object->id != activityPanel_type || !object->frame || !object->layer) return false;

    Active* panel = static_cast<Active*>(object);
    Image* image = panel->image;
    if (!image || image->width < 6 || image->height < 6 || !init_font()) return false;

    Text* caption = nullptr;
    int nearest = std::numeric_limits<int>::max();
    ObjectList& captions = panel->frame->instances.items[activityText_type];
    for (auto entry = captions.begin(); entry != captions.end(); ++entry) {
        FrameObject* candidate = entry->obj;
        if (!candidate || candidate->layer != panel->layer || !(candidate->flags & VISIBLE) || (candidate->flags & DESTROYING)) continue;

        int distance = std::abs(candidate->x - panel->x - 9) + std::abs(candidate->y - panel->y - 3);
        if (distance < nearest) {
            nearest = distance;
            caption = static_cast<Text*>(candidate);
        }
    }
    if (!caption || !caption->font) return false;

    caption->update_draw_text();
    int offsetX = VITA_CANVAS_X + vita_view_object_shift(panel) + panel->layer->off_x - panel->frame->off_x;
    int offsetY = panel->layer->off_y - panel->frame->off_y;
    int available = std::max(24, VITA_CANVAS_WIDTH - 4 - panel->x - offsetX);
    FTBBox natural = caption->font->BBox(caption->draw_text.c_str(), -1, FTPoint());
    int width = std::min(available, std::max(int(image->width),
        int(std::ceil(natural.Upper().X() - natural.Lower().X())) + 18));
    caption->set_width(width - 18);
    caption->layout->SetAlignment((TextAlignment)caption->alignment);
    int lines = std::max(1, caption->layout->get_lines(caption->draw_text.c_str(), -1));
    int textHeight = int(std::ceil(lines * caption->font->LineHeight()));
    int progressY = std::max(15, textHeight + 6);
    int height = std::max(int(image->height), progressY + 10);

    int left = panel->x;
    int top = std::max(4, std::min(VITA_CANVAS_HEIGHT - 4 - height, panel->y + offsetY)) - offsetY;
    caption->set_x(left + 9);
    caption->set_y(top + 3);
    caption->height = textHeight;

    // Keep the original progress scale and marker position within the bar.
    for (int type : {activityProgress_type, activityMarker_type}) {
        ObjectList& bars = panel->frame->instances.items[type];
        for (auto entry = bars.begin(); entry != bars.end(); ++entry) {
            FrameObject* bar = entry->obj;
            if (!bar || !bar->layer || bar->layer != panel->layer || (bar->flags & DESTROYING)) continue;
            if (type == activityProgress_type && (!bar->alterables || !panel->alterables ||
                bar->alterables->strings.get(0) != panel->alterables->strings.get(0))) continue;

            bar->set_y(top + progressY);
        }
    }

    if (!image->tex) image->upload_texture();
    if (!image->tex) return false;

    const int sourceX[] = {0, 3, image->width - 3, image->width};
    const int sourceY[] = {0, 3, image->height - 3, image->height};
    const int destX[] = {left, left + 3, left + width - 3, left + width};
    const int destY[] = {top, top + 3, top + height - 3, top + height};
    int shift = vita_view_object_shift(panel);
    panel->begin_draw(image->width, image->height);
    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 3; ++column) {
            Render::draw_tex(destX[column] + shift, destY[row], destX[column + 1] + shift, destY[row + 1],
                panel->blend_color, image->tex, float(sourceX[column]) / image->width, float(sourceY[row]) / image->height,
                float(sourceX[column + 1]) / image->width, float(sourceY[row + 1]) / image->height);
        }
    }
    panel->end_draw();
    return true;
}

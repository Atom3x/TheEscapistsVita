#include "common.h"
#include "objects.h"
#include "objects/active.h"
#include "objects/text.h"
#include "tutorial-cloud.h"
#include "vitaview.h"
#include <limits>

namespace {
    constexpr int cloudMargin = 4;

    int cloudWidth(Active* cloud, int contentWidth) {
        int left = cloudMargin;
        for (int type : {cashText_type, healthText_type, heatText_type, fatigueText_type}) {
            ObjectList& stats = cloud->frame->instances.items[type];
            for (auto entry = stats.begin(); entry != stats.end(); ++entry) {
                FrameObject* stat = entry->obj;
                if (!stat || !(stat->flags & VISIBLE) || (stat->flags & DESTROYING) ||
                    !stat->collision || !stat->layer || !stat->layer->visible) continue;

                int box[4];
                stat->get_screen_aabb(box);
                left = std::max(left, box[2] + 2);
            }
        }

        int available = std::max(12, VITA_CANVAS_WIDTH - cloudMargin - left);
        return std::min(available, std::max(210, std::min(300, contentWidth)));
    }

    Text* cloudCaption(Active* cloud) {
        Text* caption = nullptr;
        int nearest = std::numeric_limits<int>::max();
        ObjectList& texts = cloud->frame->instances.items[popupCloudText_type];
        for (auto entry = texts.begin(); entry != texts.end(); ++entry) {
            FrameObject* candidate = entry->obj;
            if (!candidate || !(candidate->flags & VISIBLE) || (candidate->flags & DESTROYING)) continue;

            int distance = std::abs(candidate->x - cloud->get_box_index(0)) + std::abs(candidate->y - cloud->get_box_index(1));
            if (distance < nearest) {
                nearest = distance;
                caption = static_cast<Text*>(candidate);
            }
        }

        return caption;
    }
}

bool vitaTutorialCloudBounds(FrameObject* object, int box[4]) {
    if (!object || object->id != popupCloud_type || !object->frame || !object->layer) return false;

    Active* cloud = static_cast<Active*>(object);
    if (!cloud->image || cloud->image->width < 6 || cloud->image->height < 6) return false;

    Text* caption = cloudCaption(cloud);
    if (!caption || !caption->font) return false;

    // Input only reads the last measured layout; never prepare text or draw here.
    int width = cloudWidth(cloud, caption->width + 10);
    int height = std::max(8, caption->height + 8);
    box[0] = VITA_CANVAS_WIDTH - cloudMargin - width;
    box[1] = cloudMargin;
    box[2] = VITA_CANVAS_WIDTH - cloudMargin;
    box[3] = cloudMargin + height;
    return true;
}

bool vitaDrawTutorialCloud(FrameObject* object) {
    if (!object || object->id != popupCloud_type || !object->frame || !object->layer) return false;

    Active* cloud = static_cast<Active*>(object);
    Image* image = cloud->image;
    if (!image || image->width < 6 || image->height < 6 || !init_font()) return false;

    Text* caption = cloudCaption(cloud);
    if (!caption || !caption->font) return false;

    // Resolve Vita button labels before measuring, then wrap even a single paragraph.
    caption->update_draw_text();
    FTBBox natural = caption->font->BBox(caption->draw_text.c_str(), -1, FTPoint());
    int naturalWidth = int(std::ceil(natural.Upper().X() - natural.Lower().X())) + 10;
    int width = cloudWidth(cloud, naturalWidth);
    caption->set_width(width - 10);
    caption->layout->SetAlignment((TextAlignment)caption->alignment);

    int lines = caption->layout->get_lines(caption->draw_text.c_str(), -1);
    int textHeight = int(std::ceil(std::max(1, lines) * caption->font->LineHeight()));
    caption->height = textHeight;
    int box[4];
    if (!vitaTutorialCloudBounds(cloud, box)) return false;

    int height = box[3] - box[1];
    int offsetX = VITA_CANVAS_X + vita_view_object_shift(cloud) + cloud->layer->off_x - cloud->frame->off_x;
    int offsetY = cloud->layer->off_y - cloud->frame->off_y;
    int left = box[0] - offsetX;
    int top = box[1] - offsetY;

    caption->set_x(left + 5);
    caption->set_y(top + 4);

    if (!image->tex) image->upload_texture();
    if (!image->tex) return false;

    // Retain the original rounded pixel corners while extending the middle.
    const int sourceX[] = {0, 3, image->width - 3, image->width};
    const int sourceY[] = {0, 3, image->height - 3, image->height};
    const int destX[] = {left, left + 3, left + width - 3, left + width};
    const int destY[] = {top, top + 3, top + height - 3, top + height};
    int shift = vita_view_object_shift(cloud);
    cloud->begin_draw(image->width, image->height);
    for (int row = 0; row < 3; row++) {
        for (int column = 0; column < 3; column++) {
            Render::draw_tex(destX[column] + shift, destY[row], destX[column + 1] + shift, destY[row + 1],
                cloud->blend_color, image->tex, float(sourceX[column]) / image->width, float(sourceY[row]) / image->height,
                float(sourceX[column + 1]) / image->width, float(sourceY[row + 1]) / image->height);
        }
    }

    cloud->end_draw();
    return true;
}

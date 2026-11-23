#include "common.h"
#include "objects.h"
#include "objects/active.h"
#include "vitaview.h"
#include "vitaperformance.h"
#include "tutorial-cloud.h"
#include "activity-panel.h"

int vita_view_width() {
    return 424;
}

int vita_view_height() {
    return 240;
}

int vita_view_origin_x() {
    return (vita_view_width() - 320) / 2;
}

bool vita_view_is_wide() {
    return true;
}

namespace {

    bool gameplayUi(FrameObject* object) {
        return object && object->frame && object->layer &&
               (object->frame->index == 6 || object->frame->index == 11) && object->layer->index >= 5;
    }

    int inventoryShift(FrameObject* object) {
        if (!object->alterables || object->alterables->strings.get(0) != "Inven") return 0;

        bool found = false;
        int left = 0;
        int right = 0;
        ObjectList& slots = object->frame->instances.items[itemSlot_type];
        for (auto it = slots.begin(); it != slots.end(); ++it) {
            FrameObject* slot = it->obj;
            if (!slot || !slot->collision || slot->layer != object->layer ||
                (slot->flags & DESTROYING) || !slot->alterables ||
                slot->alterables->strings.get(0) != "Inven") continue;
            const int* box = slot->collision->aabb;
            if (!found) {
                left = box[0];
                right = box[2];
                found = true;
            }
            else {
                left = std::min(left, box[0]);
                right = std::max(right, box[2]);
            }
        }

        if (!found) return 0;

        const int rowCenter = (left + right) / 2 + object->layer->off_x - object->frame->off_x;
        return vita_view_width() / 2 - vita_view_origin_x() - rowCenter;
    }

    // Preserve the left icon and right toolbar pixels; extend only the plain bar.

    int panelSourceX(int x) {
        if (x < 24) return x;

        const int right = vita_view_width() - 23;
        if (x >= right) return x - (vita_view_width() - 320);

        return 24 + (x - 24) * 273 / (right - 24);
    }
}

int vita_view_object_shift(FrameObject* object) {
    if (object && object->frame && object->frame->index == 2 &&
        (object->id == versionText_type || object->id == menuCloseButton_type))
        return vita_view_origin_x();
    if (!gameplayUi(object)) return 0;

    if (object->id == tutorialArrow_type) {
        ObjectList& buttons = object->frame->instances.items[interfaceButtons_type];
        for (auto entry = buttons.begin(); entry != buttons.end(); ++entry) {
            FrameObject* toolbar = entry->obj;
            if (!toolbar || !toolbar->collision || (toolbar->flags & DESTROYING)) continue;

            int firstRow = toolbar->get_box_index(1) + (toolbar->get_box_index(3) - toolbar->get_box_index(1)) / 8;
            if (object->x == toolbar->get_box_index(0) && object->y == firstRow) return vita_view_object_shift(toolbar);
        }
    }

    switch (object->id) {
    case cashText_type:
    case healthText_type:
    case heatText_type:
    case fatigueText_type:
    case buddiesText_type:
    case lessonTimerText_type:
        return -vita_view_origin_x();
    case hudToolbar_type:
    case ventTileRow_type:
    case undergroundTileRow_type:
    case roofTileRow_type:
    case popupCloud_type:
    case popupCloudText_type:

        // ButtonText2 is created as the child text of MOUSE1 tutorial clouds.
        return vita_view_origin_x();
    case itemSlot_type:
    case hudItem_type:

        // Center the player slot row and its items using the same transform
        // for drawing, touch hit tests and controller focus.
        return inventoryShift(object);
    default:
        return 0;
    }
}

bool vita_view_hide_object(FrameObject* object) {
    if (!object || !object->frame || !object->layer ||
        object->frame->index != 9 || object->layer->index != 0) return false;
    switch (object->id) {
    case settingsSpeechLabel_type:
    case settingsSpeechValue_type:
    case settingsSpeechField_type:
    case settingsSpeechHint_type:
        return true;
    default:
        return false;
    }
}

int vita_view_collision_x(FrameObject* object, int screenX) {
    if (gameplayUi(object) && object->id == sidePanel_type) {
        Active* panel = static_cast<Active*>(object);
        int left = panel->x - panel->image->hotspot_x;
        int screenLeft = left + object->layer->off_x - object->frame->off_x;
        return left + panelSourceX(screenX - screenLeft);
    }

    return screenX - vita_view_origin_x() - vita_view_object_shift(object) + object->frame->off_x - object->layer->off_x;
}

void vita_view_adjust_box(FrameObject* object, int box[4]) {
    if (vitaViewCloudBox(object, box)) return;

    int shift = vita_view_object_shift(object);
    box[0] += shift;
    box[2] += shift;
    if (gameplayUi(object) && object->id == sidePanel_type) {
        box[0] -= vita_view_origin_x();
        box[2] += vita_view_origin_x();
    }
}

bool vitaViewCloudBox(FrameObject* object, int box[4]) {
    return vitaTutorialCloudBounds(object, box);
}

namespace {

    bool gameplayScene(FrameObject* object) {
        return object->frame->index == 6 || object->frame->index == 11;
    }

    // Extend the outside pixels without stretching the central artwork or light.
    void drawCanvasImage(FrameObject* object, Image* image,
        float sourceLeft, float sourceTop,
        float sourceWidth, float sourceHeight) {
        if (sourceWidth <= 0 || sourceHeight <= 0) return;
        if (!image->tex) image->upload_texture();
        if (!image->tex) return;

        const int left = object->frame->off_x - object->layer->off_x - vita_view_origin_x();
        const int top = object->frame->off_y - object->layer->off_y;
        object->begin_draw(image->width, image->height);
        Render::draw_tex(left, top, left + vita_view_width(), top + vita_view_height(),
            object->blend_color, image->tex,
            (left - sourceLeft) / sourceWidth, (top - sourceTop) / sourceHeight,
            (left + vita_view_width() - sourceLeft) / sourceWidth,
            (top + vita_view_height() - sourceTop) / sourceHeight);
        object->end_draw();
    }

    void drawLightCanvas(Active* light, float centerX, float centerY) {
        Image* image = light->image;
        if (!image) return;

        const float width = image->width * light->x_scale;
        const float height = image->height * light->y_scale;
        const int left = light->frame->off_x - light->layer->off_x - vita_view_origin_x();
        const int top = light->frame->off_y - light->layer->off_y;
        drawCanvasImage(light, image, left + centerX - width / 2, top + centerY - height / 2, width, height);
    }
}

bool vita_view_draw_backdrop(FrameObject* object, Image* image) {
    if (!object || !object->frame || !object->layer || !image || gameplayScene(object)) return false;

    const int screenLeft = object->x + object->layer->off_x - object->frame->off_x;
    const int screenTop = object->y + object->layer->off_y - object->frame->off_y;
    // The character editor places its 320x240 background at y=-3.
    // Accept that small crop and repeat the border over the entire canvas.
    if (screenLeft > 0 || screenTop > 2 || screenLeft + image->width < 320 ||
        image->height < 240 || screenTop + image->height < 237) return false;
    if (!image->tex) image->upload_texture();
    if (!image->tex) return true;

    const int left = object->frame->off_x - object->layer->off_x - vita_view_origin_x();
    const int top = object->frame->off_y - object->layer->off_y;
    const int contentLeft = left + vita_view_origin_x();
    const int contentRight = contentLeft + 320;
    const int edges[] = {left, contentLeft, contentRight, left + vita_view_width()};
    const float leftSample = (contentLeft + 0.5f - object->x) / image->width;
    const float rightSample = (contentRight - 0.5f - object->x) / image->width;
    const float sourceLeft[] = {leftSample, (contentLeft - float(object->x)) / image->width, rightSample};
    const float sourceRight[] = {leftSample, (contentRight - float(object->x)) / image->width, rightSample};

    // Some exported backgrounds are 325 pixels wide: their last column is
    // padding, not scenery. Repeat the visible edge texels inside the original
    // 320-pixel canvas, never the texture's padded right edge.
    object->begin_draw(image->width, image->height);
    for (int strip = 0; strip < 3; ++strip)
        Render::draw_tex(edges[strip], top, edges[strip + 1], top + vita_view_height(),
            object->blend_color, image->tex, sourceLeft[strip], (top - float(object->y)) / image->height,
            sourceRight[strip], (top + vita_view_height() - float(object->y)) / image->height);
    object->end_draw();
    return true;
}

bool vita_view_expand_rect(FrameObject* object, int& left, int& top, int& right, int& bottom) {
    if (!object || !object->frame || !object->layer) return false;
    if (gameplayScene(object) && object->layer->index < 5) return false;

    const int screenLeft = left + object->layer->off_x - object->frame->off_x;
    const int screenRight = right + object->layer->off_x - object->frame->off_x;
    if (screenLeft > 0 || screenRight < 320) return false;

    left -= vita_view_origin_x();
    right += vita_view_origin_x();
    return true;
}

bool vita_view_draw_fullscreen_active(Active* object) {
    if (!object || !object->frame || !object->layer || !object->image || object->angle != 0)
        return false;
    Image* image = object->image;

    // Tiny 4:3 bitmaps are used as scaled screen fills. Leave world actors and
    // ordinary menu artwork on their original rendering path.
    if (image->width > 32 || image->height > 24 || image->width * 3 != image->height * 4)
        return false;
    if (gameplayScene(object) && object->layer->index < 5) return false;

    const float width = image->width * object->x_scale, height = image->height * object->y_scale;
    const float left = object->x - image->hotspot_x * object->x_scale +
                       object->layer->off_x - object->frame->off_x;
    const float top = object->y - image->hotspot_y * object->y_scale +
                      object->layer->off_y - object->frame->off_y;
    if (left > 0 || top > 0 || left + width < 320 || top + height < 240) return false;

    const int canvasLeft = object->frame->off_x - object->layer->off_x - vita_view_origin_x();
    const int canvasTop = object->frame->off_y - object->layer->off_y;
    drawCanvasImage(object, image, canvasLeft, canvasTop, vita_view_width(), vita_view_height());
    return true;
}

bool vitaViewHudHit(FrameObject* object) {
    if (!object || object->id != sidePanel_type || !object->frame ||
        (object->frame->index != 6 && object->frame->index != 11)) return false;

    ObjectList& slots = object->frame->instances.items[itemSlot_type];
    for (auto entry = slots.begin(); entry != slots.end(); ++entry) {
        FrameObject* slot = entry->obj;
        if (slot && (slot->flags & VISIBLE) && !(slot->flags & DESTROYING) && slot->alterables &&
            slot->alterables->strings.get(0) == "Inven" && slot->mouse_over()) return true;
    }

    return false;
}

void vitaDeskTarget(FrameObject* player, int facingX, int facingY, int& targetX, int& targetY) {
    targetX = int(std::floor(player->x / 16.0)) * 16 + 8;
    targetY = int(std::floor(player->y / 16.0)) * 16 + 8;
    if (!player->collision) {
        targetX += facingX * 16;
        targetY += facingY * 16;
        return;
    }

    // Pick the first complete cell beyond the player's body, not a cell they occupy.
    const int* body = player->collision->aabb;
    if (facingX > 0) targetX = int(std::ceil(body[2] / 16.0)) * 16 + 8;
    else if (facingX < 0) targetX = int(std::floor(body[0] / 16.0)) * 16 - 8;
    else if (facingY > 0) targetY = int(std::ceil(body[3] / 16.0)) * 16 + 8;
    else if (facingY < 0) targetY = int(std::floor(body[1] / 16.0)) * 16 - 8;
}

bool vitaDeskPlacementReach(int targetX, int targetY, int playerX, int playerY, int radius, FrameObject* player) {
    int x = targetX - playerX;
    int y = targetY - playerY;
    if (x * x + y * y <= radius * radius) return true;

    if (player && player->collision) {
        for (int direction = 0; direction < 4; direction++) {
            int nextX, nextY;
            vitaDeskTarget(player, direction == 0 ? 1 : direction == 1 ? -1 : 0,
                direction == 2 ? 1 : direction == 3 ? -1 : 0, nextX, nextY);
            if (nextX == targetX && nextY == targetY) return true;
        }

        return false;
    }

    // A neighboring cell stays reachable as the player moves within their cell.
    int cellX = int(std::floor(targetX / 16.0)) - int(std::floor(playerX / 16.0));
    int cellY = int(std::floor(targetY / 16.0)) - int(std::floor(playerY / 16.0));
    return std::abs(cellX) + std::abs(cellY) == 1;
}

// Keep HUD buttons/clouds below covers. Only menus that use inventory may
// draw its slots/items above the menu dimmer; loading/fades always cover them.
void vitaViewOrderHud(FrameObject** firstObject, FrameObject** lastObject) {
    auto cover = std::find_if(firstObject, lastObject, [](FrameObject* object) {
        return object && object->frame && (object->frame->index == 6 || object->frame->index == 11) &&
               (object->id == hudBackdrop_type || object->id == screenFade_type || object->id == loadingCurtain_type);
    });
    if (cover == lastObject) return;

    auto playerInventory = [](FrameObject* object) {
        return object && (object->id == itemSlot_type || object->id == hudItem_type) &&
               object->alterables && object->alterables->strings.get(0) == "Inven";
    };
    bool inventoryAvailable = vitaMenuAllowsInventory((*cover)->frame);

    std::stable_partition(cover, lastObject, [&](FrameObject* object) {
        if (!object) return false;
        if (object->id == interfaceButtons_type || object->id == tutorialArrow_type ||
            object->id == popupCloud_type || object->id == popupCloudText_type) return true;

        return playerInventory(object);
    });

    if (!inventoryAvailable) return;

    FrameObject** menuEnd = firstObject;
    for (FrameObject** entry = firstObject; entry != lastObject; ++entry)
        if (*entry && (*entry)->id == hudBackdrop_type) menuEnd = entry + 1;

    // Also handle slots that originally sorted before the dimmer.
    std::stable_partition(firstObject, menuEnd, [&](FrameObject* object) {
        return !playerInventory(object);
    });

    auto fade = std::find_if(firstObject, lastObject, [](FrameObject* object) {
        return object && (object->id == screenFade_type || object->id == loadingCurtain_type);
    });
    std::stable_partition(fade, lastObject, playerInventory);
}

bool vita_view_draw_overlay(FrameObject* object) {
    if (!object || !object->frame || !object->layer) return false;
    if (vitaDrawTutorialCloud(object)) return true;
    if (vitaDrawActivityPanel(object)) return true;

    if (gameplayUi(object) && object->id == sidePanel_type) {
        Active* panel = static_cast<Active*>(object);
        Image* image = panel->image;
        if (!image->tex) image->upload_texture();
        if (!image->tex) return true;

        const int x = panel->x - image->hotspot_x - vita_view_origin_x();
        const int y = panel->y - image->hotspot_y;
        const int source[] = {0, 24, 297, 320};
        const int dest[] = {0, 24, vita_view_width() - 23, vita_view_width()};
        Render::disable_effect();
        for (int part = 0; part < 3; ++part)
            Render::draw_tex(x + dest[part], y, x + dest[part + 1], y + image->height,
                panel->blend_color, image->tex, source[part] / 320.0f, 0.0f, source[part + 1] / 320.0f, 1.0f);
        return true;
    }

    if (gameplayUi(object) && object->id == dreamOverlay_type) {
        Active* light = static_cast<Active*>(object);
        float centerX = vita_view_width() / 2.0f, centerY = vita_view_height() / 2.0f;
        ObjectList& players = object->frame->instances.items[playerBase_type];
        for (auto it = players.begin(); it != players.end(); ++it) {
            FrameObject* player = it->obj;
            if (!player || !player->collision || (player->flags & DESTROYING)) continue;
            int box[4];
            player->get_screen_aabb(box);
            centerX = (box[0] + box[2]) * 0.5f;
            centerY = (box[1] + box[3]) * 0.5f;
            break;
        }

        drawLightCanvas(light, centerX, centerY);
        return true;
    }

    if (object->id == undergroundGlow_type) {
        Active* light = static_cast<Active*>(object);
        int box[4];
        light->get_screen_aabb(box);
        drawLightCanvas(light, (box[0] + box[2]) * 0.5f, (box[1] + box[3]) * 0.5f);
        return true;
    }

    if (object->id != screenTint_type && object->id != screenFade_type &&
        object->id != loadingCurtain_type && object->id != ventDarkness_type &&
        object->id != hudBackdrop_type) return false;
    Active* overlay = static_cast<Active*>(object);

    // Fullscreen tints/fades cover the extra scenery without changing their
    // script positions, collision geometry, animation, or saved properties.
    overlay->draw_image(overlay->image, overlay->x - vita_view_origin_x(), overlay->y,
        overlay->blend_color, overlay->angle,
        overlay->x_scale * (vita_view_width() / 320.0f), overlay->y_scale);
    return true;
}

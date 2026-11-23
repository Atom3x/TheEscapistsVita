#include "common.h"
#include "events.h"
#include "objects.h"
#include "objects/assarray.h"
#include "objects/active.h"
#include "objects/ini.h"
#include "objects/arrayext.h"
#include "vitacontrols.h"
#include "vitabindings.h"
#include "vitaview.h"
#include "game-settings.h"
#include "inventory-menus.h"
#ifdef CHOWDREN_VITA_60FPS
#include "vitaframetime.h"
#endif
#include <SDL.h>
#include <cmath>
#include <limits>
#include <vector>

#include "vita_controls_catalog.h"

namespace {
    struct Target {
        FrameObject* object;
        int box[4];
        int x;
        int y;
        bool world;
        int part = 0;
    };

    struct ControlState {
        int frame = -1;
        int focusType = -1;
        int focusIndex = -1;
        int focusPart = 0;

        int x = 160;
        int y = 120;

        int facingX = 0;
        int facingY = 1;

        int navX = 0;
        int navY = 0;
        int context = -1;

        int aimX = 0;
        int aimY = 0;
        int shoulder = 0;
        int inventorySlot = 0;
        int lastAimX = 0;
        int lastAimY = 0;

        bool terrain = false;
        int tileX = 0;
        int tileY = 0;
        int tileLayer = -1;

        float shoulderRepeat = 0;
        float animation = 0;
        float feedback = 0;

        bool carrying = false;
        bool combat = false;
        bool placementValid = true;
        float repeat = 0;

        bool exercising = false;
        bool inventory = false;
        bool modal = false;
        bool renaming = false;

        bool left = false;
        bool right = false;
        bool neutral = false;

        bool touching = false;
        bool tap = false;
        bool touchUp = false;
        bool touchSeen = false;

        VitaPadState previous;
        std::vector<int> keys;
    } state;

    int axis(float value) {
        return value < -0.45f ? -1 : value > 0.45f ? 1 : 0;
    }

    bool buttonsDown(const VitaPadState& p) {
        for (size_t i = 0; i < static_cast<size_t>(VitaAction::Up); ++i)
            if (vita_bindings().down(static_cast<VitaAction>(i), p)) return true;

        return p.cross || p.circle || p.square || p.triangle || p.l || p.r || p.start || p.select;
    }

    void mouse(bool left, bool right) {
        if (left != state.left) manager.on_mouse(SDL_BUTTON_LEFT, left);
        if (right != state.right) manager.on_mouse(SDL_BUTTON_RIGHT, right);
        state.left = left;
        state.right = right;
    }

    void keys(const std::vector<int>& wanted) {
        for (int key : state.keys)
            if (std::find(wanted.begin(), wanted.end(), key) == wanted.end()) manager.on_key(key, false);

        for (int key : wanted)
            if (std::find(state.keys.begin(), state.keys.end(), key) == state.keys.end()) manager.on_key(key, true);

        state.keys = wanted;
    }

    FrameObject* first(Frame& frame, int type) {
        ObjectList& list = frame.instances.items[type];
        for (auto it = list.begin(); it != list.end(); ++it)
            if (it->obj && !(it->obj->flags & DESTROYING)) return it->obj;

        return NULL;
    }

    bool worldProxy(int type) {
        return type == inmateBase_type || type == guardBase_type;
    }

    bool target(FrameObject* obj, Target& t) {
        if (!obj || !obj->collision || !obj->layer || !obj->layer->visible ||
            (!(obj->flags & VISIBLE) && !worldProxy(obj->id)) || (obj->flags & (DESTROYING | INACTIVE))) return false;
        if (vita_view_hide_object(obj) || vitaControlsBlocksInput(obj)) return false;

        obj->get_screen_aabb(t.box);
        t.world = (obj->frame->index == 6 || obj->frame->index == 11) && obj->layer->index < 5;
        const int left = t.world ? 0 : VITA_CANVAS_X + vita_view_object_shift(obj);
        const int right = t.world ? VITA_CANVAS_WIDTH : left + WINDOW_WIDTH;
        if (t.box[2] <= left || t.box[3] <= 0 || t.box[0] >= right || t.box[1] >= VITA_CANVAS_HEIGHT ||
            t.box[2] <= t.box[0] || t.box[3] <= t.box[1]) return false;
        t.object = obj;
        t.part = 0;
        t.x = std::max(left, std::min(right - 1, (t.box[0] + t.box[2]) / 2));
        t.y = std::max(0, std::min(VITA_CANVAS_HEIGHT - 1, (t.box[1] + t.box[3]) / 2));
        if (vitaViewCloudBox(obj, t.box)) return true;

        // Use a point inside the collision mask, including hollow pixel-art buttons.
        int oy = obj->layer->off_y - obj->frame->off_y;
        PointCollision center(vita_view_collision_x(obj, t.x), t.y - oy);
        if (!collide(&center, obj->collision)) {
            int best = std::numeric_limits<int>::max(), cx = t.x, cy = t.y;
            for (int y = std::max(0, t.box[1]); y < std::min(VITA_CANVAS_HEIGHT, t.box[3]); ++y)
                for (int x = std::max(left, t.box[0]); x < std::min(right, t.box[2]); ++x) {
                    int score = (x - cx) * (x - cx) + (y - cy) * (y - cy);
                    if (score >= best) continue;
                    PointCollision point(vita_view_collision_x(obj, x), y - oy);
                    if (collide(&point, obj->collision)) {
                        best = score;
                        t.x = x;
                        t.y = y;
                    }
                }

            if (best == std::numeric_limits<int>::max()) return false;
        }

        return true;
    }

    bool same(const Target& t) {
        return t.object->id == state.focusType && t.object->index == state.focusIndex && t.part == state.focusPart;
    }

    void focus(const Target& t) {
        state.focusType = t.object->id;
        state.focusIndex = t.object->index;
        state.focusPart = t.part;
        state.terrain = false;
        state.x = t.x;
        state.y = t.y;
    }

    int focused(const std::vector<Target>& items) {
        for (size_t i = 0; i < items.size(); ++i)
            if (same(items[i])) return int(i);

        return -1;
    }

    bool inside(const Target& t, const Target& panel) {
        return t.x >= panel.box[0] - 6 && t.x < panel.box[2] + 6 &&
               t.y >= panel.box[1] - 6 && t.y < panel.box[3] + 6;
    }

    bool inventoryType(int type) {
        return type == hudItem_type || type == itemSlot_type;
    }

    bool playerInventoryObject(FrameObject* object) {
        return object && inventoryType(object->id) && object->alterables &&
               object->alterables->strings.get(0) == "Inven";
    }

    bool playerInventory(const Target& t) {
        return playerInventoryObject(t.object);
    }

    int inventorySlotNumber(const Target& target) {
        return target.object->alterables->values.get(target.object->id == itemSlot_type ? 0 : 1);
    }

    int browseInventory(const std::vector<Target>& items, int currentSlot, int direction) {
        std::vector<int> slots;
        for (size_t i = 0; i < items.size(); i++)
            if (playerInventory(items[i])) slots.push_back(int(i));

        if (slots.empty()) return -1;

        std::sort(slots.begin(), slots.end(), [&](int left, int right) {
            return inventorySlotNumber(items[left]) < inventorySlotNumber(items[right]);
        });
        int current = direction > 0 ? -1 : 0;
        for (size_t i = 0; i < slots.size(); i++)
            if (inventorySlotNumber(items[slots[i]]) == currentSlot) current = int(i);

        return slots[(current + direction + int(slots.size())) % int(slots.size())];
    }

    int navigateHud(const std::vector<Target>& items, int current, int dx, int dy, int selectedSlot) {
        if (current < 0) return items.empty() ? -1 : 0;

        const Target& source = items[current];
        if (playerInventory(source) && dx)
            return browseInventory(items, inventorySlotNumber(source), dx);
        if (!playerInventory(source) && dx > 0) return current;

        int part = playerInventory(source) ? (dy < 0 ? 10 : 13) : source.part + dy;
        if (!dx && part >= 10 && part <= 13) {
            for (size_t i = 0; i < items.size(); i++)
                if (items[i].object->id == interfaceButtons_type && items[i].part == part) return int(i);
        }

        // Left, or moving beyond the four HUD buttons, returns to the slot row.
        if (!playerInventory(source)) {
            for (size_t i = 0; i < items.size(); i++)
                if (playerInventory(items[i]) && inventorySlotNumber(items[i]) == selectedSlot) return int(i);
            for (size_t i = 0; i < items.size(); i++)
                if (playerInventory(items[i])) return int(i);
        }

        return current;
    }

    bool inputCovered(Frames& frame) {
        for (int type : {loadingCurtain_type, screenFade_type}) {
            ObjectList& objects = frame.instances.items[type];
            for (auto entry = objects.begin(); entry != objects.end(); ++entry) {
                FrameObject* object = entry->obj;
                if (object && (object->flags & VISIBLE) && !(object->flags & DESTROYING) &&
                    object->layer && object->layer->visible && object->blend_color.a > 0) return true;
            }
        }

        return false;
    }

    // Several original buttons share a single sprite. Keep a separate identity
    // and collision-safe click point for each coordinate-tested region.

    bool region(const Target& base, int part, int x1, int y1, int x2, int y2, Target& out) {
        out = base;
        out.part = part;
        out.world = false;
        out.box[0] = std::max(base.box[0], x1);
        out.box[1] = std::max(base.box[1], y1);
        out.box[2] = std::min(base.box[2], x2);
        out.box[3] = std::min(base.box[3], y2);
        int best = std::numeric_limits<int>::max();
        int cx = (out.box[0] + out.box[2]) / 2, cy = (out.box[1] + out.box[3]) / 2;
        int oy = base.object->layer->off_y - base.object->frame->off_y;
        for (int y = out.box[1]; y < out.box[3]; ++y)
            for (int x = out.box[0]; x < out.box[2]; ++x) {
                int score = (x - cx) * (x - cx) + (y - cy) * (y - cy);
                PointCollision point(vita_view_collision_x(base.object, x), y - oy);
                if (score < best && collide(&point, base.object->collision)) {
                    best = score;
                    out.x = x;
                    out.y = y;
                }
            }

        return best != std::numeric_limits<int>::max();
    }

    void regions(Frames& frame, const Target& base, std::vector<Target>& items) {
        Target t;
        if (base.object->id == interfaceButtons_type) {
            for (int i = 0; i < 4; ++i)
                if (region(base, 10 + i, base.box[0], base.box[1] + i * (base.box[3] - base.box[1]) / 4 + 1,
                        base.box[2], base.box[1] + (i + 1) * (base.box[3] - base.box[1]) / 4, t)) items.push_back(t);
        }
        else if (base.object->id == dialogPanel_type && frame.group_code_menu_1 &&
                 static_cast<Active*>(base.object)->test_animation(24) &&
                 static_cast<Active*>(base.object)->get_direction() == 8) {
            int x = base.object->get_x() - frame.off_x + VITA_CANVAS_X;
            int y = base.object->get_y() - frame.off_y;
            for (int column = 0; column < 2; ++column) {
                for (int row = 0; row < 10; ++row) {
                    if (region(base, 30 + column * 10 + row, x - 110 + column * 110,
                            y - 60 + row * 11, x - 1 + column * 110, y - 49 + row * 11, t)) items.push_back(t);
                }
            }
        }
        else if (base.object->id == dialogPanel_type && frame.group_code_journal_1 &&
                 static_cast<Active*>(base.object)->test_animation(25)) {
            int x = base.object->get_x() - frame.off_x + VITA_CANVAS_X, y = base.object->get_y() - frame.off_y;
            if (region(base, 20, base.box[2] - 19, y - 69, base.box[2], y - 45, t)) items.push_back(t);
            if (region(base, 21, base.box[2] - 19, y - 39, base.box[2], y - 20, t)) items.push_back(t);
            if (region(base, 22, base.box[0], y + 71, x, base.box[3], t)) items.push_back(t);
            if (region(base, 23, x + 1, y + 71, base.box[2], base.box[3], t)) items.push_back(t);
        }
        else if (base.object->id == dialogPanel_type &&
                 frame.group_code_npc_profiles_npc_profile_1 &&
                 static_cast<Active*>(base.object)->test_animation(14)) {
            int x = base.object->get_x() - frame.off_x + VITA_CANVAS_X;
            int y = base.object->get_y() - frame.off_y;
            const int top[] = {-54, -31, -10}, bottom[] = {-36, -14, 8};
            for (int i = 0; i < 3; ++i)
                if (region(base, 1 + i, x + 56, y + top[i], base.box[2], y + bottom[i], t)) items.push_back(t);
        }
    }

    int menuContext(Frames& frame, bool modal) {
        if (modal && frame.group_code_menu_1) {
            Active* panel = static_cast<Active*>(first(frame, dialogPanel_type));
            if (panel && panel->test_animation(24)) return 2 + panel->get_direction() * 64;
        }

        if (frame.index == 2) {
            if (frame.group_new_dlc_1) return 14;
            if (frame.group_quit_1) return 13;
            if (frame.group_pick_slot_1) return frame.group_pick_slot_really_erase_1 ? 12 : 11;
        }

        return modal ? (frame.group_code_menu_1 ? 2 : frame.group_code_crafting_1 ? 3
                                                  : frame.group_code_my_stats_1   ? 4
                                                  : frame.group_code_journal_1    ? 5
                                                                                  : 1)
                     : 0;
    }

    std::vector<Target> collect(Frames& frame, bool gameplay, bool& modal) {
        std::vector<Target> items;
        Target panel;
        modal = gameplay && target(first(frame, dialogPanel_type), panel);
        if (modal) regions(frame, panel, items);
        int topLayer = -1;
        for (int type = 0; type < MAX_OBJECT_ID; ++type) {
            if ((!vita_focus_type(frame, type) && !(gameplay && type == itemSlot_type) &&
                 !(gameplay && frame.group_code_menu_1 && type == settingsSlider_type)) ||
                vita_controls_hide_object(type)) continue;
            ObjectList& list = frame.instances.items[type];
            for (auto it = list.begin(); it != list.end(); ++it) {
                Target t;
                if (!target(it->obj, t)) continue;
                if (!gameplay || inventoryType(type)) t.world = false;
                if (type == dialogPanel_type || type == sidePanel_type) continue;
                if (gameplay && type == interfaceButtons_type) {
                    if (!modal) regions(frame, t, items);
                    continue;
                }

                if (!t.world && (t.box[2] - t.box[0]) * (t.box[3] - t.box[1]) > WINDOW_WIDTH * WINDOW_HEIGHT / 3) continue;
                if (modal && (t.world || (!inside(t, panel) && !playerInventory(t)))) continue;
                if (!gameplay) topLayer = std::max(topLayer, t.object->layer->index);
                items.push_back(t);
            }
        }

        if (!gameplay && (frame.index != 4 || topLayer >= 2)) items.erase(std::remove_if(items.begin(), items.end(), [&](const Target& t) {
            return t.object->layer->index < topLayer;
        }),
            items.end());

        // Slots persist when items move or disappear. Aim at the item's opaque pixels
        // when occupied and keep empty slots available for button navigation.
        for (Target& slot : items)
            if (slot.object->id == itemSlot_type) {
                for (const Target& item : items)
                    if (item.object->id == hudItem_type && inside(item, slot)) {
                        slot.x = item.x;
                        slot.y = item.y;
                        break;
                    }
            }

        const std::vector<Target> slots = items;
        items.erase(std::remove_if(items.begin(), items.end(), [&](const Target& item) {
            if (item.object->id != hudItem_type) return false;

            for (const Target& slot : slots)
                if (slot.object->id == itemSlot_type && inside(item, slot)) return true;

            return false;
        }),
            items.end());
        return items;
    }

    int navigationLane(const Target& target) {
        if (target.object->id == dialogPanel_type && target.part >= 1 && target.part <= 3) return 1;
        if (target.object->alterables && target.object->alterables->strings.get(0) == "Profile") return 2;
        return 0;
    }

    int navigate(const std::vector<Target>& items, int current, int dx, int dy, bool rowsOnly = false) {
        if (items.empty()) return -1;
        if (current < 0) return 0;

        int lane = navigationLane(items[current]);
        if (dy && (rowsOnly || lane)) {
            int next = -1;
            int nearestRow = std::numeric_limits<int>::max();
            int nearestColumn = std::numeric_limits<int>::max();
            for (size_t i = 0; i < items.size(); ++i) {
                if (lane && navigationLane(items[i]) != lane) continue;

                int row = (items[i].y - items[current].y) * dy;
                int column = std::abs(items[i].x - items[current].x);
                if (row <= 1) continue;
                if (row < nearestRow || (row == nearestRow && column < nearestColumn)) {
                    next = int(i);
                    nearestRow = row;
                    nearestColumn = column;
                }
            }

            if (next >= 0) return next;

            int wrapRow = dy > 0 ? std::numeric_limits<int>::max() : std::numeric_limits<int>::min();
            nearestColumn = std::numeric_limits<int>::max();
            for (size_t i = 0; i < items.size(); ++i) {
                if (lane && navigationLane(items[i]) != lane) continue;
                if (std::abs(items[i].y - items[current].y) <= 1) continue;

                int row = items[i].y;
                int column = std::abs(items[i].x - items[current].x);
                if ((dy > 0 ? row < wrapRow : row > wrapRow) || (row == wrapRow && column < nearestColumn)) {
                    next = int(i);
                    wrapRow = row;
                    nearestColumn = column;
                }
            }

            if (next >= 0) return next;
        }

        float best = std::numeric_limits<float>::max();
        int next = -1;
        for (size_t i = 0; i < items.size(); ++i) {
            if (int(i) == current) continue;
            float x = items[i].x - items[current].x;
            float y = items[i].y - items[current].y;
            float along = x * dx + y * dy, across = std::abs(x * dy - y * dx);
            if (along <= 1 || across > along * 1.5f + 4) continue;
            float score = along + across * 3 + across * across / std::max(1.f, along);
            if (score < best) {
                best = score;
                next = int(i);
            }
        }

        if (next >= 0) return next;

        // Wrap a real row/column. A one-row menu also accepts Up/Down as
        // previous/next, which keeps title buttons comfortable on the D-pad.
        best = std::numeric_limits<float>::max();
        for (size_t i = 0; i < items.size(); ++i) {
            float x = items[i].x - items[current].x;
            float y = items[i].y - items[current].y;
            float along = x * dx + y * dy, across = std::abs(x * dy - y * dx);
            if (along >= -1 || across > 8) continue;
            if (along < best) {
                best = along;
                next = int(i);
            }
        }

        if (next >= 0) return next;

        return (current + ((dx + dy > 0) ? 1 : int(items.size()) - 1)) % int(items.size());
    }

    bool navigation(int dx, int dy, float dt) {
        bool changed = dx != state.navX || dy != state.navY;
        state.navX = dx;
        state.navY = dy;
        if (!dx && !dy) {
            state.repeat = 0;
            return false;
        }

        if (changed) {
            state.repeat = .32f;
            return true;
        }

        state.repeat -= std::min(.05f, std::max(0.f, dt));
        if (state.repeat > 0) return false;

        state.repeat = .12f;
        return true;
    }

    bool shoulderNavigation(int direction, float dt) {
        bool changed = direction != state.shoulder;
        state.shoulder = direction;
        if (!direction) {
            state.shoulderRepeat = 0;
            return false;
        }

        if (changed) {
            state.shoulderRepeat = .32f;
            return true;
        }

        state.shoulderRepeat -= std::max(0.f, std::min(.05f, dt));
        if (state.shoulderRepeat > 0) return false;

        state.shoulderRepeat = .12f;
        return true;
    }

    bool outsideDialog(Frames& frame) {
        // Container/profile close events expect a left click outside both the
        // dialog and HUD, then perform their own cleanup and click gating.
        FrameObject* panel = first(frame, dialogPanel_type);
        FrameObject* hud = first(frame, sidePanel_type);
        for (int y = 0; y < VITA_CANVAS_HEIGHT; y += 4)
            for (int x = 0; x < VITA_CANVAS_WIDTH; x += 4) {
                bool blocked = false;
                for (FrameObject* obj : {panel, hud}) {
                    if (!obj || !obj->collision || !(obj->flags & VISIBLE)) continue;
                    PointCollision point(vita_view_collision_x(obj, x), y + frame.off_y - obj->layer->off_y);
                    if (collide(&point, obj->collision)) {
                        blocked = true;
                        break;
                    }
                }

                if (!blocked) {
                    state.x = x;
                    state.y = y;
                    return true;
                }
            }

        return false;
    }

    bool slider(int type) {
        return type == musicVolumeBar_type || type == soundVolumeBar_type || type == settingsSlider_type;
    }

    int gameValue(Frames& frame, const std::string& name) {
        FrameObject* vars = first(frame, gameVariables_type);
        return vars ? static_cast<AssociateArray*>(vars)->get_value(name) : 0;
    }

    void selectInventorySlot(Frames& frame, int slotNumber) {
        FrameObject* variables = first(frame, gameVariables_type);
        if (!variables) return;

        AssociateArray* values = static_cast<AssociateArray*>(variables);
        FrameObject* selectedItem = nullptr;
        ObjectList& items = frame.instances.items[hudItem_type];
        for (auto entry = items.begin(); entry != items.end(); ++entry) {
            FrameObject* item = entry->obj;
            if (!playerInventoryObject(item) || (item->flags & DESTROYING)) continue;

            item->alterables->flags.disable(5000);
            if (slotNumber > 0 && item->alterables->values.get(1) == slotNumber) selectedItem = item;
        }

        ObjectList& slots = frame.instances.items[itemSlot_type];
        for (auto entry = slots.begin(); entry != slots.end(); ++entry) {
            FrameObject* slot = entry->obj;
            if (playerInventoryObject(slot) && !(slot->flags & DESTROYING))
                static_cast<Active*>(slot)->set_direction(slot->alterables->values.get(0) - 1);
        }

        if (selectedItem) selectedItem->alterables->flags.enable(5000);
        values->set_value("SelectedSlot", selectedItem ? slotNumber : 0);
        values->set_value("SelectedItem", selectedItem ? selectedItem->alterables->values.get(2) : -1);
        values->set_value("SelectedItemHP", selectedItem ? selectedItem->alterables->values.get(7) : 0);
        values->set_value("ItemSelected", selectedItem ? 1 : 0);
        values->set_string("Cursor", selectedItem ? "Use" : "Normal");
    }

    bool unscrewingTool(Frames& frame) {
        FrameObject* data = first(frame, itemData_type);
        int selected = gameValue(frame, "SelectedItem");
        return data && selected > 0 && static_cast<INI*>(data)->get_value(
            number_to_string(selected), "Unscrewing", 0) > 0;
    }

    bool reachableVent(FrameObject* player, const Target& target) {
        if (!player || target.object->id != ventCover_type) return false;

        Active* vent = static_cast<Active*>(target.object);
        if (!vent->alterables || vent->alterables->values.get(1) <= 0 || !vent->test_animation(0)) return false;

        int x = target.object->x + 8 - player->x;
        int y = target.object->y + 8 - player->y;
        return x * x + y * y <= 20 * 20;
    }

    bool terrainTool(Frames& frame, FrameObject* player) {
        if (player && player->layer->index == 0) return true;

        int selected = gameValue(frame, "SelectedItem");
        FrameObject* data = first(frame, itemData_type);
        if (selected <= 0 || !data) return false;

        INI* ini = static_cast<INI*>(data);
        const std::string group = number_to_string(selected);
        return ini->get_value(group, "Digging", 0) > 0 || ini->get_value(group, "Chipping", 0) > 0 ||
               ini->get_value(group, "Cutting", 0) > 0;
    }

    bool cellBarsAhead(Frames& frame, FrameObject* player, int directionX, int directionY) {
        if (!player || !player->layer || player->layer->index != 1) return false;

        FrameObject* tiles = first(frame, groundTiles_type);
        if (!tiles) return false;

        int tileX = int(std::floor(player->x / 16.f)) + directionX;
        int tileY = int(std::floor(player->y / 16.f)) + directionY;
        if (tileX < 0 || tileY < 0) return false;

        // Cell bars are terrain (tile 56), rather than selectable Active
        // objects. A neighboring sheet must not steal the stick's tile aim.
        return static_cast<ArrayObject*>(tiles)->get_value(tileX, tileY, player->layer->index + 1) == 56;
    }

    bool focusConsumable(Frames& frame) {
        FrameObject* data = first(frame, itemData_type);
        int selected = gameValue(frame, "SelectedItem");
        if (!data || selected <= 0) return false;

        INI* items = static_cast<INI*>(data);
        const std::string group = number_to_string(selected);
        if (items->get_value(group, "FAT", 0) <= 0 && items->get_value(group, "HP", 0) <= 0) return false;

        // Reuse the original eat/heal events: they expect a click on a visible
        // player sprite, rather than the hidden player collision base.
        for (QualifierIterator entry(frame.qualifier_2); !entry.end(); ++entry) {
            Target player;
            if (target(*entry, player)) {
                focus(player);
                return true;
            }
        }

        return false;
    }

#include "controls-ui.h"
#ifdef CHOWDREN_VITA_60FPS
#include "settings-ui.h"
#endif

}

bool vitaMenuAllowsInventory(Frame* source) {
    if (!source || (source->index != 6 && source->index != 11)) return false;

    Frames& frame = *static_cast<Frames*>(source);
    if (frame.group_code_menu_1) return false;

    ObjectList& panels = frame.instances.items[dialogPanel_type];
    for (auto entry = panels.begin(); entry != panels.end(); ++entry) {
        FrameObject* object = entry->obj;
        if (!object || !(object->flags & VISIBLE) || (object->flags & DESTROYING) ||
            !object->layer || !object->layer->visible) continue;

        Active* panel = static_cast<Active*>(object);
        bool allowsInventory = false;
        for (InventoryMenu menu : inventoryEnabledMenus) {
            if (panel->test_animation(static_cast<int>(menu))) {
                allowsInventory = true;
                break;
            }
        }

        if (!allowsInventory) return false;
    }

    return true;
}

bool vitaControlsBlocksInput(FrameObject* object) {
    if (!object || !object->frame || (object->frame->index != 6 && object->frame->index != 11)) return false;

    Frames& frame = *static_cast<Frames*>(object->frame);
    return inputCovered(frame) || (playerInventoryObject(object) && !vitaMenuAllowsInventory(&frame));
}

bool vitaControlsAcceptsHit(FrameObject* object) {
    if (!object || !object->frame || state.frame != object->frame->index || !worldProxy(object->id)) return true;
    if (state.exercising && !state.modal) return false;
    if (state.touching || state.tap || state.touchUp || state.modal || state.inventory || !worldProxy(state.focusType)) return true;

    // The stick can cycle between overlapping NPCs. Their shared pixels must
    // activate only the selected base, rather than both inmates or a guard.
    int hitX;
    int hitY;
    return vitaControlsHitPoint(object, hitX, hitY);
}

bool vitaControlsHitPoint(FrameObject* object, int& hitX, int& hitY) {
    if (!object || !object->frame || state.frame != object->frame->index ||
        (state.frame != 6 && state.frame != 11) || !worldProxy(object->id) ||
        object->id != state.focusType || object->index != state.focusIndex ||
        state.exercising || state.modal || state.inventory || state.touching || state.tap || state.touchUp) return false;

    Frames& frame = *static_cast<Frames*>(object->frame);
    FrameObject* player = first(frame, playerBase_type);
    Target current;
    if (frame.group_code_menu_1 || !player || !player->collision || !player->layer || !target(object, current)) return false;

    int playerBox[4];
    player->get_screen_aabb(playerBox);
    int playerX = (playerBox[0] + playerBox[2]) / 2;
    int playerY = (playerBox[1] + playerBox[3]) / 2;
    int distanceX = std::max(current.box[0] - playerX, std::max(0, playerX - current.box[2]));
    int distanceY = std::max(current.box[1] - playerY, std::max(0, playerY - current.box[3]));
    if (distanceX * distanceX + distanceY * distanceY > 36 * 36) return false;

    // Movement runs after pad sampling. Resolve the selected NPC's current
    // opaque point when events test it, rather than its previous screen point.
    hitX = vita_view_collision_x(object, current.x);
    hitY = current.y - object->layer->off_y + frame.off_y;
    return true;
}

void vita_controls_release() {
    keys(std::vector<int>());
    mouse(false, false);
    state = ControlState();
    state.neutral = true;
    SDL_StopTextInput();
}

void vita_controls_pointer(int* x, int* y) {
    *x = state.x;
    *y = state.y;
}

void vita_controls_touch(int phase, int x, int y) {
    if (phase != 0 && !state.touching && !state.tap) return;

    state.x = std::max(0, std::min(VITA_CANVAS_WIDTH - 1, x));
    state.y = std::max(0, std::min(VITA_CANVAS_HEIGHT - 1, y));
    if (phase == 0) {
        // A fresh contact owns a fresh click, even after a missed release.
        mouse(false, false);
        state.touching = true;
        state.tap = true;
        state.touchUp = false;
        state.touchSeen = false;
    }

    if (phase == 2) {
        state.touching = false;
        state.touchUp = true;
    }
}

bool vita_controls_rebind(VitaAction action, std::uint32_t buttons) {
    if (!vita_bindings().set(action, buttons)) return false;

    vita_controls_release();
    return true;
}

void vita_controls_update(const VitaPadState& physical, float dt) {
    const VitaPadState pad = vita_bindings().map(physical);
    auto rememberInput = [&]() {
        state.previous = pad;
    };

    if (!manager.frame || manager.frame->index < 0) return;

    Frames& frame = *static_cast<Frames*>(manager.frame);
    if (state.frame != frame.index) {
        keys(std::vector<int>());
        mouse(false, false);
        state.focusType = state.focusIndex = -1;
        state.inventory = false;
        state.inventorySlot = 0;
        state.modal = false;
        state.terrain = false;
        state.frame = frame.index;
        rememberInput();
        state.navX = state.navY = 0;

        // A held confirm from the previous screen must not activate a new button.
        state.neutral = buttonsDown(physical);
    }

    if (state.neutral) {
        rememberInput();
        if (buttonsDown(physical)) return;

        state.neutral = false;
    }

    state.animation += std::max(0.f, std::min(.05f, dt));
    state.feedback = std::max(0.f, state.feedback - dt);

    std::vector<int> wanted;
    auto key = [&](int code, bool down) {
        if (down && code > 0 && std::find(wanted.begin(), wanted.end(), code) == wanted.end()) wanted.push_back(code);
    };

    bool gameplay = frame.index == 6 || frame.index == 11;
    FrameObject* player = gameplay ? first(frame, playerBase_type) : NULL;
    bool modal;
    std::vector<Target> all = collect(frame, gameplay, modal), items;
    int context = menuContext(frame, modal);
    if (!gameplay) {
        int layer = 0;
        for (const Target& t : all)
            layer = std::max(layer, t.object->layer->index);
        context += (layer + 1) * 16;
        if (frame.index == 3 && frame.group_rename_1) context += 256;
    }

    if (gameplay && inputCovered(frame)) {
        mouse(false, false);
        keys(wanted);
        state.inventory = false;
        state.focusType = -1;
        state.terrain = false;
        state.tap = state.touching = state.touchUp = state.touchSeen = false;
        state.neutral = buttonsDown(physical);
        rememberInput();
        return;
    }

    bool paused = gameplay && frame.group_code_menu_1;
    if (paused) state.inventory = false;
    bool triangle = pad.triangle && !state.previous.triangle;
    bool singleButtonExercise = frame.group_code_gym_equip_punch_bag_1 ||
        frame.group_code_gym_equip_speed_bag_1 || frame.group_code_gym_equip_skipping_1;
    bool exercising = gameplay && !modal && !paused && frame.group_code_1 && frame.group_code_gym_equip_1 &&
        (singleButtonExercise || frame.group_code_gym_equip_press_ups_1 ||
         frame.group_code_gym_equip_weights_1 || frame.group_code_gym_equip_treadmill_1);
    state.exercising = exercising;
    bool action1 = exercising ? pad.l || (singleButtonExercise && pad.r)
                              : vita_bindings().down(VitaAction::Action1, physical);
    bool action2 = exercising ? !singleButtonExercise && pad.r
                              : vita_bindings().down(VitaAction::Action2, physical);
    bool alternate = gameplay && !modal && (exercising || action1 || action2);
    if (state.modal != modal) state.inventory = false;
    bool inventoryAvailable = gameplay && !exercising && vitaMenuAllowsInventory(&frame);
    if (!inventoryAvailable) state.inventory = false;
    bool shoulderBrowse = inventoryAvailable && !alternate && (pad.l || pad.r);
    if (alternate) state.inventory = false;
    if (triangle && inventoryAvailable && !alternate) {
        state.inventory = !state.inventory;
        if (state.inventory && gameValue(frame, "SelectedSlot") > 0)
            state.inventorySlot = gameValue(frame, "SelectedSlot");
        state.focusType = -1;
    }

    int shoulder = (pad.r ? 1 : 0) - (pad.l ? 1 : 0);
    bool shoulderStep = shoulderNavigation(shoulderBrowse ? shoulder : 0, dt);
    bool menu = !gameplay || modal || paused || state.inventory;
    if (context != state.context && state.context >= 0) {
        state.focusType = -1;
        state.navX = state.navY = 0;
        mouse(false, false);

        // Opening a desk/dialog must not reuse its activating press as a
        // second click on the contents. Start a new gesture in the new panel.
        state.tap = state.touching = state.touchUp = state.touchSeen = false;
        if (buttonsDown(physical)) state.neutral = true;
    }

    state.modal = modal;
    state.context = context;
    if (state.neutral) {
        keys(wanted);
        rememberInput();
        return;
    }

    if (shoulderStep && !modal && !state.touching && !state.tap) {
        int selectedSlot = gameValue(frame, "SelectedSlot");
        int currentSlot = state.inventory || selectedSlot <= 0 ? state.inventorySlot : selectedSlot;
        int next = browseInventory(all, currentSlot, shoulder);
        if (next >= 0) {
            state.inventorySlot = inventorySlotNumber(all[next]);
            selectInventorySlot(frame, state.inventorySlot);
            state.feedback = .18f;
            if (state.inventory) focus(all[next]);
        }
    }

    for (const Target& t : all) {
        if (state.inventory && !modal && !playerInventory(t) && t.object->id != interfaceButtons_type) continue;
        if (menu ? !t.world : t.world) items.push_back(t);
    }

    std::sort(items.begin(), items.end(), [](const Target& a, const Target& b) {
        return a.y != b.y ? a.y < b.y : a.x != b.x ? a.x < b.x
                                                   : a.object->id < b.object->id;
    });
    if (modal || state.inventory) std::stable_partition(items.begin(), items.end(), [](const Target& t) {
        return state.inventory ? playerInventory(t) : !playerInventory(t);
    });

    bool touch = state.touching || state.tap;
    bool circle = pad.circle && !state.previous.circle;
    bool draggingSlider = false;
    int dx;
    int dy;
    bool digital = pad.left || pad.right || pad.up || pad.down;
    if (digital) {
        // Digital directions take priority over both sticks, including drift.
        dx = int(pad.right) - int(pad.left);
        dy = int(pad.down) - int(pad.up);
    }
    else {
        dx = axis(pad.lx);
        dy = axis(pad.ly);
    }

    bool cancelClick = false;
    if (menu) {
        if (!digital) {
            float x = pad.lx;
            float y = pad.ly;
            if (!dx && !dy) {
                x = pad.rx;
                y = pad.ry;
                dx = axis(x);
                dy = axis(y);
            }

            if (std::abs(x) > std::abs(y)) dy = 0;
            else if (dy) dx = 0;
        }
        else if (dx && dy) dx = 0;

        int current = focused(items);
        if (!touch && current < 0) state.focusType = -1;
        if (!touch && current < 0 && !items.empty()) {
            current = 0;
            if (state.inventory && !modal) {
                for (size_t i = 0; i < items.size(); i++)
                    if (playerInventory(items[i]) && inventorySlotNumber(items[i]) == state.inventorySlot) current = int(i);
            }
            focus(items[current]);
        }

        if (!touch && current >= 0 && !slider(items[current].object->id)) focus(items[current]);
        if (!touch && navigation(dx, dy, dt) && current >= 0) {
            if (slider(items[current].object->id) && dx) {
                const Target& t = items[current];
                state.x = std::max(t.box[0] + 1, std::min(t.box[2] - 2, state.x + dx * 3));
            }
            else {
                current = state.inventory && !modal ? navigateHud(items, current, dx, dy, state.inventorySlot)
                                                   : navigate(items, current, dx, dy, frame.index == 9 || paused);
                if (current >= 0) focus(items[current]);
            }
        }
        if (!touch && state.inventory && current >= 0 && playerInventory(items[current]))
            state.inventorySlot = inventorySlotNumber(items[current]);

        if (!touch && shoulderStep && modal) {
            int next = browseInventory(items, current >= 0 && playerInventory(items[current]) ? inventorySlotNumber(items[current]) : 0, shoulder);
            if (next >= 0) focus(items[next]);
        }

        draggingSlider = !touch && current >= 0 && slider(items[current].object->id) && dx;
        if (circle && state.inventory && !modal) {
            selectInventorySlot(frame, 0);
            state.inventory = false;
            state.focusType = -1;
            menu = false;
        }
        else if (gameplay && modal && !paused) {
            if (circle) {
                state.inventory = false;
                state.focusType = -1;
                mouse(false, false);
                cancelClick = outsideDialog(frame);
            }
        }
        else if (paused && circle) {
            Active* panel = static_cast<Active*>(first(frame, dialogPanel_type));
            if (panel && panel->test_animation(24) &&
                (panel->get_direction() == 4 || panel->get_direction() == 8)) {
                // Help uses its original Back button for topic/list navigation.
                for (const Target& target : items) {
                    if (target.object->id == dialogButton_type && static_cast<Active*>(target.object)->test_animation(41)) {
                        focus(target);
                        cancelClick = true;
                        break;
                    }
                }
            }
            else key(SDLK_ESCAPE, pad.circle);
        }
        else if (!gameplay) key(SDLK_ESCAPE, pad.circle);
    }
    else {
        if (circle && gameplay && gameValue(frame, "SelectedItem") > 0) selectInventorySlot(frame, 0);

        key(manager.up, dy < 0);
        key(manager.down, dy > 0);
        key(manager.left, dx < 0);
        key(manager.right, dx > 0);
        key(manager.button1, alternate && action1);
        key(manager.button2, alternate && action2);
        key(manager.button3 > 0 ? manager.button3 : SDLK_SPACE, pad.select);
        if (dx || dy) {
            state.facingX = dx;
            state.facingY = dy;
            if (dx && dy) state.facingY = 0;
        }

        int aimX = axis(pad.rx), aimY = axis(pad.ry);
        if (aimX || aimY) {
            state.facingX = aimX;
            state.facingY = aimY;
            if (aimX && aimY) {
                if (std::abs(pad.rx) >= std::abs(pad.ry)) state.facingY = 0;
                else state.facingX = 0;
            }
        }

        int carrying = gameValue(frame, "Carrying");
        state.carrying = carrying > 0;
        FrameObject* vars = first(frame, gameVariables_type);
        state.combat = vars && static_cast<AssociateArray*>(vars)->get_string("Cursor") == "Attack";
        if (!touch && player && player->collision) {
            int box[4];
            player->get_screen_aabb(box);
            int px = (box[0] + box[2]) / 2, py = (box[1] + box[3]) / 2;
            float best = std::numeric_limits<float>::max();
            int chosen = -1;
            bool newAim = (aimX || aimY) && (aimX != state.aimX || aimY != state.aimY);
            if (state.combat) state.terrain = false;
            bool screwTool = !state.carrying && !state.combat && unscrewingTool(frame);
            if (screwTool) state.terrain = false;
            bool barsTarget = cellBarsAhead(frame, player, state.facingX, state.facingY);
            bool groundTool = !screwTool && !state.carrying && !state.combat &&
                (terrainTool(frame, player) || barsTarget);
            if (state.tileLayer != player->layer->index ||
                (!groundTool && (std::abs(state.tileX - player->x) > 32 || std::abs(state.tileY - player->y) > 32)))
                state.terrain = false;
            if (newAim) state.terrain = groundTool;
            int locked = focused(items);
            std::vector<std::pair<float, int>> candidates;
            for (size_t i = 0; !state.carrying && !groundTool && !state.terrain && i < items.size(); ++i) {
                const Target& t = items[i];
                int vx = t.x - px;
                int vy = t.y - py;
                int nearX = std::max(t.box[0] - px, std::max(0, px - t.box[2]));
                int nearY = std::max(t.box[1] - py, std::max(0, py - t.box[3]));
                if (nearX * nearX + nearY * nearY > 36 * 36) continue;
                float along = vx * state.facingX + vy * state.facingY;
                float across = std::abs(vx * state.facingY - vy * state.facingX);
                bool overheadVent = screwTool && !aimX && aimY <= 0 && reachableVent(player, t);
                if (int(i) == locked && !newAim && !screwTool) {
                    chosen = locked;
                    break;
                }

                if (!overheadVent && (aimX || aimY) && (along <= 0 || across > along + 8)) continue;
                float score = std::sqrt(float(vx * vx + vy * vy)) + across * .6f + (along < 0 ? 32 : 0);
                if (overheadVent) score -= 1000;
                candidates.push_back(std::make_pair(score, int(i)));
                if (score < best) {
                    best = score;
                    chosen = int(i);
                }
            }

            if (newAim && aimX == state.lastAimX && aimY == state.lastAimY && candidates.size() > 1) {
                std::sort(candidates.begin(), candidates.end());
                for (size_t i = 0; i < candidates.size(); ++i)
                    if (candidates[i].second == locked) {
                        chosen = candidates[(i + 1) % candidates.size()].second;
                        break;
                    }
            }

            if (newAim) {
                state.lastAimX = aimX;
                state.lastAimY = aimY;
            }

            if (chosen >= 0) focus(items[chosen]);
            else {
                state.focusType = -1;
                int wx = player->x;
                int wy = player->y;
                if (newAim || !state.terrain || state.carrying ||
                    std::abs(state.tileX - wx) > 32 || std::abs(state.tileY - wy) > 32) {
                    state.tileX = int(std::floor(wx / 16.f)) * 16 + 8 + state.facingX * 16;
                    state.tileY = int(std::floor(wy / 16.f)) * 16 + 8 + state.facingY * 16;
                    if (carrying == 1) vitaDeskTarget(player, state.facingX, state.facingY, state.tileX, state.tileY);
                }

                state.tileLayer = player->layer->index;
                state.terrain = !state.carrying;
                int tileX = state.tileX;
                int tileY = state.tileY;
                state.x = std::max(0, std::min(VITA_CANVAS_WIDTH - 1, tileX + player->layer->off_x - frame.off_x + VITA_CANVAS_X));
                state.y = std::max(0, std::min(VITA_CANVAS_HEIGHT - 1, tileY + player->layer->off_y - frame.off_y));
                int distance2 = (tileX - wx) * (tileX - wx) + (tileY - wy) * (tileY - wy);
                int terrainReach = frame.index == 11 ? 16 : barsTarget ? 24 : 22;
                state.placementValid = carrying == 1 ? vitaDeskPlacementReach(tileX, tileY, wx, wy, frame.index == 11 ? 16 : 22, player)
                                                    : distance2 <= terrainReach * terrainReach;
            }
        }

        state.aimX = aimX;
        state.aimY = aimY;
    }

    key(SDLK_ESCAPE, pad.start && (!gameplay || !modal || paused));
    bool selectedInventorySlot = state.inventory && inventoryType(state.focusType) &&
                                 state.inventorySlot == gameValue(frame, "SelectedSlot");
    if (gameplay && !modal && !paused && !alternate && !touch && pad.cross && !pad.circle && !pad.square &&
        !state.carrying && (!state.inventory || selectedInventorySlot) && focusConsumable(frame))
        state.inventory = false;

    bool renaming = frame.index == 3 && frame.group_rename_1;
    if (renaming && !state.renaming) SDL_StartTextInput();
    if (!renaming && state.renaming) SDL_StopTextInput();
    state.renaming = renaming;
    if (renaming) {
        key(SDLK_RETURN, pad.cross);
        key(SDLK_BACKSPACE, pad.square);
#ifdef CHOWDREN_USE_EDITOBJ
        key(SDLK_RETURN, !manager.input.empty());
#endif
    }

    bool left = (!renaming && pad.cross && (state.focusType >= 0 || gameplay)) || draggingSlider || touch;
    bool right = !renaming && pad.square;
    if (circle || (pad.start && !state.previous.start)) {
        left = right = false;
    }

    if (cancelClick) {
        left = true;
        right = false;
    }

    if ((left && !state.left) || (right && !state.right)) state.feedback = .18f;
    mouse(left, right);
    keys(wanted);
    if (state.touchUp && state.touchSeen) {
        state.tap = state.touchUp = false;
    }

    state.touchSeen = touch;
    rememberInput();
}

void vita_controls_draw() {
    if (!manager.frame || state.frame != manager.frame->index) return;

    Frames& frame = *static_cast<Frames*>(manager.frame);
    if ((frame.index == 6 || frame.index == 11) && inputCovered(frame)) return;

    Render::set_view(0, 0, VITA_CANVAS_WIDTH, VITA_CANVAS_HEIGHT);
    // Focus boxes use canvas coordinates; pixelRect clips in centered script coordinates.
    Render::set_offset(VITA_CANVAS_X, 0);
    Render::disable_effect();
    Render::enable_blend();
    FrameObject* obj = NULL;
    if (state.focusType >= 0 && state.focusType < MAX_OBJECT_ID) {
        ObjectList& list = frame.instances.items[state.focusType];
        for (auto it = list.begin(); it != list.end(); ++it)
            if (it->obj && it->obj->index == state.focusIndex) {
                obj = it->obj;
                break;
            }
    }

    Target t;

    bool found = target(obj, t);
    if (found && state.focusPart) {
        std::vector<Target> parts;
        regions(frame, t, parts);
        found = false;
        for (const Target& part : parts)
            if (same(part)) {
                t = part;
                found = true;
                break;
            }
    }

    if (found) {
        Color color = state.feedback > 0 ? Color(244, 241, 218) : (state.inventory || playerInventory(t)) ? Color(100, 206, 221)
                                                              : (t.world && state.combat)                 ? Color(235, 91, 84)
                                                              : t.world                                   ? Color(144, 204, 112)
                                                                                                          : Color(239, 182, 92);
        pixelBrackets(t.box[0] - VITA_CANVAS_X - 2, t.box[1] - 2,
            t.box[2] - VITA_CANVAS_X + 2, t.box[3] + 2, color,
            state.feedback > 0 ? 0 : int(state.animation * 3) % 2);
    }
    else if ((frame.index == 6 || frame.index == 11) && !state.inventory && !state.modal) {
        int x = state.x - VITA_CANVAS_X;
        int y = state.y;
        Color color = state.feedback > 0 ? Color(244, 241, 218) : state.carrying ? (state.placementValid ? Color(100, 206, 221) : Color(235, 91, 84))
                                                                                 : Color(144, 204, 112);
        pixelBrackets(x - 8, y - 8, x + 8, y + 8, color, int(state.animation * 4) % 2);
        if (state.carrying) {
            int phase = int(state.animation * 6) % 3;
            pixelRect(x - 3, y + 5 - phase, x + 4, y + 6 - phase, color);
        }
    }

    if (frame.index == 9 && frame.group_base_layer_1) {
        Render::set_offset((VITA_CANVAS_WIDTH - 320) / 2, (VITA_CANVAS_HEIGHT - 240) / 2);
        drawSettingsStatus();
    }
}

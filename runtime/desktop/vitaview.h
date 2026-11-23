#ifndef CHOWDREN_VITA_VIEW_H
#define CHOWDREN_VITA_VIEW_H
class FrameObject;
class Frame;
class Image;
class Active;
bool vita_view_is_wide();
int vita_view_width();
int vita_view_height();
int vita_view_origin_x();
int vita_view_object_shift(FrameObject *object);
int vita_view_collision_x(FrameObject *object, int screen_x);
void vita_view_adjust_box(FrameObject *object, int box[4]);
bool vita_view_hide_object(FrameObject *object);
bool vitaControlsBlocksInput(FrameObject* object);
bool vitaControlsAcceptsHit(FrameObject* object);
bool vitaControlsHitPoint(FrameObject* object, int& hitX, int& hitY);
bool vitaMenuAllowsInventory(Frame* frame);
void vitaViewOrderHud(FrameObject** firstObject, FrameObject** lastObject);
bool vitaViewHudHit(FrameObject* object);
bool vitaViewCloudBox(FrameObject* object, int box[4]);
void vitaDeskTarget(FrameObject* player, int facingX, int facingY, int& targetX, int& targetY);
bool vitaDeskPlacementReach(int targetX, int targetY, int playerX, int playerY, int radius, FrameObject* player = nullptr);
bool vita_view_draw_overlay(FrameObject *object);
bool vita_view_draw_backdrop(FrameObject *object, Image *image);
bool vita_view_draw_fullscreen_active(Active *object);
bool vita_view_expand_rect(FrameObject *object, int &left, int &top, int &right, int &bottom);
#ifdef CHOWDREN_VITA_WIDE
#define VITA_CANVAS_WIDTH (vita_view_width())
#define VITA_CANVAS_HEIGHT (vita_view_height())
#define VITA_CANVAS_X (vita_view_origin_x())
#else
#define VITA_CANVAS_WIDTH WINDOW_WIDTH
#define VITA_CANVAS_HEIGHT WINDOW_HEIGHT
#define VITA_CANVAS_X 0
#endif
// Scripts always retain the original coordinate system, including UI and camera.
#define VITA_VIEW_X(obj, original) (original)
#define VITA_VIEW_Y(obj, original) (original)
#define VITA_VIEW_LEFT(obj, original) (original)
#define VITA_VIEW_RIGHT(obj, original) (original)
#define VITA_VIEW_TOP(obj, original) (original)
#define VITA_VIEW_BOTTOM(obj, original) (original)
#endif

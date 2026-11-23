#ifndef CHOWDREN_PRESENTATION_H
#define CHOWDREN_PRESENTATION_H
#include <algorithm>
#include <cmath>

struct PresentationRect { int x, y, width, height; };

// type: 0 aspect fit, 1 integer aspect fit, 2 stretch.
inline PresentationRect presentation_rect(int logical_w, int logical_h,
                                          int screen_w, int screen_h, int type)
{
    PresentationRect rect = {0, 0, 0, 0};
    if (logical_w <= 0 || logical_h <= 0 || screen_w <= 0 || screen_h <= 0) return rect;
    rect.width = screen_w; rect.height = screen_h;
    if (type != 2) {
        float scale = std::min(float(screen_w) / logical_w, float(screen_h) / logical_h);
        if (type == 1 && scale >= 1.0f) scale = std::floor(scale);
        rect.width = std::max(1, int(logical_w * scale));
        rect.height = std::max(1, int(logical_h * scale));
    }
    rect.x = (screen_w - rect.width) / 2;
    rect.y = (screen_h - rect.height) / 2;
    return rect;
}

inline int presentation_coordinate(int pixel, int offset, int extent, int logical)
{
    if (extent <= 0 || logical <= 0) return 0;
    return std::max(0, std::min(logical - 1, int((pixel - offset) * (float(logical) / extent))));
}
#endif

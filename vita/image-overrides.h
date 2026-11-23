#ifndef ESCAPISTS_VITA_IMAGE_OVERRIDES_H
#define ESCAPISTS_VITA_IMAGE_OVERRIDES_H

#include "image-source.h"

namespace esc {

    constexpr ImageSource titleLogoImage = {"app0:/overrides/title-logo.png", 61};

    // Register additional named sources here. Only registered image IDs probe PNGs.

    inline const ImageSource* find_image_source(unsigned int imageHandle) {
        const ImageSource* sources[] = {&titleLogoImage};
        for (const ImageSource* source : sources)
            if (source->fallbackImage == imageHandle) return source;

        return nullptr;
    }

}
#endif

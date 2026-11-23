#ifndef CHOWDREN_IMAGE_SOURCE_H
#define CHOWDREN_IMAGE_SOURCE_H

// A packaged replacement and the original Assets.dat image it falls back to.
struct ImageSource
{
    const char *overridePath;       // Empty/null disables the replacement.
    unsigned int fallbackImage;    // Original image ID, also the lookup key.
};

#endif

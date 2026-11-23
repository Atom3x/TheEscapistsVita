#ifndef CHOWDREN_VITABACKGROUND_H
#define CHOWDREN_VITABACKGROUND_H

#include <algorithm>

// The caller binds the background texture on unit zero. Keep the copy on the
// GPU: vitaGL's glCopyTexSubImage2D reads GPU memory back through the CPU.
// Clip to the viewport and remap the original quad's background UVs.
struct VitaBackgroundCopy
{
    GLuint framebuffer;
    int storage_width, storage_height;

    VitaBackgroundCopy() : framebuffer(0), storage_width(0), storage_height(0) {}

    void reset()
    {
        if (framebuffer) glDeleteFramebuffers(1, &framebuffer);
        framebuffer = 0;
        storage_width = storage_height = 0;
    }

    // Returns 1 for a copy, 0 for an offscreen quad, -1 for an incomplete FBO.
    int capture(GLuint texture, GLuint source, const int box[4],
                const int viewport[4], float uv[12])
    {
        const int left = std::max(0, box[0]);
        const int top = std::max(0, box[1]);
        const int right = std::min(viewport[2], box[2]);
        const int bottom = std::min(viewport[3], box[3]);
        const int width = right - left;
        const int height = bottom - top;
        const bool visible = width > 0 && height > 0;
        const int w = visible ? width : 1, h = visible ? height : 1;
        if (storage_width != w || storage_height != h) {
            // Release the attachment before replacing its texture storage.
            reset();
            const unsigned char black[4] = {0, 0, 0, 0};
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, w, h, 0,
                         GL_RGBA, GL_UNSIGNED_BYTE, visible ? NULL : black);
            storage_width = w;
            storage_height = h;
            glGenFramebuffers(1, &framebuffer);
            glBindFramebuffer(GL_DRAW_FRAMEBUFFER, framebuffer);
            glFramebufferTexture2D(GL_DRAW_FRAMEBUFFER, GL_COLOR_ATTACHMENT0,
                                   GL_TEXTURE_2D, texture, 0);
            const bool complete = glCheckFramebufferStatus(GL_DRAW_FRAMEBUFFER) == GL_FRAMEBUFFER_COMPLETE;
            glBindFramebuffer(GL_FRAMEBUFFER, source);
            if (!complete) {
                reset();
                return -1;
            }
        }
        if (!visible) {
            std::fill(uv, uv + 12, 0.0f);
            return 0;
        }

        glBindFramebuffer(GL_READ_FRAMEBUFFER, source);
        glBindFramebuffer(GL_DRAW_FRAMEBUFFER, framebuffer);
        glBlitFramebuffer(viewport[0] + left, viewport[1] + viewport[3] - bottom,
                           viewport[0] + right, viewport[1] + viewport[3] - top,
                           0, 0, width, height, GL_COLOR_BUFFER_BIT, GL_NEAREST);
        // Both bindings must again name the game target before the effect draws.
        glBindFramebuffer(GL_FRAMEBUFFER, source);

        const float u1 = (float(box[0]) - left) / width;
        const float u2 = (float(box[2]) - left) / width;
        const float v1 = (float(bottom) - box[1]) / height;
        const float v2 = (float(bottom) - box[3]) / height;
        const float coords[12] = {u1, v1, u2, v1, u2, v2,
                                  u2, v2, u1, v2, u1, v1};
        std::copy(coords, coords + 12, uv);
        return 1;
    }
};

#endif

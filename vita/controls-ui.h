#include "vitabindings.h"
#include "vitaview.h"

// Draw focus markers and status text on the game's logical pixel grid.

void pixelRect(int x1, int y1, int x2, int y2, Color c) {
    x1 = std::max(-VITA_CANVAS_X, x1);
    y1 = std::max(0, y1);
    x2 = std::min(VITA_CANVAS_WIDTH - VITA_CANVAS_X, x2);
    y2 = std::min(WINDOW_HEIGHT, y2);
    if (x1 < x2 && y1 < y2) Render::draw_quad(x1, y1, x2, y2, c);
}

void pixelBrackets(int x1, int y1, int x2, int y2, Color c, int pulse) {
    x1 -= pulse;
    y1 -= pulse;
    x2 += pulse;
    y2 += pulse;
    const Color shadow(31, 26, 28, 230);
    for (int pass = 0; pass < 2; ++pass) {
        Color ink = pass ? c : shadow;
        int d = pass ? 0 : 1;
        for (int side = 0; side < 2; ++side)
            for (int bottom = 0; bottom < 2; ++bottom) {
                int x = side ? x2 - 1 : x1, y = bottom ? y2 - 1 : y1;
                pixelRect(x + (side ? -3 : 0) + d, y + d, x + (side ? 1 : 4) + d, y + 1 + d, ink);
                pixelRect(x + d, y + (bottom ? -3 : 0) + d, x + 1 + d, y + (bottom ? 1 : 4) + d, ink);
            }
    }
}

// Three by five bitmap alphabet. Rows are packed from top to bottom.
unsigned int pixelGlyph(char c) {
    static const unsigned int letters[] = {
        0x2bed, 0x6bae, 0x3923, 0x6b6e, 0x79a7, 0x79a4, 0x396b, 0x5bed, 0x7497,
        0x124a, 0x5bad, 0x4927, 0x5fed, 0x5f6d, 0x2b6a, 0x6ba4, 0x2b7b, 0x6bad,
        0x38ce, 0x7492, 0x5b6f, 0x5b6a, 0x5bfd, 0x5aad, 0x5a92, 0x72a7};
    if (c >= 'A' && c <= 'Z') return letters[c - 'A'];

    static const unsigned int digits[] = {
        0x7b6f, 0x2c97, 0x73e7, 0x73cf, 0x5bc9, 0x79cf, 0x79ef, 0x7249, 0x7bef, 0x7bcf};
    if (c >= '0' && c <= '9') return digits[c - '0'];
    if (c == '/') return 0x12a4;
    if (c == '-') return 0x01c0;
    if (c == ':') return 0x0410;
    if (c == '+') return 0x05d0;

    return 0;
}

void pixelText(int x, int y, const char* text, Color ink, int scale = 1) {
    const std::string labels = vita_bindings().format(text, true);
    text = labels.c_str();
    for (; *text; ++text, x += 4 * scale) {
        unsigned int bits = pixelGlyph(*text);
        for (int row = 0; row < 5; ++row)
            for (int col = 0; col < 3; ++col)
                if (bits & (1u << (14 - row * 3 - col)))
                    pixelRect(x + col * scale, y + row * scale, x + (col + 1) * scale, y + (row + 1) * scale, ink);
    }
}

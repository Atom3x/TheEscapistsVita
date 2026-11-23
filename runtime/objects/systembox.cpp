#include "objects/systembox.h"
#include "include_gl.h"
#include "collision.h"
#include <iostream>
#include "render.h"
#include "common.h"
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
#include "vitacontroltext.h"
#include "vitaview.h"
#include "textencoding.h"
#endif

SystemBox::SystemBox(int x, int y, int type_id)
: FrameObject(x, y, type_id), layout(NULL), requestedWidth(-1), requestedHeight(-1)
{
    collision = new InstanceBox(this);
}

SystemBox::~SystemBox()
{
    delete collision;
    delete layout;
}

inline int align_pos(int a, int b)
{
    if (a <= 0)
        return 0;
    return (a / b) * b;
}

void SystemBox::draw()
{
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    fitText();
    const std::string display_text = TextEncoding::legacy_to_utf8(vita_control_text(text));
#else
    const std::string &display_text = text;
#endif
    if (image == NULL) {
        int x1 = x;
        int y1 = y;
        int x2 = x1 + width;
        int y2 = y1 + height;
        Render::draw_quad(x1, y1, x2, y2, Color(0, 0, 0));
        x1++;
        y1++;
        x2--;
        y2--;
        Render::draw_quad(x1, y1, x2, y2, blend_color);

        FTTextureFont * font;
        if (layout == NULL) {
            if (!init_font())
                return;
            layout = new FTSimpleLayout();
            font = get_font(12);
            layout->SetFont(font);
            layout->SetAlignment(ALIGN_HCENTER);
            layout->SetLineLength(width);
        } else {
            font = get_font(12);
        }

        double off_y = y + font->Ascender();

        FTBBox bb = layout->BBox(display_text.c_str(), -1);
        double box_h = bb.Upper().Y() - bb.Lower().Y();
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
        box_h = std::max(1, layout->get_lines(display_text.c_str(), -1)) * font->LineHeight();
#endif
        off_y += (height - box_h) * 0.5;

        FTTextureFont::color = Color(0, 0, 0, 255);
        int textX = x;
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
        textX += 3;
#endif
        layout->Render(display_text.c_str(), -1, FTPoint(textX, int(off_y) - 1));
        // std::cout << "Draw system text: " << text << " " << name << std::endl;
        return;
    }
    int xx, yy;
    switch (type) {
        case PATTERN_IMAGE: {
            // XXX use Render::offset for offset here?
            int screen_x1 = 0 - (layer->off_x - frame->off_x);
            int screen_y1 = 0 - (layer->off_y - frame->off_y);
            int screen_x2 = screen_x1 + WINDOW_WIDTH;
            int screen_y2 = screen_y1 + WINDOW_HEIGHT;

            int x1 = x;
            int y1 = y;
            int x2 = x + width;
            int y2 = y + height;

            int xx1, yy1, xx2, yy2;
            intersect(screen_x1, screen_y1, screen_x2, screen_y2,
                      x1, y1, x2, y2,
                      xx1, yy1, xx2, yy2);

            x1 += ((xx1 - x1) / image->width) * image->width;
            y1 += ((yy1 - y1) / image->height) * image->height;
            x2 += ((xx2 - x2) / image->width) * image->width;
            y2 += ((yy2 - y2) / image->height) * image->height;

            Render::enable_scissor(x, y, width, height);
            for (xx = x1; xx < x2; xx += image->width)
            for (yy = y1; yy < y2; yy += image->height) {
                draw_image(image, xx + image->hotspot_x,
                           yy + image->hotspot_y, Color());
            }
			Render::disable_scissor();
            break;
        }
        case CENTER_IMAGE:
            xx = x + width / 2 - image->width / 2;
            yy = y + height / 2 - image->height / 2;
            draw_image(image, xx + image->hotspot_x, yy + image->hotspot_y,
                       Color());
            break;
        case TOPLEFT_IMAGE:
            draw_image(image, x + image->hotspot_x, y + image->hotspot_y,
                       Color());
            break;
        default:
            break;
    }
}

void SystemBox::hide_border_1()
{
    // std::cout << "Hide System Box border 1 not implemented" << std::endl;
}

void SystemBox::hide_border_2()
{
    // std::cout << "Hide System Box border 1 not implemented" << std::endl;
}

void SystemBox::hide_fill()
{
    // std::cout << "Hide System Box fill not implemented" << std::endl;
}

void SystemBox::set_size(int w, int h)
{
    requestedWidth = w;
    requestedHeight = h;
    width = w;
    height = h;
    collision->update_aabb();
    if (layout == NULL)
        return;
    layout->SetLineLength(width);
    fitText();
}

void SystemBox::set_text(const std::string & text)
{
    this->text = text;
    fitText();
}

void SystemBox::fitText() {
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    if (image || !frame || !layer || !init_font()) return;

    if (requestedWidth < 0) requestedWidth = width;
    if (requestedHeight < 0) requestedHeight = height;
    FTTextureFont* font = get_font(12);
    const std::string displayText = TextEncoding::legacy_to_utf8(vita_control_text(text));
    FTBBox natural = font->BBox(displayText.c_str(), -1, FTPoint());
    int contentWidth = int(std::ceil(natural.Upper().X() - natural.Lower().X())) + 6;
    width = std::min(VITA_CANVAS_WIDTH - 8, std::max(requestedWidth, contentWidth));
    if (!layout) layout = new FTSimpleLayout();
    layout->SetFont(font);
    layout->SetAlignment(ALIGN_HCENTER);
    layout->SetLineLength(std::max(1, width - 6));
    int lines = std::max(1, layout->get_lines(displayText.c_str(), -1));
    height = std::max(requestedHeight, int(std::ceil(lines * font->LineHeight())) + 6);

    int offsetX = VITA_CANVAS_X + vita_view_object_shift(this) + layer->off_x - frame->off_x;
    int offsetY = layer->off_y - frame->off_y;
    set_x(std::max(4, std::min(VITA_CANVAS_WIDTH - 4 - width, x + offsetX)) - offsetX);
    set_y(std::max(4, std::min(VITA_CANVAS_HEIGHT - 4 - height, y + offsetY)) - offsetY);
    collision->update_aabb();
#endif
}

void SystemBox::set_border_1(Color color)
{

}

void SystemBox::set_border_2(Color color)
{

}

void SystemBox::set_fill(Color color)
{
    blend_color = color;
}

const std::string & SystemBox::get_font_name()
{
    return empty_string;
}

class DefaultInstance : public SystemBox
{
public:
    DefaultInstance()
    : SystemBox(0, 0, 0)
    {
        collision = new InstanceBox(this);
        create_alterables();
        setup_default_instance(this);
    }
};

static DefaultInstance default_systembox;
FrameObject * default_systembox_instance = &default_systembox;

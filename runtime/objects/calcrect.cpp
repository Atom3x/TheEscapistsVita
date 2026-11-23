#include "objects/calcrect.h"
#include "font.h"
#include "common.h"
#include "textencoding.h"
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
#include "vitacontroltext.h"
#endif
#include <iostream>

static std::string calc_text;
static FTSimpleLayout layout;
static bool layout_init = false;
static bool calcValid = false;
static int calc_width, calc_height;
static int calc_max_width = 1000000;

void CalcRect::set_text(const std::string & text)
{
#ifdef CHOWDREN_VITA_PACKAGED_ASSETS
    const std::string display_text = TextEncoding::legacy_to_utf8(vita_control_text(text));
#else
    const std::string &display_text = text;
#endif
    if (calcValid && calc_text == display_text)
        return;
    if (!layout_init)
        set_font(empty_string, 12, 0);
    if (!layout_init)
        return;
    calc_text = display_text;
    FTBBox bb = layout.BBox(display_text.c_str(), -1);
    calc_width = int(std::ceil(bb.Upper().X() - bb.Lower().X()));
    calc_height = int(std::ceil(std::max(1, layout.get_lines(display_text.c_str(), -1)) * layout.GetFont()->LineHeight()));
    calcValid = true;
    // std::cout << "calc size: " << text << " " << calc_width << " "
    //     << calc_height << std::endl;
    // std::cout << "CalcRect: Set text: " << text << std::endl;
}

void CalcRect::set_font(const std::string & font_name, int size, int style)
{
    if (!init_font())
        return;
    FTTextureFont * font = get_font(size);
    if (layout_init && layout.GetFont() == font)
        return;
    layout_init = true;
    calcValid = false;
    layout.SetFont(font);
    layout.SetLineLength(calc_max_width);
    // std::cout << "CalcRect: Set font: " << font << " " << size << " "
    //     << style << std::endl;
}

void CalcRect::set_max_width(int width)
{
    width = std::max(1, width);
    if (calc_max_width == width) return;

    calc_max_width = width;
    layout.SetLineLength(calc_max_width);
    calcValid = false;
    // std::cout << "CalcRect: Set max width: " << width << std::endl;
}

int CalcRect::get_width()
{
    return calc_width + 2;
}

int CalcRect::get_height()
{
    return calc_height;
}

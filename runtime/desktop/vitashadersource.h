#ifndef CHOWDREN_VITASHADERSOURCE_H
#define CHOWDREN_VITASHADERSOURCE_H

#include <string>
#include <cctype>

inline void vita_shader_replace(std::string &source, const std::string &from,
                                const std::string &to)
{
    size_t pos = 0;
    while ((pos = source.find(from, pos)) != std::string::npos) {
        const size_t end = pos + from.size();
        const bool left = pos && (std::isalnum(static_cast<unsigned char>(source[pos-1])) || source[pos-1] == '_');
        const bool right = end < source.size() && (std::isalnum(static_cast<unsigned char>(source[end])) || source[end] == '_');
        if (!left && !right) source.replace(pos, from.size(), to);
        pos += !left && !right ? to.size() : from.size();
    }
}

// vitaGL's programmable pipeline uses generic attributes, not the legacy
// client arrays that desktop compatibility GL aliases to these built-ins.
inline std::string vita_shader_source(std::string source, bool vertex, bool screen_background = false)
{
    std::string declarations;
    if (vertex) {
        declarations = "attribute vec4 in_pos;\nattribute vec4 in_blend_color;\n"
                       "attribute vec4 in_tex_coord1;\nattribute vec4 in_tex_coord2;\n";
        vita_shader_replace(source, "gl_Vertex", "in_pos");
        vita_shader_replace(source, "gl_Color", "in_blend_color");
        vita_shader_replace(source, "gl_MultiTexCoord0", "in_tex_coord1");
        // Background effects sample the exact pixel being drawn. A collision
        // rectangle can differ from the visual quad after scaling/rotation.
        vita_shader_replace(source, "gl_MultiTexCoord1", screen_background
            ? "vec4((in_pos.xy + vec2(1.0)) * 0.5, 0.0, 1.0)" : "in_tex_coord2");
        vita_shader_replace(source, "gl_FrontColor", "chow_vertex_color");
    } else {
        vita_shader_replace(source, "gl_Color", "chow_vertex_color");
    }
    declarations += "varying vec4 chow_vertex_color;\n";
    const size_t version = source.find("#version");
    size_t insert = version == std::string::npos ? 0 : source.find('\n', version);
    if (insert == std::string::npos) { source += '\n'; insert = source.size(); }
    else if (version != std::string::npos) ++insert;
    source.insert(insert, declarations);
    return source;
}

#endif

#ifndef CHOWDREN_TEXTENCODING_H
#define CHOWDREN_TEXTENCODING_H

#include <cstdint>
#include <string>

namespace TextEncoding {

inline bool next_utf8(const std::string &text, size_t &position, std::uint32_t &codepoint)
{
    if (position >= text.size()) return false;
    const unsigned char lead = static_cast<unsigned char>(text[position]);
    size_t length;
    std::uint32_t minimum;
    if (lead < 0x80) { length = 1; minimum = 0; codepoint = lead; }
    else if (lead >= 0xc2 && lead <= 0xdf) { length = 2; minimum = 0x80; codepoint = lead & 0x1f; }
    else if (lead >= 0xe0 && lead <= 0xef) { length = 3; minimum = 0x800; codepoint = lead & 0x0f; }
    else if (lead >= 0xf0 && lead <= 0xf4) { length = 4; minimum = 0x10000; codepoint = lead & 7; }
    else return false;
    if (position + length > text.size()) return false;
    for (size_t index = 1; index < length; ++index) {
        const unsigned char byte = static_cast<unsigned char>(text[position + index]);
        if ((byte & 0xc0) != 0x80) return false;
        codepoint = (codepoint << 6) | (byte & 0x3f);
    }
    if (codepoint < minimum || codepoint > 0x10ffff ||
        (codepoint >= 0xd800 && codepoint <= 0xdfff)) return false;
    position += length;
    return true;
}

inline void append_utf8(std::string &text, std::uint32_t codepoint)
{
    if (codepoint < 0x80) text += char(codepoint);
    else if (codepoint < 0x800) {
        text += char(0xc0 | (codepoint >> 6));
        text += char(0x80 | (codepoint & 0x3f));
    } else if (codepoint < 0x10000) {
        text += char(0xe0 | (codepoint >> 12));
        text += char(0x80 | ((codepoint >> 6) & 0x3f));
        text += char(0x80 | (codepoint & 0x3f));
    } else {
        text += char(0xf0 | (codepoint >> 18));
        text += char(0x80 | ((codepoint >> 12) & 0x3f));
        text += char(0x80 | ((codepoint >> 6) & 0x3f));
        text += char(0x80 | (codepoint & 0x3f));
    }
}

// Fusion string expressions count characters, rather than UTF-8 bytes. Keep
// legacy single-byte strings usable too, until they reach the INI decoder.
inline size_t byte_offset(const std::string &text, int characters)
{
    size_t position = 0;
    std::uint32_t codepoint;
    for (int index = 0; index < characters && position < text.size(); ++index)
        if (!next_utf8(text, position, codepoint)) ++position;
    return position;
}

inline int character_count(const std::string &text)
{
    size_t position = 0;
    int count = 0;
    std::uint32_t codepoint;
    while (position < text.size()) {
        if (!next_utf8(text, position, codepoint)) ++position;
        ++count;
    }
    return count;
}

inline std::string substring(const std::string &text, int index, int count)
{
    const size_t first = byte_offset(text, index);
    const size_t last = first + byte_offset(text.substr(first), count);
    return text.substr(first, last - first);
}

// The original Western European INI files use Windows-1252. Already-valid
// UTF-8 (including converted UTF-16 language files) must pass through unchanged.
inline std::string legacy_to_utf8(const std::string &text)
{
    size_t position = 0;
    std::uint32_t codepoint;
    while (position < text.size() && next_utf8(text, position, codepoint)) {}
    if (position == text.size()) return text;
    static const std::uint16_t windows1252[] = {
        0x20ac,0x0081,0x201a,0x0192,0x201e,0x2026,0x2020,0x2021,
        0x02c6,0x2030,0x0160,0x2039,0x0152,0x008d,0x017d,0x008f,
        0x0090,0x2018,0x2019,0x201c,0x201d,0x2022,0x2013,0x2014,
        0x02dc,0x2122,0x0161,0x203a,0x0153,0x009d,0x017e,0x0178
    };
    std::string result;
    result.reserve(text.size());
    for (unsigned char byte : text)
        append_utf8(result, byte >= 0x80 && byte < 0xa0 ? windows1252[byte - 0x80] : byte);
    return result;
}

inline std::string change_case(const std::string &source, bool upper)
{
    const std::string text = legacy_to_utf8(source);
    std::string result;
    result.reserve(text.size());
    size_t position = 0;
    std::uint32_t codepoint;
    static const std::uint16_t pairs[][2] = {
        {0x0104,0x0105},{0x0106,0x0107},{0x0118,0x0119},
        {0x0141,0x0142},{0x0143,0x0144},{0x0152,0x0153},
        {0x015a,0x015b},{0x0160,0x0161},{0x0178,0x00ff},
        {0x0179,0x017a},{0x017b,0x017c},{0x017d,0x017e}
    };
    while (next_utf8(text, position, codepoint)) {
        if (upper && codepoint == 0x00df) { result += "SS"; continue; }
        if (upper) {
            if ((codepoint >= 'a' && codepoint <= 'z') ||
                (codepoint >= 0x00e0 && codepoint <= 0x00fe && codepoint != 0x00f7) ||
                (codepoint >= 0x0430 && codepoint <= 0x044f)) codepoint -= 32;
            else if (codepoint >= 0x0450 && codepoint <= 0x045f) codepoint -= 80;
            else for (const auto &pair : pairs) if (codepoint == pair[1]) { codepoint = pair[0]; break; }
        } else {
            if ((codepoint >= 'A' && codepoint <= 'Z') ||
                (codepoint >= 0x00c0 && codepoint <= 0x00de && codepoint != 0x00d7) ||
                (codepoint >= 0x0410 && codepoint <= 0x042f)) codepoint += 32;
            else if (codepoint >= 0x0400 && codepoint <= 0x040f) codepoint += 80;
            else for (const auto &pair : pairs) if (codepoint == pair[0]) { codepoint = pair[1]; break; }
        }
        append_utf8(result, codepoint);
    }
    return result;
}
}
#endif

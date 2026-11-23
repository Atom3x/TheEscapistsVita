#ifndef CHOWDREN_VITAPATH_H
#define CHOWDREN_VITAPATH_H

#include <string>
#include <vector>

// sceIo* does not use newlib's working directory, although fopen does.
inline std::string vita_absolute_path(const std::string &value)
{
    if (value.empty()) return value;
    std::string path = value;
    for (size_t i = 0; i < path.size(); ++i)
        if (path[i] == '\\') path[i] = '/';
    if (path.find(':') == std::string::npos)
        path = path[0] == '/' ? "ux0:" + path : "ux0:/data/theescapists/" + path;
    const size_t colon = path.find(':');
    std::vector<std::string> parts;
    size_t start = colon + 1;
    while (start < path.size()) {
        size_t end = path.find('/', start);
        if (end == std::string::npos) end = path.size();
        const std::string part = path.substr(start, end - start);
        if (part == "..") { if (!parts.empty()) parts.pop_back(); }
        else if (!part.empty() && part != ".") parts.push_back(part);
        start = end + 1;
    }
    std::string result = path.substr(0, colon + 1) + "/";
    for (size_t i = 0; i < parts.size(); ++i) {
        if (i) result += '/';
        result += parts[i];
    }
    return result;
}

#endif

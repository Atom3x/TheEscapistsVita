#include "catalog.h"

// Use the engine's existing public-domain decoder, compiled as C++. No host
// image library or Python dependency is introduced by trophy preparation.
#define STB_IMAGE_IMPLEMENTATION
#define STBI_ONLY_JPEG
#define STBI_ONLY_PNG
#define STBI_NO_HDR
#define STBI_NO_LINEAR
#define STBI_NO_SIMD
#include <stb_image.h>
#include <algorithm>
#include <array>
#include <cctype>
#include <cstdint>
#include <fstream>
#include <iostream>
#include <iterator>
#include <limits>
#include <memory>
#include <set>
#include <sstream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {
    using Bytes = std::vector<uint8_t>;

    void require(bool condition, const std::string& message) {
        if (!condition) throw std::runtime_error(message);
    }

    Bytes readFile(const std::string& path) {
        std::ifstream file(path, std::ios::binary);
        require(bool(file), "Cannot open " + path);

        Bytes bytes((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        require(!file.bad(), "Cannot read " + path);

        return bytes;
    }

    void appendInteger(Bytes& bytes, uint64_t value, unsigned count) {
        for (unsigned byteIndex = count; byteIndex; byteIndex--)
            bytes.push_back(uint8_t(value >> ((byteIndex - 1) * 8)));
    }

    void putInteger(Bytes& bytes, size_t offset, uint64_t value, unsigned count) {
        for (unsigned byteIndex = count; byteIndex; byteIndex--)
            bytes.at(offset++) = uint8_t(value >> ((byteIndex - 1) * 8));
    }

    uint32_t littleInteger(const Bytes& bytes, size_t offset, unsigned count) {
        require(offset <= bytes.size() && count <= bytes.size() - offset, "Truncated ZIP structure");

        uint32_t value = 0;
        for (unsigned byteIndex = 0; byteIndex < count; byteIndex++)
            value |= uint32_t(bytes[offset + byteIndex]) << (byteIndex * 8);

        return value;
    }

    uint32_t rotate(uint32_t value, unsigned count) {
        return (value << count) | (value >> (32 - count));
    }

    Bytes sha1(Bytes bytes) {
        uint64_t bits = uint64_t(bytes.size()) * 8;
        bytes.push_back(0x80);
        while (bytes.size() % 64 != 56) bytes.push_back(0);
        appendInteger(bytes, bits, 8);

        uint32_t state[] = {0x67452301, 0xefcdab89, 0x98badcfe, 0x10325476, 0xc3d2e1f0};
        for (size_t offset = 0; offset < bytes.size(); offset += 64) {
            uint32_t words[80] = {};
            for (unsigned wordIndex = 0; wordIndex < 16; wordIndex++) {
                for (unsigned byteIndex = 0; byteIndex < 4; byteIndex++)
                    words[wordIndex] = (words[wordIndex] << 8) | bytes[offset + wordIndex * 4 + byteIndex];
            }

            for (unsigned wordIndex = 16; wordIndex < 80; wordIndex++)
                words[wordIndex] = rotate(words[wordIndex - 3] ^ words[wordIndex - 8] ^ words[wordIndex - 14] ^ words[wordIndex - 16], 1);

            uint32_t workingA = state[0];
            uint32_t workingB = state[1];
            uint32_t workingC = state[2];
            uint32_t workingD = state[3];
            uint32_t workingE = state[4];

            for (unsigned round = 0; round < 80; round++) {
                uint32_t function = round < 20 ? (workingB & workingC) | (~workingB & workingD) :
                    round < 40 ? workingB ^ workingC ^ workingD :
                    round < 60 ? (workingB & workingC) | (workingB & workingD) | (workingC & workingD) : workingB ^ workingC ^ workingD;
                uint32_t constant = round < 20 ? 0x5a827999 : round < 40 ? 0x6ed9eba1 : round < 60 ? 0x8f1bbcdc : 0xca62c1d6;
                uint32_t next = rotate(workingA, 5) + function + workingE + constant + words[round];

                workingE = workingD;
                workingD = workingC;
                workingC = rotate(workingB, 30);
                workingB = workingA;
                workingA = next;
            }

            state[0] += workingA;
            state[1] += workingB;
            state[2] += workingC;
            state[3] += workingD;
            state[4] += workingE;
        }

        Bytes digest;
        for (uint32_t value : state) appendInteger(digest, value, 4);

        return digest;
    }

    uint32_t crc32(const Bytes& bytes) {
        uint32_t crc = 0xffffffff;
        for (uint8_t byte : bytes) {
            crc ^= byte;
            for (unsigned bit = 0; bit < 8; bit++) crc = (crc >> 1) ^ ((crc & 1) ? 0xedb88320 : 0);
        }

        return ~crc;
    }

    struct BitWriter {
        Bytes bytes;
        unsigned used = 0;

        void write(unsigned value, unsigned count) {
            for (unsigned bit = 0; bit < count; bit++) {
                if (!used) bytes.push_back(0);
                bytes.back() |= ((value >> bit) & 1) << used;
                used = (used + 1) % 8;
            }
        }

        void huffman(unsigned code, unsigned bits) {
            unsigned reversed = 0;
            for (unsigned bit = 0; bit < bits; bit++) reversed = (reversed << 1) | ((code >> bit) & 1);

            write(reversed, bits);
        }

        void symbol(unsigned value) {
            if (value < 144) huffman(0x30 + value, 8);
            else if (value < 256) huffman(0x190 + value - 144, 9);
            else if (value < 280) huffman(value - 256, 7);
            else huffman(0xc0 + value - 280, 8);
        }
    };

    // Fixed Huffman DEFLATE with a bounded LZ77 search. No host zlib dependency.
    Bytes compress(const Bytes& input) {
        static const unsigned lengths[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 15, 17, 19, 23, 27, 31, 35, 43, 51, 59, 67, 83, 99, 115, 131, 163, 195, 227, 258};
        static const unsigned lengthBits[] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 0};
        static const unsigned distances[] = {1, 2, 3, 4, 5, 7, 9, 13, 17, 25, 33, 49, 65, 97, 129, 193, 257, 385, 513, 769, 1025, 1537, 2049, 3073, 4097, 6145, 8193, 12289, 16385, 24577};
        static const unsigned distanceBits[] = {0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13};

        std::array<int, 65536> heads;
        heads.fill(-1);
        std::vector<int> previous(input.size(), -1);
        auto hash = [&](size_t position) {
            return ((unsigned(input[position]) * 251 + input[position + 1]) * 251 + input[position + 2]) & 65535;
        };

        BitWriter writer;
        writer.write(3, 3); // Final block, fixed Huffman codes.
        for (size_t position = 0; position < input.size();) {
            unsigned bestLength = 0;
            unsigned bestDistance = 0;

            if (position + 2 < input.size()) {
                int candidate = heads[hash(position)];
                for (unsigned attempt = 0; candidate >= 0 && position - size_t(candidate) <= 32768 && attempt < 64; attempt++) {
                    unsigned length = 0;
                    while (length < 258 && position + length < input.size() && input[candidate + length] == input[position + length]) length++;

                    if (length > bestLength) {
                        bestLength = length;
                        bestDistance = unsigned(position - candidate);
                    }

                    if (bestLength == 258) break;
                    candidate = previous[candidate];
                }
            }

            unsigned consumed = bestLength >= 3 ? bestLength : 1;
            if (bestLength >= 3) {
                unsigned lengthIndex = 0;
                unsigned distanceIndex = 0;
                while (lengthIndex < 28 && bestLength >= lengths[lengthIndex + 1]) lengthIndex++;
                while (distanceIndex < 29 && bestDistance >= distances[distanceIndex + 1]) distanceIndex++;

                writer.symbol(257 + lengthIndex);
                writer.write(bestLength - lengths[lengthIndex], lengthBits[lengthIndex]);
                writer.huffman(distanceIndex, 5);
                writer.write(bestDistance - distances[distanceIndex], distanceBits[distanceIndex]);
            }
            else writer.symbol(input[position]);

            for (size_t end = position + consumed; position < end; position++) {
                if (position + 2 >= input.size()) continue;

                unsigned key = hash(position);
                previous[position] = heads[key];
                heads[key] = int(position);
            }
        }

        writer.symbol(256);
        Bytes output = {0x78, 0x01};
        output.insert(output.end(), writer.bytes.begin(), writer.bytes.end());

        uint32_t adlerSum = 1;
        uint32_t adlerAccumulated = 0;
        for (uint8_t value : input) {
            adlerSum = (adlerSum + value) % 65521;
            adlerAccumulated = (adlerAccumulated + adlerSum) % 65521;
        }

        appendInteger(output, (adlerAccumulated << 16) | adlerSum, 4);
        return output;
    }

    void pngChunk(Bytes& png, const std::string& type, const Bytes& data) {
        appendInteger(png, data.size(), 4);
        Bytes chunk(type.begin(), type.end());
        chunk.insert(chunk.end(), data.begin(), data.end());
        png.insert(png.end(), chunk.begin(), chunk.end());
        appendInteger(png, crc32(chunk), 4);
    }

    Bytes encodePng(unsigned width, unsigned height, const Bytes& scanlines) {
        Bytes png = {137, 80, 78, 71, 13, 10, 26, 10};
        Bytes header;
        appendInteger(header, width, 4);
        appendInteger(header, height, 4);
        header.insert(header.end(), {8, 6, 0, 0, 0});

        pngChunk(png, "IHDR", header);
        pngChunk(png, "IDAT", compress(scanlines));
        pngChunk(png, "IEND", {});

        return png;
    }

    Bytes trophyIcon(const std::string& path) {
        Bytes jpeg = readFile(path);
        require(jpeg.size() <= size_t(std::numeric_limits<int>::max()), "Trophy JPEG is too large: " + path);

        int width = 0;
        int height = 0;
        int channels = 0;
        int length = int(jpeg.size());
        require(stbi_info_from_memory(jpeg.data(), length, &width, &height, &channels) && width == 64 && height == 64,
            "Trophy source must be a valid 64x64 JPEG: " + path);

        std::unique_ptr<unsigned char, decltype(&stbi_image_free)> image(
            stbi_load_from_memory(jpeg.data(), length, &width, &height, &channels, 4), &stbi_image_free);
        require(bool(image), "Cannot decode trophy JPEG: " + path);

        // Preserve the complete pixel-art composition with centered nearest
        // sampling. Native trophy icons require a 240x240 PNG.
        Bytes scanlines;
        scanlines.reserve(240 * (1 + 240 * 4));
        for (unsigned y = 0; y < 240; y++) {
            scanlines.push_back(0);
            unsigned sourceY = (2 * y + 1) * unsigned(height) / 480;
            for (unsigned x = 0; x < 240; x++) {
                unsigned sourceX = (2 * x + 1) * unsigned(width) / 480;
                const unsigned char* pixel = image.get() + (sourceY * width + sourceX) * 4;
                scanlines.insert(scanlines.end(), pixel, pixel + 4);
            }
        }

        return encodePng(240, 240, scanlines);
    }

    Bytes trophyCover(const std::string& path) {
        Bytes png = readFile(path);
        require(png.size() <= size_t(std::numeric_limits<int>::max()), "Application icon is too large: " + path);

        int width = 0;
        int height = 0;
        int channels = 0;
        int length = int(png.size());
        require(stbi_info_from_memory(png.data(), length, &width, &height, &channels) && width == 128 && height == 128,
            "Application icon must be a valid 128x128 image: " + path);

        std::unique_ptr<unsigned char, decltype(&stbi_image_free)> image(
            stbi_load_from_memory(png.data(), length, &width, &height, &channels, 4), &stbi_image_free);
        require(bool(image), "Cannot decode application icon: " + path);

        // Fit the application icon into the native 320x176 cover without
        // stretching it. Transparent side margins keep the square composition.
        Bytes scanlines;
        scanlines.reserve(176 * (1 + 320 * 4));
        for (unsigned y = 0; y < 176; y++) {
            scanlines.push_back(0);
            unsigned sourceY = (2 * y + 1) * unsigned(height) / 352;

            for (unsigned x = 0; x < 320; x++) {
                if (x < 72 || x >= 248) {
                    scanlines.insert(scanlines.end(), {0, 0, 0, 0});
                }
                else {
                    unsigned sourceX = (2 * (x - 72) + 1) * unsigned(width) / 352;
                    const unsigned char* pixel = image.get() + (sourceY * width + sourceX) * 4;
                    scanlines.insert(scanlines.end(), pixel, pixel + 4);
                }
            }
        }

        return encodePng(320, 176, scanlines);
    }

    std::string escape(const std::string& text, bool json = false) {
        std::string result;
        for (char character : text) {
            if (json) {
                if (character == '"' || character == '\\') result += '\\';
                require(static_cast<unsigned char>(character) >= 32, "Control character in trophy metadata");
                result += character;
            }
            else if (character == '&') result += "&amp;";
            else if (character == '<') result += "&lt;";
            else if (character == '>') result += "&gt;";
            else if (character == '"') result += "&quot;";
            else result += character;
        }

        return result;
    }

    std::string number(unsigned id) {
        std::string value = std::to_string(id);
        return std::string(3 - value.size(), '0') + value;
    }

    std::string manifest(bool configuration) {
        std::ostringstream xml;
        xml << "<!--Sce-Np-Trophy-Signature: " << std::string(320, 'x') << "-->\n"
            << "<trophyconf version=\"1.1\" platform=\"psp2\" policy=\"large\">\n"
            << " <npcommid>" << escape(vitaTrophyCommunicationId) << "</npcommid>\n"
            << " <trophyset-version>" << escape(vitaTrophyVersion) << "</trophyset-version>\n"
            << " <parental-level license-area=\"default\">0</parental-level>\n";

        if (!configuration) {
            xml << " <title-name>" << escape(vitaTrophyTitle) << "</title-name>\n"
                << " <title-detail>37 achievements for the PS Vita port.</title-detail>\n";
        }

        for (unsigned id = 0; id < vitaTrophyCount; id++) {
            const auto& trophy = vitaTrophyCatalog[id];
            xml << " <trophy id=\"" << number(id) << "\" hidden=\"" << (trophy.hidden ? "yes" : "no") << "\" ttype=\"" << trophy.grade << "\" pid=\"-1\"";
            if (configuration) xml << " />\n";
            else xml << ">\n  <name>" << escape(trophy.name) << "</name>\n  <detail>" << escape(trophy.detail) << "</detail>\n </trophy>\n";
        }

        xml << "</trophyconf>\n";
        return xml.str();
    }

    void validateCatalog() {
        std::set<std::string> keys;
        std::set<std::string> images;

        for (const auto& trophy : vitaTrophyCatalog) {
            require(*trophy.key && keys.insert(trophy.key).second, "Empty or duplicate trophy key");
            for (const char* filename : {trophy.unlockedImage, trophy.lockedImage}) {
                std::string path(filename);
                require(path.size() > 4 && path.substr(path.size() - 4) == ".jpg" && path.find_first_of("/\\") == std::string::npos &&
                    path.find("..") == std::string::npos && images.insert(path).second, "Invalid or duplicate trophy image filename");
            }

            require(trophy.grade == 'B' || trophy.grade == 'S' || trophy.grade == 'G', "Invalid trophy grade");
            require(trophy.threshold >= 0 && (bool(*trophy.stat) == (trophy.threshold > 0)), "Invalid counter threshold");
        }
    }

    void catalogJson() {
        std::cout << "{\"communicationId\":\"" << escape(vitaTrophyCommunicationId, true) << "\",\"title\":\"" << escape(vitaTrophyTitle, true)
            << "\",\"version\":\"" << escape(vitaTrophyVersion, true) << "\",\"achievements\":[";

        for (unsigned id = 0; id < vitaTrophyCount; id++) {
            const auto& trophy = vitaTrophyCatalog[id];
            if (id) std::cout << ',';

            std::cout << "{\"id\":" << id << ",\"key\":\"" << escape(trophy.key, true) << "\",\"name\":\"" << escape(trophy.name, true)
                << "\",\"detail\":\"" << escape(trophy.detail, true) << "\",\"grade\":\"" << trophy.grade << "\",\"hidden\":" << (trophy.hidden ? "true" : "false");
            std::cout << ",\"unlockedImage\":\"" << escape(trophy.unlockedImage, true)
                << "\",\"lockedImage\":\"" << escape(trophy.lockedImage, true) << "\"";

            if (trophy.threshold) std::cout << ",\"stat\":\"" << escape(trophy.stat, true) << "\",\"threshold\":" << trophy.threshold;
            std::cout << '}';
        }

        std::cout << "]}\n";
    }

    void createPack(const std::string& output, const std::string& applicationIcon, const std::string& images) {
        struct Entry {
            std::string name;
            Bytes data;
        };

        std::vector<Entry> entries;
        for (bool configuration : {true, false}) {
            std::string xml = manifest(configuration);
            entries.push_back({configuration ? "TROPCONF.SFM" : "TROP.SFM", Bytes(xml.begin(), xml.end())});
        }

        entries.push_back({"ICON0.PNG", trophyCover(applicationIcon)});
        for (unsigned id = 0; id < vitaTrophyCount; id++) {
            entries.push_back({"TROP" + number(id) + ".PNG", trophyIcon(images + "/" + vitaTrophyCatalog[id].unlockedImage)});
        }

        Bytes archive(64 + 64 * entries.size(), 0);
        for (size_t index = 0; index < entries.size(); index++) {
            const auto& entry = entries[index];
            archive.resize((archive.size() + 15) & ~size_t(15), 0);
            size_t header = 64 + index * 64;
            std::copy(entry.name.begin(), entry.name.end(), archive.begin() + header);
            putInteger(archive, header + 32, archive.size(), 8);
            putInteger(archive, header + 40, entry.data.size(), 8);
            archive.insert(archive.end(), entry.data.begin(), entry.data.end());
        }

        archive.resize((archive.size() + 15) & ~size_t(15), 0);
        putInteger(archive, 0, 0xdca24d00, 4);
        putInteger(archive, 4, 2, 4);
        putInteger(archive, 8, archive.size(), 8);
        putInteger(archive, 16, entries.size(), 4);
        putInteger(archive, 20, 64, 4);

        Bytes digest = sha1(archive);
        std::copy(digest.begin(), digest.end(), archive.begin() + 28);

        std::ofstream file(output, std::ios::binary | std::ios::trunc);
        require(bool(file), "Cannot create " + output);
        file.write(reinterpret_cast<const char*>(archive.data()), std::streamsize(archive.size()));
        file.close();
        require(bool(file), "Cannot write " + output);

        std::cout << "Prepared unsigned 37-trophy pack: " << output << '\n';
    }

    void checkVpk(const std::string& path) {
        Bytes bytes = readFile(path);
        require(bytes.size() >= 22, "Truncated VPK");

        size_t endOffset = bytes.size() - 22;
        size_t firstEndOffset = bytes.size() > 65557 ? bytes.size() - 65557 : 0;
        while (littleInteger(bytes, endOffset, 4) != 0x06054b50 || endOffset + 22 + littleInteger(bytes, endOffset + 20, 2) != bytes.size()) {
            require(endOffset > firstEndOffset, "VPK has no valid ZIP end record");
            endOffset--;
        }

        unsigned entryCount = littleInteger(bytes, endOffset + 10, 2);
        require(!littleInteger(bytes, endOffset + 4, 2) && !littleInteger(bytes, endOffset + 6, 2) && entryCount == littleInteger(bytes, endOffset + 8, 2), "Unsupported multi-disk VPK");

        size_t directoryOffset = littleInteger(bytes, endOffset + 16, 4);
        size_t directorySize = littleInteger(bytes, endOffset + 12, 4);
        require(entryCount != 65535 && directoryOffset <= endOffset && directorySize == endOffset - directoryOffset, "Invalid or ZIP64 VPK directory");

        std::set<std::string> names;
        for (unsigned index = 0; index < entryCount; index++) {
            require(directoryOffset <= endOffset && endOffset - directoryOffset >= 46 && littleInteger(bytes, directoryOffset, 4) == 0x02014b50, "Invalid VPK directory entry");

            unsigned filenameLength = littleInteger(bytes, directoryOffset + 28, 2);
            size_t nextEntryOffset = directoryOffset + 46 + filenameLength + littleInteger(bytes, directoryOffset + 30, 2) + littleInteger(bytes, directoryOffset + 32, 2);
            require(nextEntryOffset <= endOffset && filenameLength, "Truncated VPK filename");

            std::string originalName(bytes.begin() + directoryOffset + 46, bytes.begin() + directoryOffset + 46 + filenameLength);
            std::string normalizedName = originalName;
            require(normalizedName.find('\0') == std::string::npos, "Invalid VPK filename");

            for (char& character : normalizedName)
                character = character == '\\' ? '/' : char(std::tolower(static_cast<unsigned char>(character)));

            std::istringstream pathParts(normalizedName);
            std::string pathComponent;
            while (std::getline(pathParts, pathComponent, '/')) {
                require(pathComponent != "assets.dat" && pathComponent != "assets" && pathComponent != "data" && pathComponent != "music", "Game data found in VPK: " + originalName);
                require(pathComponent != "..", "Unsafe VPK filename: " + originalName);
            }

            require(names.insert(normalizedName).second, "Duplicate VPK filename: " + originalName);

            size_t localOffset = littleInteger(bytes, directoryOffset + 42, 4);
            require(localOffset <= directoryOffset && directoryOffset - localOffset >= 30 && littleInteger(bytes, localOffset, 4) == 0x04034b50, "Invalid VPK local header");

            unsigned localFilenameLength = littleInteger(bytes, localOffset + 26, 2);
            size_t payloadOffset = localOffset + 30 + localFilenameLength + littleInteger(bytes, localOffset + 28, 2);
            require(payloadOffset <= directoryOffset && localFilenameLength == filenameLength && std::equal(originalName.begin(), originalName.end(), bytes.begin() + localOffset + 30), "VPK header filenames differ");
            require(littleInteger(bytes, directoryOffset + 20, 4) <= directoryOffset - payloadOffset, "Truncated VPK payload");

            directoryOffset = nextEntryOffset;
        }

        require(directoryOffset == endOffset && names.count("eboot.bin"), "VPK is missing eboot.bin or has an invalid directory");
        std::cout << "Data-free VPK: " << path << "\nCopy your prepared theescapists data folder to ux0:/data/ separately.\n";
    }
}

int main(int argc, char** argv) {
    try {
        validateCatalog();

        if (argc == 2 && std::string(argv[1]) == "--catalog") catalogJson();
        else if (argc == 3 && std::string(argv[1]) == "--check-vpk") checkVpk(argv[2]);
        else if (argc == 7 && std::string(argv[1]) == "--output" && std::string(argv[3]) == "--icon" && std::string(argv[5]) == "--images") createPack(argv[2], argv[4], argv[6]);
        else throw std::runtime_error("Usage: escapists-pack --output TROPHY.TRP --icon icon0.png --images icons | --check-vpk package.vpk | --catalog");

        return 0;
    }
    catch (const std::exception& error) {
        std::cerr << error.what() << '\n';
        return 1;
    }
}

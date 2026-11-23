#include "trophies.h"
#include "platform.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <sstream>

namespace {
    int trophyIndex(const std::string& key) {
        for (unsigned id = 0; id < vitaTrophyCount; id++)
            if (key == vitaTrophyCatalog[id].key) return int(id);

        return -1;
    }

    bool knownStat(const std::string& key) {
        static const char* names[] = {
            "Dug", "Favours", "Flooded", "Gifts", "KO_Guards", "KO_Inmates", "Strip", "Visitors",
            "QuotaJanitor", "QuotaGardening", "QuotaWoodshop", "QuotaMetalshop", "QuotaTailor",
            "QuotaLaundry", "QuotaDeliveries", "QuotaMailman", "QuotaLibrary", "QuotaKitchen"
        };

        for (const char* name : names)
            if (key == name) return true;

        return false;
    }
}

VitaTrophyProgress::VitaTrophyProgress(const std::string& filename) : filename(filename) {
    mainValid = load(filename);
    if (!mainValid) load(filename + ".bak");

    checkThresholds();
}

bool VitaTrophyProgress::load(const std::string& path) {
    FILE* file = std::fopen(path.c_str(), "rb");
    if (!file) return false;

    char line[256];
    if (!std::fgets(line, sizeof(line), file) || std::strcmp(line, "ESCAPISTS_VITA_TROPHIES 1\n")) {
        std::fclose(file);
        return false;
    }

    std::array<bool, vitaTrophyCount> loadedEarned{};
    std::map<std::string, int> loadedStats;
    bool complete = false;

    while (std::fgets(line, sizeof(line), file)) {
        if (!std::strcmp(line, "END\n")) {
            complete = std::fgetc(file) == EOF && !std::ferror(file);
            break;
        }

        std::istringstream record(line);
        std::string recordKind;
        std::string recordKey;
        std::string extraValue;
        record >> recordKind >> recordKey;

        if (recordKind == "T") {
            int id = trophyIndex(recordKey);
            if (id >= 0 && !(record >> extraValue)) loadedEarned[id] = true;
        }
        else if (recordKind == "S") {
            int value;
            if (knownStat(recordKey) && record >> value && value >= 0 && !(record >> extraValue)) loadedStats[recordKey] = value;
        }
    }

    std::fclose(file);
    if (!complete) return false;

    earned = loadedEarned;
    stats.swap(loadedStats);
    return true;
}

int VitaTrophyProgress::stat(const std::string& key) const {
    auto found = stats.find(key);
    return found == stats.end() ? 0 : found->second;
}

void VitaTrophyProgress::checkThresholds() {
    for (unsigned id = 0; id < vitaTrophyCount; id++) {
        const VitaTrophyDefinition& trophy = vitaTrophyCatalog[id];
        if (trophy.threshold && stat(trophy.stat) >= trophy.threshold && !earned[id]) {
            earned[id] = true;
            dirty = true;
        }
    }
}

void VitaTrophyProgress::setStat(const std::string& key, int value) {
    if (!knownStat(key)) return;

    value = std::max(0, value);
    if (stat(key) == value) return;

    stats[key] = value;
    dirty = true;
    checkThresholds();
    save();
}

bool VitaTrophyProgress::unlocked(const std::string& key) const {
    int id = trophyIndex(key);
    return id >= 0 && earned[id];
}

bool VitaTrophyProgress::unlocked(unsigned id) const {
    return id < vitaTrophyCount && earned[id];
}

void VitaTrophyProgress::unlock(const std::string& key) {
    int id = trophyIndex(key);
    if (id >= 0) unlock(unsigned(id));
}

void VitaTrophyProgress::unlock(unsigned id) {
    if (id >= vitaTrophyCount || earned[id]) return;

    earned[id] = true;
    dirty = true;
    save();
}

void VitaTrophyProgress::clear(const std::string& key) {
    int id = trophyIndex(key);
    if (id < 0 || !earned[id]) return;

    earned[id] = false;
    dirty = true;
    save();
}

void VitaTrophyProgress::clearAll() {
    earned.fill(false);
    stats.clear();
    dirty = true;
    save();
}

bool VitaTrophyProgress::save() {
    if (!dirty) return true;

    const std::string temporary = filename + ".tmp";
    const std::string backup = filename + ".bak";
    FILE* file = std::fopen(temporary.c_str(), "wb");
    if (!file) return false;

    std::fprintf(file, "ESCAPISTS_VITA_TROPHIES 1\n");
    for (unsigned id = 0; id < vitaTrophyCount; id++)
        if (earned[id]) std::fprintf(file, "T %s\n", vitaTrophyCatalog[id].key);

    for (const auto& stat : stats)
        std::fprintf(file, "S %s %d\n", stat.first.c_str(), stat.second);

    std::fprintf(file, "END\n");
    bool wrote = !std::ferror(file);
    if (std::fclose(file)) wrote = false;
    if (!wrote) return false;

    // Keep a recoverable complete snapshot across Vita rename semantics, which
    // need not replace an existing destination as POSIX rename does.
    FILE* previous = std::fopen(filename.c_str(), "rb");
    bool rotated = false;
    if (previous) {
        std::fclose(previous);
        if (mainValid) {
            std::remove(backup.c_str());
            if (std::rename(filename.c_str(), backup.c_str())) return false;
            rotated = true;
        }
        else if (std::remove(filename.c_str())) return false;
    }

    if (std::rename(temporary.c_str(), filename.c_str())) {
        if (rotated) std::rename(backup.c_str(), filename.c_str());
        return false;
    }

    dirty = false;
    mainValid = true;
    return true;
}

VitaTrophyProgress& vitaTrophyProgress() {
    static bool prepared = false;
    if (!prepared) {
        platform_create_directories("ux0:/data/The Escapists");
        prepared = true;
    }

    static VitaTrophyProgress progress("ux0:/data/The Escapists/trophies.txt");
    return progress;
}

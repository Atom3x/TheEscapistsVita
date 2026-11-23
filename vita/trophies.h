#ifndef ESCAPISTS_VITA_TROPHIES_H
#define ESCAPISTS_VITA_TROPHIES_H

#include "trophies/catalog.h"
#include <array>
#include <map>
#include <string>

class VitaTrophyProgress {
public:
    explicit VitaTrophyProgress(const std::string& filename);
    int stat(const std::string& key) const;
    void setStat(const std::string& key, int value);

    bool unlocked(const std::string& key) const;
    bool unlocked(unsigned id) const;
    void unlock(const std::string& key);
    void unlock(unsigned id);

    void clear(const std::string& key);
    void clearAll();
    bool save();

private:
    std::string filename;
    std::array<bool, vitaTrophyCount> earned{};
    std::map<std::string, int> stats;
    bool dirty = false;
    bool mainValid = false;

    bool load(const std::string& path);
    void checkThresholds();
};

VitaTrophyProgress& vitaTrophyProgress();

// Called after drawing the game. True means the native setup dialog performed
// the buffer swap, so SDL must not swap a second time.
bool vitaTrophiesPresent();
bool vitaTrophiesBusy();
void vitaTrophiesShutdown();

#endif

#ifndef ESCAPISTS_VITA_TROPHY_CATALOG_H
#define ESCAPISTS_VITA_TROPHY_CATALOG_H

// Shared editable catalog. Array indices are stable native trophy IDs.
struct VitaTrophyDefinition {
    const char* key;
    const char* stat;
    int threshold;
    const char* name;
    const char* detail;
    char grade;
    bool hidden;
    const char* unlockedImage;
    const char* lockedImage;
};

static const char vitaTrophyCommunicationId[] = "ESCP00002_00";
static const char vitaTrophyTitle[] = "The Escapists";
static const char vitaTrophyVersion[] = "01.00";

static const VitaTrophyDefinition vitaTrophyCatalog[] = {
    // 0
    {"ButterFingers", "", 0, "Butter Fingers",
        "Drop soap in the showers.", 'B', true,
        "ButterFingers.jpg", "ButterFingers-locked.jpg"},
    // 1
    {"CagesBuddy", "", 0, "Cage's Buddy",
        "Give Cage a sovereign ring in The Escape Team.", 'B', true,
        "CagesBuddy.jpg", "CagesBuddy-locked.jpg"},
    // 2
    {"CleanGetaway", "", 0, "Clean Getaway",
        "Escape a prison with no average heat.", 'S', false,
        "CleanGetaway.jpg", "CleanGetaway-locked.jpg"},
    // 3
    {"DayOne", "", 0, "Day One",
        "Escape a prison on the first day.", 'S', false,
        "DayOne.jpg", "DayOne-locked.jpg"},
    // 4
    {"FingerBlame", "", 0, "Finger of Blame",
        "Complete the fingerprint objective in Duct Tapes Are Forever.", 'B', true,
        "FingerBlame.jpg", "FingerBlame-locked.jpg"},
    // 5
    {"HandsDirty", "", 0, "Getting Your Hands Dirty",
        "Work as a janitor in Santa's Sweatshop.", 'B', true,
        "HandsDirty.jpg", "HandsDirty-locked.jpg"},
    // 6
    {"Int", "", 0, "Grey Matters",
        "Reach 100 intellect.", 'B', false,
        "Int.jpg", "Int-locked.jpg"},
    // 7
    {"Jobsworth", "", 0, "Jobsworth",
        "Complete a quota in every job.", 'G', false,
        "Jobsworth.jpg", "Jobsworth-locked.jpg"},
    // 8
    {"KeySuccess", "", 0, "The Key to Success",
        "Complete the keycard objective in Duct Tapes Are Forever.", 'B', true,
        "KeySuccess.jpg", "KeySuccess-locked.jpg"},
    // 9
    {"LadiesMan", "", 0, "Ladies' Man",
        "Give Andy aftershave in The Escape Team.", 'B', true,
        "LadiesMan.jpg", "LadiesMan-locked.jpg"},
    // 10
    {"LovedUp", "", 0, "Loved Up",
        "Escape The Escape Team with high teammate opinion.", 'S', true,
        "LovedUp.jpg", "LovedUp-locked.jpg"},
    // 11
    {"MasterCraftsman", "", 0, "Master Craftsman",
        "Fill at least 13 pages of the crafting journal.", 'S', false,
        "MasterCraftsman.jpg", "MasterCraftsman-locked.jpg"},
    // 12
    {"MonopolyGuy", "", 0, "The Monopoly Guy",
        "Hold at least $1,000.", 'B', false,
        "MonopolyGuy.jpg", "MonopolyGuy-locked.jpg"},
    // 13
    {"MyGiftsToYou", "", 0, "My Gifts To You",
        "Complete the gifts objective in Santa's Sweatshop.", 'B', true,
        "MyGiftsToYou.jpg", "MyGiftsToYou-locked.jpg"},
    // 14
    {"NorthernLights", "", 0, "Northern Lights",
        "Escape Santa's Sweatshop.", 'S', true,
        "NorthernLights.jpg", "NorthernLights-locked.jpg"},
    // 15
    {"Noticed", "", 0, "Getting Noticed",
        "Complete the sign objective in Duct Tapes Are Forever.", 'B', true,
        "Noticed.jpg", "Noticed-locked.jpg"},
    // 16
    {"SantasLap", "", 0, "Santa's Lap",
        "Complete the visitor objective in Santa's Sweatshop.", 'B', true,
        "SantasLap.jpg", "SantasLap-locked.jpg"},
    // 17
    {"SoldiersOfFortune", "", 0, "Soldiers Of Fortune",
        "Escape The Escape Team.", 'S', true,
        "SoldiersOfFortune.jpg", "SoldiersOfFortune-locked.jpg"},
    // 18
    {"SpyHard", "", 0, "Spy Hard",
        "Escape Duct Tapes Are Forever.", 'S', true,
        "SpyHard.jpg", "SpyHard-locked.jpg"},
    // 19
    {"TankedUp", "", 0, "Tanked Up",
        "Complete the tank objective in The Escape Team.", 'S', true,
        "TankedUp.jpg", "TankedUp-locked.jpg"},
    // 20
    {"TheMadMan", "", 0, "The Mad Man",
        "Give Sean a trash bag in The Escape Team.", 'B', true,
        "TheMadMan.jpg", "TheMadMan-locked.jpg"},
    // 21
    {"ThugLife", "", 0, "Thug Life",
        "Recruit at least five buddies.", 'S', false,
        "ThugLife.jpg", "ThugLife-locked.jpg"},
    // 22
    {"TinselTown", "", 0, "Tinsel Town",
        "Complete the tinsel objective in Santa's Sweatshop.", 'B', true,
        "TinselTown.jpg", "TinselTown-locked.jpg"},
    // 23
    {"TopWorld", "", 0, "On Top of the World",
        "Complete the chair objective in Duct Tapes Are Forever.", 'B', true,
        "TopWorld.jpg", "TopWorld-locked.jpg"},
    // 24
    {"VoiceReason", "", 0, "The Voice of Reason",
        "Complete the voice objective in Duct Tapes Are Forever.", 'B', true,
        "VoiceReason.jpg", "VoiceReason-locked.jpg"},
    // 25
    {"WayDragon", "", 0, "Way of the Dragon",
        "Start a prison takeover using nunchuks.", 'S', false,
        "WayDragon.jpg", "WayDragon-locked.jpg"},
    // 26
    {"WrappedUp", "", 0, "Wrapped Up",
        "Complete the lights objective in Santa's Sweatshop.", 'B', true,
        "WrappedUp.jpg", "WrappedUp-locked.jpg"},
    // 27
    {"escapist", "", 0, "The Great Escapist!",
        "Escape all six original prisons.", 'G', false,
        "escapist.jpg", "escapist-locked.jpg"},
    // 28
    {"physical", "", 0, "Let's Get Physical",
        "Reach 100 strength and speed.", 'S', false,
        "physical.jpg", "physical-locked.jpg"},
    // 29
    {"PunchDrunk", "KO_Inmates", 50, "Punch Drunk",
        "Knock out 50 inmates.", 'B', false,
        "PunchDrunk.jpg", "PunchDrunk-locked.jpg"},
    // 30
    {"DisrespectMyAuthority", "KO_Guards", 50, "Disrespect My Authority",
        "Knock out 50 guards.", 'B', false,
        "DisrespectMyAuthority.jpg", "DisrespectMyAuthority-locked.jpg"},
    // 31
    {"IPresentToYou", "Gifts", 50, "I Present To You",
        "Give away 50 items.", 'B', false,
        "IPresentToYou.jpg", "IPresentToYou-locked.jpg"},
    // 32
    {"FavourFave", "Favours", 100, "Favour Fave",
        "Complete 100 favours.", 'B', false,
        "FavourFave.jpg", "FavourFave-locked.jpg"},
    // 33
    {"DiggingIt", "Dug", 50, "Digging It!",
        "Clear 50 tiles.", 'B', false,
        "DiggingIt.jpg", "DiggingIt-locked.jpg"},
    // 34
    {"TheWetBandit", "Flooded", 30, "The Wet Bandit",
        "Flood 30 toilets.", 'B', false,
        "TheWetBandit.jpg", "TheWetBandit-locked.jpg"},
    // 35
    {"StripSearched", "Strip", 50, "Strip Searched",
        "Take 50 outfits from unconscious opponents.", 'B', false,
        "StripSearched.jpg", "StripSearched-locked.jpg"},
    // 36
    {"NeverBeAloneAgain", "Visitors", 50, "Never Be Alone Again",
        "Attend 50 prison visits.", 'B', false,
        "NeverBeAloneAgain.jpg", "NeverBeAloneAgain-locked.jpg"},
};

static constexpr unsigned vitaTrophyCount = sizeof(vitaTrophyCatalog) / sizeof(vitaTrophyCatalog[0]);
static_assert(vitaTrophyCount == 37, "Preserve the 37 existing trophy IDs");

#endif // ESCAPISTS_VITA_TROPHY_CATALOG_H

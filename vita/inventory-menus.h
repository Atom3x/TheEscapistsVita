#pragma once

// Original dialogPanel animation IDs. Keep these stable when adding menus.
enum class InventoryMenu {
    Loot = 13,
    NpcGiftsAndTrading = 14,
    Crafting = 15,
    Desk = 16,
    Toilet = 17,
    PlayerEquipment = 19,
    JobContainer = 23
};

constexpr InventoryMenu inventoryEnabledMenus[] = {
    InventoryMenu::Loot,
    InventoryMenu::NpcGiftsAndTrading,
    InventoryMenu::Crafting,
    InventoryMenu::Desk,
    InventoryMenu::Toilet,
    InventoryMenu::PlayerEquipment,
    InventoryMenu::JobContainer
};

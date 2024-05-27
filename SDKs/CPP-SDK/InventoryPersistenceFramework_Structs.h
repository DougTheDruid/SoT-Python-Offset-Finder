#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0x18
struct PlayerItemCategorySnapshots
{
public:
	class UClass*                                                ItemCategory;                                      // 0x0(0x8)
	TArray<struct ItemSnapshot>                                  ItemSnapshots;                                     // 0x8(0x10)
};


// Size 0x8
struct EventPlayerLoggedInPersistence
{
public:
	class Controller*                                            PlayerController;                                  // 0x0(0x8)
};


// Size 0x98
struct InventoryPersistencePlayerData
{
public:
	struct                                                       PirateIdentity;                                    // 0x0(0x78)
	struct                                                       PirateCrewId;                                      // 0x78(0x10)
	TArray<struct PlayerItemCategorySnapshots>                   ItemCategorySnapshots;                             // 0x88(0x10)
};



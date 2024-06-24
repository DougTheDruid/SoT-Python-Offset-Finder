#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x40
struct DebugMenuButtonShortcut
{
public:
	struct FString                                               DisplayName;                                       // 0x0(0x10)
	struct FString                                               ConsoleCommand;                                    // 0x10(0x10)
	TArray<struct Key>                                           Buttons;                                           // 0x20(0x10)
	float                                                        RequiredHoldTime;                                  // 0x30(0x4)
	bool                                                         AvailableInShippingBuilds;                         // 0x34(0x1)
};


// Size 0x20
struct DebugMenuOptionExecutedEvent
{
public:
	struct FString                                               DebugMenuItemName;                                 // 0x0(0x10)
	struct FString                                               ConsoleCommand;                                    // 0x10(0x10)
};


// Size 0x20
struct DebugMenuUserItem
{
public:
	struct FString                                               path;                                              // 0x0(0x10)
	struct FString                                               Command;                                           // 0x10(0x10)
};


// Size 0x38
struct DebugMenuDataAssetEntry
{
public:
	struct FString                                               MenuPath;                                          // 0x0(0x10)
	struct FString                                               DisplayName;                                       // 0x10(0x10)
	struct FString                                               ConsoleCommand;                                    // 0x20(0x10)
	bool                                                         CloseMenuWhenExecuted;                             // 0x30(0x1)
	bool                                                         AvailableInShippingBuilds;                         // 0x31(0x1)
	bool                                                         AddToCommonlyUsedMenu;                             // 0x32(0x1)
};



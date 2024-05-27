#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid



// Size 0xa0
struct GameAssetCatalogModel
{
public:
	map                                                          gameAssetItems;                                    // 0x0(0x50)
	map                                                          gameAssetSkeletons;                                // 0x50(0x50)
};


// Size 0x28
struct GameAssetModel
{
public:
	struct FString                                               fullPath;                                          // 0x0(0x10)
	struct FString                                               FriendlyName;                                      // 0x10(0x10)
	int                                                          performanceWeight;                                 // 0x20(0x4)
};



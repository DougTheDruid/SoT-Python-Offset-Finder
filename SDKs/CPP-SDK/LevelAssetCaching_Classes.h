#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "LevelAssetCaching_Structs.h"


// Size 0x88 (Full Size[0xb0] - InheritedSize[0x28]
class RegionLookupGeneratedGrid: public Object
{
public:
	struct WorldRegionSetup                                      WorldSetup;                                        // 0x30(0x28)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class LevelAssetCachingService: public Object
{
public:
	struct FName                                                 CurrentRegion;                                     // 0x40(0x8)
	interface                                                    AssetCache;                                        // 0x48(0x10)
	interface                                                    RegionLookup;                                      // 0x58(0x10)
	class Pawn*                                                  CachedPawn;                                        // 0x68(0x8)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class RegionalAssetListSetupDataAsset: public DataAsset
{
public:
	map                                                          ListMapping;                                       // 0x28(0x50)
};


// Size 0xb0 (Full Size[0xd8] - InheritedSize[0x28]
class RegionalAssetCache: public Object
{
public:
	class RegionalAssetListDataAsset*                            CurrentListAsset;                                  // 0x38(0x8)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class RegionalAssetListWorldSetupDataAsset: public DataAsset
{
public:
	map                                                          WorldSetups;                                       // 0x28(0x50)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RegionalAssetListDataAsset: public DataAsset
{
public:
	TArray<struct StringAssetReference>                          RegionAssets;                                      // 0x28(0x10)
};



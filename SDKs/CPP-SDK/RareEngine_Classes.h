#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "RareEngine_Structs.h"


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MemoryUsageVisualiserSettings: public Object
{
public:
	TArray<struct MemoryVisualiserCategory>                      VisualiserCategories;                              // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class AssetReferencer: public DataAsset
{
public:
	TArray<Class>                                                AssetsToReference;                                 // 0x28(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class StallDetector: public Object
{
public:
	multicastinlinedelegate                                      Callback;                                          // 0x30(0x10)
};



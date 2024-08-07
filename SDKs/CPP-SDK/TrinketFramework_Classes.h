#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "TrinketFramework_Structs.h"


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class TrinketDesc: public EntitlementDesc
{
public:
	struct StringClassReference                                  TrinketClass;                                      // 0xc8(0x10)
	struct StringClassReference                                  PreviousItem;                                      // 0xd8(0x10)
	struct StringClassReference                                  NextItem;                                          // 0xe8(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class TrinketSfxDataAsset: public DataAsset
{
public:
	class WwiseEvent*                                            MountSfx;                                          // 0x28(0x8)
	class WwiseEvent*                                            RemoveSfx;                                         // 0x30(0x8)
	class WwiseEvent*                                            NudgeSfx;                                          // 0x38(0x8)
	class WwiseEvent*                                            StraightenSfx;                                     // 0x40(0x8)
};



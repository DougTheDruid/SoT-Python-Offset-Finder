#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "NudgeComposite_Structs.h"


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class NudgeFromWaterLevelPolicy: public NudgePolicy
{
public:
	float                                                        ChanceOfNudge;                                     // 0xc8(0x4)
	float                                                        WaterLevelDifferenceBetweenUpdates;                // 0xe0(0x4)
	float                                                        ZOffsetFromWaterToMountpoint;                      // 0xe4(0x4)
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class NudgeFromStormPolicy: public NudgePolicy
{
public:
	float                                                        ChanceOfNudge;                                     // 0xc8(0x4)
	struct                                                       WeightedTimers;                                    // 0xd0(0x30)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class NudgeFromShipCollisionPolicy: public NudgePolicy
{
public:
	int                                                          DamageAmountRequiredToNudge;                       // 0xc8(0x4)
	float                                                        ChanceOfNudge;                                     // 0xcc(0x4)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class NudgeFromExplosionsPolicy: public NudgePolicy
{
public:
	TArray<struct NudgeChancePerDamagerType>                     AcceptedDamagerTypes;                              // 0xc8(0x10)
};



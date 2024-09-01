#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ShipDamage_Structs.h"


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class GenericShipDamageablePart: public Actor
{
public:
	class ShipDamageableComponent*                               ShipDamageableComponent;                           // 0x3d0(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class LevelOfDamagePropertiesDataAsset: public DataAsset
{
public:
	TArray<struct LevelOfDamageProperties>                       LevelOfDamageProperties;                           // 0x28(0x10)
};


// Size 0x10 (Full Size[0x48] - InheritedSize[0x38]
class ShipRestorationSettings: public DeveloperSettings
{
public:
	float                                                        MaxDistanceSquared;                                // 0x38(0x4)
	uint64                                                       RestorationCooldown;                               // 0x40(0x8)
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class ShipPartsDamageTrackerComponent: public ActorComponent
{
public:
	int                                                          IsAnyShipPartDamaged;                              // 0xc8(0x4)
};



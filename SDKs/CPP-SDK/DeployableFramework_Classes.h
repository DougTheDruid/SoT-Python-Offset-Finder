#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "DeployableFramework_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ConvertActorToItemInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class DestroyDeployableConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HandoverAmmoInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class IsDestroyedDeployableOnEnemyShipStatCondition: public StatCondition
{
public:
};


// Size 0x10 (Full Size[0xc8] - InheritedSize[0xb8]
class HandoverAmmoComponent: public ActorComponent
{
public:
	char                                                         pad0x8_EECZI[0x8];                                 // 0xb8(0x8)
	class ItemInfo*                                              LoadedAmmoClass;                                   // 0xc0(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ConvertItemToActorInterface: public Interface
{
public:
};



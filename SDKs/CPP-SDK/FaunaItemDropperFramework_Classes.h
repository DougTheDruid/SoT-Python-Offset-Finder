#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "FaunaItemDropperFramework_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FaunaItemDropperInterface: public Interface
{
public:
};


// Size 0x220 (Full Size[0x2d8] - InheritedSize[0xb8]
class FaunaItemDropperComponent: public ActorComponent
{
public:
	char                                                         pad0x140_9HT97[0x140];                             // 0xb8(0x140)
	class World*                                                 World;                                             // 0x1f8(0x8)
	int                                                          AmountOfHealthToHeal;                              // 0x200(0x4)
	int                                                          ChanceOfHealing;                                   // 0x204(0x4)
	class Actor*                                                 SpawnedProxy;                                      // 0x208(0x8)
	int                                                          MaxNumberOfItemsItCanSpawn;                        // 0x210(0x4)
	char                                                         pad0x4_LNQ6Y[0x4];                                 // 0x214(0x4)
	TArray<struct FaunaItemProxyStruct>                          SpawnedFruitsArray;                                // 0x218(0x10)
	char                                                         pad0x18_YQ4M7[0x18];                               // 0x228(0x18)
	TArray<class Class*>                                         ItemsThatCanSpawn;                                 // 0x240(0x10)
	float                                                        TimeInterval;                                      // 0x250(0x4)
	int                                                          ChanceOfDroppingItem;                              // 0x254(0x4)
	float                                                        MinDistanceBetweenDrops;                           // 0x258(0x4)
	struct Vector                                                ItemDropLocationOffset;                            // 0x25c(0xc)
	char                                                         pad0x70_3EYH4[0x70];                               // 0x268(0x70)
};



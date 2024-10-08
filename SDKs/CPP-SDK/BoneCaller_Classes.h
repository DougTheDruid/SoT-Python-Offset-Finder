#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "BoneCaller_Structs.h"


// Size 0x310 (Full Size[0x6d8] - InheritedSize[0x3c8]
class BoneCallerService: public Actor
{
public:
	class BoneCallerServiceParams*                               ServiceParams;                                     // 0x660(0x8)
	map                                                          PlayerBoneCallerData;                              // 0x668(0x50)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class BoneCallerOwnershipComponent: public ActorComponent
{
public:
	struct Guid                                                  OwningCrewID;                                      // 0xd0(0x10)
};


// Size 0x10 (Full Size[0x768] - InheritedSize[0x758]
class BoneCallerCannonProjectile: public CannonProjectile
{
public:
	class UClass*                                                BoneCallerSpawnId;                                 // 0x758(0x8)
	class UClass*                                                FiredFromReapersTributeShipBoneCallerSpawnId;      // 0x760(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class BoneCallerServiceParams: public DataAsset
{
public:
	TArray<struct BoneCallerImpactIdToSpawner>                   IDToSpawnerData;                                   // 0x28(0x10)
	class NamedAIDataAsset*                                      NamedAIDataAsset;                                  // 0x38(0x8)
	char                                                         ReplacedDeathType;                                 // 0x40(0x1)
};



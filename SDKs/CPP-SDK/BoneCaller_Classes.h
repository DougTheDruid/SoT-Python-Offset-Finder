#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "BoneCaller_Structs.h"


// Size 0x90 (Full Size[0x7c8] - InheritedSize[0x738]
class BoneCallerCannonProjectile: public CannonProjectile
{
public:
	class UClass*                                                BoneCallerSpawnId;                                 // 0x738(0x8)
	class UClass*                                                FiredFromReapersTributeShipBoneCallerSpawnId;      // 0x740(0x8)
	char                                                         pad0x80_GO3GZ[0x80];                               // 0x748(0x80)
};


// Size 0x70 (Full Size[0x128] - InheritedSize[0xb8]
class BoneCallerOwnershipComponent: public ActorComponent
{
public:
	char                                                         pad0x8_0HMUV[0x8];                                 // 0xb8(0x8)
	struct Guid                                                  OwningCrewID;                                      // 0xc0(0x10)
	char                                                         pad0x58_ZT1MV[0x58];                               // 0xd0(0x58)
};


// Size 0x390 (Full Size[0x730] - InheritedSize[0x3a0]
class BoneCallerService: public Actor
{
public:
	char                                                         pad0x318_SZAVV[0x318];                             // 0x3a0(0x318)
	class BoneCallerServiceParams*                               ServiceParams;                                     // 0x6b8(0x8)
	char                                                         pad0x70_IRQ4X[0x70];                               // 0x6c0(0x70)
};


// Size 0x18 (Full Size[0xd0] - InheritedSize[0xb8]
class BoneCallerSpawnComponent: public ActorComponent
{
public:
	class UClass*                                                BoneCallerSpawnId;                                 // 0xb8(0x8)
	TArray<struct BoneCallerSpawnIdShipSizeOverride>             BoneCallerSpawnIdShipSizeOverride;                 // 0xc0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BoneCallerServiceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class BoneCallerSpawnId: public Object
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class BoneCallerServiceParams: public DataAsset
{
public:
	TArray<struct BoneCallerImpactIdToSpawner>                   IDToSpawnerData;                                   // 0x28(0x10)
	class NamedAIDataAsset*                                      NamedAIDataAsset;                                  // 0x38(0x8)
	char                                                         ReplacedDeathType;                                 // 0x40(0x1)
	char                                                         pad0x7_4ZOVZ[0x7];                                 // 0x41(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShadowBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ElectricOceanCrawlerHardBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ElectricOceanCrawlerMediumBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DefaultBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ElectricOceanCrawlerBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AshenBoneCallerSpawnId: public BoneCallerSpawnId
{
public:
};



#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Fire_Structs.h"


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseIgnite: public StatusResponse
{
public:
};


// Size 0x1e8 (Full Size[0x210] - InheritedSize[0x28]
class FireGridVFXManager: public Object
{
public:
	class FireGridVFXParamsDataAsset*                            VFXParams;                                         // 0x28(0x8)
	TArray<struct FireParticleSystem>                            SpawnedCustomParticleSystemsForCells;              // 0x80(0x10)
	class ParticleSystemComponent*                               SpawnedExteriorSmokeParticleSystem;                // 0x130(0x8)
	class ParticleSystemComponent*                               SpawnedLowDetailParticleSystem;                    // 0x138(0x8)
	TArray<struct FireMesh>                                      DespawningMeshes;                                  // 0x140(0x10)
	TArray<struct FireGridRelativeSpawnDesc>                     InteriorSmokeSpawnDescs;                           // 0x150(0x10)
	TArray<struct FireGridLowDetailRelativeSpawnDesc>            LowDetailVFXSpawnDescs;                            // 0x160(0x10)
	TArray<struct FireParticleSpawnData>                         ParticleSpawnLODSettings;                          // 0x170(0x10)
	TArray<struct FireGridLowDetailRelativeSpawnDesc>            ExteriorSmokeVFXSpawnDescs;                        // 0x180(0x10)
	TArray<struct FireDefaultVFXSpawnData>                       VFXToSpawn;                                        // 0x190(0x10)
	char                                                         pad0x8_I6Y1X[0x8];                                 // 0x1a0(0x8)
	TArray<struct FireParticleSpawnList>                         InterleavedSpawnLists;                             // 0x1a8(0x10)
	class FirePropagator*                                        Propagator;                                        // 0x1b8(0x8)
	char                                                         pad0x50_P6VF7[0x50];                               // 0x1c0(0x50)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireExplosionDamagerType: public DamagerType
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ShipFireLightParamsDataAsset: public DataAsset
{
public:
	struct ShipFireLightParams                                   Params;                                            // 0x28(0x14)
	char                                                         pad0x4_S66WX[0x4];                                 // 0x3c(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireDamagerType: public DamagerType
{
public:
};


// Size 0xa8 (Full Size[0xd0] - InheritedSize[0x28]
class FireGridAudioManager: public Object
{
public:
	struct FireCellAudioParams                                   FireAudioParams;                                   // 0x28(0x40)
	class Actor*                                                 OwningActor;                                       // 0x68(0x8)
	class FirePropagator*                                        FirePropagator;                                    // 0x70(0x8)
	char                                                         pad0x58_AT0KY[0x58];                               // 0x78(0x58)
};


// Size 0x98 (Full Size[0xc0] - InheritedSize[0x28]
class FireCellStateTimingParamsDataAsset: public DataAsset
{
public:
	struct FireCellStateTimingParams                             TimingParams;                                      // 0x28(0x94)
	char                                                         pad0x4_0SOVA[0x4];                                 // 0xbc(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ExtinguishableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class FireStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FirePropagationInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class FirePropagatorDataAsset: public DataAsset
{
public:
	class FirePropagator*                                        FirePropagator;                                    // 0x28(0x8)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class BlownByWindStatus: public StatusBase
{
public:
};


// Size 0x3e0 (Full Size[0x4a8] - InheritedSize[0xc8]
class ShipFirePropagationComponent: public ActorComponent
{
public:
	char                                                         pad0x18_JIGJ6[0x18];                               // 0xc8(0x18)
	struct FName                                                 FeatureToggleName;                                 // 0xe0(0x8)
	class UClass*                                                ShipSize;                                          // 0xe8(0x8)
	float                                                        CellSize;                                          // 0xf0(0x4)
	struct IntVector                                             GridDimensions;                                    // 0xf4(0xc)
	struct Vector                                                GridOffset;                                        // 0x100(0xc)
	char                                                         pad0x4_JSAMU[0x4];                                 // 0x10c(0x4)
	class FirePropagator*                                        Propagator;                                        // 0x110(0x8)
	class ShipFireDamageParamsDataAsset*                         FireDamageDataAsset;                               // 0x118(0x8)
	TArray<struct FireCellDesc>                                  FireCellDescs;                                     // 0x120(0x10)
	char                                                         pad0x10_N16O2[0x10];                               // 0x130(0x10)
	struct Status                                                BurnStatus;                                        // 0x140(0x18)
	class FireGridVFXManager*                                    VFXManager;                                        // 0x158(0x8)
	struct FireGridVfxSpawnSettings                              VfxSpawnSettings;                                  // 0x160(0x58)
	struct ShipFireLightManager                                  FireLightManager;                                  // 0x1b8(0x150)
	struct FireGridCharringManager                               FireCharringManager;                               // 0x308(0xd8)
	TArray<struct ReplicatedFireCellData>                        ReplicatedCellData;                                // 0x3e0(0x10)
	struct ReplicatedFireCellCharringData                        ReplicatedCellCharringData;                        // 0x3f0(0x18)
	class FireGridAudioManager*                                  FireAudioManager;                                  // 0x408(0x8)
	struct FireCellAudioParams                                   FireAudioParams;                                   // 0x410(0x40)
	char                                                         pad0x58_XAF0V[0x58];                               // 0x450(0x58)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class FireGridCellSelectionParamsDataAsset: public DataAsset
{
public:
	TArray<struct FireGridCellSelectionParams>                   FireGridCellSelectionParams;                       // 0x28(0x10)
};


// Size 0x30 (Full Size[0x740] - InheritedSize[0x710]
class OilSpill: public ItemProxy
{
public:
	char                                                         pad0x8_RZU8X[0x8];                                 // 0x710(0x8)
	class BoxComponent*                                          BaseComponent;                                     // 0x718(0x8)
	class ActorFlammableComponent*                               FlammableComponent;                                // 0x720(0x8)
	class StatusEffectManagerComponent*                          StatusEffectManagerComponent;                      // 0x728(0x8)
	char                                                         pad0x10_3GUQP[0x10];                               // 0x730(0x10)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class FlammableComponent: public ActorComponent
{
public:
	char                                                         pad0x10_0GLJ6[0x10];                               // 0xc8(0x10)
	bool                                                         OnFire;                                            // 0xd8(0x1)
	char                                                         pad0x7_CE1UX[0x7];                                 // 0xd9(0x7)
};


// Size 0xf8 (Full Size[0x120] - InheritedSize[0x28]
class FirePropagator: public Object
{
public:
	char                                                         pad0x90_MFAL9[0x90];                               // 0x28(0x90)
	class FireCellStateTimingParamsDataAsset*                    CellStateTimingParams;                             // 0xb8(0x8)
	char                                                         pad0x4_4K6XV[0x4];                                 // 0xc0(0x4)
	float                                                        WaterHeightOffsetToFloodCells;                     // 0xc4(0x4)
	char                                                         pad0x58_WS1NE[0x58];                               // 0xc8(0x58)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class IgniteStatus: public StatusBase
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class StatusResponseExtinguish: public StatusResponse
{
public:
};


// Size 0x78 (Full Size[0x140] - InheritedSize[0xc8]
class CookerIgnitionComponent: public ActorComponent
{
public:
	struct CookerIgnitionParams                                  CookerIgnitionParams;                              // 0xc8(0x78)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FirePropagationIgniteInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireGridLocationInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FlammableInterface: public Interface
{
public:
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class FireGridVFXParamsDataAsset: public DataAsset
{
public:
	struct FireGridVFXParams                                     Params;                                            // 0x28(0x40)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class ShipFireDamageParamsDataAsset: public DataAsset
{
public:
	struct ShipFireDamageParams                                  FireDamageParams;                                  // 0x28(0x18)
};


// Size 0x8 (Full Size[0xe8] - InheritedSize[0xe0]
class TimedFlammableComponent: public FlammableComponent
{
public:
	bool                                                         UseExtinguishTimer;                                // 0xe0(0x1)
	bool                                                         AllowFireToBeReplenishedBeforeExtinguishTimerExpired; // 0xe1(0x1)
	char                                                         pad0x2_0U38C[0x2];                                 // 0xe2(0x2)
	float                                                        TimeInSecondsUntilFireExtinguished;                // 0xe4(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireGridProxyInterface: public FireGridLocationInterface
{
public:
};


// Size 0x18 (Full Size[0xf8] - InheritedSize[0xe0]
class FlammableWieldableComponent: public FlammableComponent
{
public:
	struct Status                                                IgnitedStatus;                                     // 0xe0(0x18)
};


// Size 0x110 (Full Size[0x1f0] - InheritedSize[0xe0]
class ActorFlammableComponent: public FlammableComponent
{
public:
	char                                                         pad0x18_XPKXB[0x18];                               // 0xe0(0x18)
	class ParticleSystem*                                        FireVFX;                                           // 0xf8(0x8)
	class ParticleSystem*                                        SteamVFX;                                          // 0x100(0x8)
	float                                                        FireVFXIntensity;                                  // 0x108(0x4)
	float                                                        FireDurationMultiplier;                            // 0x10c(0x4)
	float                                                        FireDuration;                                      // 0x110(0x4)
	float                                                        PropagationInterval;                               // 0x114(0x4)
	float                                                        OilSpillRadius;                                    // 0x118(0x4)
	char                                                         pad0x4_KZAB8[0x4];                                 // 0x11c(0x4)
	struct Status                                                FireStatus;                                        // 0x120(0x18)
	struct Status                                                BurnStatus;                                        // 0x138(0x18)
	bool                                                         ShouldPropagateToShip;                             // 0x150(0x1)
	char                                                         pad0x97_TPHLC[0x97];                               // 0x151(0x97)
	class World*                                                 CachedWorld;                                       // 0x1e8(0x8)
};


// Size 0x28 (Full Size[0x218] - InheritedSize[0x1f0]
class MastFlammableComponent: public ActorFlammableComponent
{
public:
	char                                                         pad0x8_0X8KW[0x8];                                 // 0x1f0(0x8)
	struct Vector                                                FireGridLocation;                                  // 0x1f8(0xc)
	char                                                         pad0x14_I8A71[0x14];                               // 0x204(0x14)
};



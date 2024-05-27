#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Water_Structs.h"


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class WaterSpoutVFXComponent: public ActorComponent
{
public:
	TArray<struct WaterSpout>                                    WaterSpouts;                                       // 0xc8(0x10)
	struct                                                       SplashEffectPointBottomZ;                          // 0xd8(0xc)
	class Object*                                                SpoutParticleSystem;                               // 0xe8(0x8)
	class Object*                                                SplashParticleSystem;                              // 0xf0(0x8)
	float                                                        WaterSplashDelayMin;                               // 0xf8(0x4)
	float                                                        WaterSplashDelayMax;                               // 0xfc(0x4)
	float                                                        SplashEffectVFXOffset;                             // 0x100(0x4)
	float                                                        SplashSweepRadius;                                 // 0x104(0x4)
	bool                                                         ShouldSpawnKillPlaneAtSplash;                      // 0x108(0x1)
	class StaticMesh*                                            SplashKillPlaneMesh;                               // 0x110(0x8)
	struct                                                       SplashKillPlaneScale;                              // 0x118(0xc)
	class StaticMeshComponent*                                   SplashKillPlane;                                   // 0x128(0x8)
	TArray<struct WaterSpout>                                    ActiveWaterSpouts;                                 // 0x130(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WaterProperties: public Object
{
public:
	TArray<struct WaterInformation>                              WaterInfo;                                         // 0x28(0x10)
};


// Size 0x20 (Full Size[0x620] - InheritedSize[0x600]
class WaterInteractionComponent: public BoxComponent
{
public:
	int                                                          ServerCorrectedWaterExclusionZoneCount;            // 0x614(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class SplashProbeDataAsset: public DataAsset
{
public:
	TArray<struct SplashProbe>                                   Probes;                                            // 0x28(0x10)
};


// Size 0x58 (Full Size[0x120] - InheritedSize[0xc8]
class SplashProbeVFXComponent: public ActorComponent
{
public:
	class SplashProbeDataAsset*                                  Probes;                                            // 0xf0(0x8)
	class SplashProbeDataAsset*                                  ProbesInstance;                                    // 0xf8(0x8)
	struct                                                       AttachProbesToOwner;                               // 0x100(0x10)
	class SceneComponent*                                        AttachProbesToComponent;                           // 0x110(0x8)
	bool                                                         ProbeEnabled;                                      // 0x118(0x1)
};


// Size 0x80 (Full Size[0x448] - InheritedSize[0x3c8]
class FFTWaterService: public Actor
{
public:
	class AthenaFFTWater*                                        FFTWaterActor;                                     // 0x3d8(0x8)
	class FFTWaterComponent*                                     FFTWaterComponent;                                 // 0x3e0(0x8)
	class FFTWaterExtendedPlaneComponent*                        ExtendedPlaneComponent;                            // 0x3e8(0x8)
	double                                                       ReplicatedServerCreationTime;                      // 0x440(0x8)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class MockWaterServiceWithValidWaterPlane: public MockWaterInterface
{
public:
	class FFTWaterComponent*                                     DefaultWaterComponent;                             // 0x38(0x8)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class WaterPlaneExclusionComponent: public ActorComponent
{
public:
	struct                                                       UseSpecificComponentForOverlaps;                   // 0xc8(0x10)
};



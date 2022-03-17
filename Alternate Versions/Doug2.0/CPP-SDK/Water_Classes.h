// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x28
class AthenaFFTWater: public FFTWater
{
public:
};


// Size 0x0
class WaterEmissionVolumeInterface: public Interface
{
public:
};


// Size 0x8
class AthenaWaterEmissionVolume: public WaterEmissionVolume
{
public:
};


// Size 0x0
class FFTWaterInterface: public Interface
{
public:
};


// Size 0x10
class WaterProperties: public Object
{
public:
	TArray<Struct WaterInformation>                              WaterInfo;                                         // 0x28(0x10)
};


// Size 0x0
class WaterInterface: public Interface
{
public:
};


// Size 0x80
class FFTWaterService: public Actor
{
public:
	double                                                       ReplicatedServerCreationTime;                      // 0x448(0x8)
};


// Size 0x10
class FlatWaterPlaneComponent: public BaseWaterComponent
{
public:
};


// Size 0x10
class MockWaterInterface: public Object
{
public:
};


// Size 0x8
class MockWaterServiceWithValidWaterPlane: public MockWaterInterface
{
public:
	Class FFTWaterComponent*                                     DefaultWaterComponent;                             // 0x38(0x8)
};


// Size 0x0
class NoSwimWaterId: public WaterId
{
public:
};


// Size 0x0
class SeaWaterId: public WaterId
{
public:
};


// Size 0x0
class ShipWaterId: public WaterId
{
public:
};


// Size 0x10
class SplashProbeDataAsset: public DataAsset
{
public:
	TArray<Struct SplashProbe>                                   Probes;                                            // 0x28(0x10)
};


// Size 0x50
class SplashProbeVFXComponent: public ActorComponent
{
public:
	Class SplashProbeDataAsset*                                  Probes;                                            // 0xf0(0x8)
	Class SplashProbeDataAsset*                                  ProbesInstance;                                    // 0xf8(0x8)
	Struct ActorComponentSelector                                AttachProbesToOwner;                               // 0x100(0x10)
	Class SceneComponent*                                        AttachProbesToComponent;                           // 0x110(0x8)
};


// Size 0x0
class UndergroundSeaWaterId: public WaterId
{
public:
};


// Size 0x0
class WaterBuoyancyFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class WaterBuoyancySampleMovementFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x20
class WaterEmissionVolumeService: public Object
{
public:
};


// Size 0x0
class WaterExclusionSurfaceInterface: public Interface
{
public:
};


// Size 0x0
class WaterPlaneInterface: public Interface
{
public:
};


// Size 0x20
class WaterInteractionComponent: public BoxComponent
{
public:
};


// Size 0x10
class WaterPlaneExclusionComponent: public ActorComponent
{
public:
	Struct ActorComponentSelector                                UseSpecificComponentForOverlaps;                   // 0xc8(0x10)
};


// Size 0x0
class WaterPlaneRetrievalProviderInterface: public Interface
{
public:
};


// Size 0x0
class WaterSplashProbeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90
class WaterSpoutVFXComponent: public ActorComponent
{
public:
	TArray<Struct WaterSpout>                                    WaterSpouts;                                       // 0xc8(0x10)
	Struct Vector                                                SplashEffectPointBottomZ;                          // 0xd8(0xc)
	Class Object*                                                SpoutParticleSystem;                               // 0xe8(0x8)
	Class Object*                                                SplashParticleSystem;                              // 0xf0(0x8)
	float                                                        WaterSplashDelayMin;                               // 0xf8(0x4)
	float                                                        WaterSplashDelayMax;                               // 0xfc(0x4)
	float                                                        SplashEffectVFXOffset;                             // 0x100(0x4)
	float                                                        SplashSweepRadius;                                 // 0x104(0x4)
	bool                                                         ShouldSpawnKillPlaneAtSplash;                      // 0x108(0x1)
	Class StaticMesh*                                            SplashKillPlaneMesh;                               // 0x110(0x8)
	Struct Vector                                                SplashKillPlaneScale;                              // 0x118(0xc)
	Class StaticMeshComponent*                                   SplashKillPlane;                                   // 0x128(0x8)
	TArray<Struct WaterSpout>                                    ActiveWaterSpouts;                                 // 0x130(0x10)
};


// Size 0x0
class WaterVolumeInterface: public Interface
{
public:
};


}
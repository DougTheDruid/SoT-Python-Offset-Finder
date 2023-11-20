// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x48 (Full Size[0x458] - InheritedSize[0x410]
class AthenaFFTWater: public FFTWater
{
public:
	char                                                         pad0x48_CJZCV[0x48];                               // 0x410(0x48)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterEmissionVolumeInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x3d8] - InheritedSize[0x3d0]
class AthenaWaterEmissionVolume: public WaterEmissionVolume
{
public:
	char                                                         pad0x8_Z3ZFU[0x8];                                 // 0x3d0(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FFTWaterInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WaterProperties: public Object
{
public:
	TArray<struct WaterInformation>                              WaterInfo;                                         // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterInterface: public Interface
{
public:
};


// Size 0x80 (Full Size[0x448] - InheritedSize[0x3c8]
class FFTWaterService: public Actor
{
public:
	char                                                         pad0x78_6BTKZ[0x78];                               // 0x3c8(0x78)
	double                                                       ReplicatedServerCreationTime;                      // 0x440(0x8)
};


// Size 0x10 (Full Size[0x5e0] - InheritedSize[0x5d0]
class FlatWaterPlaneComponent: public BaseWaterComponent
{
public:
	char                                                         pad0x10_FIMQC[0x10];                               // 0x5d0(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MockWaterInterface: public Object
{
public:
	char                                                         pad0x10_8LV0F[0x10];                               // 0x28(0x10)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class MockWaterServiceWithValidWaterPlane: public MockWaterInterface
{
public:
	class FFTWaterComponent*                                     DefaultWaterComponent;                             // 0x38(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NoSwimWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SeaWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ShipWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class UndergroundSeaWaterId: public WaterId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterBuoyancyFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterBuoyancySampleMovementFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class WaterEmissionVolumeService: public Object
{
public:
	char                                                         pad0x20_GCBYT[0x20];                               // 0x28(0x20)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterExclusionSurfaceInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterPlaneInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x610] - InheritedSize[0x5f0]
class WaterInteractionComponent: public BoxComponent
{
public:
	char                                                         pad0x14_D5IET[0x14];                               // 0x5f0(0x14)
	int                                                          ServerCorrectedWaterExclusionZoneCount;            // 0x604(0x4)
	char                                                         pad0x8_42DJ0[0x8];                                 // 0x608(0x8)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class WaterPlaneExclusionComponent: public ActorComponent
{
public:
	struct ActorComponentSelector                                UseSpecificComponentForOverlaps;                   // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterPlaneRetrievalProviderInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterVolumeInterface: public Interface
{
public:
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
	char                                                         pad0x28_XMA56[0x28];                               // 0xc8(0x28)
	class SplashProbeDataAsset*                                  Probes;                                            // 0xf0(0x8)
	class SplashProbeDataAsset*                                  ProbesInstance;                                    // 0xf8(0x8)
	struct ActorComponentSelector                                AttachProbesToOwner;                               // 0x100(0x10)
	class SceneComponent*                                        AttachProbesToComponent;                           // 0x110(0x8)
	bool                                                         ProbeEnabled;                                      // 0x118(0x1)
	char                                                         pad0x7_LIH72[0x7];                                 // 0x119(0x7)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WaterSplashProbeFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x90 (Full Size[0x158] - InheritedSize[0xc8]
class WaterSpoutVFXComponent: public ActorComponent
{
public:
	TArray<struct WaterSpout>                                    WaterSpouts;                                       // 0xc8(0x10)
	struct Vector                                                SplashEffectPointBottomZ;                          // 0xd8(0xc)
	char                                                         pad0x4_WIRLM[0x4];                                 // 0xe4(0x4)
	class Object*                                                SpoutParticleSystem;                               // 0xe8(0x8)
	class Object*                                                SplashParticleSystem;                              // 0xf0(0x8)
	float                                                        WaterSplashDelayMin;                               // 0xf8(0x4)
	float                                                        WaterSplashDelayMax;                               // 0xfc(0x4)
	float                                                        SplashEffectVFXOffset;                             // 0x100(0x4)
	float                                                        SplashSweepRadius;                                 // 0x104(0x4)
	bool                                                         ShouldSpawnKillPlaneAtSplash;                      // 0x108(0x1)
	char                                                         pad0x7_WYW9Z[0x7];                                 // 0x109(0x7)
	class StaticMesh*                                            SplashKillPlaneMesh;                               // 0x110(0x8)
	struct Vector                                                SplashKillPlaneScale;                              // 0x118(0xc)
	char                                                         pad0x4_UGOO8[0x4];                                 // 0x124(0x4)
	class StaticMeshComponent*                                   SplashKillPlane;                                   // 0x128(0x8)
	TArray<struct WaterSpout>                                    ActiveWaterSpouts;                                 // 0x130(0x10)
	char                                                         pad0x18_HVCKZ[0x18];                               // 0x140(0x18)
};


}
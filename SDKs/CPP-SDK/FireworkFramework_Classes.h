// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x50 (Full Size[0x4f0] - InheritedSize[0x4a0]
class FireworkAmbientLightComponent: public AmbientLightSourceComponent
{
public:
	char                                                         pad0x50_94DFG[0x50];                               // 0x4a0(0x50)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireworkDamagerType: public DamagerType
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FireworkFeedbackDataAsset: public DataAsset
{
public:
	float                                                        MaxExplosionRadius;                                // 0x28(0x4)
	char                                                         pad0x4_6H018[0x4];                                 // 0x2c(0x4)
	class UClass*                                                CameraShake;                                       // 0x30(0x8)
	float                                                        CameraShakeInnerRadiusMultiplier;                  // 0x38(0x4)
	char                                                         pad0x4_SAHR3[0x4];                                 // 0x3c(0x4)
	class ForceFeedbackEffect*                                   ExplosionRumble;                                   // 0x40(0x8)
};


// Size 0x128 (Full Size[0x150] - InheritedSize[0x28]
class FireworkDataAsset: public DataAsset
{
public:
	struct WeightedProbabilityRangeOfRanges                      PercentageTimeUntilTrailDisappears;                // 0x28(0x30)
	struct WeightedProbabilityRangeOfRanges                      TimeUntilExplosion;                                // 0x58(0x30)
	bool                                                         IsFlare;                                           // 0x88(0x1)
	bool                                                         ShouldCastAmbientLight;                            // 0x89(0x1)
	char                                                         pad0x2_X1PMM[0x2];                                 // 0x8a(0x2)
	struct FireworkAmbientLightData                              FireworkAmbientLightData;                          // 0x8c(0x14)
	TArray<struct WeightedFireworkVFXData>                       Explosions;                                        // 0xa0(0x10)
	struct WeightedProbabilityRange                              NumExplosions;                                     // 0xb0(0x20)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenExplosions;                             // 0xd0(0x30)
	struct WeightedProbabilityRangeOfRanges                      ExplosionLocationOffset;                           // 0x100(0x30)
	float                                                        FlashbangRadius;                                   // 0x130(0x4)
	char                                                         pad0x4_L6HY0[0x4];                                 // 0x134(0x4)
	class WwiseObjectPoolWrapper*                                ExplosionSfxPool;                                  // 0x138(0x8)
	class WwiseEvent*                                            LaunchSfx;                                         // 0x140(0x8)
	class FireworkFeedbackDataAsset*                             FireworkFeedbackData;                              // 0x148(0x8)
};


// Size 0x10 (Full Size[0x160] - InheritedSize[0x150]
class FireworkSequentialDataAsset: public FireworkDataAsset
{
public:
	TArray<struct FireworkSequentialSelectionType>               FireworkSequentialSelections;                      // 0x150(0x10)
};


// Size 0xd8 (Full Size[0x4a0] - InheritedSize[0x3c8]
class FireworkExplosion: public Actor
{
public:
	char                                                         pad0x8_NS2O5[0x8];                                 // 0x3c8(0x8)
	struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x3d0(0x58)
	class SceneComponent*                                        RootSceneComponent;                                // 0x428(0x8)
	class FireworkAmbientLightComponent*                         FireworkAmbientLightComponent;                     // 0x430(0x8)
	class ParticleSystemComponent*                               SpawnedExplosionParticles;                         // 0x438(0x8)
	struct WwiseEmitter                                          AudioEmitter;                                      // 0x440(0x20)
	char                                                         pad0x40_0AL5H[0x40];                               // 0x460(0x40)
};


// Size 0x20 (Full Size[0x548] - InheritedSize[0x528]
class FireworkItemInfo: public ItemInfo
{
public:
	class LoadableFireworkComponent*                             LoadableProjectileComponent;                       // 0x528(0x8)
	struct StringAssetReference                                  FireworkDataAsset;                                 // 0x530(0x10)
	int                                                          GeneratedDataRNGSeed;                              // 0x540(0x4)
	char                                                         pad0x4_7Z4DG[0x4];                                 // 0x544(0x4)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class FireworkServiceInterface: public Interface
{
public:
};


// Size 0x108 (Full Size[0x708] - InheritedSize[0x600]
class FireworkProjectile: public LaunchableProjectile
{
public:
	char                                                         pad0x10_X4MI9[0x10];                               // 0x600(0x10)
	class SphereComponent*                                       CollisionComponent;                                // 0x610(0x8)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0x618(0x8)
	class ExplosionComponent*                                    ExplosionComponent;                                // 0x620(0x8)
	class FireworkStatsComponent*                                FireworkStatsComponent;                            // 0x628(0x8)
	class SceneComponent*                                        MeshDirectionComponent;                            // 0x630(0x8)
	class ProjectileAnimationComponent*                          AnimationComponent;                                // 0x638(0x8)
	struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x640(0x58)
	char                                                         pad0x70_IO1YA[0x70];                               // 0x698(0x70)
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class FireworkService: public Actor
{
public:
	char                                                         pad0x78_D0NXU[0x78];                               // 0x3c8(0x78)
	int                                                          NumberOfCachedFlares;                              // 0x440(0x4)
	char                                                         pad0x1c_34OO4[0x1c];                               // 0x444(0x1c)
};


// Size 0x18 (Full Size[0x50] - InheritedSize[0x38]
class FireworksSettings: public DeveloperSettings
{
public:
	float                                                        FlashbangRadius;                                   // 0x38(0x4)
	float                                                        FlashbangFlashTimer;                               // 0x3c(0x4)
	float                                                        FlashbangFadeOutTimer;                             // 0x40(0x4)
	float                                                        FlashbangCooldown;                                 // 0x44(0x4)
	float                                                        LoadedFuseTimer;                                   // 0x48(0x4)
	char                                                         pad0x4_6D9QU[0x4];                                 // 0x4c(0x4)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class FireworksSettingsDataAsset: public DataAsset
{
public:
	float                                                        LoadedFuseTimer;                                   // 0x28(0x4)
	char                                                         pad0x4_9NAMG[0x4];                                 // 0x2c(0x4)
	class WwiseObjectPoolWrapper*                                FuseSoundWisePool;                                 // 0x30(0x8)
	class WwiseEvent*                                            FuseActivateSoundPlayEvent;                        // 0x38(0x8)
	class WwiseEvent*                                            FuseSoundPlayEvent;                                // 0x40(0x8)
	class WwiseEvent*                                            FuseSoundStopEvent;                                // 0x48(0x8)
	class Object*                                                FuseParticleSystem;                                // 0x50(0x8)
	struct StringAssetReference                                  FuseMeshAssetReference;                            // 0x58(0x10)
};


// Size 0xd0 (Full Size[0x198] - InheritedSize[0xc8]
class FireworkStatsComponent: public ActorComponent
{
public:
	float                                                        FlareRadius;                                       // 0xc8(0x4)
	char                                                         pad0x4_O62I7[0x4];                                 // 0xcc(0x4)
	int                                                          NumberOfFireworksFiredAtNight;                     // 0xd0(0x4)
	float                                                        FireworksFiredAtNightRadius;                       // 0xd4(0x4)
	float                                                        FiredFireworksAtNightTimer;                        // 0xd8(0x4)
	char                                                         pad0xbc_0WNRN[0xbc];                               // 0xdc(0xbc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ImpactProjectileIdFirework: public ImpactProjectileId
{
public:
};


// Size 0x10 (Full Size[0x140] - InheritedSize[0x130]
class LoadableFireworkComponent: public LoadableProjectileComponent
{
public:
	bool                                                         ShouldProjectileTrailDoReflections;                // 0x130(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseTimer;                  // 0x131(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseSfx;                    // 0x132(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseVfx;                    // 0x133(0x1)
	bool                                                         ShouldUseGlobalOverrideFuseMesh;                   // 0x134(0x1)
	char                                                         pad0x3_AKA5A[0x3];                                 // 0x135(0x3)
	class FireworksSettingsDataAsset*                            FireworksSettingsDataAsset;                        // 0x138(0x8)
};


// Size 0x1c8 (Full Size[0x290] - InheritedSize[0xc8]
class ProjectileAnimationComponent: public ActorComponent
{
public:
	TArray<struct WeightedProjectileMeshAnimationData>           ProjectileAnimationCurves;                         // 0xc8(0x10)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0xd8(0x8)
	struct RuntimeVectorCurve                                    AnimationOffsetCurve;                              // 0xe0(0x170)
	char                                                         pad0x40_IRJRS[0x40];                               // 0x250(0x40)
};


}
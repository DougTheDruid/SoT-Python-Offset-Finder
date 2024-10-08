#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "FireworkFramework_Structs.h"


// Size 0xd0 (Full Size[0x198] - InheritedSize[0xc8]
class FireworkStatsComponent: public ActorComponent
{
public:
	float                                                        FlareRadius;                                       // 0xc8(0x4)
	int                                                          NumberOfFireworksFiredAtNight;                     // 0xd0(0x4)
	float                                                        FireworksFiredAtNightRadius;                       // 0xd4(0x4)
	float                                                        FiredFireworksAtNightTimer;                        // 0xd8(0x4)
};


// Size 0xd8 (Full Size[0x4a0] - InheritedSize[0x3c8]
class FireworkExplosion: public Actor
{
public:
	struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x3d0(0x58)
	class SceneComponent*                                        RootSceneComponent;                                // 0x428(0x8)
	class FireworkAmbientLightComponent*                         FireworkAmbientLightComponent;                     // 0x430(0x8)
	class ParticleSystemComponent*                               SpawnedExplosionParticles;                         // 0x438(0x8)
	struct WwiseEmitter                                          AudioEmitter;                                      // 0x440(0x20)
};


// Size 0x20 (Full Size[0x550] - InheritedSize[0x530]
class FireworkItemInfo: public ItemInfo
{
public:
	class LoadableFireworkComponent*                             LoadableProjectileComponent;                       // 0x530(0x8)
	struct StringAssetReference                                  FireworkDataAsset;                                 // 0x538(0x10)
	int                                                          GeneratedDataRNGSeed;                              // 0x548(0x4)
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
	class FireworksSettingsDataAsset*                            FireworksSettingsDataAsset;                        // 0x138(0x8)
};


// Size 0x1c8 (Full Size[0x290] - InheritedSize[0xc8]
class ProjectileAnimationComponent: public ActorComponent
{
public:
	TArray<struct WeightedProjectileMeshAnimationData>           ProjectileAnimationCurves;                         // 0xc8(0x10)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0xd8(0x8)
	struct RuntimeVectorCurve                                    AnimationOffsetCurve;                              // 0xe0(0x170)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class FireworksSettingsDataAsset: public DataAsset
{
public:
	float                                                        LoadedFuseTimer;                                   // 0x28(0x4)
	class WwiseObjectPoolWrapper*                                FuseSoundWisePool;                                 // 0x30(0x8)
	class WwiseEvent*                                            FuseActivateSoundPlayEvent;                        // 0x38(0x8)
	class WwiseEvent*                                            FuseSoundPlayEvent;                                // 0x40(0x8)
	class WwiseEvent*                                            FuseSoundStopEvent;                                // 0x48(0x8)
	class Object*                                                FuseParticleSystem;                                // 0x50(0x8)
	struct StringAssetReference                                  FuseMeshAssetReference;                            // 0x58(0x10)
};


// Size 0x108 (Full Size[0x798] - InheritedSize[0x690]
class FireworkProjectile: public LaunchableProjectile
{
public:
	class SphereComponent*                                       CollisionComponent;                                // 0x6a0(0x8)
	class StaticMeshComponent*                                   MeshComponent;                                     // 0x6a8(0x8)
	class ExplosionComponent*                                    ExplosionComponent;                                // 0x6b0(0x8)
	class FireworkStatsComponent*                                FireworkStatsComponent;                            // 0x6b8(0x8)
	class SceneComponent*                                        MeshDirectionComponent;                            // 0x6c0(0x8)
	class ProjectileAnimationComponent*                          AnimationComponent;                                // 0x6c8(0x8)
	struct GeneratedFireworkData                                 GeneratedFireworkData;                             // 0x6d0(0x58)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FireworkFeedbackDataAsset: public DataAsset
{
public:
	float                                                        MaxExplosionRadius;                                // 0x28(0x4)
	class UClass*                                                CameraShake;                                       // 0x30(0x8)
	float                                                        CameraShakeInnerRadiusMultiplier;                  // 0x38(0x4)
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
	struct FireworkAmbientLightData                              FireworkAmbientLightData;                          // 0x8c(0x14)
	TArray<struct WeightedFireworkVFXData>                       Explosions;                                        // 0xa0(0x10)
	struct WeightedProbabilityRange                              NumExplosions;                                     // 0xb0(0x20)
	struct WeightedProbabilityRangeOfRanges                      TimeBetweenExplosions;                             // 0xd0(0x30)
	struct WeightedProbabilityRangeOfRanges                      ExplosionLocationOffset;                           // 0x100(0x30)
	float                                                        FlashbangRadius;                                   // 0x130(0x4)
	class WwiseObjectPoolWrapper*                                ExplosionSfxPool;                                  // 0x138(0x8)
	class WwiseEvent*                                            LaunchSfx;                                         // 0x140(0x8)
	class FireworkFeedbackDataAsset*                             FireworkFeedbackData;                              // 0x148(0x8)
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
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class FireworkService: public Actor
{
public:
	int                                                          NumberOfCachedFlares;                              // 0x440(0x4)
};


// Size 0x10 (Full Size[0x160] - InheritedSize[0x150]
class FireworkSequentialDataAsset: public FireworkDataAsset
{
public:
	TArray<struct FireworkSequentialSelectionType>               FireworkSequentialSelections;                      // 0x150(0x10)
};



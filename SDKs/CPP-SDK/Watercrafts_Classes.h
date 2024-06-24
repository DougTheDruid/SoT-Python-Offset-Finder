#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Watercrafts_Structs.h"


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatEntitlementDesc: public EntitlementDesc
{
public:
	struct StringClassReference                                  Rowboat;                                           // 0xc8(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ItemProxyWatercraftTrackerComponentDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         WatercraftTypes;                                   // 0x28(0x10)
};


// Size 0x30 (Full Size[0x6b8] - InheritedSize[0x688]
class StorageSeat: public Seat
{
public:
	class UClass*                                                StorageInteractionInput;                           // 0x688(0x8)
	class StorageContainerComponent*                             StorageContainerComponent;                         // 0x690(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FixedRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	assetclass                                                   Livery;                                            // 0x28(0x20)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RowboatSpawnParamsDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         RowboatTypes;                                      // 0x28(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DataAssetRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	class RowboatLiveryPickerDataAsset*                          DataAsset;                                         // 0x28(0x8)
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class WatercraftSpawnData: public ItemSpawnData
{
public:
	assetclass                                                   WatercraftClass;                                   // 0x68(0x20)
	class RowboatLiveryPicker*                                   LiveryPicker;                                      // 0x88(0x8)
	float                                                        MinDistanceToNearestWatercraftInMetres;            // 0x90(0x4)
};


// Size 0x8 (Full Size[0xd8] - InheritedSize[0xd0]
class RowingSeatAdaptiveTriggerComponent: public AdaptiveTriggerComponent
{
public:
	struct AdaptiveTriggerEffectMode_Feedback                    BothTriggers_Row;                                  // 0xd0(0x3)
};


// Size 0x110 (Full Size[0x4d8] - InheritedSize[0x3c8]
class FakeShip: public Actor
{
public:
	TArray<class ItemProxy*>                                     AttachedItems;                                     // 0x3d0(0x10)
};


// Size 0xc0 (Full Size[0xe8] - InheritedSize[0x28]
class RowboatAudioComponentParams: public DataAsset
{
public:
	class WwiseObjectPoolWrapper*                                RowboatObjectPool;                                 // 0x28(0x8)
	class WwiseEvent*                                            RowboatWakeStart;                                  // 0x30(0x8)
	class WwiseEvent*                                            RowboatWakeStop;                                   // 0x38(0x8)
	struct FName                                                 RowboatSpeedRtpcName;                              // 0x40(0x8)
	float                                                        RowboatMaxSpeedRtpc;                               // 0x48(0x4)
	class WwiseEvent*                                            RowboatLaunch;                                     // 0x50(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStart;                       // 0x58(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStop;                        // 0x60(0x8)
	class WwiseEvent*                                            RowboatStrainStart;                                // 0x68(0x8)
	class WwiseEvent*                                            RowboatStrainStop;                                 // 0x70(0x8)
	struct FName                                                 RowboatStrainRtpcName;                             // 0x78(0x8)
	float                                                        RowboatMaxStrainRtpc;                              // 0x80(0x4)
	class WwiseEvent*                                            RowboatTakenDamage;                                // 0x88(0x8)
	float                                                        DamageAmountRequiredForNoiseToPlay;                // 0x90(0x4)
	class WwiseEvent*                                            RowboatAttach;                                     // 0x98(0x8)
	class WwiseEvent*                                            RowboatDetach;                                     // 0xa0(0x8)
	class WwiseObjectPoolWrapper*                                WwiseOarEmitterPool;                               // 0xa8(0x8)
	class WwiseEvent*                                            PlayOarInOarLayer;                                 // 0xb0(0x8)
	class WwiseEvent*                                            PlayOarInWaterLayer;                               // 0xb8(0x8)
	class WwiseEvent*                                            PlayOarOutOarLayer;                                // 0xc0(0x8)
	class WwiseEvent*                                            PlayOarOutWaterLayer;                              // 0xc8(0x8)
	class WwiseEvent*                                            PlayOarBrakingLoop;                                // 0xd0(0x8)
	class WwiseEvent*                                            StopOarBrakingLoop;                                // 0xd8(0x8)
	class WwiseEvent*                                            PlayOarPullFinished;                               // 0xe0(0x8)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestSinkWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableWatercraft                               Watercraft;                                        // 0x80(0x30)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ScrapeableDamageDataAsset: public DataAsset
{
public:
	TArray<struct ScrapeableDamageSpeedEntry>                    DamageSpeedParams;                                 // 0x28(0x10)
};


// Size 0x1e0 (Full Size[0x4c0] - InheritedSize[0x2e0]
class RowboatAudioComponent: public SceneComponent
{
public:
	class RowboatAudioComponentParams*                           Params;                                            // 0x2e0(0x8)
	class Rowboat*                                               ParentRowboat;                                     // 0x2e8(0x8)
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class RowboatCustomizationLoadoutComponent: public ActorComponent
{
public:
	assetclass                                                   DefaultCustomization;                              // 0xd0(0x20)
	class UClass*                                                EquippedCustomization;                             // 0xf0(0x8)
};


// Size 0xa8 (Full Size[0x128] - InheritedSize[0x80]
class TaleQuestSpawnWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableTransform                                SpawnLocation;                                     // 0x80(0x38)
	assetclass                                                   WatercraftClass;                                   // 0xb8(0x20)
	assetclass                                                   LiveryEntitlement;                                 // 0xd8(0x20)
	struct QuestVariableWatercraft                               Watercraft;                                        // 0xf8(0x30)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatDescDataAsset: public DataAsset
{
public:
	struct PartDesc                                              PartDesc;                                          // 0x28(0x20)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatLiveryDesc: public EntitlementDesc
{
public:
	struct StringAssetReference                                  RowboatDescDataAsset;                              // 0xc8(0x10)
};


// Size 0x98 (Full Size[0x160] - InheritedSize[0xc8]
class ItemProxyWatercraftTrackerComponent: public ActorComponent
{
public:
	class ItemProxyWatercraftTrackerComponentDataAsset*          WatercraftTrackingData;                            // 0xd0(0x8)
	class Actor*                                                 CurrentWatercraft;                                 // 0xd8(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatLiveryPickerDataAsset: public DataAsset
{
public:
	TArray<struct RowboatLiveryByWeight>                         LiveriesInThisGroup;                               // 0x28(0x10)
	TArray<struct RowboatLiveryPickerDataAssetConditions>        SubgroupsInPriorityOrder;                          // 0x38(0x10)
};


// Size 0x368 (Full Size[0x730] - InheritedSize[0x3c8]
class Watercraft: public Actor
{
public:
	class BuoyancyComponent*                                     BuoyancyComponent;                                 // 0x400(0x8)
	struct WatercraftRolloverCorrector                           RolloverCorrector;                                 // 0x408(0xc)
	class ShipNosediveBrake*                                     NosediveBrake;                                     // 0x418(0x8)
	class BowSplashContainer*                                    BowSplashContainer;                                // 0x420(0x8)
	class StaticMeshComponent*                                   CollisionMesh;                                     // 0x428(0x8)
	class StaticMeshComponent*                                   CraftMesh;                                         // 0x430(0x8)
	class BoxComponent*                                          OverlapHits;                                       // 0x438(0x8)
	class StaticMeshComponent*                                   WaterOcclusionVolume;                              // 0x440(0x8)
	class WaterInteractionComponent*                             WaterInteractionComponent;                         // 0x448(0x8)
	struct FName                                                 ClientConvexHullCollisionProfile;                  // 0x450(0x8)
	struct NetTimeStampCalculator                                MovementTimeStamp;                                 // 0x458(0x70)
	struct RigidBodyErrorCorrection                              PhysicsErrorCorrection;                            // 0x4c8(0x1c)
	struct BuoyancySampleMovement                                BuoyancySampleMovement;                            // 0x520(0x68)
	class CurveFloat*                                            SpeedToChoppinessScalarCurve;                      // 0x588(0x8)
	float                                                        DeepWaterSubmersionThreshold;                      // 0x590(0x4)
	float                                                        BuoyancyChoppinessWhileSinking;                    // 0x594(0x4)
	bool                                                         IsCritical;                                        // 0x598(0x1)
	bool                                                         RigidBodyAwake;                                    // 0x599(0x1)
	bool                                                         InContactWithLand;                                 // 0x59a(0x1)
	bool                                                         InDeepWater;                                       // 0x59b(0x1)
	interface                                                    Scrapeable;                                        // 0x5a0(0x10)
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class ScrapeableComponent: public ActorComponent
{
public:
	float                                                        MinIntervalBetweenScrapeDamage;                    // 0xd0(0x4)
	class ScrapeableDamageDataAsset*                             ScrapeDamageSettings;                              // 0xd8(0x8)
	struct Vector                                                SafeZoneCenterDirection;                           // 0xe0(0xc)
	float                                                        SafeZoneMaximumAngle;                              // 0xec(0x4)
	class UClass*                                                ScrapeDamagerType;                                 // 0xf0(0x8)
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class WatercraftsSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  RowboatTypesEntitlementsMapDataAsset;              // 0x38(0x10)
	struct StringAssetReference                                  RowboatLiveryEntitlementsMapDataAsset;             // 0x48(0x10)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatTypeStatCondition: public StatCondition
{
public:
	assetclass                                                   RowboatType;                                       // 0x28(0x20)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatLiveriesStatCondition: public StatCondition
{
public:
	assetclass                                                   RowboatLiveryEntitlement;                          // 0x28(0x20)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class WatercraftTrackerComponent: public ActorComponent
{
public:
	TArray<class Actor*>                                         CurrentWatercrafts;                                // 0xd0(0x10)
};


// Size 0x8 (Full Size[0x2a8] - InheritedSize[0x2a0]
class RowingInputComponent: public LookAtOffsetInputComponent
{
public:
	class RowingSeat*                                            TargetOars;                                        // 0x2a0(0x8)
};


// Size 0x390 (Full Size[0xac0] - InheritedSize[0x730]
class Rowboat: public Watercraft
{
public:
	class ChildActorComponent*                                   LeftSideClamberSpot;                               // 0x780(0x8)
	class ChildActorComponent*                                   RightSideClamberSpot;                              // 0x788(0x8)
	class ChildActorComponent*                                   ForceSpot;                                         // 0x790(0x8)
	class ChildActorComponent*                                   Lantern;                                           // 0x798(0x8)
	class ChildActorComponent*                                   RowingSeat;                                        // 0x7a0(0x8)
	class ChildActorComponent*                                   StorageSeat;                                       // 0x7a8(0x8)
	class RowboatCustomizationLoadoutComponent*                  CustomizationLoadoutComponent;                     // 0x7b0(0x8)
	class ShipLiveryComponent*                                   LiveryComponent;                                   // 0x7b8(0x8)
	class ReplicatedShipPartCustomizationComponent*              CustomizationComponent;                            // 0x7c0(0x8)
	class RepairableComponent*                                   RepairableComponent;                               // 0x7c8(0x8)
	struct Vector                                                WaterExclusionOffset;                              // 0x7d0(0xc)
	struct CollisionProfileName                                  OverrideMountedCollisionProfileName;               // 0x7dc(0x8)
	class TetherCustomisationComponent*                          TetherCustomisationComponent;                      // 0x7e8(0x8)
	class HealthComponent*                                       HealthComponent;                                   // 0x7f0(0x8)
	class ActorDamageableComponent*                              ActorDamageableComponent;                          // 0x7f8(0x8)
	class RammableComponent*                                     RammableComponent;                                 // 0x800(0x8)
	class ScrapeableComponent*                                   ScrapeableComponent;                               // 0x808(0x8)
	class RowboatAudioComponent*                                 RowboatAudio;                                      // 0x810(0x8)
	class BaseHullDragDynamicsDesc*                              HullDragDynamicsDesc;                              // 0x818(0x8)
	class BowSplashContainer*                                    OarSplashContainer;                                // 0x820(0x8)
	class MountableComponent*                                    MountableComponent;                                // 0x828(0x8)
	class ActorActivationComponent*                              ActorActivationComponent;                          // 0x830(0x8)
	class CurveFloat*                                            LinearDampingOverTimeWhileBeachedScalarCurve;      // 0x838(0x8)
	class CurveFloat*                                            AngularDampingOverTimeWhileBeachedScalarCurve;     // 0x840(0x8)
	struct RowboatDamageEffectData                               DamageEffectData;                                  // 0x848(0x18)
	struct RowboatStrainDamageData                               StrainDamageData;                                  // 0x860(0x20)
	TArray<class ChildActorComponent*>                           AlwaysEnabledInteractables;                        // 0x880(0x10)
	class ShroudBreakerTrackerComponent*                         ShroudBreakerTrackerComponent;                     // 0x890(0x8)
	bool                                                         IsBeingLaunched;                                   // 0x898(0x1)
	bool                                                         IsSinking;                                         // 0x899(0x1)
	float                                                        MaxPushingAngle;                                   // 0x89c(0x4)
	float                                                        CurrentStrainAmount;                               // 0x8a0(0x4)
	bool                                                         IsDocked;                                          // 0x8a4(0x1)
	char                                                         CoverCollisionChannel;                             // 0x8a6(0x1)
	float                                                        UnderCoverCheckInterval;                           // 0x8a8(0x4)
	float                                                        UnderCoverHeight;                                  // 0x8ac(0x4)
	TArray<struct Vector>                                        RelativeUnderCoverProbeRoots;                      // 0x8b0(0x10)
	char                                                         TrackedActorType;                                  // 0x8c0(0x1)
	float                                                        LightDamagedRepairTime;                            // 0x8c4(0x4)
	float                                                        ModerateDamagedRepairTime;                         // 0x8c8(0x4)
	float                                                        HeavyDamagedRepairTime;                            // 0x8cc(0x4)
	float                                                        LightDamagedHealthThreshold;                       // 0x8d0(0x4)
	float                                                        ModerateDamagedHealthThreshold;                    // 0x8d4(0x4)
	float                                                        HeavyDamagedHealthThreshold;                       // 0x8d8(0x4)
	struct FName                                                 PremountCollisionProfileName;                      // 0x8dc(0x8)
};



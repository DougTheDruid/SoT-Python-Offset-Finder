#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Watercrafts_Structs.h"


// Size 0x98 (Full Size[0x160] - InheritedSize[0xc8]
class ItemProxyWatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_MA5DS[0x8];                                 // 0xc8(0x8)
	class ItemProxyWatercraftTrackerComponentDataAsset*          WatercraftTrackingData;                            // 0xd0(0x8)
	class Actor*                                                 CurrentWatercraft;                                 // 0xd8(0x8)
	char                                                         pad0x80_5EPO2[0x80];                               // 0xe0(0x80)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatCustomizationLoadoutInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ItemProxyWatercraftTrackerComponentDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         WatercraftTypes;                                   // 0x28(0x10)
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class WatercraftSpawnData: public ItemSpawnData
{
public:
	char                                                         pad0x20_JO784[0x20];                               // 0x68(0x20)
	class RowboatLiveryPicker*                                   LiveryPicker;                                      // 0x88(0x8)
	float                                                        MinDistanceToNearestWatercraftInMetres;            // 0x90(0x4)
	char                                                         pad0x4_S9GB9[0x4];                                 // 0x94(0x4)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RowboatSpawnParamsDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         RowboatTypes;                                      // 0x28(0x10)
};


// Size 0x8 (Full Size[0x2a8] - InheritedSize[0x2a0]
class RowingInputComponent: public LookAtOffsetInputComponent
{
public:
	class RowingSeat*                                            TargetOars;                                        // 0x2a0(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatTypeStatCondition: public StatCondition
{
public:
	char                                                         pad0x20_J8SXA[0x20];                               // 0x28(0x20)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class RowboatLiveryCategory: public CategoryBase
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatDescDataAsset: public DataAsset
{
public:
	struct PartDesc                                              PartDesc;                                          // 0x28(0x20)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class WatercraftsSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  RowboatTypesEntitlementsMapDataAsset;              // 0x38(0x10)
	struct StringAssetReference                                  RowboatLiveryEntitlementsMapDataAsset;             // 0x48(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftServiceInterface: public Interface
{
public:
};


// Size 0x1e0 (Full Size[0x4c0] - InheritedSize[0x2e0]
class RowboatAudioComponent: public SceneComponent
{
public:
	class RowboatAudioComponentParams*                           Params;                                            // 0x2e0(0x8)
	class Rowboat*                                               ParentRowboat;                                     // 0x2e8(0x8)
	char                                                         pad0x1d0_GP3YA[0x1d0];                             // 0x2f0(0x1d0)
};


// Size 0x30 (Full Size[0x6b0] - InheritedSize[0x680]
class StorageSeat: public Seat
{
public:
	class UClass*                                                StorageInteractionInput;                           // 0x680(0x8)
	class StorageContainerComponent*                             StorageContainerComponent;                         // 0x688(0x8)
	char                                                         pad0x20_TNJ77[0x20];                               // 0x690(0x20)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class WatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_KTRKV[0x8];                                 // 0xc8(0x8)
	TArray<class Actor*>                                         CurrentWatercrafts;                                // 0xd0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowingActionStateId: public ActionStateId
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestSinkWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableWatercraft                               Watercraft;                                        // 0x80(0x30)
};


// Size 0xa8 (Full Size[0x128] - InheritedSize[0x80]
class TaleQuestSpawnWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableTransform                                SpawnLocation;                                     // 0x80(0x38)
	struct QuestVariableWatercraft                               Watercraft;                                        // 0xf8(0x30)
};


// Size 0x110 (Full Size[0x4d8] - InheritedSize[0x3c8]
class FakeShip: public Actor
{
public:
	char                                                         pad0x8_6K9G2[0x8];                                 // 0x3c8(0x8)
	TArray<class ItemProxy*>                                     AttachedItems;                                     // 0x3d0(0x10)
	char                                                         pad0xf8_Y3RL1[0xf8];                               // 0x3e0(0xf8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ScrapeableInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x3d0] - InheritedSize[0x3c8]
class WatercraftService: public Actor
{
public:
	char                                                         pad0x8_6V5S2[0x8];                                 // 0x3c8(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatPartInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSinkWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x88] - InheritedSize[0x60]
class TaleQuestWatercraftService: public TaleQuestService
{
public:
	char                                                         pad0x28_8QGY2[0x28];                               // 0x60(0x28)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class RowboatDockedToShipConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatLiveryPicker: public Object
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatLiveriesStatCondition: public StatCondition
{
public:
	char                                                         pad0x20_04IDO[0x20];                               // 0x28(0x20)
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
	char                                                         pad0x4_0RURA[0x4];                                 // 0x4c(0x4)
	class WwiseEvent*                                            RowboatLaunch;                                     // 0x50(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStart;                       // 0x58(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStop;                        // 0x60(0x8)
	class WwiseEvent*                                            RowboatStrainStart;                                // 0x68(0x8)
	class WwiseEvent*                                            RowboatStrainStop;                                 // 0x70(0x8)
	struct FName                                                 RowboatStrainRtpcName;                             // 0x78(0x8)
	float                                                        RowboatMaxStrainRtpc;                              // 0x80(0x4)
	char                                                         pad0x4_U5JRH[0x4];                                 // 0x84(0x4)
	class WwiseEvent*                                            RowboatTakenDamage;                                // 0x88(0x8)
	float                                                        DamageAmountRequiredForNoiseToPlay;                // 0x90(0x4)
	char                                                         pad0x4_WEOQU[0x4];                                 // 0x94(0x4)
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


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class RowboatTypeCategory: public CategoryBase
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatLiveryDesc: public EntitlementDesc
{
public:
	struct StringAssetReference                                  RowboatDescDataAsset;                              // 0xc8(0x10)
};


// Size 0x368 (Full Size[0x730] - InheritedSize[0x3c8]
class Watercraft: public Actor
{
public:
	char                                                         pad0x38_YN1XF[0x38];                               // 0x3c8(0x38)
	class BuoyancyComponent*                                     BuoyancyComponent;                                 // 0x400(0x8)
	struct WatercraftRolloverCorrector                           RolloverCorrector;                                 // 0x408(0xc)
	char                                                         pad0x4_2714I[0x4];                                 // 0x414(0x4)
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
	char                                                         pad0x3c_6KKFW[0x3c];                               // 0x4e4(0x3c)
	struct BuoyancySampleMovement                                BuoyancySampleMovement;                            // 0x520(0x68)
	class CurveFloat*                                            SpeedToChoppinessScalarCurve;                      // 0x588(0x8)
	float                                                        DeepWaterSubmersionThreshold;                      // 0x590(0x4)
	float                                                        BuoyancyChoppinessWhileSinking;                    // 0x594(0x4)
	bool                                                         IsCritical;                                        // 0x598(0x1)
	bool                                                         RigidBodyAwake;                                    // 0x599(0x1)
	bool                                                         InContactWithLand;                                 // 0x59a(0x1)
	bool                                                         InDeepWater;                                       // 0x59b(0x1)
	char                                                         pad0x4_N4ZMX[0x4];                                 // 0x59c(0x4)
	char                                                         pad0x190_ECN4G[0x190];                             // 0x5a0(0x190)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatEntitlementDesc: public EntitlementDesc
{
public:
	struct StringClassReference                                  Rowboat;                                           // 0xc8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ControllableOarsInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ScrapeableDamageDataAsset: public DataAsset
{
public:
	TArray<struct ScrapeableDamageSpeedEntry>                    DamageSpeedParams;                                 // 0x28(0x10)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestWatercraftFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class RowboatLiveryPickerDataAsset: public DataAsset
{
public:
	TArray<struct RowboatLiveryByWeight>                         LiveriesInThisGroup;                               // 0x28(0x10)
	TArray<struct RowboatLiveryPickerDataAssetConditions>        SubgroupsInPriorityOrder;                          // 0x38(0x10)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x48 (Full Size[0x110] - InheritedSize[0xc8]
class RowboatCustomizationLoadoutComponent: public ActorComponent
{
public:
	char                                                         pad0x28_OYOZS[0x28];                               // 0xc8(0x28)
	class UClass*                                                EquippedCustomization;                             // 0xf0(0x8)
	char                                                         pad0x18_H0C38[0x18];                               // 0xf8(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestWatercraftServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x30 (Full Size[0xf8] - InheritedSize[0xc8]
class ScrapeableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_CW2SW[0x8];                                 // 0xc8(0x8)
	float                                                        MinIntervalBetweenScrapeDamage;                    // 0xd0(0x4)
	char                                                         pad0x4_FQQT0[0x4];                                 // 0xd4(0x4)
	class ScrapeableDamageDataAsset*                             ScrapeDamageSettings;                              // 0xd8(0x8)
	struct Vector                                                SafeZoneCenterDirection;                           // 0xe0(0xc)
	float                                                        SafeZoneMaximumAngle;                              // 0xec(0x4)
	class UClass*                                                ScrapeDamagerType;                                 // 0xf0(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FixedRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	char                                                         pad0x20_FS84V[0x20];                               // 0x28(0x20)
};


// Size 0x390 (Full Size[0xac0] - InheritedSize[0x730]
class Rowboat: public Watercraft
{
public:
	char                                                         pad0x50_1ZI1Z[0x50];                               // 0x730(0x50)
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
	char                                                         pad0x4_63U65[0x4];                                 // 0x7e4(0x4)
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
	char                                                         pad0x2_MI4NQ[0x2];                                 // 0x89a(0x2)
	float                                                        MaxPushingAngle;                                   // 0x89c(0x4)
	float                                                        CurrentStrainAmount;                               // 0x8a0(0x4)
	bool                                                         IsDocked;                                          // 0x8a4(0x1)
	char                                                         pad0x1_EGNB5[0x1];                                 // 0x8a5(0x1)
	char                                                         CoverCollisionChannel;                             // 0x8a6(0x1)
	char                                                         pad0x1_AMFSY[0x1];                                 // 0x8a7(0x1)
	float                                                        UnderCoverCheckInterval;                           // 0x8a8(0x4)
	float                                                        UnderCoverHeight;                                  // 0x8ac(0x4)
	TArray<struct Vector>                                        RelativeUnderCoverProbeRoots;                      // 0x8b0(0x10)
	char                                                         TrackedActorType;                                  // 0x8c0(0x1)
	char                                                         pad0x3_27EGP[0x3];                                 // 0x8c1(0x3)
	float                                                        LightDamagedRepairTime;                            // 0x8c4(0x4)
	float                                                        ModerateDamagedRepairTime;                         // 0x8c8(0x4)
	float                                                        HeavyDamagedRepairTime;                            // 0x8cc(0x4)
	float                                                        LightDamagedHealthThreshold;                       // 0x8d0(0x4)
	float                                                        ModerateDamagedHealthThreshold;                    // 0x8d4(0x4)
	float                                                        HeavyDamagedHealthThreshold;                       // 0x8d8(0x4)
	struct FName                                                 PremountCollisionProfileName;                      // 0x8dc(0x8)
	char                                                         pad0x1dc_LRMVJ[0x1dc];                             // 0x8e4(0x1dc)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DataAssetRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	class RowboatLiveryPickerDataAsset*                          DataAsset;                                         // 0x28(0x8)
};



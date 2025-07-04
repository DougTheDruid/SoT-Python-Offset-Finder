#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Watercrafts_Structs.h"


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftBrakingDeactivatedNotificationInputId: public NotificationInputId
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
class RowboatOarsRightBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class RowboatDockedToShipConditionalStatTrigger: public ConditionalStatsTriggerType
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ScrapeableInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatTypeStatCondition: public StatCondition
{
public:
	char                                                         pad0x20_SI91Q[0x20];                               // 0x28(0x20)
};


// Size 0x8 (Full Size[0x298] - InheritedSize[0x290]
class RowingInputComponent: public LookAtOffsetInputComponent
{
public:
	class RowingSeat*                                            TargetOars;                                        // 0x290(0x8)
};


// Size 0x28 (Full Size[0x88] - InheritedSize[0x60]
class TaleQuestWatercraftService: public TaleQuestService
{
public:
	char                                                         pad0x28_C2XYX[0x28];                               // 0x60(0x28)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatLiveryDesc: public EntitlementDesc
{
public:
	struct StringAssetReference                                  RowboatDescDataAsset;                              // 0xc8(0x10)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class WatercraftSpawnData: public ItemSpawnData
{
public:
	char                                                         pad0x20_HP4TV[0x20];                               // 0x88(0x20)
	class RowboatLiveryPicker*                                   LiveryPicker;                                      // 0xa8(0x8)
	float                                                        MinDistanceToNearestWatercraftInMetres;            // 0xb0(0x4)
	char                                                         pad0x4_SIENP[0x4];                                 // 0xb4(0x4)
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class RowboatEntitlementDesc: public EntitlementDesc
{
public:
	struct StringClassReference                                  Rowboat;                                           // 0xc8(0x10)
};


// Size 0x368 (Full Size[0x708] - InheritedSize[0x3a0]
class Watercraft: public Actor
{
public:
	char                                                         pad0x38_78YSB[0x38];                               // 0x3a0(0x38)
	class BuoyancyComponent*                                     BuoyancyComponent;                                 // 0x3d8(0x8)
	struct WatercraftRolloverCorrector                           RolloverCorrector;                                 // 0x3e0(0xc)
	char                                                         pad0x4_RA6V0[0x4];                                 // 0x3ec(0x4)
	class ShipNosediveBrake*                                     NosediveBrake;                                     // 0x3f0(0x8)
	class BowSplashContainer*                                    BowSplashContainer;                                // 0x3f8(0x8)
	class StaticMeshComponent*                                   CollisionMesh;                                     // 0x400(0x8)
	class StaticMeshComponent*                                   CraftMesh;                                         // 0x408(0x8)
	class BoxComponent*                                          OverlapHits;                                       // 0x410(0x8)
	class StaticMeshComponent*                                   WaterOcclusionVolume;                              // 0x418(0x8)
	class WaterInteractionComponent*                             WaterInteractionComponent;                         // 0x420(0x8)
	struct FName                                                 ClientConvexHullCollisionProfile;                  // 0x428(0x8)
	struct NetTimeStampCalculator                                MovementTimestamp;                                 // 0x430(0x70)
	struct RigidBodyErrorCorrection                              PhysicsErrorCorrection;                            // 0x4a0(0x1c)
	char                                                         pad0x3c_T9VWL[0x3c];                               // 0x4bc(0x3c)
	struct BuoyancySampleMovement                                BuoyancySampleMovement;                            // 0x4f8(0x68)
	class CurveFloat*                                            SpeedToChoppinessScalarCurve;                      // 0x560(0x8)
	float                                                        DeepWaterSubmersionThreshold;                      // 0x568(0x4)
	float                                                        BuoyancyChoppinessWhileSinking;                    // 0x56c(0x4)
	bool                                                         IsCritical;                                        // 0x570(0x1)
	bool                                                         RigidBodyAwake;                                    // 0x571(0x1)
	bool                                                         InContactWithLand;                                 // 0x572(0x1)
	bool                                                         InDeepWater;                                       // 0x573(0x1)
	char                                                         pad0x4_UO7WC[0x4];                                 // 0x574(0x4)
	char                                                         pad0x190_58BA5[0x190];                             // 0x578(0x190)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TaleQuestWatercraftServiceDesc: public TaleQuestServiceDesc
{
public:
};


// Size 0x30 (Full Size[0xe8] - InheritedSize[0xb8]
class ScrapeableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_75UC9[0x8];                                 // 0xb8(0x8)
	float                                                        MinIntervalBetweenScrapeDamage;                    // 0xc0(0x4)
	char                                                         pad0x4_ZU0AH[0x4];                                 // 0xc4(0x4)
	class ScrapeableDamageDataAsset*                             ScrapeDamageSettings;                              // 0xc8(0x8)
	struct Vector                                                SafeZoneCenterDirection;                           // 0xd0(0xc)
	float                                                        SafeZoneMaximumAngle;                              // 0xdc(0x4)
	class UClass*                                                ScrapeDamagerType;                                 // 0xe0(0x8)
};


// Size 0x30 (Full Size[0x6a8] - InheritedSize[0x678]
class StorageSeat: public Seat
{
public:
	class UClass*                                                StorageInteractionInput;                           // 0x678(0x8)
	class StorageContainerComponent*                             StorageContainerComponent;                         // 0x680(0x8)
	char                                                         pad0x20_YHTKR[0x20];                               // 0x688(0x20)
};


// Size 0x0 (Full Size[0x180] - InheritedSize[0x180]
class TaleQuestWatercraftFunctionLibrary: public TaleQuestFunctionStepLibrary
{
public:
};


// Size 0x1e0 (Full Size[0x4b0] - InheritedSize[0x2d0]
class RowboatAudioComponent: public SceneComponent
{
public:
	class RowboatAudioComponentParams*                           Params;                                            // 0x2d0(0x8)
	class Rowboat*                                               ParentRowboat;                                     // 0x2d8(0x8)
	char                                                         pad0x1d0_THKDV[0x1d0];                             // 0x2e0(0x1d0)
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestSinkWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableWatercraft                               Watercraft;                                        // 0x80(0x30)
};


// Size 0x8 (Full Size[0xc8] - InheritedSize[0xc0]
class RowingSeatAdaptiveTriggerComponent: public AdaptiveTriggerComponent
{
public:
	struct AdaptiveTriggerEffectMode_Feedback                    BothTriggers_Row;                                  // 0xc0(0x3)
	char                                                         pad0x5_HV3SA[0x5];                                 // 0xc3(0x5)
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


// Size 0x8 (Full Size[0x3a8] - InheritedSize[0x3a0]
class WatercraftService: public Actor
{
public:
	char                                                         pad0x8_57IHT[0x8];                                 // 0x3a0(0x8)
};


// Size 0x18 (Full Size[0xd0] - InheritedSize[0xb8]
class WatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_UAD41[0x8];                                 // 0xb8(0x8)
	TArray<class Actor*>                                         CurrentWatercrafts;                                // 0xc0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowingActionStateId: public ActionStateId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class WatercraftBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x48 (Full Size[0x100] - InheritedSize[0xb8]
class RowboatCustomizationLoadoutComponent: public ActorComponent
{
public:
	char                                                         pad0x28_5EFSL[0x28];                               // 0xb8(0x28)
	class UClass*                                                EquippedCustomization;                             // 0xe0(0x8)
	char                                                         pad0x18_CD9J4[0x18];                               // 0xe8(0x18)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ControllableOarsInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsLeftForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0xa8 (Full Size[0x128] - InheritedSize[0x80]
class TaleQuestSpawnWatercraftStepDesc: public TaleQuestStepDesc
{
public:
	struct QuestVariableTransform                                SpawnLocation;                                     // 0x80(0x38)
	struct QuestVariableWatercraft                               Watercraft;                                        // 0xf8(0x30)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSpawnWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x98 (Full Size[0x150] - InheritedSize[0xb8]
class ItemProxyWatercraftTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_WSRYQ[0x8];                                 // 0xb8(0x8)
	class ItemProxyWatercraftTrackerComponentDataAsset*          WatercraftTrackingData;                            // 0xc0(0x8)
	class Actor*                                                 CurrentWatercraft;                                 // 0xc8(0x8)
	char                                                         pad0x80_VX7F9[0x80];                               // 0xd0(0x80)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightBrakingDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatInterface: public Interface
{
public:
};


// Size 0x110 (Full Size[0x4b0] - InheritedSize[0x3a0]
class FakeShip: public Actor
{
public:
	char                                                         pad0x8_HF16U[0x8];                                 // 0x3a0(0x8)
	TArray<class ItemProxy*>                                     AttachedItems;                                     // 0x3a8(0x10)
	char                                                         pad0xf8_U2YWL[0xf8];                               // 0x3b8(0xf8)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class TaleQuestSinkWatercraftStep: public TaleQuestStep
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ScrapeableDamageDataAsset: public DataAsset
{
public:
	TArray<struct ScrapeableDamageSpeedEntry>                    DamageSpeedParams;                                 // 0x28(0x10)
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
	char                                                         pad0x4_WJQYB[0x4];                                 // 0x4c(0x4)
	class WwiseEvent*                                            RowboatLaunch;                                     // 0x50(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStart;                       // 0x58(0x8)
	class WwiseEvent*                                            RowboatImpactAndScrapeStop;                        // 0x60(0x8)
	class WwiseEvent*                                            RowboatStrainStart;                                // 0x68(0x8)
	class WwiseEvent*                                            RowboatStrainStop;                                 // 0x70(0x8)
	struct FName                                                 RowboatStrainRtpcName;                             // 0x78(0x8)
	float                                                        RowboatMaxStrainRtpc;                              // 0x80(0x4)
	char                                                         pad0x4_5LCQD[0x4];                                 // 0x84(0x4)
	class WwiseEvent*                                            RowboatTakenDamage;                                // 0x88(0x8)
	float                                                        DamageAmountRequiredForNoiseToPlay;                // 0x90(0x4)
	char                                                         pad0x4_HNLII[0x4];                                 // 0x94(0x4)
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


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ItemProxyWatercraftTrackerComponentDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         WatercraftTypes;                                   // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatCustomizationLoadoutInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardDeactivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class CheckRowboatLiveriesStatCondition: public StatCondition
{
public:
	char                                                         pad0x20_X7DLH[0x20];                               // 0x28(0x20)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class RowboatOarsRightForwardNotificationInputId: public NotificationInputId
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
class RowboatOarsLeftBrakingActivatedNotificationInputId: public NotificationInputId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatLiveryPicker: public Object
{
public:
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class RowboatTypeCategory: public CategoryBase
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class RowboatSpawnParamsDataAsset: public DataAsset
{
public:
	TArray<class Class*>                                         RowboatTypes;                                      // 0x28(0x10)
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class RowboatLiveryCategory: public CategoryBase
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class RowboatPartInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class DataAssetRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	class RowboatLiveryPickerDataAsset*                          DataAsset;                                         // 0x28(0x8)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class FixedRowboatLiveryPicker: public RowboatLiveryPicker
{
public:
	char                                                         pad0x20_UB9NZ[0x20];                               // 0x28(0x20)
};


// Size 0x398 (Full Size[0xaa0] - InheritedSize[0x708]
class Rowboat: public Watercraft
{
public:
	char                                                         pad0x50_5M6L8[0x50];                               // 0x708(0x50)
	class ChildActorComponent*                                   LeftSideClamberSpot;                               // 0x758(0x8)
	class ChildActorComponent*                                   RightSideClamberSpot;                              // 0x760(0x8)
	class ChildActorComponent*                                   ForceSpot;                                         // 0x768(0x8)
	class ChildActorComponent*                                   Lantern;                                           // 0x770(0x8)
	bool                                                         LanternRequired;                                   // 0x778(0x1)
	char                                                         pad0x7_K52H6[0x7];                                 // 0x779(0x7)
	class ChildActorComponent*                                   RowingSeat;                                        // 0x780(0x8)
	class ChildActorComponent*                                   StorageSeat;                                       // 0x788(0x8)
	class RowboatCustomizationLoadoutComponent*                  CustomizationLoadoutComponent;                     // 0x790(0x8)
	class ShipLiveryComponent*                                   LiveryComponent;                                   // 0x798(0x8)
	class ReplicatedShipPartCustomizationComponent*              CustomizationComponent;                            // 0x7a0(0x8)
	class RepairableComponent*                                   RepairableComponent;                               // 0x7a8(0x8)
	struct Vector                                                WaterExclusionOffset;                              // 0x7b0(0xc)
	struct CollisionProfileName                                  OverrideMountedCollisionProfileName;               // 0x7bc(0x8)
	char                                                         pad0x4_MK7PS[0x4];                                 // 0x7c4(0x4)
	class TetherCustomisationComponent*                          TetherCustomisationComponent;                      // 0x7c8(0x8)
	class HealthComponent*                                       HealthComponent;                                   // 0x7d0(0x8)
	class ActorDamageableComponent*                              ActorDamageableComponent;                          // 0x7d8(0x8)
	class RammableComponent*                                     RammableComponent;                                 // 0x7e0(0x8)
	class ScrapeableComponent*                                   ScrapeableComponent;                               // 0x7e8(0x8)
	class RowboatAudioComponent*                                 RowboatAudio;                                      // 0x7f0(0x8)
	class BaseHullDragDynamicsDesc*                              HullDragDynamicsDesc;                              // 0x7f8(0x8)
	class BowSplashContainer*                                    OarSplashContainer;                                // 0x800(0x8)
	class MountableComponent*                                    MountableComponent;                                // 0x808(0x8)
	class ActorActivationComponent*                              ActorActivationComponent;                          // 0x810(0x8)
	class CurveFloat*                                            LinearDampingOverTimeWhileBeachedScalarCurve;      // 0x818(0x8)
	class CurveFloat*                                            AngularDampingOverTimeWhileBeachedScalarCurve;     // 0x820(0x8)
	struct RowboatDamageEffectData                               DamageEffectData;                                  // 0x828(0x18)
	struct RowboatStrainDamageData                               StrainDamageData;                                  // 0x840(0x20)
	TArray<class ChildActorComponent*>                           AlwaysEnabledInteractables;                        // 0x860(0x10)
	class ShroudBreakerTrackerComponent*                         ShroudBreakerTrackerComponent;                     // 0x870(0x8)
	bool                                                         IsBeingLaunched;                                   // 0x878(0x1)
	bool                                                         IsSinking;                                         // 0x879(0x1)
	char                                                         pad0x2_4P38Q[0x2];                                 // 0x87a(0x2)
	float                                                        MaxPushingAngle;                                   // 0x87c(0x4)
	float                                                        CurrentStrainAmount;                               // 0x880(0x4)
	bool                                                         IsDocked;                                          // 0x884(0x1)
	char                                                         pad0x1_F3DSU[0x1];                                 // 0x885(0x1)
	char                                                         CoverCollisionChannel;                             // 0x886(0x1)
	char                                                         pad0x1_MCA5P[0x1];                                 // 0x887(0x1)
	float                                                        UnderCoverCheckInterval;                           // 0x888(0x4)
	float                                                        UnderCoverHeight;                                  // 0x88c(0x4)
	TArray<struct Vector>                                        RelativeUnderCoverProbeRoots;                      // 0x890(0x10)
	char                                                         TrackedActorType;                                  // 0x8a0(0x1)
	char                                                         pad0x3_6IZCE[0x3];                                 // 0x8a1(0x3)
	float                                                        LightDamagedRepairTime;                            // 0x8a4(0x4)
	float                                                        ModerateDamagedRepairTime;                         // 0x8a8(0x4)
	float                                                        HeavyDamagedRepairTime;                            // 0x8ac(0x4)
	float                                                        LightDamagedHealthThreshold;                       // 0x8b0(0x4)
	float                                                        ModerateDamagedHealthThreshold;                    // 0x8b4(0x4)
	float                                                        HeavyDamagedHealthThreshold;                       // 0x8b8(0x4)
	struct FName                                                 PremountCollisionProfileName;                      // 0x8bc(0x8)
	char                                                         pad0x1dc_S2I3X[0x1dc];                             // 0x8c4(0x1dc)
};



// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x438] - InheritedSize[0x438]
class AIPetsOnDemandSpawner: public AISpawner
{
public:
};


// Size 0x0 (Full Size[0x68] - InheritedSize[0x68]
class BTDecorator_IsForcingHangout: public BTDecorator_BaseConditional
{
public:
};


// Size 0x0 (Full Size[0x68] - InheritedSize[0x68]
class BTDecorator_IsOccupiedHangoutSpotStillAvailable: public BTDecorator_BaseConditional
{
public:
};


// Size 0x10 (Full Size[0x78] - InheritedSize[0x68]
class BTDecorator_IsOccupyingHangoutSpotWithGivenId: public BTDecorator_BaseConditional
{
public:
	TArray<Struct HangoutSpotId>                                 SuccessIds;                                        // 0x68(0x10)
};


// Size 0x0 (Full Size[0x68] - InheritedSize[0x68]
class BTDecorator_IsPerchedInHangout: public BTDecorator_BaseConditional
{
public:
};


// Size 0x0 (Full Size[0x68] - InheritedSize[0x68]
class BTDecorator_PetFoodSourceAvailable: public BTDecorator_BaseConditional
{
public:
};


// Size 0x10 (Full Size[0x78] - InheritedSize[0x68]
class BTDecorator_PetRoamingAnimationStateActive: public BTDecorator_BaseConditional
{
public:
	TArray<Byte MatchingStates>                                  MatchingStates;                                    // 0x68(0x10)
};


// Size 0x8 (Full Size[0x90] - InheritedSize[0x88]
class BTTask_AttachToHangout: public BTTask_BlackboardBase
{
public:
	float                                                        TaskDuration;                                      // 0x88(0x4)
	char                                                         pad0xc_UWX84[0xc];                                 // 0x8a(0xc)
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class BTTask_ChangeHangoutAnimation: public BTTask_BlackboardBase
{
public:
};


// Size 0x8 (Full Size[0x90] - InheritedSize[0x88]
class BTTask_DetachFromHangout: public BTTask_BlackboardBase
{
public:
	float                                                        TaskDuration;                                      // 0x88(0x4)
	char                                                         pad0xc_ZBD6Q[0xc];                                 // 0x8a(0xc)
};


// Size 0x8 (Full Size[0x68] - InheritedSize[0x60]
class BTTask_EatFood: public BTTaskNode
{
public:
	Class PetFeedingDataAsset*                                   FeedingDataAsset;                                  // 0x60(0x8)
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class BTTask_GetTotalHangoutTime: public BTTask_BlackboardBase
{
public:
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class BTTask_NotifyForcedHangoutComplete: public BTTask_BlackboardBase
{
public:
};


// Size 0x20 (Full Size[0x80] - InheritedSize[0x60]
class BTTask_PetWaitForAnimationRoamingState: public BTTaskNode
{
public:
	TArray<Byte SuccessRoamingStates>                            SuccessRoamingStates;                              // 0x60(0x10)
	TArray<Byte FailRoamingStates>                               FailRoamingStates;                                 // 0x70(0x10)
};


// Size 0x8 (Full Size[0x68] - InheritedSize[0x60]
class BTTask_ReactToOwner: public BTTaskNode
{
public:
};


// Size 0x10 (Full Size[0x70] - InheritedSize[0x60]
class BTTask_ReactToThreat: public BTTaskNode
{
public:
	byte                                                         ReactAnimState;                                    // 0x60(0x1)
	bool                                                         ChangeAnimationAfterWaitTime;                      // 0x61(0x1)
	char                                                         pad0x2_O59TW[0x2];                                 // 0x62(0x2)
	float                                                        ReactAnimTime;                                     // 0x64(0x4)
	byte                                                         AfterReactAnimState;                               // 0x68(0x1)
	char                                                         pad0x9_FD6BV[0x9];                                 // 0x67(0x9)
};


// Size 0x8 (Full Size[0x98] - InheritedSize[0x90]
class BTTask_RotatePetToFaceBBEntryWithTime: public BTTask_RotateToFaceBBEntry
{
public:
	float                                                        Delay;                                             // 0x90(0x4)
	float                                                        RotationTime;                                      // 0x94(0x4)
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class BTTask_SelectFoodSource: public BTTask_BlackboardBase
{
public:
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class BTTask_SelectPetHangoutSpot: public BTTask_BlackboardBase
{
public:
	bool                                                         NeedForceId;                                       // 0x88(0x1)
	char                                                         pad0x3_D0II0[0x3];                                 // 0x89(0x3)
	Struct HangoutSpotId                                         ForcedId;                                          // 0x8c(0x8)
	char                                                         pad0x14_R3QYY[0x14];                               // 0x92(0x14)
};


// Size 0x78 (Full Size[0x100] - InheritedSize[0x88]
class BTTask_SelectWanderFlyStrategy: public BTTask_BlackboardBase
{
public:
	Struct AIDataProviderFloatValue                              WanderRange;                                       // 0x88(0x30)
	Struct AIDataProviderFloatValue                              LowFlyRange;                                       // 0xb8(0x30)
	class                                                        WanderStrategy;                                    // 0xe8(0x8)
	class                                                        LowFlyStrategy;                                    // 0xf0(0x8)
	class                                                        HighFlyStrategy;                                   // 0xf8(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetHangoutInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetMemoryInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetUGCNameInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetLifetimeInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetOwnerIdentityInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetSpawnOnShipInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetReactInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0x68] - InheritedSize[0x60]
class BTTask_SetDebugPetStateDescriptor: public BTTaskNode
{
public:
	byte                                                         NewDescriptor;                                     // 0x60(0x1)
	char                                                         pad0x9_JQS9X[0x9];                                 // 0x5f(0x9)
};


// Size 0x0 (Full Size[0x88] - InheritedSize[0x88]
class BTTask_StopOccupyingHangoutSpot: public BTTask_BlackboardBase
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class CannonSquashComponent: public ActorComponent
{
public:
};


// Size 0xd8 (Full Size[0x1a0] - InheritedSize[0xc8]
class PetDangerComponent: public ActorComponent
{
public:
	Class PetDangerDataAsset*                                    DangerDataAsset;                                   // 0xc8(0x8)
	char                                                         pad0xe0_INQDR[0xe0];                               // 0xce(0xe0)
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class EnvQueryContext_AverageThreatPositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_CurrentHangoutSpot: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class EnvQueryContext_FirstThreatPositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class EnvQueryContext_PerceivedFoodSources: public EnvQueryContext
{
public:
};


// Size 0x0 (Full Size[0x30] - InheritedSize[0x30]
class EnvQueryContext_SafePositionFromBlackboard: public EnvQueryContext_PositionFromBlackboard
{
public:
};


// Size 0x10 (Full Size[0x130] - InheritedSize[0x120]
class PetDesc: public ItemDesc
{
public:
	Class PetSpawnParamsDataAsset*                               PetSpawnParams;                                    // 0x120(0x8)
	class                                                        PreviewPetClass;                                   // 0x128(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PetHangoutSpotsDataAsset: public DataAsset
{
public:
	TArray<Struct HangoutSpotParams>                             HangoutSpotParams;                                 // 0x28(0x10)
};


// Size 0x1d0 (Full Size[0x298] - InheritedSize[0xc8]
class PetHangoutSpotSelectorComponent: public ActorComponent
{
public:
	Class PetHangoutSpotComponent*                               HangoutSpotPositionComponent;                      // 0xc8(0x8)
	Class PetHangoutSpotsDataAsset*                              HangoutParamsDataAsset;                            // 0xd0(0x8)
	char                                                         pad0x70_CP7U1[0x70];                               // 0xd8(0x70)
	class                                                        PetType_Cached;                                    // 0x148(0x8)
	char                                                         pad0x158_P7BIO[0x158];                             // 0x14e(0x158)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HangoutSpotSelectionInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetIdleMovementInterface: public Interface
{
public:
};


// Size 0xe8 (Full Size[0x9e8] - InheritedSize[0x900]
class PetAIController: public AthenaAIController
{
public:
	char                                                         pad0x20_YRXXG[0x20];                               // 0x900(0x20)
	TArray<Struct AIStategyControllerMovementMod>                StrategyControllerMovementMods;                    // 0x920(0x10)
	float                                                        DefaultControlRotationInterpSpeed;                 // 0x930(0x4)
	char                                                         pad0x4_1OCVK[0x4];                                 // 0x934(0x4)
	class                                                        DefaultStrategy;                                   // 0x938(0x8)
	Class ReactStateMappingsDataAsset*                           ReactMappings;                                     // 0x940(0x8)
	char                                                         pad0x8_THH38[0x8];                                 // 0x948(0x8)
	Class PetHangoutSpotSelectorComponent*                       HangoutSpotSelectorComponent;                      // 0x950(0x8)
	Class PetHangoutSpotComponent*                               ForcedHangoutSpotComponent;                        // 0x958(0x8)
	Class BlackboardData*                                        DefaultBlackboardAsset;                            // 0x960(0x8)
	Class BehaviorTree*                                          DefaultTree;                                       // 0x968(0x8)
	Class BehaviorTree*                                          HangoutTree;                                       // 0x970(0x8)
	Class BehaviorTree*                                          IdleTree;                                          // 0x978(0x8)
	float                                                        MaximumReactRange;                                 // 0x980(0x4)
	char                                                         pad0x4_0K0QB[0x4];                                 // 0x984(0x4)
	Class PetDangerComponent*                                    DangerComponent;                                   // 0x988(0x8)
	float                                                        MinAgentHalfHeightPctOverride;                     // 0x990(0x4)
	char                                                         pad0x5c_WJRQ1[0x5c];                               // 0x992(0x5c)
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class PetCustomisationOverrideDataAsset: public DataAsset
{
public:
	class                                                        AnimationOverrideId;                               // 0x28(0x8)
	Class WwiseEvent*                                            FiredFromActorSFX;                                 // 0x30(0x8)
	Struct FString                                               DebugMenuName;                                     // 0x38(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PetCustomisationOverrideMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct PetCustomiationOverrideMappingEntry>           MappingEntries;                                    // 0x28(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class PetDangerDataAsset: public DataAsset
{
public:
	TArray<Struct PetDangerHearingThreat>                        KnownHearingDangers;                               // 0x28(0x10)
	float                                                        MinChangeAverageThreatLocationToUpdate;            // 0x38(0x4)
	float                                                        FleeDistance;                                      // 0x3c(0x4)
	TArray<Byte ResponsePriorities>                              ResponsePriorities;                                // 0x40(0x10)
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class PetFeedingDataAsset: public DataAsset
{
public:
	Struct PetFeedingParams                                      PetFeedingParams;                                  // 0x28(0x38)
};


// Size 0xa0 (Full Size[0x380] - InheritedSize[0x2e0]
class PetHangoutSpotComponent: public SceneComponent
{
public:
	TArray<Struct HangoutSpotPosition>                           HangoutSpots;                                      // 0x2e0(0x10)
	bool                                                         HasLowerDeckFloodThreshold;                        // 0x2f0(0x1)
	char                                                         pad0x3_26YGS[0x3];                                 // 0x2f1(0x3)
	float                                                        LowerDeckFloodThreshold;                           // 0x2f4(0x4)
	bool                                                         HasMiddleDeckFloodThreshold;                       // 0x2f8(0x1)
	char                                                         pad0x3_DKV1A[0x3];                                 // 0x2f9(0x3)
	float                                                        MiddleDeckFloodThreshold;                          // 0x2fc(0x4)
	float                                                        PerchInteractableHeightOffset;                     // 0x300(0x4)
	bool                                                         IsWorldHangout;                                    // 0x304(0x1)
	char                                                         pad0x23_DEMUW[0x23];                               // 0x305(0x23)
	TArray<class PetPerchComponent*>                             PetPerchComponents;                                // 0x328(0x10)
	char                                                         pad0x10_0UHYO[0x10];                               // 0x338(0x10)
	bool                                                         IsTopDeckBlocked;                                  // 0x348(0x1)
	bool                                                         IsOwnerSinking;                                    // 0x349(0x1)
	char                                                         pad0x1e_I41HD[0x1e];                               // 0x34a(0x1e)
	Class PetHangoutSpotsDataAsset*                              PetHangoutSpotsDataAsset;                          // 0x368(0x8)
	char                                                         pad0x20_XNNQ4[0x20];                               // 0x36e(0x20)
};


// Size 0x80 (Full Size[0x590] - InheritedSize[0x510]
class PetItemInfo: public NonStorableItemInfo
{
public:
	char                                                         pad0x20_XNGRJ[0x20];                               // 0x510(0x20)
	Class Actor*                                                 SpawnedForShip;                                    // 0x530(0x8)
	float                                                        DropTraceDistance;                                 // 0x538(0x4)
	float                                                        PointSearchRadius;                                 // 0x53c(0x4)
	byte                                                         DropChannel;                                       // 0x540(0x1)
	char                                                         pad0x7_X7OQO[0x7];                                 // 0x541(0x7)
	Class Actor*                                                 PetOwner;                                          // 0x548(0x8)
	Struct PetCustomisation                                      PetCustomisation;                                  // 0x550(0x28)
	Class PetUGCNameComponent*                                   PetUGCNameComponent;                               // 0x578(0x8)
	char                                                         pad0x20_CGJBX[0x20];                               // 0x57e(0x20)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class PetListingDataAsset: public DataAsset
{
public:
	TArray<Struct PetListingTypeEntry>                           Entries;                                           // 0x28(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetMovementModifierSettingsInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetOwnerInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class PetOwnerComponent: public ActorComponent
{
public:
	char                                                         pad0x18_IEXW6[0x18];                               // 0xc8(0x18)
	Class ItemInfo*                                              PetInfo;                                           // 0xe0(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetPartCustomisationInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x170] - InheritedSize[0x128]
class PetPerchComponent: public InteractableComponent
{
public:
	char                                                         pad0x18_GPWHK[0x18];                               // 0x128(0x18)
	TArray<Class AllowedPetTypes>                                AllowedPetTypes;                                   // 0x140(0x10)
	int                                                          HangoutSpotIndex;                                  // 0x150(0x4)
	struct FName                                                 HangoutSpotName;                                   // 0x154(0x8)
	Struct Vector                                                InteractionPointLocation;                          // 0x15c(0xc)
	bool                                                         Enabled;                                           // 0x168(0x1)
	bool                                                         BlocksPetEmoteReactions;                           // 0x169(0x1)
	bool                                                         IgnorePickupFromHangoutTooltipDisplayOffset;       // 0x16a(0x1)
	char                                                         pad0x7_V8D64[0x7];                                 // 0x169(0x7)
};


// Size 0x40 (Full Size[0x68] - InheritedSize[0x28]
class PetSpawnParamsDataAsset: public DataAsset
{
public:
	class                                                        PetClassID;                                        // 0x28(0x8)
	Class BehaviorTree*                                          TreeToRun;                                         // 0x30(0x8)
	Class EnvQuery*                                              SpawnQueryForLand;                                 // 0x58(0x8)
	Class EnvQuery*                                              SpawnQueryForShip;                                 // 0x60(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PetsServiceInterface: public Interface
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class PetsServiceParamsDataAsset: public DataAsset
{
public:
	Struct PetsServiceParams                                     Params;                                            // 0x28(0x38)
};


// Size 0x308 (Full Size[0x330] - InheritedSize[0x28]
class PetsService: public Object
{
public:
	char                                                         pad0x60_81ZDH[0x60];                               // 0x28(0x60)
	Class AIPetsOnDemandSpawner*                                 Spawner;                                           // 0x88(0x8)
	char                                                         pad0x18_RLUVH[0x18];                               // 0x90(0x18)
	Struct PetsServiceParams                                     PetsServiceParams;                                 // 0xa8(0x38)
	TArray<class Actor*>                                         OwnersToRemove;                                    // 0xe0(0x10)
	TArray<class Actor*>                                         OwnersToRequestDespawn;                            // 0xf0(0x10)
	TArray<class Pawn*>                                          MovingPetsOnIslands;                               // 0x100(0x10)
	TArray<class Pawn*>                                          MovingPetsOnShips;                                 // 0x110(0x10)
	TArray<class Actor*>                                         ScratchArray;                                      // 0x120(0x10)
	char                                                         pad0x1a8_ISKCK[0x1a8];                             // 0x130(0x1a8)
	Class PetHangoutSpotsDataAsset*                              PetHangoutDataAsset;                               // 0x2d8(0x8)
	char                                                         pad0x60_3X1CY[0x60];                               // 0x2de(0x60)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class PetsSettings: public Object
{
public:
	Struct StringAssetReference                                  PetHangoutSpotsDataAsset;                          // 0x28(0x10)
	Struct StringAssetReference                                  PetListingDataAsset;                               // 0x38(0x10)
	Struct StringAssetReference                                  PetsServiceParamsDataAsset;                        // 0x48(0x10)
	Struct StringAssetReference                                  PetSpawnDefinitionsDataAsset;                      // 0x58(0x10)
	TArray<Byte ExcludedStatesForRoamingAssetGeneration>         ExcludedStatesForRoamingAssetGeneration;           // 0x68(0x10)
};


// Size 0x40 (Full Size[0x108] - InheritedSize[0xc8]
class PetUGCNameComponent: public ActorComponent
{
public:
	char                                                         pad0x18_FELEZ[0x18];                               // 0xc8(0x18)
	Struct FString                                               DefaultPetName;                                    // 0xe0(0x10)
	Struct FString                                               CustomisedPetName;                                 // 0xf0(0x10)
	char                                                         pad0x28_D91HK[0x28];                               // 0xfe(0x28)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ReactAIStrategyId: public AIStrategyId
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ReactStateMappingsDataAsset: public DataAsset
{
public:
	TArray<Struct ReactStateMapping>                             ReactMappings;                                     // 0x28(0x10)
};


// Size 0x150 (Full Size[0x8f0] - InheritedSize[0x7a0]
class WieldablePet: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x38_3DH3B[0x38];                               // 0x7a0(0x38)
	float                                                        ThirdPersonScalingModifier;                        // 0x7d8(0x4)
	char                                                         pad0x4_YVEWC[0x4];                                 // 0x7dc(0x4)
	Class WieldablePetComponent*                                 WieldablePetComponent;                             // 0x7e0(0x8)
	Class AIPartsRetrievalComponent*                             AIPartsRetrievalComponent;                         // 0x7e8(0x8)
	Class PetPartCustomisationComponent*                         PetPartCustomisationComponent;                     // 0x7f0(0x8)
	Class AnimNotifyWwiseEmitterComponent*                       AnimNotifyWwiseEmitterComponent;                   // 0x7f8(0x8)
	Class WaterExposureComponent*                                WaterExposureComponent;                            // 0x800(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x808(0x8)
	Class PickupableComponent*                                   PickupableComponent;                               // 0x810(0x8)
	Class WieldableInteractableComponent*                        WieldableInteractableComponent;                    // 0x818(0x8)
	Class CleanlinessComponent*                                  CleanlinessComponent;                              // 0x820(0x8)
	Class LightWeightStatusEffectManagerComponent*               LightWeightStatusEffectManagerComponent;           // 0x828(0x8)
	Class PetDitherComponent*                                    PetDitherComponent;                                // 0x830(0x8)
	Class Actor*                                                 PetOwner;                                          // 0x838(0x8)
	Class FeedingComponent*                                      FeedingComponent;                                  // 0x840(0x8)
	Class PetSicknessComponent*                                  SicknessComponent;                                 // 0x848(0x8)
	Class WieldablePetHungerComponent*                           HungerComponent;                                   // 0x850(0x8)
	Class StarvingComponent*                                     StarvingComponent;                                 // 0x858(0x8)
	Class PetTelemetryComponent*                                 TelemetryComponent;                                // 0x860(0x8)
	Class AnimationDataStoreComponent*                           AnimationDataStoreComponent;                       // 0x868(0x8)
	bool                                                         SubmergedStrokingEnabled;                          // 0x870(0x1)
	char                                                         pad0x6f_UG5G0[0x6f];                               // 0x871(0x6f)
	byte                                                         HungerReactAnimationState;                         // 0x8e0(0x1)
	byte                                                         DropRequest;                                       // 0x8e1(0x1)
	char                                                         pad0x10_7CBI8[0x10];                               // 0x8e0(0x10)
};


// Size 0x10 (Full Size[0x320] - InheritedSize[0x310]
class WieldablePetAnimNotifyWwiseEmitterComponent: public AnimNotifyWwiseEmitterComponent
{
public:
};


// Size 0x88 (Full Size[0x150] - InheritedSize[0xc8]
class WieldablePetComponent: public ActorComponent
{
public:
	Class WieldablePetComponentDataAsset*                        WieldablePetComponentData;                         // 0xc8(0x8)
	char                                                         pad0x90_WQWVQ[0x90];                               // 0xce(0x90)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class WieldablePetComponentDataAsset: public DataAsset
{
public:
	Struct FloatRange                                            FriendlyTimeUntilEscape;                           // 0x28(0x10)
	Struct FloatRange                                            NormalTimeUntilEscape;                             // 0x38(0x10)
	Struct FloatRange                                            SubmergedTimeUntilEscape;                          // 0x48(0x10)
	float                                                        DamageToOwnerDropThreshold;                        // 0x58(0x4)
	char                                                         pad0x4_JH942[0x4];                                 // 0x5c(0x4)
	TArray<Struct WieldablePetDropTimeout>                       DropTimeouts;                                      // 0x60(0x10)
};


// Size 0xb0 (Full Size[0x178] - InheritedSize[0xc8]
class WieldablePetHungerComponent: public ActorComponent
{
public:
	Class WieldablePetHungerDataAsset*                           HungerData;                                        // 0xc8(0x8)
	char                                                         pad0x28_EU5W9[0x28];                               // 0xd0(0x28)
	TArray<Struct OverlapResult>                                 CachedOverlappingActors;                           // 0xf8(0x10)
	TArray<Struct WieldablePetFoodSourceEntry>                   ActiveFoodSources;                                 // 0x108(0x10)
	TArray<Struct WieldablePetFoodSourceEntry>                   FoodSourcesToRemove;                               // 0x118(0x10)
	char                                                         pad0x70_JUZ9Z[0x70];                               // 0x126(0x70)
};


// Size 0x30 (Full Size[0x58] - InheritedSize[0x28]
class WieldablePetHungerDataAsset: public DataAsset
{
public:
	float                                                        TimeToStartEating;                                 // 0x28(0x4)
	float                                                        EdibleCheckRadius;                                 // 0x2c(0x4)
	Struct WieldablePetHungerAnimationData                       EatingAnimData;                                    // 0x30(0x8)
	Struct WieldablePetHungerAnimationData                       FedAnimData;                                       // 0x38(0x8)
	Struct WieldablePetHungerAnimationData                       SickAnimData;                                      // 0x40(0x8)
	Struct WieldablePetHungerAnimationData                       RefuseAnimData;                                    // 0x48(0x8)
	byte                                                         CollisionChannel;                                  // 0x50(0x1)
	char                                                         pad0x9_T78VV[0x9];                                 // 0x4f(0x9)
};


}
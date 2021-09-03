#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum AthenaAI.EAIKnockbackStrengthType
enum class AthenaAI_EAIKnockbackStrengthType : uint8_t
{
	EAIKnockbackStrengthType__Low  = 0,
	EAIKnockbackStrengthType__Medium = 1,
	EAIKnockbackStrengthType__High = 2,
	EAIKnockbackStrengthType__EAIKnockbackStrengthType_MAX = 3,

};

// Enum AthenaAI.EAthenaAISpawnType
enum class AthenaAI_EAthenaAISpawnType : uint8_t
{
	EAthenaAISpawnType__SpawnOnLand = 0,
	EAthenaAISpawnType__SpawnOnShip = 1,
	EAthenaAISpawnType__SpawnSummoned = 2,
	EAthenaAISpawnType__SpawnBoarding = 3,
	EAthenaAISpawnType__Num        = 4,
	EAthenaAISpawnType__EAthenaAISpawnType_MAX = 5,

};

// Enum AthenaAI.EAIAbilityDamageIntervalCounterMode
enum class AthenaAI_EAIAbilityDamageIntervalCounterMode : uint8_t
{
	DontBlock                      = 0,
	BlockWhenExecutingThisAbility  = 1,
	BlockWhenExecutingAnyAbility   = 2,
	EAIAbilityDamageIntervalCounterMode_MAX = 3,

};

// Enum AthenaAI.EAIDebugColour
enum class AthenaAI_EAIDebugColour : uint8_t
{
	EAIDebugColour__Red            = 0,
	EAIDebugColour__Green          = 1,
	EAIDebugColour__Blue           = 2,
	EAIDebugColour__White          = 3,
	EAIDebugColour__Yellow         = 4,
	EAIDebugColour__Black          = 5,
	EAIDebugColour__EAIDebugColour_MAX = 6,

};

// Enum AthenaAI.AISpawnRequestResult
enum class AthenaAI_EAISpawnRequestResult : uint8_t
{
	AISpawnRequestResult__Incomplete = 0,
	AISpawnRequestResult__Success  = 1,
	AISpawnRequestResult__FailedSpawnDenied = 2,
	AISpawnRequestResult__FailedNoQuery = 3,
	AISpawnRequestResult__FailedNoValidPos = 4,
	AISpawnRequestResult__FailedLoadingPawnClass = 5,
	AISpawnRequestResult__FailedLoadingItemDropComponentClass = 6,
	AISpawnRequestResult__Cancelled = 7,
	AISpawnRequestResult__AISpawnRequestResult_MAX = 8,

};

// Enum AthenaAI.ClassLoadState
enum class AthenaAI_EClassLoadState : uint8_t
{
	ClassLoadState__Incomplete     = 0,
	ClassLoadState__Success        = 1,
	ClassLoadState__NoLoad         = 2,
	ClassLoadState__Failed         = 3,
	ClassLoadState__ClassLoadState_MAX = 4,

};

// Enum AthenaAI.AISpawnLocationSearchResult
enum class AthenaAI_EAISpawnLocationSearchResult : uint8_t
{
	AISpawnLocationSearchResult__Incomplete = 0,
	AISpawnLocationSearchResult__Success = 1,
	AISpawnLocationSearchResult__FailedNoQuery = 2,
	AISpawnLocationSearchResult__FailedNoValidPos = 3,
	AISpawnLocationSearchResult__Cancelled = 4,
	AISpawnLocationSearchResult__AISpawnLocationSearchResult_MAX = 5,

};

// Enum AthenaAI.AISpawnRequestState
enum class AthenaAI_EAISpawnRequestState : uint8_t
{
	AISpawnRequestState__PreloadClasses = 0,
	AISpawnRequestState__AwaitingBegin = 1,
	AISpawnRequestState__DelayUntilNextCanSpawnCheck = 2,
	AISpawnRequestState__WaitForClassLoadsAndLocationResult = 3,
	AISpawnRequestState__DelayUntilNextLocationCheck = 4,
	AISpawnRequestState__Complete  = 5,
	AISpawnRequestState__AISpawnRequestState_MAX = 6,

};

// Enum AthenaAI.EAITargetWeaponFiringArcResult
enum class AthenaAI_EAITargetWeaponFiringArcResult : uint8_t
{
	LeftOfArc                      = 0,
	RightOfArc                     = 1,
	WithinArc                      = 2,
	EAITargetWeaponFiringArcResult_MAX = 3,

};

// Enum AthenaAI.ESirenEncounterState
enum class AthenaAI_ESirenEncounterState : uint8_t
{
	ESirenEncounterState__Active   = 0,
	ESirenEncounterState__Inactive = 1,
	ESirenEncounterState__ESirenEncounterState_MAX = 2,

};

// Enum AthenaAI.EBlackboardIntValueComparisonType
enum class AthenaAI_EBlackboardIntValueComparisonType : uint8_t
{
	EBlackboardIntValueComparisonType__Equal = 0,
	EBlackboardIntValueComparisonType__NotEqual = 1,
	EBlackboardIntValueComparisonType__GreaterThan = 2,
	EBlackboardIntValueComparisonType__LessThan = 3,
	EBlackboardIntValueComparisonType__GreaterThanEquals = 4,
	EBlackboardIntValueComparisonType__LessThanEquals = 5,
	EBlackboardIntValueComparisonType__EBlackboardIntValueComparisonType_MAX = 6,

};

// Enum AthenaAI.EBlackboardValueCompositeType
enum class AthenaAI_EBlackboardValueCompositeType : uint8_t
{
	EBlackboardValueCompositeType__And = 0,
	EBlackboardValueCompositeType__Or = 1,
	EBlackboardValueCompositeType__EBlackboardValueCompositeType_MAX = 2,

};

// Enum AthenaAI.EBlackboardValueComparisonType
enum class AthenaAI_EBlackboardValueComparisonType : uint8_t
{
	EBlackboardValueComparisonType__NearlyEqual = 0,
	EBlackboardValueComparisonType__NotNearlyEqual = 1,
	EBlackboardValueComparisonType__GreaterThan = 2,
	EBlackboardValueComparisonType__LessThan = 3,
	EBlackboardValueComparisonType__GreaterThanEquals = 4,
	EBlackboardValueComparisonType__LessThanEquals = 5,
	EBlackboardValueComparisonType__EBlackboardValueComparisonType_MAX = 6,

};

// Enum AthenaAI.EFloatValueComparisonType
enum class AthenaAI_EFloatValueComparisonType : uint8_t
{
	EFloatValueComparisonType__NearlyEqual = 0,
	EFloatValueComparisonType__NotNearlyEqual = 1,
	EFloatValueComparisonType__GreaterThan = 2,
	EFloatValueComparisonType__LessThan = 3,
	EFloatValueComparisonType__GreaterThanEquals = 4,
	EFloatValueComparisonType__LessThanEquals = 5,
	EFloatValueComparisonType__EFloatValueComparisonType_MAX = 6,

};

// Enum AthenaAI.ECoralShieldVFXRole
enum class AthenaAI_ECoralShieldVFXRole : uint8_t
{
	ECoralShieldVFXRole__None      = 0,
	ECoralShieldVFXRole__Caster    = 1,
	ECoralShieldVFXRole__Receiver  = 2,
	ECoralShieldVFXRole__ECoralShieldVFXRole_MAX = 3,

};

// Enum AthenaAI.ECoralShieldVFXState
enum class AthenaAI_ECoralShieldVFXState : uint8_t
{
	ECoralShieldVFXState__Off      = 0,
	ECoralShieldVFXState__Starting = 1,
	ECoralShieldVFXState__On       = 2,
	ECoralShieldVFXState__Ending   = 3,
	ECoralShieldVFXState__ECoralShieldVFXState_MAX = 4,

};

// Enum AthenaAI.ETraceDirection
enum class AthenaAI_ETraceDirection : uint8_t
{
	ETraceDirection__ItemToContext = 0,
	ETraceDirection__ContextToItem = 1,
	ETraceDirection__ETraceDirection_MAX = 2,

};

// Enum AthenaAI.EAIThreatLevel
enum class AthenaAI_EAIThreatLevel : uint8_t
{
	EAIThreatLevel__NoDanger       = 0,
	EAIThreatLevel__Nervous        = 1,
	EAIThreatLevel__Threatened     = 2,
	EAIThreatLevel__Calm           = 3,
	EAIThreatLevel__EAIThreatLevel_MAX = 4,

};

// Enum AthenaAI.EOceanCrawlerAbilityAudioKey
enum class AthenaAI_EOceanCrawlerAbilityAudioKey : uint8_t
{
	EOceanCrawlerAbilityAudioKey__NONE = 0,
	EOceanCrawlerAbilityAudioKey__Hermit_Start_BurrowingLoop = 1,
	EOceanCrawlerAbilityAudioKey__Hermit_Stop_BurrowingLoop = 2,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowDown_OneShot = 3,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowEmerge_OneShot = 4,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BurrowHealTarget_OneShot = 5,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_SporeBreath_OneShot = 6,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushChargeUp_OneShot = 7,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushChargeGo_OneShot = 8,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushStaticImpact_OneShot = 9,
	EOceanCrawlerAbilityAudioKey__Hermit_Play_BullRushCharacterImpact_OneShot = 10,
	EOceanCrawlerAbilityAudioKey__Crab_Play_PummelWindBack_OneShot = 11,
	EOceanCrawlerAbilityAudioKey__Crab_Play_PummelImpact_OneShot = 12,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldStart_OneShot = 13,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldEnd_OneShot = 14,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldInterrupted_OneShot = 15,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldApplied_OneShot = 16,
	EOceanCrawlerAbilityAudioKey__Crab_Play_CoralShieldStopApplying_OneShot = 17,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldStartCharge_OneShot = 18,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldCast_OneShot = 19,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldInterrupted_OneShot = 20,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldAppliedToTarget_OneShot = 21,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldHitToChain_OneShot = 22,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelelectricShieldFinishedOnTarget_OneShot = 23,
	EOceanCrawlerAbilityAudioKey__Eel_Play_EelElectricEelThrowCharge_OneShot = 24,
	EOceanCrawlerAbilityAudioKey__EOceanCrawlerAbilityAudioKey_MAX = 25,

};

// Enum AthenaAI.EAIDialogueState
enum class AthenaAI_EAIDialogueState : uint8_t
{
	EAIDialogueState__Inactive     = 0,
	EAIDialogueState__Passive      = 1,
	EAIDialogueState__Alerted      = 2,
	EAIDialogueState__Dead         = 3,
	EAIDialogueState__EAIDialogueState_MAX = 4,

};

// Enum AthenaAI.EBountySpawnerAudioState
enum class AthenaAI_EBountySpawnerAudioState : uint8_t
{
	EBountySpawnerAudioState__None = 0,
	EBountySpawnerAudioState__Action = 1,
	EBountySpawnerAudioState__Anticipation = 2,
	EBountySpawnerAudioState__EBountySpawnerAudioState_MAX = 3,

};

// Enum AthenaAI.EBountySpawnerType
enum class AthenaAI_EBountySpawnerType : uint8_t
{
	EBountySpawnerType__Default    = 0,
	EBountySpawnerType__BountyQuest = 1,
	EBountySpawnerType__BountyFort = 2,
	EBountySpawnerType__EBountySpawnerType_MAX = 3,

};

// Enum AthenaAI.EBountyTargetRank
enum class AthenaAI_EBountyTargetRank : uint8_t
{
	EBountyTargetRank__Captain     = 0,
	EBountyTargetRank__Crew        = 1,
	EBountyTargetRank__EBountyTargetRank_MAX = 2,

};

// Enum AthenaAI.EBountyTargetGender
enum class AthenaAI_EBountyTargetGender : uint8_t
{
	EBountyTargetGender__Male      = 0,
	EBountyTargetGender__Female    = 1,
	EBountyTargetGender__EBountyTargetGender_MAX = 2,

};

// Enum AthenaAI.EFaunaInWaterState
enum class AthenaAI_EFaunaInWaterState : uint8_t
{
	EFaunaInWaterState__NotInWater = 0,
	EFaunaInWaterState__FloatingOnSurface = 1,
	EFaunaInWaterState__Underwater = 2,
	EFaunaInWaterState__EFaunaInWaterState_MAX = 3,

};

// Enum AthenaAI.EFaunaCratedState
enum class AthenaAI_EFaunaCratedState : uint8_t
{
	EFaunaCratedState__NotInCrate  = 0,
	EFaunaCratedState__InProxyCrate = 1,
	EFaunaCratedState__InWieldedCrate = 2,
	EFaunaCratedState__EFaunaCratedState_MAX = 3,

};

// Enum AthenaAI.ESwimRotationMode
enum class AthenaAI_ESwimRotationMode : uint8_t
{
	ESwimRotationMode__FaceMovement = 0,
	ESwimRotationMode__UprightStrafe = 1,
	ESwimRotationMode__LongwaysStrafe = 2,
	ESwimRotationMode__ESwimRotationMode_MAX = 3,

};

// Enum AthenaAI.EArcToTargetDirection
enum class AthenaAI_EArcToTargetDirection : uint8_t
{
	EArcToTargetDirection__VelocityOrRotation = 0,
	EArcToTargetDirection__VelocityOrRotation2D = 1,
	EArcToTargetDirection__InversedVelocityOrRotation = 2,
	EArcToTargetDirection__InversedVelocityOrRotation2D = 3,
	EArcToTargetDirection__Up      = 4,
	EArcToTargetDirection__Down    = 5,
	EArcToTargetDirection__GoalDirection2D = 6,
	EArcToTargetDirection__EArcToTargetDirection_MAX = 7,

};

// Enum AthenaAI.EArcFollowingMode
enum class AthenaAI_EArcFollowingMode : uint8_t
{
	EArcFollowingMode__SharkArc    = 0,
	EArcFollowingMode__Simple3DArc = 1,
	EArcFollowingMode__EArcFollowingMode_MAX = 2,

};

// Enum AthenaAI.ESwimmingLineOfSightTest
enum class AthenaAI_ESwimmingLineOfSightTest : uint8_t
{
	ESwimmingLineOfSightTest__None = 0,
	ESwimmingLineOfSightTest__Lazy = 1,
	ESwimmingLineOfSightTest__Immediate = 2,
	ESwimmingLineOfSightTest__ESwimmingLineOfSightTest_MAX = 3,

};

// Enum AthenaAI.ESwimmingSyncMode
enum class AthenaAI_ESwimmingSyncMode : uint8_t
{
	ESwimmingSyncMode__Synchronous = 0,
	ESwimmingSyncMode__Asynchronous = 1,
	ESwimmingSyncMode__ESwimmingSyncMode_MAX = 2,

};

// Enum AthenaAI.ESwimmingArcMode
enum class AthenaAI_ESwimmingArcMode : uint8_t
{
	ESwimmingArcMode__ArcToTarget  = 0,
	ESwimmingArcMode__SwimDirectlyToTarget = 1,
	ESwimmingArcMode__SwimDirectlyDown = 2,
	ESwimmingArcMode__ESwimmingArcMode_MAX = 3,

};

// Enum AthenaAI.ESwimmingGoalCheckMode
enum class AthenaAI_ESwimmingGoalCheckMode : uint8_t
{
	ESwimmingGoalCheckMode__Goal2D = 0,
	ESwimmingGoalCheckMode__Goal3D = 1,
	ESwimmingGoalCheckMode__ESwimmingGoalCheckMode_MAX = 2,

};

// Enum AthenaAI.ETaskReaction
enum class AthenaAI_ETaskReaction : uint8_t
{
	ETaskReaction__Ignore          = 0,
	ETaskReaction__SucceedTask     = 1,
	ETaskReaction__FailTask        = 2,
	ETaskReaction__ETaskReaction_MAX = 3,

};

// Enum AthenaAI.ETinySharkDespawnReason
enum class AthenaAI_ETinySharkDespawnReason : uint8_t
{
	ETinySharkDespawnReason__Invalid = 0,
	ETinySharkDespawnReason__Defeated = 1,
	ETinySharkDespawnReason__TimedOut = 2,
	ETinySharkDespawnReason__ETinySharkDespawnReason_MAX = 3,

};

// Enum AthenaAI.ETinySharkActiveState
enum class AthenaAI_ETinySharkActiveState : uint8_t
{
	ETinySharkActiveState__TrackingTarget = 0,
	ETinySharkActiveState__WaitingForTarget = 1,
	ETinySharkActiveState__RepositionToTarget = 2,
	ETinySharkActiveState__WaitingForRespawn = 3,
	ETinySharkActiveState__ETinySharkActiveState_MAX = 4,

};

// Enum AthenaAI.ETinySharkState
enum class AthenaAI_ETinySharkState : uint8_t
{
	ETinySharkState__Inactive      = 0,
	ETinySharkState__Spawning      = 1,
	ETinySharkState__Active        = 2,
	ETinySharkState__Defeated      = 3,
	ETinySharkState__Despawning    = 4,
	ETinySharkState__ETinySharkState_MAX = 5,

};

// Enum AthenaAI.EDebugPetStateDescriptor
enum class AthenaAI_EDebugPetStateDescriptor : uint8_t
{
	EDebugPetStateDescriptor__NoState = 0,
	EDebugPetStateDescriptor__Hangout_Attached = 1,
	EDebugPetStateDescriptor__Hangout_MoveToLocation = 2,
	EDebugPetStateDescriptor__Reacting = 3,
	EDebugPetStateDescriptor__Pursuit = 4,
	EDebugPetStateDescriptor__Idle = 5,
	EDebugPetStateDescriptor__Follow = 6,
	EDebugPetStateDescriptor__Eating = 7,
	EDebugPetStateDescriptor__Scared = 8,
	EDebugPetStateDescriptor__ForcedIdle = 9,
	EDebugPetStateDescriptor__EDebugPetStateDescriptor_MAX = 10,

};

// Enum AthenaAI.EPetSize
enum class AthenaAI_EPetSize : uint8_t
{
	EPetSize__Small                = 0,
	EPetSize__Medium               = 1,
	EPetSize__Large                = 2,
	EPetSize__EPetSize_MAX         = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AthenaAI.AthenaAIFormComponentVfxCustomisation
// 0x0018
struct FAthenaAIFormComponentVfxCustomisation
{
	class UClass*                                      VfxCustomisationType;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               VfxEnabled;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RQCC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     VfxTemplate;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnTypeParams
// 0x00E8
struct FAISpawnTypeParams
{
	TAssetPtr<class UClass>                            AIClass;                                                   // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GV0S[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FStringAssetReference                       SkillsetOverride;                                          // 0x0020(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       LoadoutOverride;                                           // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       FormOverride;                                              // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       AmmoOverride;                                              // 0x0050(0x0010) (Edit, ZeroConstructor)
	TAssetPtr<class UClass>                            ItemDropComponentClassOverride;                            // 0x0060(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YG81[0x4];                                     // 0x0060(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      AIClassIdOverride;                                         // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FStringAssetReference                       TeamColorOverride;                                         // 0x0088(0x0010) (Edit, ZeroConstructor)
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x0098(0x000C) (Edit)
	struct FName                                       DioramaRole;                                               // 0x00A4(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L1SR[0x4];                                     // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LocalisableName;                                           // 0x00B0(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_4BE6[0x20];                                    // 0x00AC(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.WeightedAISpawnTypeParams
// 0x00F0
struct FWeightedAISpawnTypeParams
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxTimesCanBeSelected;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAISpawnTypeParams                          Params;                                                    // 0x0008(0x00E8) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnTypeParamsCollection
// 0x0048
struct FAISpawnTypeParamsCollection
{
	unsigned char                                      UnknownData_306T[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWeightedAISpawnTypeParams>          SpawnParams;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_1M1V[0x30];                                    // 0x0018(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIEncounterAndWaveSettingsOverride
// 0x0020
struct FAIEncounterAndWaveSettingsOverride
{
	class UAIEncounterSettings*                        EncounterSettings;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnWaveSequenceRankProgression*         SpawnWaveProgression;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Chance;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FeatureToggle;                                             // 0x0014(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0S9W[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AdditionalSpawnerBehaviour
// 0x0010
struct FAdditionalSpawnerBehaviour
{
	class USpawnerBehaviourStrategy*                   BehaviourStrategy;                                         // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6A8W[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnOverride
// 0x0010
struct FAISpawnOverride
{
	struct FStringAssetReference                       FormOverride;                                              // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.ConditionalAISpawnOverride
// 0x0018
struct FConditionalAISpawnOverride
{
	class UAISpawnOverrideCondition*                   Condition;                                                 // 0x0000(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FAISpawnOverride                            Override;                                                  // 0x0008(0x0010) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnContextIdEncounterSettingsPair
// 0x0038
struct FAISpawnContextIdEncounterSettingsPair
{
	TArray<class UClass*>                              SpawnContexts;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	bool                                               DisableSpawning;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PZ4E[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAIEncounterSettings*                        EncounterSettings;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawnWaveSequenceRankProgression*         SpawnWaveProgression;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIEncounterAndWaveSettingsOverride> EncounterAndWaveSettingsOverride;                          // 0x0028(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIFormDamageResponse
// 0x0010
struct FAIFormDamageResponse
{
	class UClass*                                      DamagerType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              DamageMultiplier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterHitReactionAnimType>  HitReaction;                                               // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsKnockbackDisabled;                                       // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsStunDisabled;                                            // 0x000E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_64Y0[0x1];                                     // 0x000F(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerParamValue
// 0x000C
struct FAthenaAIControllerParamValue
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.MinMaxAbilityRange
// 0x0008
struct FMinMaxAbilityRange
{
	float                                              MinDistanceToTarget;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistanceToTarget;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIAbilityFollowUp
// 0x0010
struct FAIAbilityFollowUp
{
	class UClass*                                      AbilityType;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Chance;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VXHC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRange
// 0x0038
struct FAthenaAIAbilityPlayerBasedRange
{
	int                                                MaxPlayers;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZVIC[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           WeightedArray;                                             // 0x0008(0x0030) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIAbilityPlayerBasedRanges
// 0x0010
struct FAthenaAIAbilityPlayerBasedRanges
{
	TArray<struct FAthenaAIAbilityPlayerBasedRange>    AbilityRanges;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIAbilityContinuousCooldownParameterData
// 0x0020
struct FAIAbilityContinuousCooldownParameterData
{
	struct FAthenaAIAbilityPlayerBasedRanges           InitialCooldown;                                           // 0x0000(0x0010) (Edit, DisableEditOnInstance)
	struct FAthenaAIAbilityPlayerBasedRanges           CooldownBetweenActivations;                                // 0x0010(0x0010) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AttackableTypeToAnimMapping
// 0x0028
struct FAttackableTypeToAnimMapping
{
	TEnumAsByte<Athena_ESwimAttackableType>            AttackType;                                                // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BJ7E[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     AnimMontage;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayAsDynamicMontage;                                      // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YHSW[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AnimLength;                                                // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeIntoAnimOfAttack;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetKnockBackStrength;                                   // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RumbleTag;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.SwimAttackTargetShipImpulseData
// 0x0038
struct FSwimAttackTargetShipImpulseData
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              PushImpulseForce;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PushImpulseLocation;                                       // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              PushForceScalingFactorForeAndAftOfShipLowerBound;          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PushForceScalingFactorForeAndAftOfShipUpperBound;          // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RollImpulseForce;                                          // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     RollImpulseLocation;                                       // 0x0024(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RollForceScalingFactorForeAndAftOfShipLowerBound;          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RollForceScalingFactorForeAndAftOfShipUpperBound;          // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettings
// 0x0014
struct FAthenaAIControllerSenseSettings
{
	bool                                               EnableSight;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableHearing;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableDamage;                                              // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_638R[0x1];                                     // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SightRadius;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LoseSightRadius;                                           // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PeripheralVisionAngleDegrees;                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHearingRange;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerHealthCustomisation
// 0x000C
struct FAthenaAIControllerHealthCustomisation
{
	bool                                               OverrideMaxHealth;                                         // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OverrideMaxHealthWithMinMax;                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_B8PO[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinHealth;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxHealth;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerWeightedRangesParamValue
// 0x0038
struct FAthenaAIControllerWeightedRangesParamValue
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           Value;                                                     // 0x0008(0x0030) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerDamageTargetScoreFromPerceivedTarget
// 0x0014
struct FAthenaAIControllerDamageTargetScoreFromPerceivedTarget
{
	float                                              MinDamageTargetScore;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDamageTargetScore;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageForMinDamageTargetScore;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageForMaxDamageTargetScore;                             // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RateToDecayDamagedFromTarget;                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIStrategyMovementProperties
// 0x0018
struct FAIStrategyMovementProperties
{
	class UClass*                                      AIStrategy;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              MaxSpeedAmp;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxAccelAmp;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverrideRVOAvoidanceRadius;                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OverrideBlendSpeed;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTarget
// 0x000C
struct FAthenaAICharacterCannonTarget
{
	float                                              Weight;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TargetLocation;                                            // 0x0004(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
// 0x0010
struct FAthenaAICharacterControllerItemCategoryProjectileEffectivenessProperties
{
	class UClass*                                      ItemCategory;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UCurveFloat*                                 DistanceInMToProjectileHitChanceCurve;                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIItemParamValue
// 0x0030
struct FAthenaAIItemParamValue
{
	TAssetPtr<class UClass>                            ItemClass;                                                 // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DMYZ[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ParamName;                                                 // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GNPZ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterControllerSpawnItemDescForItemCategory
// 0x0010
struct FAthenaAICharacterControllerSpawnItemDescForItemCategory
{
	class UClass*                                      ItemCategory;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ItemDesc;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterControllerItemCategoryNamedParams
// 0x0018
struct FAthenaAICharacterControllerItemCategoryNamedParams
{
	class UClass*                                      ItemCategory;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FAthenaAIControllerParamValue>       NamedControllerParams;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterCannonTargetingParams
// 0x0010
struct FAthenaAICharacterCannonTargetingParams
{
	TArray<struct FAthenaAICharacterCannonTarget>      Params;                                                    // 0x0000(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIAbilityDamageStage
// 0x0010
struct FAthenaAIAbilityDamageStage
{
	TArray<class UAthenaAIAbilityStageParams*>         AbilitiesInStage;                                          // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAICharacterControllerWeightedAmmoType
// 0x0010
struct FAthenaAICharacterControllerWeightedAmmoType
{
	class UClass*                                      AmmoType;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Weighting;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KFO2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIAmmoRankMapping
// 0x0018
struct FAIAmmoRankMapping
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPartId
// 0x0008
struct FAIPartId
{
	struct FName                                       PartId;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDebugVisualisationCone
// 0x002C
struct FAIDebugVisualisationCone
{
	struct FVector                                     Origin;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Direction;                                                 // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Length;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleWidthRadians;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AngleHeightRadians;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EAIDebugColour>               Colour;                                                    // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_89LT[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDebugVisualisationSphere
// 0x0018
struct FAIDebugVisualisationSphere
{
	struct FVector                                     Centre;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EAIDebugColour>               Colour;                                                    // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0S05[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDebugVisualisationCylinder
// 0x0024
struct FAIDebugVisualisationCylinder
{
	struct FVector                                     To;                                                        // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     From;                                                      // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Radius;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LifeTime;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EAIDebugColour>               Colour;                                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T91D[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDebugVisualisationBox
// 0x0040
struct FAIDebugVisualisationBox
{
	struct FVector                                     Centre;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extents;                                                   // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4T5O[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor)
	float                                              LifeTime;                                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EAIDebugColour>               Colour;                                                    // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HSF6[0xB];                                     // 0x0035(0x000B) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDebugVisualisationLine
// 0x0020
struct FAIDebugVisualisationLine
{
	struct FVector                                     From;                                                      // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     To;                                                        // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              LifeTime;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EAIDebugColour>               Colour;                                                    // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UFEV[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TargetItemDropProgressionPair
// 0x0020
struct FTargetItemDropProgressionPair
{
	struct FStringAssetReference                       CrewItemSpawn;                                             // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CaptainItemSpawn;                                          // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TargetSkillsetProgressionPair
// 0x0020
struct FTargetSkillsetProgressionPair
{
	struct FStringAssetReference                       CrewSkillset;                                              // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       CaptainSkillset;                                           // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIEncounterGenerationRecipeFeatureBasedRankOrderList
// 0x0018
struct FAIEncounterGenerationRecipeFeatureBasedRankOrderList
{
	struct FName                                       FeatureName;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAIEncounterGenerationRecipe*>        Recipes;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIFormRankMapping
// 0x0018
struct FAIFormRankMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPartsCategoryMapping
// 0x0010
struct FAIPartsCategoryMapping
{
	class UClass*                                      ClassId;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIPartsCategory*                            PartsCategory;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPartsCategoryFormMapping
// 0x0018
struct FAIPartsCategoryFormMapping
{
	class UAthenaAIFormDataAsset*                      Form;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIPartsCategoryMapping>             CategoryMappings;                                          // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISkillsetRankMapping
// 0x0018
struct FAISkillsetRankMapping
{
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDropSpawnerRankMapping
// 0x0030
struct FAIDropSpawnerRankMapping
{
	TAssetPtr<class UClass>                            SpawnerClass;                                              // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P143[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TArray<float>                                      Weights;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AILoadoutRankMapping
// 0x0018
struct FAILoadoutRankMapping
{
	class ULoadoutAsset*                               Loadout;                                                   // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AITypeData
// 0x0058
struct FAITypeData
{
	struct FName                                       AITypeName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringClassReference                       AIPawnClass;                                               // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugSkillset;                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       DefaultDebugLoadout;                                       // 0x0028(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      DefaultDebugAIClassId;                                     // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               RequireNavMesh;                                            // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VCLD[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AIRegionCostUnits;                                         // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AIWorldCostUnits;                                          // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       FeatureToggle;                                             // 0x004C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A8YU[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnerWave
// 0x0100
struct FAISpawnerWave
{
	float                                              SpawnChance;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4VRV[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRange                   NumOfSpawnsInWave;                                         // 0x0008(0x0020) (Edit)
	struct FAISpawnTypeParamsCollection                SpawnTypeParamsOverride;                                   // 0x0028(0x0048) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeWave;                                           // 0x0070(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBetweenSpawns;                                        // 0x00A0(0x0030) (Edit)
	struct FWeightedProbabilityRangeOfRanges           DelayBeforeNextWaveIfSuccessful;                           // 0x00D0(0x0030) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnWaveSequenceRankMapping
// 0x0018
struct FAISpawnWaveSequenceRankMapping
{
	class UAISpawnWaveSequence*                        SpawnWaveSequence;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIWeightedProbabilityRangeOfRangesRankMapping
// 0x0018
struct FAIWeightedProbabilityRangeOfRangesRankMapping
{
	class UAIWeightedProbabilityRangeOfRangesAsset*    RangeOfRanges;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Weights;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.CustomPlayersAITrackerData
// 0x0020
struct FCustomPlayersAITrackerData
{
	class UAIPlayerTracker*                            Tracker;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S9FB[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPartIdNumVariantInfo
// 0x000C
struct FAIPartIdNumVariantInfo
{
	struct FName                                       AIPartId;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumVariants;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.ReplicatedAIPartsData
// 0x0018
struct FReplicatedAIPartsData
{
	class UAIPartsCategory*                            PartsCategory;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIPartId                                   AIPartId;                                                  // 0x0008(0x0008)
	int                                                MeshIndex;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TeamColorIndex;                                            // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.SpawnLocationGroup
// 0x0020
struct FSpawnLocationGroup
{
	TArray<struct FName>                               AllowedSpawnTypes;                                         // 0x0000(0x0010) (Edit, ZeroConstructor)
	TArray<struct FVector>                             SpawnLocations;                                            // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnContextData
// 0x0010
struct FAISpawnContextData
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Id;                                                        // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPersistentSpawnerWave
// 0x0018 (0x0118 - 0x0100)
struct FAIPersistentSpawnerWave : public FAISpawnerWave
{
	bool                                               CacheHealthOnDespawn;                                      // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5FSF[0x17];                                    // 0x0101(0x0017) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPerPlayerSpawnerPlayerDetailsUnit
// 0x0030
struct FAIPerPlayerSpawnerPlayerDetailsUnit
{
	unsigned char                                      UnknownData_NXAT[0x30];                                    // 0x0000(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TemporaryPlayerDetailsUnitEntry
// 0x0038
struct FTemporaryPlayerDetailsUnitEntry
{
	unsigned char                                      UnknownData_FFVW[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AICustomNameTitleMapping
// 0x0040
struct FAICustomNameTitleMapping
{
	class UClass*                                      AIClassId;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_LMZY[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AICustomClassIdNameOverrides
// 0x0020
struct FAICustomClassIdNameOverrides
{
	TArray<class UClass*>                              ClassIds;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, UObjectWrapper)
	TArray<struct FText>                               Names;                                                     // 0x0010(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerSenseSettingOverride
// 0x0020
struct FAthenaAIControllerSenseSettingOverride
{
	class UClass*                                      AIStrategy;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAthenaAIControllerSenseSettings            SenseSettings;                                             // 0x0008(0x0014) (Edit)
	bool                                               ClearPerceivedData;                                        // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PXYM[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.BlackboardValueCondition
// 0x0038
struct FBlackboardValueCondition
{
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0000(0x0028) (Edit)
	TEnumAsByte<AthenaAI_EBlackboardValueComparisonType> Comparison;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8O9E[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Value;                                                     // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnEntry;                                                   // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               OnExit;                                                    // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7KRM[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIEncounterSpecification
// 0x00C8
struct FAIEncounterSpecification
{
	TAssetPtr<class UClass>                            PawnClass;                                                 // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KM3N[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                  // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoadoutAsset*                               Loadout;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAIFormDataAsset*                      Form;                                                      // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                      // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      AIClass;                                                   // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAIPartsCategory*                            PartsCategory;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TAssetPtr<class UClass>                            ItemDropComponentClass;                                    // 0x0050(0x001C) ELEMENT_SIZE_MISMATCH (UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XXFY[0x4];                                     // 0x0050(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                TeamColorIndex;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       DioramaRole;                                               // 0x0074(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z0IL[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       LocalisableName;                                           // 0x0080(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_D7FL[0x20];                                    // 0x007C(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FEncounterParams                            EncounterTrackingParams;                                   // 0x00B8(0x000C)
	bool                                               ShowNameplate;                                             // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsUsingDialogue;                                           // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_12J9[0x2];                                     // 0x00C6(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDioramaPawn
// 0x0048
struct FAIDioramaPawn
{
	class APawn*                                       Pawn;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5WI0[0x40];                                    // 0x0008(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDioramaRoleDesc
// 0x0028
struct FAIDioramaRoleDesc
{
	struct FName                                       RoleName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       CustomAnimationAsset;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FName                                       CustomAnimationToRunOnSpawn;                               // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StartingItemCategory;                                      // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIIndividualVarietyEntry
// 0x0020
struct FAIIndividualVarietyEntry
{
	TArray<struct FStringAssetReference>               Loadouts;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                RankOffset;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Weight;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPerEncounter;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_X66E[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIFormVarietyEntry
// 0x0028
struct FAIFormVarietyEntry
{
	struct FStringAssetReference                       Form;                                                      // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              Weight;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPerEncounter;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIIndividualVarietyEntry>           Individuals;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkParams
// 0x00B8
struct FTinySharkParams
{
	class UClass*                                      TinySharkType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TargetRadius;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnOffset;                                               // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TAssetPtr<class UClass>                            TinySharkAIType;                                           // 0x0018(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RICS[0x4];                                     // 0x0018(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TAssetPtr<class UAthenaAIControllerParamsDataAsset> TinySharkSkillset;                                         // 0x0038(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TE50[0x4];                                     // 0x0038(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TAssetPtr<class ULoadoutAsset>                     TinySharkLoadout;                                          // 0x0058(0x001C) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MI7N[0x4];                                     // 0x0058(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UClass*                                      TinySharkClassID;                                          // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           LifetimeTimeout;                                           // 0x0080(0x0030) (Edit, DisableEditOnInstance)
	float                                              TrackedShipDistanceThreshold;                              // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RepositionTime;                                            // 0x00B4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.ChanceForSharksToBlockSirenEncounterData
// 0x000C
struct FChanceForSharksToBlockSirenEncounterData
{
	int                                                NumberOfSharks;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToSpawn;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RadiusToCheck;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PerDepthSpawnChance
// 0x000C
struct FPerDepthSpawnChance
{
	float                                              DepthUpperBound;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DepthLowerBound;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToSpawn;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PlayerInWaterData
// 0x0020
struct FPlayerInWaterData
{
	unsigned char                                      UnknownData_IFGQ[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.SirenEncounterData
// 0x0028
struct FSirenEncounterData
{
	class UWorld*                                      GameWorld;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIPerPlayerSpawner*                         SirenSpawner;                                              // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USimpleAIRegion*                             AIRegion;                                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIProximityPlayerTracker*                   ProximityPlayerTracker;                                    // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShutdownTime;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ESirenEncounterState>         SirenEncounterState;                                       // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6I05[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.MinMaxBurrowAbility
// 0x0008
struct FMinMaxBurrowAbility
{
	float                                              MinValue;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.WeightedAmmoType
// 0x0010
struct FWeightedAmmoType
{
	float                                              ProbabilityAtRange;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_45VZ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      AmmoType;                                                  // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.WeightedAmmoTypeRange
// 0x0018
struct FWeightedAmmoTypeRange
{
	float                                              MinRange;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_89WW[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FWeightedAmmoType>                   AmmoTypeProbabilities;                                     // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.CarriedItemThreatOverride
// 0x0010
struct FCarriedItemThreatOverride
{
	class UClass*                                      ItemDesc;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Threat;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WXXM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.HearingThreat
// 0x0010
struct FHearingThreat
{
	struct FName                                       SoundTag;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Threat;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CarrierSpeedThreshold;                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.ChanceAndBlackboardKeyPair
// 0x0058
struct FChanceAndBlackboardKeyPair
{
	struct FAIDataProviderFloatValue                   Chance;                                                    // 0x0000(0x0030) (Edit, ContainsInstancedReference)
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0030(0x0028) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.ConditionalBasedOnBlackboardKey
// 0x0038
struct FConditionalBasedOnBlackboardKey
{
	bool                                               UseCondition;                                              // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VGNM[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlackboardKeySelector                      BlackboardKey;                                             // 0x0008(0x0028) (Edit)
	bool                                               NegateCondition;                                           // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_93NX[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.WeightedAIStrategyChance
// 0x0038
struct FWeightedAIStrategyChance
{
	class UClass*                                      Strategy;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FAIDataProviderFloatValue                   WeightedChance;                                            // 0x0008(0x0030) (Edit, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIStrategyVulnerabilityData
// 0x0018
struct FAIStrategyVulnerabilityData
{
	class UClass*                                      Strategy;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<TEnumAsByte<Athena_EHealthChangedReason>>   PreventedHealthChanges;                                    // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerWave
// 0x0058 (0x0170 - 0x0118)
struct FAIBountySpawnerWave : public FAIPersistentSpawnerWave
{
	bool                                               IsTarget;                                                  // 0x0118(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsUsingDialogue;                                           // 0x0119(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<AthenaAI_EBountyTargetGender>          Gender;                                                    // 0x011A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBountyTargetRank>            Rank;                                                      // 0x011B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T8W0[0x4];                                     // 0x011C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPostBountyAIPawnSpawnedAction*              PostSpawnAction;                                           // 0x0120(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EDJY[0x38];                                    // 0x0128(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      BountyReward;                                              // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TWeakObjectPtr<class UItemSpawnData>               BountyRewardSpawnData;                                     // 0x0168(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerWaveGroup
// 0x0030
struct FAIBountySpawnerWaveGroup
{
	TArray<struct FAIBountySpawnerWave>                Waves;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, ContainsInstancedReference)
	int                                                NumNonTargetAIToKillToMoveToNextWaveGroup;                 // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2LZS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      CombatDialogueForWaveGroup;                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R9J6[0x10];                                    // 0x0020(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIDioramaLocationSourceComponentData
// 0x0040
struct FAIDioramaLocationSourceComponentData
{
	struct FTransform                                  RelativeTransform;                                         // 0x0000(0x0030) (Edit, IsPlainOldData, NoDestructor)
	class AActor*                                      Interactable;                                              // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_W5B3[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.IslandDioramas
// 0x0010
struct FIslandDioramas
{
	unsigned char                                      Entries[0x10];                                             // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty AthenaAI.IslandDioramas.Entries

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.DioramaCategoryEntries
// 0x00A0
struct FDioramaCategoryEntries
{
	TMap<struct FName, struct FIslandDioramas>         EntriesByIslandName;                                       // 0x0000(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData_BVDU[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIFaunaSpawnerWave
// 0x0010 (0x0110 - 0x0100)
struct FAIFaunaSpawnerWave : public FAISpawnerWave
{
	unsigned char                                      UnknownData_B75X[0x10];                                    // 0x0100(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIStategyControllerMovementMod
// 0x0010
struct FAIStategyControllerMovementMod
{
	class UClass*                                      AIStrategy;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              OverrideControlRotationInterpSpeed;                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4L6S[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkShipSpawnData
// 0x0068
struct FTinySharkShipSpawnData
{
	class UClass*                                      ShipSize;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FWeightedProbabilityRangeOfRanges           Timer;                                                     // 0x0008(0x0030) (Edit, DisableEditOnInstance)
	TArray<TAssetPtr<class UAthenaAIControllerParamsDataAsset>> ControllerParams;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)
	struct FWeightedProbabilityRange                   ControllerParamsToUse;                                     // 0x0048(0x0020) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkServiceParams
// 0x0028
struct FTinySharkServiceParams
{
	class UTinySharkParamsDataAsset*                   TinySharkParams;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTinySharkShipSpawnData>             SpawnForShipData;                                          // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UEnvQuery*                                   SpawnForShipQuery;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpawnFailureTimer;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6C51[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetFlyingStrategyProperties
// 0x0018
struct FPetFlyingStrategyProperties
{
	class UClass*                                      Strategy;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              ChanceOfFlying;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinFlyingMeshZOffset;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxFlyingMeshZOffset;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3HLF[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetMovementRequest
// 0x000C
struct FPetMovementRequest
{
	TEnumAsByte<Athena_EAthenaAnimationPetRoamingState> State;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M6W2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetMeshZOffset;                                         // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AdjustingFlight;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_04X2[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetTurnRateModifier
// 0x0010
struct FPetTurnRateModifier
{
	class UClass*                                      Strategy;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TurnRateModifier;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KP1P[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetLoadedMaterial
// 0x0010
struct FPetLoadedMaterial
{
	class UMaterialInstance*                           MaterialInstance;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CastShadows;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UHPO[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetPartSizeMapping
// 0x0008
struct FPetPartSizeMapping
{
	TEnumAsByte<AthenaAI_EPetSize>                     PetSize;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ONCT[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              PetScale;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetMaterialEntry
// 0x0018
struct FPetMaterialEntry
{
	struct FStringAssetReference                       MaterialReference;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	bool                                               CastShadows;                                               // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BCDT[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PetWieldableReactMapping
// 0x0010
struct FPetWieldableReactMapping
{
	class UClass*                                      WieldableType;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       ReactId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIAbilityDebugReplicatedIntervals
// 0x000C
struct FAIAbilityDebugReplicatedIntervals
{
	float                                              ActivationTimerCooldown;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBeforeNextExecution;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageBeforeNextExecution;                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIEncounterWave
// 0x0020
struct FAIEncounterWave
{
	TArray<struct FAIEncounterSpecification>           Specifications;                                            // 0x0000(0x0010) (ZeroConstructor)
	TArray<int>                                        SpecificationSpawnOrder;                                   // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerParams
// 0x00C8
struct FAIBountySpawnerParams
{
	TArray<struct FAIEncounterWave>                    AISpawnerCreationDesc;                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       TeamColor;                                                 // 0x0010(0x0010) (ZeroConstructor)
	TArray<int>                                        NumTargetsInWave;                                          // 0x0020(0x0010) (ZeroConstructor)
	TArray<int>                                        NumCaptainsInWave;                                         // 0x0030(0x0010) (ZeroConstructor)
	float                                              MinTimeBetweenSpawns;                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeBetweenSpawns;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinTimeBetweenWaves;                                       // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeBetweenWaves;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedProbabilityRange                   WavesPerRelocate;                                          // 0x0050(0x0020)
	struct FWeightedProbabilityRange                   WaveSplitChance;                                           // 0x0070(0x0020)
	TArray<float>                                      WaveSuicideTime;                                           // 0x0090(0x0010) (ZeroConstructor)
	float                                              WaveSuicideMinDist;                                        // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumWavesPerGroup;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumWaveGroups;                                             // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTotalWaves;                                             // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTargetsPerWaveGroup;                                    // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumCaptainsPerWaveGroup;                                   // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                              AICombatDialogue;                                          // 0x00B8(0x0010) (ZeroConstructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIStartedDeadActionState
// 0x0010
struct FEventAIStartedDeadActionState
{
	TEnumAsByte<Athena_ECharacterDeathType>            DeathReason;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LVSR[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Killer;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPawnFinishedDying
// 0x0010
struct FEventPawnFinishedDying
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PXBF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPawnStartedDying
// 0x0018
struct FEventPawnStartedDying
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8FX7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Instigator;                                                // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedDying
// 0x0001
struct FEventOwnedPawnFinishedDying
{
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOwnedPawnStartedDying
// 0x0010
struct FEventOwnedPawnStartedDying
{
	TEnumAsByte<Athena_ECharacterDeathType>            DeathType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S5Q6[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      Instigator;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnerArchive
// 0x0008
struct FAISpawnerArchive
{
	unsigned char                                      UnknownData_RED1[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIExclusionZone
// 0x0018
struct FAIExclusionZone
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              RadiusSquared;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Radius;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPartsRetrievalComponentBeforeBeginLoad
// 0x0001
struct FEventAIPartsRetrievalComponentBeforeBeginLoad
{
	unsigned char                                      UnknownData_VII4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIFixedWavesSpawnerArchive
// 0x0018 (0x0020 - 0x0008)
struct FAIFixedWavesSpawnerArchive : public FAISpawnerArchive
{
	TArray<int>                                        NumSpawnedPawnsInWaves;                                    // 0x0008(0x0010) (ZeroConstructor)
	bool                                               WavesSpawnedOnSpottedNewTarget;                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0BMC[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIIncrementalWaveSpawnerArchive
// 0x0010 (0x0018 - 0x0008)
struct FAIIncrementalWaveSpawnerArchive : public FAISpawnerArchive
{
	struct FVector                                     LastTargetPosition;                                        // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentNumSpawnedPawns;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPerCrewSpawnerRespawnUnit
// 0x0018
struct FAIPerCrewSpawnerRespawnUnit
{
	unsigned char                                      UnknownData_SF2I[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIPerCrewSpawnerCrewUnit
// 0x0020
struct FAIPerCrewSpawnerCrewUnit
{
	unsigned char                                      UnknownData_VQ3Q[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIProgressiveWavesSpawnerArchive
// 0x0008 (0x0010 - 0x0008)
struct FAIProgressiveWavesSpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9ID2[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AITargetBounds
// 0x0018
struct FAITargetBounds
{
	struct FVector                                     Offset;                                                    // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Extents;                                                   // 0x000C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AITargetInfo
// 0x0034
struct FAITargetInfo
{
	struct FAITargetBounds                             Bounds;                                                    // 0x0000(0x0018)
	struct FVector                                     TargetPos;                                                 // 0x0018(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     TargetVelocity;                                            // 0x0024(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              TargetYaw;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AthenaAIControllerTargetPickingData
// 0x0038
struct FAthenaAIControllerTargetPickingData
{
	struct FString                                     TargetName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               BestTargetByScore;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsCurrentTargetActor;                                      // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRPX[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetScore;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistScore;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FacingScore;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetWeightScore;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageScore;                                               // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetDistance;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetAngle;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTargeting;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RecentDamage;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityFinished
// 0x0001
struct FEventSporeBreathAIAbilityFinished
{
	unsigned char                                      UnknownData_32Y6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventSporeBreathAIAbilityStarted
// 0x0001
struct FEventSporeBreathAIAbilityStarted
{
	unsigned char                                      UnknownData_D5KP[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityEnded
// 0x0001
struct FEventAIVulnerabilityAbilityEnded
{
	unsigned char                                      UnknownData_QGK9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIVulnerabilityAbilityStarted
// 0x0001
struct FEventAIVulnerabilityAbilityStarted
{
	unsigned char                                      UnknownData_42TV[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPawnCarrierChange
// 0x0008
struct FEventAIPawnCarrierChange
{
	class AActor*                                      Carrier;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIDebugTextUpdated
// 0x0001
struct FEventAIDebugTextUpdated
{
	unsigned char                                      UnknownData_N08T[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIControllerUnPossess
// 0x0001
struct FEventAIControllerUnPossess
{
	unsigned char                                      UnknownData_8M8V[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIKnockbackEnded
// 0x0001
struct FEventAIKnockbackEnded
{
	unsigned char                                      UnknownData_XT2W[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIKnockbackStarted
// 0x0018
struct FEventAIKnockbackStarted
{
	unsigned char                                      UnknownData_UL6Y[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventNewAIStrategyBPReadable
// 0x0008
struct FEventNewAIStrategyBPReadable
{
	class UClass*                                      NewAIStrategy;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventNewAIStrategy
// 0x0008
struct FEventNewAIStrategy
{
	class UClass*                                      NewAIStrategy;                                             // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPawnRequestDespawn
// 0x0001
struct FEventPawnRequestDespawn
{
	unsigned char                                      UnknownData_6LJ3[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPawnRemoveOwnership
// 0x0008
struct FEventPawnRemoveOwnership
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOwnedPawnRemoveOwnership
// 0x0001
struct FEventOwnedPawnRemoveOwnership
{
	unsigned char                                      UnknownData_STOR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPartRetrievalRequestFailed
// 0x0001
struct FEventAIPartRetrievalRequestFailed
{
	unsigned char                                      UnknownData_W7TH[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventVisualAppearanceSelected
// 0x0018
struct FEventVisualAppearanceSelected
{
	class UAIPartsCategory*                            PartsCategory;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIPartId                                   AIPartId;                                                  // 0x0008(0x0008)
	int                                                PartsIndexToUse;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ColorTextureIndex;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAILoadoutSelected
// 0x0030
struct FEventAILoadoutSelected
{
	struct FItemLoadout                                Loadout;                                                   // 0x0000(0x0020)
	class UClass*                                      NonStorableItem;                                           // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3SQA[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIAmmoSelected
// 0x0008
struct FEventAIAmmoSelected
{
	class UAthenaAIAmmoDataAsset*                      Ammo;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIFormSelected
// 0x0008
struct FEventAIFormSelected
{
	class UAthenaAIFormDataAsset*                      Form;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPawnReadyToConstructDebugText
// 0x0001
struct FEventAIPawnReadyToConstructDebugText
{
	unsigned char                                      UnknownData_3XE8[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOwnedPawnFinishedSpawning
// 0x0050
struct FEventOwnedPawnFinishedSpawning
{
	class UObject*                                     AICoordinator;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Region;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpawnPos;                                                  // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UY8U[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ActorToPerceiveOnSpawn;                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaximumDistanceToPerceiveOnSpawn;                          // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9T0X[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAthenaAIControllerParamsDataAsset*          Skillset;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       HomeRegionZone;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     TargetInteractableOnSpawn;                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  OwnerAISpawner;                                            // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnableWater
// 0x0008
struct FEventPlayerLeftAISpawnableWater
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPlayerEnterAISpawnableWater
// 0x0018
struct FEventPlayerEnterAISpawnableWater
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AYJM[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPlayerSetFootUponAISpawnRegion
// 0x0020
struct FEventPlayerSetFootUponAISpawnRegion
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CUYN[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPlayerLeftAISpawnRegion
// 0x0018
struct FEventPlayerLeftAISpawnRegion
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KRY2[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventPlayerEnteredAISpawnRegion
// 0x0020
struct FEventPlayerEnteredAISpawnRegion
{
	class AActor*                                      Player;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K37F[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAllAIProgressiveWavesCompleted
// 0x0001
struct FEventAllAIProgressiveWavesCompleted
{
	unsigned char                                      UnknownData_U6F5[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPawnRemovedFromAIRegion
// 0x0010
struct FEventAIPawnRemovedFromAIRegion
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S3IF[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIPawnAddedToAIRegion
// 0x0010
struct FEventAIPawnAddedToAIRegion
{
	class APawn*                                       AIPawn;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z8DB[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOceanCrawlerAIBuffAudioRequest
// 0x0001
struct FEventOceanCrawlerAIBuffAudioRequest
{
	bool                                               IsBuffGiver;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventOceanCrawlerAIAbilityAudioRequest
// 0x0008
struct FEventOceanCrawlerAIAbilityAudioRequest
{
	TEnumAsByte<AthenaAI_EOceanCrawlerAbilityAudioKey> RequestAudioKey;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DYZ7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              AudioDelay;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAthenaAISpawnBeginAnim
// 0x0001
struct FEventAthenaAISpawnBeginAnim
{
	TEnumAsByte<AthenaAI_EAthenaAISpawnType>           SpawnType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAthenaAISpawnActive
// 0x0002
struct FEventAthenaAISpawnActive
{
	TEnumAsByte<AthenaAI_EAthenaAISpawnType>           SpawnType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SpawnActive;                                               // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnerTelemetryEvent
// 0x0040
struct FAISpawnerTelemetryEvent
{
	struct FString                                     AISpawnerType;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AISpawnerRegion;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             AISpawnerContexts;                                         // 0x0020(0x0010) (ZeroConstructor)
	int                                                AISpawnerWaveSpawnNumber;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AISpawnerWaveDelayBefore;                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AISpawnerWaveDelayAfter;                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O7M4[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AITelemetryFragmentInput
// 0x00D0
struct FAITelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class APawn>                        AIPawn;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	struct FAIEncounterSpecification                   AIEncounterSpecification;                                  // 0x0008(0x00C8)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AITelemetryFragment
// 0x0070
struct FAITelemetryFragment
{
	struct FString                                     AIType;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIId;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             AILoadOut;                                                 // 0x0020(0x0010) (ZeroConstructor)
	struct FString                                     AIPawnType;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AISkillset;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIForm;                                                    // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     AIClass;                                                   // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.PlayerKillAITelemetryEvent
// 0x0010
struct FPlayerKillAITelemetryEvent
{
	struct FGuid                                       AttackId;                                                  // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AISpawnTelemetryEvent
// 0x0010
struct FAISpawnTelemetryEvent
{
	struct FString                                     LocationName;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIActorTimeout
// 0x0010
struct FAIActorTimeout
{
	class AActor*                                      AIActor;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timer;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PDV3[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.BountySpawnerTargetDesc
// 0x0018
struct FBountySpawnerTargetDesc
{
	TEnumAsByte<AthenaAI_EBountyTargetGender>          Gender;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBountyTargetRank>            Rank;                                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3Y6L[0x16];                                    // 0x0002(0x0016) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerWaveLocation
// 0x0014
struct FAIBountySpawnerWaveLocation
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              SelectionWeight;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowForTarget;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YNPX[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveEntry
// 0x0004
struct FAIBountySpawnerArchiveWaveEntry
{
	int                                                NumPawnsToSpawn;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerArchiveWaveGroupEntry
// 0x0018
struct FAIBountySpawnerArchiveWaveGroupEntry
{
	int                                                NumNonTargetAIKills;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTargetAIKills;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAIBountySpawnerArchiveWaveEntry>    WaveEntries;                                               // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.AIBountySpawnerArchive
// 0x0020 (0x0028 - 0x0008)
struct FAIBountySpawnerArchive : public FAISpawnerArchive
{
	int                                                CurrentWaveIndex;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2I19[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAIBountySpawnerArchiveWaveGroupEntry> WaveGroupEntries;                                          // 0x0010(0x0010) (ZeroConstructor)
	float                                              BountyAudioIntensity;                                      // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FCIA[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.BountySpawnerNewWaveGroupSpawnedEvent
// 0x0001
struct FBountySpawnerNewWaveGroupSpawnedEvent
{
	bool                                               IsFinalWave;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.BountySpawnerAudioChangedNetworkEvent
// 0x0018 (0x0028 - 0x0010)
struct FBountySpawnerAudioChangedNetworkEvent : public FNetworkEventStruct
{
	TEnumAsByte<AthenaAI_EBountySpawnerAudioState>     AudioState;                                                // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P2D0[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Intensity;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBountySpawnerType>           BountyType;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T931[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     BountyPosition;                                            // 0x001C(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIBountySpawnerTargetKilled
// 0x0068
struct FEventAIBountySpawnerTargetKilled
{
	struct FText                                       TargetName;                                                // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_VIWX[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class AActor*                                      TargetActor;                                               // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       RewardId;                                                  // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemInfo*                                   ItemDropped;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_EBountyTargetRank>            Rank;                                                      // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2XG2[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     DeathLocation;                                             // 0x0054(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      Instigator;                                                // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventAIBountySpawnerWaveCompleted
// 0x0028
struct FEventAIBountySpawnerWaveCompleted
{
	struct FName                                       IslandName;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       CrewId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                WaveIndex;                                                 // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalWaves;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InstigatorOfFinalAIPawnDeath;                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventFaunaThreatLevelChanged
// 0x0001
struct FEventFaunaThreatLevelChanged
{
	TEnumAsByte<AthenaAI_EAIThreatLevel>               ThreatLevel;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventFaunaAgitationEnded
// 0x0001
struct FEventFaunaAgitationEnded
{
	unsigned char                                      UnknownData_3FX6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventFaunaAgitationBegun
// 0x0008
struct FEventFaunaAgitationBegun
{
	class AActor*                                      SourceActor;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventSwimRotationModeChanged
// 0x0008
struct FEventSwimRotationModeChanged
{
	TEnumAsByte<AthenaAI_ESwimRotationMode>            NewSwimRotationMode;                                       // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F1GH[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NewRotationRate;                                           // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkWorldSettingsParams
// 0x0001
struct FTinySharkWorldSettingsParams
{
	bool                                               TinySharkEnabled;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkEQSRequest
// 0x0048
struct FTinySharkEQSRequest
{
	unsigned char                                      UnknownData_6A9O[0x48];                                    // 0x0000(0x0048) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkSpawnedNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkSpawnedNetworkEvent : public FNetworkEventStruct
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkKilledNetworkEvent
// 0x0000 (0x0010 - 0x0010)
struct FTinySharkKilledNetworkEvent : public FNetworkEventStruct
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventTinySharkKilled
// 0x0001
struct FEventTinySharkKilled
{
	unsigned char                                      UnknownData_RPK8[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventTinySharkDamaged
// 0x0058
struct FEventTinySharkDamaged
{
	struct FImpactDamageEvent                          ImpactDamageEvent;                                         // 0x0000(0x0058)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventTinySharkDespawned
// 0x0001
struct FEventTinySharkDespawned
{
	TEnumAsByte<AthenaAI_ETinySharkDespawnReason>      DespawnReason;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.EventTinySharkSpawned
// 0x0020
struct FEventTinySharkSpawned
{
	struct FString                                     TinySharkPartTag;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       SpawnConfigId;                                             // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkDespawnTelemetryEvent
// 0x0018
struct FTinySharkDespawnTelemetryEvent
{
	struct FString                                     TinySharkId;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	TEnumAsByte<AthenaAI_ETinySharkDespawnReason>      TinySharkDespawnReason;                                    // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6NV8[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct AthenaAI.TinySharkSpawnTelemetryEvent
// 0x0030
struct FTinySharkSpawnTelemetryEvent
{
	struct FString                                     TinySharkId;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TinySharkType;                                             // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       ConfigSpawnId;                                             // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

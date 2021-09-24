#pragma once

// Name: SoT, Version: 2.3.0


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

// Enum GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
enum class GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectAttributeCaptureSource
enum class GameplayAbilities_EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source = 0,
	EGameplayEffectAttributeCaptureSource__Target = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityActivationMode
enum class GameplayAbilities_EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority = 0,
	EGameplayAbilityActivationMode__NonAuthority = 1,
	EGameplayAbilityActivationMode__Predicting = 2,
	EGameplayAbilityActivationMode__Confirmed = 3,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX = 4,

};

// Enum GameplayAbilities.EAbilityGenericReplicatedEvent
enum class GameplayAbilities_EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm = 0,
	EAbilityGenericReplicatedEvent__GenericCancel = 1,
	EAbilityGenericReplicatedEvent__InputPressed = 2,
	EAbilityGenericReplicatedEvent__InputReleased = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer = 5,
	EAbilityGenericReplicatedEvent__GameCustom1 = 6,
	EAbilityGenericReplicatedEvent__GameCustom2 = 7,
	EAbilityGenericReplicatedEvent__GameCustom3 = 8,
	EAbilityGenericReplicatedEvent__GameCustom4 = 9,
	EAbilityGenericReplicatedEvent__GameCustom5 = 10,
	EAbilityGenericReplicatedEvent__MAX = 11,
	EAbilityGenericReplicatedEvent__EAbilityGenericReplicatedEvent_MAX = 12,

};

// Enum GameplayAbilities.ETargetDataFilterSelf
enum class GameplayAbilities_ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any = 0,
	ETargetDataFilterSelf__TDFS_NoSelf = 1,
	ETargetDataFilterSelf__TDFS_NoOthers = 2,
	ETargetDataFilterSelf__TDFS_MAX = 3,

};

// Enum GameplayAbilities.EGameplayTagEventType
enum class GameplayAbilities_EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2,

};

// Enum GameplayAbilities.EGameplayCueEvent
enum class GameplayAbilities_EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive    = 0,
	EGameplayCueEvent__WhileActive = 1,
	EGameplayCueEvent__Executed    = 2,
	EGameplayCueEvent__Removed     = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX = 4,

};

// Enum GameplayAbilities.EGameplayEffectStackingType
enum class GameplayAbilities_EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None = 0,
	EGameplayEffectStackingType__AggregateBySource = 1,
	EGameplayEffectStackingType__AggregateByTarget = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayModOp
enum class GameplayAbilities_EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive       = 0,
	EGameplayModOp__Multiplicitive = 1,
	EGameplayModOp__Division       = 2,
	EGameplayModOp__Override       = 3,
	EGameplayModOp__Max            = 4,
	EGameplayModOp__EGameplayModOp_MAX = 5,

};

// Enum GameplayAbilities.EGameplayAbilityTargetingLocationType
enum class GameplayAbilities_EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayTargetingConfirmation
enum class GameplayAbilities_EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant = 0,
	EGameplayTargetingConfirmation__UserConfirmed = 1,
	EGameplayTargetingConfirmation__Custom = 2,
	EGameplayTargetingConfirmation__CustomMulti = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityTriggerSource
enum class GameplayAbilities_EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX = 3,

};

// Enum GameplayAbilities.EGameplayAbilityReplicationPolicy
enum class GameplayAbilities_EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayAbilityNetExecutionPolicy
enum class GameplayAbilities_EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX = 4,

};

// Enum GameplayAbilities.EGameplayAbilityInstancingPolicy
enum class GameplayAbilities_EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectStackingPeriodPolicy
enum class GameplayAbilities_EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectStackingDurationPolicy
enum class GameplayAbilities_EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX = 2,

};

// Enum GameplayAbilities.EGameplayEffectDurationType
enum class GameplayAbilities_EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant = 0,
	EGameplayEffectDurationType__Infinite = 1,
	EGameplayEffectDurationType__HasDuration = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX = 3,

};

// Enum GameplayAbilities.EAttributeBasedFloatCalculationType
enum class GameplayAbilities_EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude = 2,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX = 3,

};

// Enum GameplayAbilities.EGameplayEffectMagnitudeCalculation
enum class GameplayAbilities_EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX = 4,

};

// Enum GameplayAbilities.EAbilityTaskNetSyncType
enum class GameplayAbilities_EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait = 0,
	EAbilityTaskNetSyncType__OnlyServerWait = 1,
	EAbilityTaskNetSyncType__OnlyClientWait = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX = 3,

};

// Enum GameplayAbilities.ETargetAbilitySelfSelection
enum class GameplayAbilities_ETargetAbilitySelfSelection : uint8_t
{
	ETargetAbilitySelfSelection__TASS_Permit = 0,
	ETargetAbilitySelfSelection__TASS_Forbid = 1,
	ETargetAbilitySelfSelection__TASS_Require = 2,
	ETargetAbilitySelfSelection__TASS_MAX = 3,

};

// Enum GameplayAbilities.EWaitAttributeChangeComparison
enum class GameplayAbilities_EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None = 0,
	EWaitAttributeChangeComparison__GreaterThan = 1,
	EWaitAttributeChangeComparison__LessThan = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo = 4,
	EWaitAttributeChangeComparison__NotEqualTo = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo = 6,
	EWaitAttributeChangeComparison__MAX = 7,
	EWaitAttributeChangeComparison__EWaitAttributeChangeComparison_MAX = 8,

};

// Enum GameplayAbilities.EGameplayAbilityInputBinds
enum class GameplayAbilities_EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability1 = 0,
	EGameplayAbilityInputBinds__Ability2 = 1,
	EGameplayAbilityInputBinds__Ability3 = 2,
	EGameplayAbilityInputBinds__Ability4 = 3,
	EGameplayAbilityInputBinds__Ability5 = 4,
	EGameplayAbilityInputBinds__Ability6 = 5,
	EGameplayAbilityInputBinds__Ability7 = 6,
	EGameplayAbilityInputBinds__Ability8 = 7,
	EGameplayAbilityInputBinds__Ability9 = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX = 9,

};

// Enum GameplayAbilities.EGameplayCuePayloadType
enum class GameplayAbilities_EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__EffectContext = 0,
	EGameplayCuePayloadType__CueParameters = 1,
	EGameplayCuePayloadType__FromSpec = 2,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayAbilities.GameplayEffectContextHandle
// 0x0020
struct FGameplayEffectContextHandle
{
	unsigned char                                      UnknownData_AH0I[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayCueParameters
// 0x0088
struct FGameplayCueParameters
{
	float                                              NormalizedMagnitude;                                       // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RawMagnitude;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0008(0x0020) (BlueprintVisible)
	struct FName                                       MatchedTagName;                                            // 0x0028(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                OriginalTag;                                               // 0x0030(0x0008) (BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x0038(0x0028) (BlueprintVisible)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x0060(0x0028) (BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetDataHandle
// 0x0010
struct FGameplayAbilityTargetDataHandle
{
	unsigned char                                      UnknownData_X6Z6[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecHandle
// 0x0020
struct FGameplayEffectSpecHandle
{
	unsigned char                                      UnknownData_CCYG[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilter
// 0x0028
struct FGameplayTargetDataFilter
{
	unsigned char                                      UnknownData_TJ6C[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      SelfActor;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_ETargetDataFilterSelf> SelfFilter;                                                // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PCU1[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      RequiredActorClass;                                        // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bReverseFilter;                                            // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_SFOV[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayTargetDataFilterHandle
// 0x0018
struct FGameplayTargetDataFilterHandle
{
	unsigned char                                      UnknownData_BRYL[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAttribute
// 0x0008
struct FGameplayAttribute
{
	class UProperty*                                   Attribute;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectHandle
// 0x0004
struct FActiveGameplayEffectHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetingLocationInfo
// 0x0070
struct FGameplayAbilityTargetingLocationInfo
{
	unsigned char                                      UnknownData_J05Q[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTargetingLocationType> LocationType;                                              // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Z158[0xF];                                     // 0x0011(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  LiteralTransform;                                          // 0x0020(0x0030) (BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class AActor*                                      SourceActor;                                               // 0x0050(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMeshComponent*                              SourceComponent;                                           // 0x0058(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UGameplayAbility*                            SourceAbility;                                             // 0x0060(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FName                                       SourceSocketName;                                          // 0x0068(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayTagRequirements
// 0x0050
struct FGameplayTagRequirements
{
	struct FGameplayTagContainer                       RequireTags;                                               // 0x0000(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       IgnoreTags;                                                // 0x0028(0x0028) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.SetByCallerFloat
// 0x0008
struct FSetByCallerFloat
{
	struct FName                                       DataName;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandle
// 0x0004
struct FGameplayAbilitySpecHandle
{
	int                                                Handle;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecDef
// 0x0028
struct FGameplayAbilitySpecDef
{
	class UClass*                                      Ability;                                                   // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                Level;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	int                                                InputID;                                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayEffectGrantedAbilityRemovePolicy> RemovalPolicy;                                             // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5T0K[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     SourceObject;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle                  AssignedHandle;                                            // 0x0020(0x0004)
	unsigned char                                      UnknownData_TJ0Z[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.InheritedTagContainer
// 0x0078
struct FInheritedTagContainer
{
	struct FGameplayTagContainer                       CombinedTags;                                              // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst)
	struct FGameplayTagContainer                       Added;                                                     // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)
	struct FGameplayTagContainer                       Removed;                                                   // 0x0050(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, Transient, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectCue
// 0x0038
struct FGameplayEffectCue
{
	struct FGameplayAttribute                          MagnitudeAttribute;                                        // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	float                                              MinLevel;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLevel;                                                  // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                       GameplayCueTags;                                           // 0x0010(0x0028) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureDefinition
// 0x0010
struct FGameplayEffectAttributeCaptureDefinition
{
	struct FGameplayAttribute                          AttributeToCapture;                                        // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<GameplayAbilities_EGameplayEffectAttributeCaptureSource> AttributeSource;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSnapshot;                                                 // 0x0009(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L278[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ScalableFloat
// 0x0020
struct FScalableFloat
{
	float                                              Value;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P8UK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FCurveTableRowHandle                        Curve;                                                     // 0x0008(0x0010) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_G27M[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.AttributeBasedFloat
// 0x00D8
struct FAttributeBasedFloat
{
	struct FScalableFloat                              Coefficient;                                               // 0x0000(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0020(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x0040(0x0020) (Edit, DisableEditOnInstance)
	struct FGameplayEffectAttributeCaptureDefinition   BackingAttribute;                                          // 0x0060(0x0010) (Edit, DisableEditOnInstance)
	struct FCurveTableRowHandle                        AttributeCurve;                                            // 0x0070(0x0010) (Edit, DisableEditOnInstance)
	TEnumAsByte<GameplayAbilities_EAttributeBasedFloatCalculationType> AttributeCalculationType;                                  // 0x0080(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F6WA[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayTagContainer                       SourceTagFilter;                                           // 0x0088(0x0028) (Edit, DisableEditOnInstance)
	struct FGameplayTagContainer                       TargetTagFilter;                                           // 0x00B0(0x0028) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.CustomCalculationBasedFloat
// 0x0068
struct FCustomCalculationBasedFloat
{
	class UClass*                                      CalculationClassMagnitude;                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FScalableFloat                              Coefficient;                                               // 0x0008(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PreMultiplyAdditiveValue;                                  // 0x0028(0x0020) (Edit, DisableEditOnInstance)
	struct FScalableFloat                              PostMultiplyAdditiveValue;                                 // 0x0048(0x0020) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectModifierMagnitude
// 0x0170
struct FGameplayEffectModifierMagnitude
{
	TEnumAsByte<GameplayAbilities_EGameplayEffectMagnitudeCalculation> MagnitudeCalculationType;                                  // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GQH9[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              ScalableFloatMagnitude;                                    // 0x0008(0x0020) (Edit, DisableEditOnInstance, Protected)
	struct FAttributeBasedFloat                        AttributeBasedMagnitude;                                   // 0x0028(0x00D8) (Edit, DisableEditOnInstance, Protected)
	struct FCustomCalculationBasedFloat                CustomMagnitude;                                           // 0x0100(0x0068) (Edit, DisableEditOnInstance, Protected)
	struct FSetByCallerFloat                           SetByCallerMagnitude;                                      // 0x0168(0x0008) (Edit, DisableEditOnInstance, Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
// 0x0228
struct FGameplayEffectExecutionScopedModifierInfo
{
	struct FGameplayEffectAttributeCaptureDefinition   CapturedAttribute;                                         // 0x0000(0x0010) (Edit, DisableEditOnInstance, EditConst)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WNG7[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x0018(0x0170) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x0188(0x0050) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x01D8(0x0050) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectExecutionDefinition
// 0x0050
struct FGameplayEffectExecutionDefinition
{
	class UClass*                                      CalculationClass;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FGameplayTagContainer                       PassedInTags;                                              // 0x0008(0x0028) (Edit, DisableEditOnInstance)
	TArray<struct FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers;                                      // 0x0030(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              ConditionalGameplayEffectClasses;                          // 0x0040(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayModifierInfo
// 0x0240
struct FGameplayModifierInfo
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0008) (Edit, DisableEditOnInstance)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y8VA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScalableFloat                              Magnitude;                                                 // 0x0010(0x0020)
	struct FGameplayEffectModifierMagnitude            ModifierMagnitude;                                         // 0x0030(0x0170) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    SourceTags;                                                // 0x01A0(0x0050) (Edit, DisableEditOnInstance)
	struct FGameplayTagRequirements                    TargetTags;                                                // 0x01F0(0x0050) (Edit, DisableEditOnInstance)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.PredictionKey
// 0x0018
struct FPredictionKey
{
	int16_t                                            Current;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int16_t                                            Base;                                                      // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YYB0[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPackageMap*                                 PredictiveConnection;                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsStale;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	bool                                               bIsServerInitiated;                                        // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_M01M[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.AbilityTriggerData
// 0x000C
struct FAbilityTriggerData
{
	struct FGameplayTag                                TriggerTag;                                                // 0x0000(0x0008) (Edit)
	TEnumAsByte<GameplayAbilities_EGameplayAbilityTriggerSource> TriggerSource;                                             // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_680V[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityActorInfo
// 0x0038
struct FGameplayAbilityActorInfo
{
	unsigned char                                      UnknownData_TT1O[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       OwnerActor;                                                // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class AActor>                       AvatarActor;                                               // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class APlayerController>            PlayerController;                                          // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UAbilitySystemComponent>      AbilitySystemComponent;                                    // 0x0020(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UAnimInstance>                AnimInstance;                                              // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	TWeakObjectPtr<class UMovementComponent>           MovementComponent;                                         // 0x0030(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.AttributeDefaults
// 0x0010
struct FAttributeDefaults
{
	class UClass*                                      Attributes;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDataTable*                                  DefaultStartingTable;                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ModifierSpec
// 0x0004
struct FModifierSpec
{
	float                                              EvaluatedMagnitude;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectModifiedAttribute
// 0x0010
struct FGameplayEffectModifiedAttribute
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0008)
	float                                              TotalMagnitude;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5HKI[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectSpecForRPC
// 0x0090
struct FGameplayEffectSpecForRPC
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0018(0x0020)
	struct FGameplayTagContainer                       AggregatedSourceTags;                                      // 0x0038(0x0028)
	struct FGameplayTagContainer                       AggregatedTargetTags;                                      // 0x0060(0x0028)
	float                                              Level;                                                     // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6QTA[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.WorldReticleParameters
// 0x000C
struct FWorldReticleParameters
{
	struct FVector                                     AOEScale;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityBindInfo
// 0x0010
struct FGameplayAbilityBindInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityInputBinds> Command;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_032V[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      GameplayAbilityClass;                                      // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayCuePendingExecute
// 0x0148
struct FGameplayCuePendingExecute
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)
	TEnumAsByte<GameplayAbilities_EGameplayCuePayloadType> PayloadType;                                               // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U4I5[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAbilitySystemComponent*                     OwningComponent;                                           // 0x0028(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecForRPC                   FromSpec;                                                  // 0x0030(0x0090)
	struct FGameplayCueParameters                      CueParameters;                                             // 0x00C0(0x0088)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEventData
// 0x00A0
struct FGameplayEventData
{
	struct FGameplayTag                                EventTag;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible)
	class AActor*                                      Instigator;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Target;                                                    // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     OptionalObject;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     OptionalObject2;                                           // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                ContextHandle;                                             // 0x0028(0x0020) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       InstigatorTags;                                            // 0x0048(0x0028) (Edit, BlueprintVisible)
	struct FGameplayTagContainer                       TargetTags;                                                // 0x0070(0x0028) (Edit, BlueprintVisible)
	float                                              EventMagnitude;                                            // 0x0098(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SDSV[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityActivationInfo
// 0x0020
struct FGameplayAbilityActivationInfo
{
	TEnumAsByte<GameplayAbilities_EGameplayAbilityActivationMode> ActivationMode;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanBeEndedByOtherInstance;                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AI5L[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKeyWhenActivated;                                // 0x0008(0x0018)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityRepAnimMontage
// 0x0030
struct FGameplayAbilityRepAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Position;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendTime;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      NextSectionID;                                             // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      IsStopped : 1;                                             // 0x0015(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      ForcePlayBit : 1;                                          // 0x0015(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_N8WL[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0018(0x0018)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityLocalAnimMontage
// 0x0030
struct FGameplayAbilityLocalAnimMontage
{
	class UAnimMontage*                                AnimMontage;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayBit;                                                   // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_N3MI[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPredictionKey                              PredictionKey;                                             // 0x0010(0x0018)
	class UGameplayAbility*                            AnimatingAbility;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayCue
// 0x0028 (0x0030 - 0x0008)
struct FActiveGameplayCue : public FFastArraySerializerItem
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0008(0x0008)
	struct FPredictionKey                              PredictionKey;                                             // 0x0010(0x0018)
	bool                                               bPredictivelyRemoved;                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_LMPH[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpec
// 0x0070 (0x0078 - 0x0008)
struct FGameplayAbilitySpec : public FFastArraySerializerItem
{
	struct FGameplayAbilitySpecHandle                  Handle;                                                    // 0x0008(0x0004)
	unsigned char                                      UnknownData_3LJJ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameplayAbility*                            Ability;                                                   // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Level;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InputID;                                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     SourceObject;                                              // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InputPressed;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      ActiveCount;                                               // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                               RemoveAfterActivation;                                     // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_3ZZL[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0030(0x0020) (RepSkip)
	TArray<class UGameplayAbility*>                    NonReplicatedInstances;                                    // 0x0050(0x0010) (ZeroConstructor, RepSkip)
	TArray<class UGameplayAbility*>                    ReplicatedInstances;                                       // 0x0060(0x0010) (ZeroConstructor)
	struct FActiveGameplayEffectHandle                 GameplayEffectHandle;                                      // 0x0070(0x0004) (RepSkip)
	bool                                               PendingRemove;                                             // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor)
	unsigned char                                      UnknownData_NFM0[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FGameplayAbilitySpecContainer : public FFastArraySerializer
{
	TArray<struct FGameplayAbilitySpec>                Items;                                                     // 0x00A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_PSO0[0x8];                                     // 0x00B8(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpec
// 0x0028
struct FGameplayEffectAttributeCaptureSpec
{
	struct FGameplayEffectAttributeCaptureDefinition   BackingDefinition;                                         // 0x0000(0x0010)
	unsigned char                                      UnknownData_BS1H[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
// 0x0028
struct FGameplayEffectAttributeCaptureSpecContainer
{
	TArray<struct FGameplayEffectAttributeCaptureSpec> SourceAttributes;                                          // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FGameplayEffectAttributeCaptureSpec> TargetAttributes;                                          // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bHasNonSnapshottedAttributes;                              // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W6K7[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.TagContainerAggregator
// 0x00A8
struct FTagContainerAggregator
{
	struct FGameplayTagContainer                       CapturedActorTags;                                         // 0x0000(0x0028)
	struct FGameplayTagContainer                       CapturedSpecTags;                                          // 0x0028(0x0028)
	struct FGameplayTagContainer                       ScopedTags;                                                // 0x0050(0x0028)
	unsigned char                                      UnknownData_54WX[0x30];                                    // 0x0078(0x0030) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayCueContainer
// 0x0018 (0x00C0 - 0x00A8)
struct FActiveGameplayCueContainer : public FFastArraySerializer
{
	TArray<struct FActiveGameplayCue>                  GameplayCues;                                              // 0x00A8(0x0010) (ZeroConstructor)
	class UAbilitySystemComponent*                     Owner;                                                     // 0x00B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectSpec
// 0x02A0
struct FGameplayEffectSpec
{
	class UGameplayEffect*                             Def;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGameplayEffectModifiedAttribute>    ModifiedAttributes;                                        // 0x0008(0x0010) (ZeroConstructor)
	struct FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes;                                // 0x0018(0x0028) (RepSkip)
	unsigned char                                      UnknownData_CKZC[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Duration;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Period;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ChanceToApplyToTarget;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7CZ6[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTagContainerAggregator                     CapturedSourceTags;                                        // 0x0060(0x00A8) (RepSkip)
	struct FTagContainerAggregator                     CapturedTargetTags;                                        // 0x0108(0x00A8) (RepSkip)
	struct FGameplayTagContainer                       DynamicGrantedTags;                                        // 0x01B0(0x0028)
	struct FGameplayTagContainer                       DynamicAssetTags;                                          // 0x01D8(0x0028)
	TArray<struct FModifierSpec>                       Modifiers;                                                 // 0x0200(0x0010) (ZeroConstructor)
	int                                                StackCount;                                                // 0x0210(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bCompletedSourceAttributeCapture : 1;                      // 0x0214(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      bCompletedTargetAttributeCapture : 1;                      // 0x0214(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      bDurationLocked : 1;                                       // 0x0214(0x0001) BIT_FIELD (RepSkip, NoDestructor)
	unsigned char                                      UnknownData_Z6Q7[0x3];                                     // 0x0215(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGameplayAbilitySpecDef>             GrantedAbilitySpecs;                                       // 0x0218(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_11F3[0x50];                                    // 0x0228(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0278(0x0020)
	float                                              Level;                                                     // 0x0298(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KMO8[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffect
// 0x02F8 (0x0300 - 0x0008)
struct FActiveGameplayEffect : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_0P2I[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayEffectSpec                         Spec;                                                      // 0x0010(0x02A0)
	struct FPredictionKey                              PredictionKey;                                             // 0x02B0(0x0018)
	float                                              StartServerWorldTime;                                      // 0x02C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CachedStartServerWorldTime;                                // 0x02CC(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	float                                              StartWorldTime;                                            // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsInhibited;                                              // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XJX9[0x2B];                                    // 0x02D5(0x002B) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectsContainer
// 0x02C0 (0x0368 - 0x00A8)
struct FActiveGameplayEffectsContainer : public FFastArraySerializer
{
	unsigned char                                      UnknownData_WEQS[0x20];                                    // 0x00A8(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FActiveGameplayEffect>               GameplayEffects_Internal;                                  // 0x00C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_VQPO[0x290];                                   // 0x00D8(0x0290) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayCueNotifyData
// 0x0028
struct FGameplayCueNotifyData
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008) (Edit)
	struct FStringAssetReference                       GameplayCueNotifyObj;                                      // 0x0008(0x0010) (Edit, ZeroConstructor)
	class UClass*                                      LoadedGameplayCueClass;                                    // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J1GR[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionParameters
// 0x0088
struct FGameplayEffectCustomExecutionParameters
{
	unsigned char                                      UnknownData_RLVJ[0x88];                                    // 0x0000(0x0088) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayModifierEvaluatedData
// 0x0018
struct FGameplayModifierEvaluatedData
{
	struct FGameplayAttribute                          Attribute;                                                 // 0x0000(0x0008)
	TEnumAsByte<GameplayAbilities_EGameplayModOp>      ModifierOp;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9R7O[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Magnitude;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x0010(0x0004)
	bool                                               IsValid;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BDPS[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectCustomExecutionOutput
// 0x0018
struct FGameplayEffectCustomExecutionOutput
{
	TArray<struct FGameplayModifierEvaluatedData>      OutputModifiers;                                           // 0x0000(0x0010) (ZeroConstructor)
	unsigned char                                      bTriggerConditionalGameplayEffects : 1;                    // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bHandledStackCountManually : 1;                            // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bHandledGameplayCuesManually : 1;                          // 0x0010(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_VT3M[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayTagReponsePair
// 0x0010
struct FGameplayTagReponsePair
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008) (Edit)
	class UClass*                                      ResponseGameplayEffect;                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayTagResponseTableEntry
// 0x0020
struct FGameplayTagResponseTableEntry
{
	struct FGameplayTagReponsePair                     Positive;                                                  // 0x0000(0x0010) (Edit)
	struct FGameplayTagReponsePair                     Negative;                                                  // 0x0010(0x0010) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.AttributeMetaData
// 0x0028
struct FAttributeMetaData : public FTableRowBase
{
	float                                              BaseValue;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4IYV[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DerivedAttributeInfo;                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               bCanStack;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SLMR[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GlobalCurveDataOverride
// 0x0010
struct FGlobalCurveDataOverride
{
	unsigned char                                      UnknownData_7V93[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectContext
// 0x0060
struct FGameplayEffectContext
{
	unsigned char                                      UnknownData_4FBK[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class AActor>                       Instigator;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper)
	TWeakObjectPtr<class AActor>                       EffectCauser;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper)
	TWeakObjectPtr<class UObject>                      SourceObject;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper)
	TWeakObjectPtr<class UAbilitySystemComponent>      InstigatorAbilitySystemComponent;                          // 0x0020(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, Protected, UObjectWrapper)
	TArray<TWeakObjectPtr<class AActor>>               Actors;                                                    // 0x0028(0x0010) (ZeroConstructor, Protected, UObjectWrapper)
	unsigned char                                      UnknownData_NWFA[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     WorldOrigin;                                               // 0x0050(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	bool                                               bHasWorldOrigin;                                           // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_XA2J[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData
// 0x0008
struct FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_RH1G[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
// 0x0080 (0x0088 - 0x0008)
struct FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x0080) (ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_ActorArray
// 0x0088 (0x0090 - 0x0008)
struct FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_7QN7[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<TWeakObjectPtr<class AActor>>               TargetActorArray;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilityTargetData_LocationInfo
// 0x00E8 (0x00F0 - 0x0008)
struct FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{
	unsigned char                                      UnknownData_PG0H[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0010(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                            // 0x0080(0x0070) (Edit, BlueprintVisible, ContainsInstancedReference)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
// 0x0008
struct FGameplayAbilitySpecHandleAndPredictionKey
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004)
	int                                                PredictionKeyAtCreation;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.ActiveGameplayEffectQuery
// 0x0050
struct FActiveGameplayEffectQuery
{
	unsigned char                                      UnknownData_9T0M[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct GameplayAbilities.GameplayEffectQuery
// 0x00D0
struct FGameplayEffectQuery
{
	unsigned char                                      UnknownData_Y4N5[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             CustomMatchDelegate_BP;                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor)
	struct FGameplayTagQuery                           OwningTagQuery;                                            // 0x0018(0x0048) (Edit, BlueprintVisible)
	struct FGameplayTagQuery                           EffectTagQuery;                                            // 0x0060(0x0048) (Edit, BlueprintVisible)
	struct FGameplayAttribute                          ModifyingAttribute;                                        // 0x00A8(0x0008) (Edit, BlueprintVisible)
	class UObject*                                     EffectSource;                                              // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameplayEffect*                             EffectDefinition;                                          // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DJY2[0x10];                                    // 0x00C0(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

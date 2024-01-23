// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x300
struct ActiveGameplayEffect
{
public:
	char                                                         pad0x10_EUV41[0x10];                               // 0x0(0x10)
	struct GameplayEffectSpec                                    Spec;                                              // 0x10(0x2a0)
	struct PredictionKey                                         PredictionKey;                                     // 0x2b0(0x18)
	float                                                        StartServerWorldTime;                              // 0x2c8(0x4)
	float                                                        CachedStartServerWorldTime;                        // 0x2cc(0x4)
	float                                                        StartWorldTime;                                    // 0x2d0(0x4)
	bool                                                         bIsInhibited;                                      // 0x2d4(0x1)
	char                                                         pad0x2b_W2XQI[0x2b];                               // 0x2d5(0x2b)
};


// Size 0x18
struct PredictionKey
{
public:
	char                                                         pad0x8_C500N[0x8];                                 // 0x0(0x8)
	class PackageMap*                                            PredictiveConnection;                              // 0x8(0x8)
	bool                                                         bIsStale;                                          // 0x10(0x1)
	bool                                                         bIsServerInitiated;                                // 0x11(0x1)
	char                                                         pad0x6_YXECM[0x6];                                 // 0x12(0x6)
};


// Size 0x2a0
struct GameplayEffectSpec
{
public:
	class GameplayEffect*                                        Def;                                               // 0x0(0x8)
	TArray<struct GameplayEffectModifiedAttribute>               ModifiedAttributes;                                // 0x8(0x10)
	struct GameplayEffectAttributeCaptureSpecContainer           CapturedRelevantAttributes;                        // 0x18(0x28)
	char                                                         pad0x10_OJT66[0x10];                               // 0x40(0x10)
	float                                                        Duration;                                          // 0x50(0x4)
	float                                                        Period;                                            // 0x54(0x4)
	float                                                        ChanceToApplyToTarget;                             // 0x58(0x4)
	char                                                         pad0x4_LSC5F[0x4];                                 // 0x5c(0x4)
	struct TagContainerAggregator                                CapturedSourceTags;                                // 0x60(0xa8)
	struct TagContainerAggregator                                CapturedTargetTags;                                // 0x108(0xa8)
	struct GameplayTagContainer                                  DynamicGrantedTags;                                // 0x1b0(0x28)
	struct GameplayTagContainer                                  DynamicAssetTags;                                  // 0x1d8(0x28)
	TArray<struct ModifierSpec>                                  Modifiers;                                         // 0x200(0x10)
	int                                                          StackCount;                                        // 0x210(0x4)
	bool                                                         bCompletedSourceAttributeCapture;                  // 0x214(0x1)
	bool                                                         bCompletedTargetAttributeCapture;                  // 0x214(0x1)
	bool                                                         bDurationLocked;                                   // 0x214(0x1)
	char                                                         pad0x3_FPIIW[0x3];                                 // 0x215(0x3)
	TArray<struct GameplayAbilitySpecDef>                        GrantedAbilitySpecs;                               // 0x218(0x10)
	char                                                         pad0x50_HMUNO[0x50];                               // 0x228(0x50)
	struct GameplayEffectContextHandle                           EffectContext;                                     // 0x278(0x20)
	float                                                        Level;                                             // 0x298(0x4)
	char                                                         pad0x4_AK7H9[0x4];                                 // 0x29c(0x4)
};


// Size 0x20
struct GameplayEffectContextHandle
{
public:
	char                                                         pad0x20_8B6FF[0x20];                               // 0x0(0x20)
};


// Size 0x28
struct GameplayAbilitySpecDef
{
public:
	class UClass*                                                Ability;                                           // 0x0(0x8)
	int                                                          Level;                                             // 0x8(0x4)
	int                                                          InputID;                                           // 0xc(0x4)
	byte                                                         RemovalPolicy;                                     // 0x10(0x1)
	char                                                         pad0x7_27SBZ[0x7];                                 // 0x11(0x7)
	class Object*                                                SourceObject;                                      // 0x18(0x8)
	struct GameplayAbilitySpecHandle                             AssignedHandle;                                    // 0x20(0x4)
	char                                                         pad0x4_8LY09[0x4];                                 // 0x24(0x4)
};


// Size 0x4
struct GameplayAbilitySpecHandle
{
public:
	int                                                          Handle;                                            // 0x0(0x4)
};


// Size 0x4
struct ModifierSpec
{
public:
	float                                                        EvaluatedMagnitude;                                // 0x0(0x4)
};


// Size 0xa8
struct TagContainerAggregator
{
public:
	struct GameplayTagContainer                                  CapturedActorTags;                                 // 0x0(0x28)
	struct GameplayTagContainer                                  CapturedSpecTags;                                  // 0x28(0x28)
	struct GameplayTagContainer                                  ScopedTags;                                        // 0x50(0x28)
	char                                                         pad0x30_0DZIT[0x30];                               // 0x78(0x30)
};


// Size 0x28
struct GameplayEffectAttributeCaptureSpecContainer
{
public:
	TArray<struct GameplayEffectAttributeCaptureSpec>            SourceAttributes;                                  // 0x0(0x10)
	TArray<struct GameplayEffectAttributeCaptureSpec>            TargetAttributes;                                  // 0x10(0x10)
	bool                                                         bHasNonSnapshottedAttributes;                      // 0x20(0x1)
	char                                                         pad0x7_IG5IW[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct GameplayEffectAttributeCaptureSpec
{
public:
	struct GameplayEffectAttributeCaptureDefinition              BackingDefinition;                                 // 0x0(0x10)
	char                                                         pad0x18_G07YA[0x18];                               // 0x10(0x18)
};


// Size 0x10
struct GameplayEffectAttributeCaptureDefinition
{
public:
	struct GameplayAttribute                                     AttributeToCapture;                                // 0x0(0x8)
	byte                                                         AttributeSource;                                   // 0x8(0x1)
	bool                                                         bSnapshot;                                         // 0x9(0x1)
	char                                                         pad0x6_QC140[0x6];                                 // 0xa(0x6)
};


// Size 0x8
struct GameplayAttribute
{
public:
	class Property*                                              Attribute;                                         // 0x0(0x8)
};


// Size 0x10
struct GameplayEffectModifiedAttribute
{
public:
	struct GameplayAttribute                                     Attribute;                                         // 0x0(0x8)
	float                                                        TotalMagnitude;                                    // 0x8(0x4)
	char                                                         pad0x4_LT4KQ[0x4];                                 // 0xc(0x4)
};


// Size 0x4
struct ActiveGameplayEffectHandle
{
public:
	int                                                          Handle;                                            // 0x0(0x4)
};


// Size 0x20
struct GameplayEffectSpecHandle
{
public:
	char                                                         pad0x20_K6L9N[0x20];                               // 0x0(0x20)
};


// Size 0x10
struct GameplayAbilityTargetDataHandle
{
public:
	char                                                         pad0x10_I46ZY[0x10];                               // 0x0(0x10)
};


// Size 0xa0
struct GameplayEventData
{
public:
	struct GameplayTag                                           EventTag;                                          // 0x0(0x8)
	class Actor*                                                 Instigator;                                        // 0x8(0x8)
	class Actor*                                                 Target;                                            // 0x10(0x8)
	class Object*                                                OptionalObject;                                    // 0x18(0x8)
	class Object*                                                OptionalObject2;                                   // 0x20(0x8)
	struct GameplayEffectContextHandle                           ContextHandle;                                     // 0x28(0x20)
	struct GameplayTagContainer                                  InstigatorTags;                                    // 0x48(0x28)
	struct GameplayTagContainer                                  TargetTags;                                        // 0x70(0x28)
	float                                                        EventMagnitude;                                    // 0x98(0x4)
	char                                                         pad0x4_9HA91[0x4];                                 // 0x9c(0x4)
};


// Size 0x20
struct GameplayAbilityActivationInfo
{
public:
	byte                                                         ActivationMode;                                    // 0x0(0x1)
	bool                                                         bCanBeEndedByOtherInstance;                        // 0x1(0x1)
	char                                                         pad0x6_S93HH[0x6];                                 // 0x2(0x6)
	struct PredictionKey                                         PredictionKeyWhenActivated;                        // 0x8(0x18)
};


// Size 0x90
struct GameplayEffectSpecForRPC
{
public:
	class GameplayEffect*                                        Def;                                               // 0x0(0x8)
	TArray<struct GameplayEffectModifiedAttribute>               ModifiedAttributes;                                // 0x8(0x10)
	struct GameplayEffectContextHandle                           EffectContext;                                     // 0x18(0x20)
	struct GameplayTagContainer                                  AggregatedSourceTags;                              // 0x38(0x28)
	struct GameplayTagContainer                                  AggregatedTargetTags;                              // 0x60(0x28)
	float                                                        Level;                                             // 0x88(0x4)
	char                                                         pad0x4_QP6W2[0x4];                                 // 0x8c(0x4)
};


// Size 0x88
struct GameplayCueParameters
{
public:
	float                                                        NormalizedMagnitude;                               // 0x0(0x4)
	float                                                        RawMagnitude;                                      // 0x4(0x4)
	struct GameplayEffectContextHandle                           EffectContext;                                     // 0x8(0x20)
	struct FName                                                 MatchedTagName;                                    // 0x28(0x8)
	struct GameplayTag                                           OriginalTag;                                       // 0x30(0x8)
	struct GameplayTagContainer                                  AggregatedSourceTags;                              // 0x38(0x28)
	struct GameplayTagContainer                                  AggregatedTargetTags;                              // 0x60(0x28)
};


// Size 0xc0
struct ActiveGameplayCueContainer
{
public:
	char                                                         pad0xa8_FRGJN[0xa8];                               // 0x0(0xa8)
	TArray<struct ActiveGameplayCue>                             GameplayCues;                                      // 0xa8(0x10)
	class AbilitySystemComponent*                                Owner;                                             // 0xb8(0x8)
};


// Size 0x30
struct ActiveGameplayCue
{
public:
	char                                                         pad0x8_Q36RH[0x8];                                 // 0x0(0x8)
	struct GameplayTag                                           GameplayCueTag;                                    // 0x8(0x8)
	struct PredictionKey                                         PredictionKey;                                     // 0x10(0x18)
	bool                                                         bPredictivelyRemoved;                              // 0x28(0x1)
	char                                                         pad0x7_YVJQX[0x7];                                 // 0x29(0x7)
};


// Size 0x368
struct ActiveGameplayEffectsContainer
{
public:
	char                                                         pad0xc8_4R2K0[0xc8];                               // 0x0(0xc8)
	TArray<struct ActiveGameplayEffect>                          GameplayEffects_Internal;                          // 0xc8(0x10)
	char                                                         pad0x290_2PD7Y[0x290];                             // 0xd8(0x290)
};


// Size 0x30
struct GameplayAbilityLocalAnimMontage
{
public:
	class AnimMontage*                                           AnimMontage;                                       // 0x0(0x8)
	bool                                                         PlayBit;                                           // 0x8(0x1)
	char                                                         pad0x7_AC2VK[0x7];                                 // 0x9(0x7)
	struct PredictionKey                                         PredictionKey;                                     // 0x10(0x18)
	class GameplayAbility*                                       AnimatingAbility;                                  // 0x28(0x8)
};


// Size 0x30
struct GameplayAbilityRepAnimMontage
{
public:
	class AnimMontage*                                           AnimMontage;                                       // 0x0(0x8)
	float                                                        PlayRate;                                          // 0x8(0x4)
	float                                                        Position;                                          // 0xc(0x4)
	float                                                        BlendTime;                                         // 0x10(0x4)
	byte                                                         NextSectionID;                                     // 0x14(0x1)
	bool                                                         IsStopped;                                         // 0x15(0x1)
	bool                                                         ForcePlayBit;                                      // 0x15(0x1)
	char                                                         pad0x2_V8YOU[0x2];                                 // 0x16(0x2)
	struct PredictionKey                                         PredictionKey;                                     // 0x18(0x18)
};


// Size 0xc0
struct GameplayAbilitySpecContainer
{
public:
	char                                                         pad0xa8_TB61I[0xa8];                               // 0x0(0xa8)
	TArray<struct GameplayAbilitySpec>                           Items;                                             // 0xa8(0x10)
	char                                                         pad0x8_EH45L[0x8];                                 // 0xb8(0x8)
};


// Size 0x78
struct GameplayAbilitySpec
{
public:
	char                                                         pad0x8_E86KW[0x8];                                 // 0x0(0x8)
	struct GameplayAbilitySpecHandle                             Handle;                                            // 0x8(0x4)
	char                                                         pad0x4_1QELS[0x4];                                 // 0xc(0x4)
	class GameplayAbility*                                       Ability;                                           // 0x10(0x8)
	int                                                          Level;                                             // 0x18(0x4)
	int                                                          InputID;                                           // 0x1c(0x4)
	class Object*                                                SourceObject;                                      // 0x20(0x8)
	bool                                                         InputPressed;                                      // 0x28(0x1)
	byte                                                         ActiveCount;                                       // 0x29(0x1)
	bool                                                         RemoveAfterActivation;                             // 0x2a(0x1)
	char                                                         pad0x5_DCFL3[0x5];                                 // 0x2b(0x5)
	struct GameplayAbilityActivationInfo                         ActivationInfo;                                    // 0x30(0x20)
	TArray<class GameplayAbility*>                               NonReplicatedInstances;                            // 0x50(0x10)
	TArray<class GameplayAbility*>                               ReplicatedInstances;                               // 0x60(0x10)
	struct ActiveGameplayEffectHandle                            GameplayEffectHandle;                              // 0x70(0x4)
	bool                                                         PendingRemove;                                     // 0x74(0x1)
	char                                                         pad0x3_162M3[0x3];                                 // 0x75(0x3)
};


// Size 0x10
struct AttributeDefaults
{
public:
	class UClass*                                                Attributes;                                        // 0x0(0x8)
	class DataTable*                                             DefaultStartingTable;                              // 0x8(0x8)
};


// Size 0x18
struct GameplayTargetDataFilterHandle
{
public:
	char                                                         pad0x18_R2CFH[0x18];                               // 0x0(0x18)
};


// Size 0x28
struct GameplayTargetDataFilter
{
public:
	char                                                         pad0x8_WMLND[0x8];                                 // 0x0(0x8)
	class Actor*                                                 SelfActor;                                         // 0x8(0x8)
	byte                                                         SelfFilter;                                        // 0x10(0x1)
	char                                                         pad0x7_765ME[0x7];                                 // 0x11(0x7)
	class UClass*                                                RequiredActorClass;                                // 0x18(0x8)
	bool                                                         bReverseFilter;                                    // 0x20(0x1)
	char                                                         pad0x7_T5A06[0x7];                                 // 0x21(0x7)
};


// Size 0x28
struct AttributeMetaData
{
public:
	float                                                        BaseValue;                                         // 0x0(0x4)
	float                                                        MinValue;                                          // 0x4(0x4)
	float                                                        MaxValue;                                          // 0x8(0x4)
	char                                                         pad0x4_60KW7[0x4];                                 // 0xc(0x4)
	struct FString                                               DerivedAttributeInfo;                              // 0x10(0x10)
	bool                                                         bCanStack;                                         // 0x20(0x1)
	char                                                         pad0x7_W3340[0x7];                                 // 0x21(0x7)
};


// Size 0x20
struct ScalableFloat
{
public:
	float                                                        Value;                                             // 0x0(0x4)
	char                                                         pad0x4_WQFC2[0x4];                                 // 0x4(0x4)
	struct CurveTableRowHandle                                   Curve;                                             // 0x8(0x10)
	char                                                         pad0x8_3GLZL[0x8];                                 // 0x18(0x8)
};


// Size 0x10
struct GlobalCurveDataOverride
{
public:
	char                                                         pad0x10_GXS35[0x10];                               // 0x0(0x10)
};


// Size 0x50
struct GameplayTagRequirements
{
public:
	struct GameplayTagContainer                                  RequireTags;                                       // 0x0(0x28)
	struct GameplayTagContainer                                  IgnoreTags;                                        // 0x28(0x28)
};


// Size 0x60
struct GameplayEffectContext
{
public:
	char                                                         pad0x28_OZ4NI[0x28];                               // 0x0(0x28)
	TArray<Weakclass Actors>                                     Actors;                                            // 0x28(0x10)
	char                                                         pad0x18_BZRYG[0x18];                               // 0x38(0x18)
	struct Vector                                                WorldOrigin;                                       // 0x50(0xc)
	bool                                                         bHasWorldOrigin;                                   // 0x5c(0x1)
	char                                                         pad0x3_73BWL[0x3];                                 // 0x5d(0x3)
};


// Size 0x18
struct GameplayModifierEvaluatedData
{
public:
	struct GameplayAttribute                                     Attribute;                                         // 0x0(0x8)
	byte                                                         ModifierOp;                                        // 0x8(0x1)
	char                                                         pad0x3_ZX649[0x3];                                 // 0x9(0x3)
	float                                                        Magnitude;                                         // 0xc(0x4)
	struct ActiveGameplayEffectHandle                            Handle;                                            // 0x10(0x4)
	bool                                                         IsValid;                                           // 0x14(0x1)
	char                                                         pad0x3_3U1QY[0x3];                                 // 0x15(0x3)
};


// Size 0x88
struct GameplayAbilityTargetData_SingleTargetHit
{
public:
	char                                                         pad0x8_ZP49I[0x8];                                 // 0x0(0x8)
	struct HitResult                                             HitResult;                                         // 0x8(0x80)
};


// Size 0x8
struct GameplayAbilityTargetData
{
public:
	char                                                         pad0x8_RM76N[0x8];                                 // 0x0(0x8)
};


// Size 0x90
struct GameplayAbilityTargetData_ActorArray
{
public:
	char                                                         pad0x10_C6UDH[0x10];                               // 0x0(0x10)
	struct GameplayAbilityTargetingLocationInfo                  SourceLocation;                                    // 0x10(0x70)
	TArray<Weakclass TargetActorArray>                           TargetActorArray;                                  // 0x80(0x10)
};


// Size 0x70
struct GameplayAbilityTargetingLocationInfo
{
public:
	char                                                         pad0x10_02PFO[0x10];                               // 0x0(0x10)
	byte                                                         LocationType;                                      // 0x10(0x1)
	char                                                         pad0xf_FWMJH[0xf];                                 // 0x11(0xf)
	struct Transform                                             LiteralTransform;                                  // 0x20(0x30)
	class Actor*                                                 SourceActor;                                       // 0x50(0x8)
	class MeshComponent*                                         SourceComponent;                                   // 0x58(0x8)
	class GameplayAbility*                                       SourceAbility;                                     // 0x60(0x8)
	struct FName                                                 SourceSocketName;                                  // 0x68(0x8)
};


// Size 0xf0
struct GameplayAbilityTargetData_LocationInfo
{
public:
	char                                                         pad0x10_16T4I[0x10];                               // 0x0(0x10)
	struct GameplayAbilityTargetingLocationInfo                  SourceLocation;                                    // 0x10(0x70)
	struct GameplayAbilityTargetingLocationInfo                  TargetLocation;                                    // 0x80(0x70)
};


// Size 0x8
struct GameplayAbilitySpecHandleAndPredictionKey
{
public:
	struct GameplayAbilitySpecHandle                             AbilityHandle;                                     // 0x0(0x4)
	int                                                          PredictionKeyAtCreation;                           // 0x4(0x4)
};


// Size 0x38
struct GameplayAbilityActorInfo
{
public:
	char                                                         pad0x38_K5JOL[0x38];                               // 0x0(0x38)
};


// Size 0x50
struct ActiveGameplayEffectQuery
{
public:
	char                                                         pad0x50_OFM0Z[0x50];                               // 0x0(0x50)
};


// Size 0xd0
struct GameplayEffectQuery
{
public:
	char                                                         pad0x18_ZAWDK[0x18];                               // 0x0(0x18)
	struct GameplayTagQuery                                      OwningTagQuery;                                    // 0x18(0x48)
	struct GameplayTagQuery                                      EffectTagQuery;                                    // 0x60(0x48)
	struct GameplayAttribute                                     ModifyingAttribute;                                // 0xa8(0x8)
	class Object*                                                EffectSource;                                      // 0xb0(0x8)
	class GameplayEffect*                                        EffectDefinition;                                  // 0xb8(0x8)
	char                                                         pad0x10_V6IYI[0x10];                               // 0xc0(0x10)
};


// Size 0x78
struct InheritedTagContainer
{
public:
	struct GameplayTagContainer                                  CombinedTags;                                      // 0x0(0x28)
	struct GameplayTagContainer                                  Added;                                             // 0x28(0x28)
	struct GameplayTagContainer                                  Removed;                                           // 0x50(0x28)
};


// Size 0x38
struct GameplayEffectCue
{
public:
	struct GameplayAttribute                                     MagnitudeAttribute;                                // 0x0(0x8)
	float                                                        MinLevel;                                          // 0x8(0x4)
	float                                                        MaxLevel;                                          // 0xc(0x4)
	struct GameplayTagContainer                                  GameplayCueTags;                                   // 0x10(0x28)
};


// Size 0x240
struct GameplayModifierInfo
{
public:
	struct GameplayAttribute                                     Attribute;                                         // 0x0(0x8)
	byte                                                         ModifierOp;                                        // 0x8(0x1)
	char                                                         pad0x7_K5RP6[0x7];                                 // 0x9(0x7)
	struct ScalableFloat                                         Magnitude;                                         // 0x10(0x20)
	struct GameplayEffectModifierMagnitude                       ModifierMagnitude;                                 // 0x30(0x170)
	struct GameplayTagRequirements                               SourceTags;                                        // 0x1a0(0x50)
	struct GameplayTagRequirements                               TargetTags;                                        // 0x1f0(0x50)
};


// Size 0x170
struct GameplayEffectModifierMagnitude
{
public:
	byte                                                         MagnitudeCalculationType;                          // 0x0(0x1)
	char                                                         pad0x7_Q4X68[0x7];                                 // 0x1(0x7)
	struct ScalableFloat                                         ScalableFloatMagnitude;                            // 0x8(0x20)
	struct AttributeBasedFloat                                   AttributeBasedMagnitude;                           // 0x28(0xd8)
	struct CustomCalculationBasedFloat                           CustomMagnitude;                                   // 0x100(0x68)
	struct SetByCallerFloat                                      SetByCallerMagnitude;                              // 0x168(0x8)
};


// Size 0x8
struct SetByCallerFloat
{
public:
	struct FName                                                 DataName;                                          // 0x0(0x8)
};


// Size 0x68
struct CustomCalculationBasedFloat
{
public:
	class UClass*                                                CalculationClassMagnitude;                         // 0x0(0x8)
	struct ScalableFloat                                         Coefficient;                                       // 0x8(0x20)
	struct ScalableFloat                                         PreMultiplyAdditiveValue;                          // 0x28(0x20)
	struct ScalableFloat                                         PostMultiplyAdditiveValue;                         // 0x48(0x20)
};


// Size 0xd8
struct AttributeBasedFloat
{
public:
	struct ScalableFloat                                         Coefficient;                                       // 0x0(0x20)
	struct ScalableFloat                                         PreMultiplyAdditiveValue;                          // 0x20(0x20)
	struct ScalableFloat                                         PostMultiplyAdditiveValue;                         // 0x40(0x20)
	struct GameplayEffectAttributeCaptureDefinition              BackingAttribute;                                  // 0x60(0x10)
	struct CurveTableRowHandle                                   AttributeCurve;                                    // 0x70(0x10)
	byte                                                         AttributeCalculationType;                          // 0x80(0x1)
	char                                                         pad0x7_F692M[0x7];                                 // 0x81(0x7)
	struct GameplayTagContainer                                  SourceTagFilter;                                   // 0x88(0x28)
	struct GameplayTagContainer                                  TargetTagFilter;                                   // 0xb0(0x28)
};


// Size 0x50
struct GameplayEffectExecutionDefinition
{
public:
	class UClass*                                                CalculationClass;                                  // 0x0(0x8)
	struct GameplayTagContainer                                  PassedInTags;                                      // 0x8(0x28)
	TArray<struct GameplayEffectExecutionScopedModifierInfo>     CalculationModifiers;                              // 0x30(0x10)
	TArray<class Class*>                                         ConditionalGameplayEffectClasses;                  // 0x40(0x10)
};


// Size 0x228
struct GameplayEffectExecutionScopedModifierInfo
{
public:
	struct GameplayEffectAttributeCaptureDefinition              CapturedAttribute;                                 // 0x0(0x10)
	byte                                                         ModifierOp;                                        // 0x10(0x1)
	char                                                         pad0x7_2G8EF[0x7];                                 // 0x11(0x7)
	struct GameplayEffectModifierMagnitude                       ModifierMagnitude;                                 // 0x18(0x170)
	struct GameplayTagRequirements                               SourceTags;                                        // 0x188(0x50)
	struct GameplayTagRequirements                               TargetTags;                                        // 0x1d8(0x50)
};


// Size 0xc
struct AbilityTriggerData
{
public:
	struct GameplayTag                                           TriggerTag;                                        // 0x0(0x8)
	byte                                                         TriggerSource;                                     // 0x8(0x1)
	char                                                         pad0x3_89CWM[0x3];                                 // 0x9(0x3)
};


// Size 0xc
struct WorldReticleParameters
{
public:
	struct Vector                                                AOEScale;                                          // 0x0(0xc)
};


// Size 0x10
struct GameplayAbilityBindInfo
{
public:
	byte                                                         Command;                                           // 0x0(0x1)
	char                                                         pad0x7_TARRH[0x7];                                 // 0x1(0x7)
	class UClass*                                                GameplayAbilityClass;                              // 0x8(0x8)
};


// Size 0x148
struct GameplayCuePendingExecute
{
public:
	struct GameplayTag                                           GameplayCueTag;                                    // 0x0(0x8)
	struct PredictionKey                                         PredictionKey;                                     // 0x8(0x18)
	byte                                                         PayloadType;                                       // 0x20(0x1)
	char                                                         pad0x7_ZJSMU[0x7];                                 // 0x21(0x7)
	class AbilitySystemComponent*                                OwningComponent;                                   // 0x28(0x8)
	struct GameplayEffectSpecForRPC                              FromSpec;                                          // 0x30(0x90)
	struct GameplayCueParameters                                 CueParameters;                                     // 0xc0(0x88)
};


// Size 0x28
struct GameplayCueNotifyData
{
public:
	struct GameplayTag                                           GameplayCueTag;                                    // 0x0(0x8)
	struct StringAssetReference                                  GameplayCueNotifyObj;                              // 0x8(0x10)
	class UClass*                                                LoadedGameplayCueClass;                            // 0x18(0x8)
	char                                                         pad0x8_3BV8C[0x8];                                 // 0x20(0x8)
};


// Size 0x18
struct GameplayEffectCustomExecutionOutput
{
public:
	TArray<struct GameplayModifierEvaluatedData>                 OutputModifiers;                                   // 0x0(0x10)
	bool                                                         bTriggerConditionalGameplayEffects;                // 0x10(0x1)
	bool                                                         bHandledStackCountManually;                        // 0x10(0x1)
	bool                                                         bHandledGameplayCuesManually;                      // 0x10(0x1)
	char                                                         pad0x7_DEZLC[0x7];                                 // 0x11(0x7)
};


// Size 0x88
struct GameplayEffectCustomExecutionParameters
{
public:
	char                                                         pad0x88_8714E[0x88];                               // 0x0(0x88)
};


// Size 0x20
struct GameplayTagResponseTableEntry
{
public:
	struct GameplayTagReponsePair                                Positive;                                          // 0x0(0x10)
	struct GameplayTagReponsePair                                Negative;                                          // 0x10(0x10)
};


// Size 0x10
struct GameplayTagReponsePair
{
public:
	struct GameplayTag                                           Tag;                                               // 0x0(0x8)
	class UClass*                                                ResponseGameplayEffect;                            // 0x8(0x8)
};


}
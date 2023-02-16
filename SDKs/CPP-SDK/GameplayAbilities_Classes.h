// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class AttributeSet: public Object
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GameplayCueInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AbilitySystemBlueprintLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x550 (Full Size[0x578] - InheritedSize[0x28]
class GameplayEffect: public Object
{
public:
	char                                                         pad0x8_1ZL81[0x8];                                 // 0x28(0x8)
	byte                                                         DurationPolicy;                                    // 0x30(0x1)
	char                                                         pad0x7_QMXA4[0x7];                                 // 0x31(0x7)
	Struct GameplayEffectModifierMagnitude                       DurationMagnitude;                                 // 0x38(0x170)
	Struct ScalableFloat                                         Period;                                            // 0x1a8(0x20)
	bool                                                         bExecutePeriodicEffectOnApplication;               // 0x1c8(0x1)
	char                                                         pad0x7_APRLE[0x7];                                 // 0x1c9(0x7)
	TArray<Struct GameplayModifierInfo>                          Modifiers;                                         // 0x1d0(0x10)
	TArray<Struct GameplayEffectExecutionDefinition>             Executions;                                        // 0x1e0(0x10)
	Struct ScalableFloat                                         ChanceToApplyToTarget;                             // 0x1f0(0x20)
	TArray<Class TargetEffectClasses>                            TargetEffectClasses;                               // 0x210(0x10)
	TArray<class GameplayEffect*>                                TargetEffects;                                     // 0x220(0x10)
	TArray<Class OverflowEffects>                                OverflowEffects;                                   // 0x230(0x10)
	bool                                                         bDenyOverflowApplication;                          // 0x240(0x1)
	bool                                                         bClearStackOnOverflow;                             // 0x241(0x1)
	char                                                         pad0x6_FIMZ6[0x6];                                 // 0x242(0x6)
	TArray<Class PrematureExpirationEffectClasses>               PrematureExpirationEffectClasses;                  // 0x248(0x10)
	TArray<Class RoutineExpirationEffectClasses>                 RoutineExpirationEffectClasses;                    // 0x258(0x10)
	bool                                                         bRequireModifierSuccessToTriggerCues;              // 0x268(0x1)
	char                                                         pad0x7_OBOL2[0x7];                                 // 0x269(0x7)
	TArray<Struct GameplayEffectCue>                             GameplayCues;                                      // 0x270(0x10)
	Class GameplayEffectUIData*                                  UIData;                                            // 0x280(0x8)
	Struct InheritedTagContainer                                 InheritableGameplayEffectTags;                     // 0x288(0x78)
	Struct GameplayTagContainer                                  GameplayEffectTags;                                // 0x300(0x28)
	Struct InheritedTagContainer                                 InheritableOwnedTagsContainer;                     // 0x328(0x78)
	Struct GameplayTagContainer                                  OwnedTagsContainer;                                // 0x3a0(0x28)
	Struct GameplayTagRequirements                               OngoingTagRequirements;                            // 0x3c8(0x50)
	Struct GameplayTagRequirements                               ApplicationTagRequirements;                        // 0x418(0x50)
	Struct InheritedTagContainer                                 RemoveGameplayEffectsWithTags;                     // 0x468(0x78)
	Struct GameplayTagContainer                                  ClearTagsContainer;                                // 0x4e0(0x28)
	Struct GameplayTagRequirements                               GrantedApplicationImmunityTags;                    // 0x508(0x50)
	byte                                                         StackingType;                                      // 0x558(0x1)
	char                                                         pad0x3_VON82[0x3];                                 // 0x559(0x3)
	int                                                          StackLimitCount;                                   // 0x55c(0x4)
	byte                                                         StackDurationRefreshPolicy;                        // 0x560(0x1)
	byte                                                         StackPeriodResetPolicy;                            // 0x561(0x1)
	char                                                         pad0x6_14121[0x6];                                 // 0x562(0x6)
	TArray<Struct GameplayAbilitySpecDef>                        GrantedAbilities;                                  // 0x568(0x10)
};


// Size 0x420 (Full Size[0x448] - InheritedSize[0x28]
class GameplayAbility: public Object
{
public:
	char                                                         pad0x40_ONAU6[0x40];                               // 0x28(0x40)
	Struct GameplayTagContainer                                  AbilityTags;                                       // 0x68(0x28)
	char                                                         pad0x18_A5P5G[0x18];                               // 0x90(0x18)
	bool                                                         bReplicateInputDirectly;                           // 0xa8(0x1)
	char                                                         pad0x27_CAP3K[0x27];                               // 0xa9(0x27)
	byte                                                         ReplicationPolicy;                                 // 0xd0(0x1)
	byte                                                         InstancingPolicy;                                  // 0xd1(0x1)
	bool                                                         bServerRespectsRemoteAbilityCancellation;          // 0xd2(0x1)
	bool                                                         bRetriggerInstancedAbility;                        // 0xd3(0x1)
	char                                                         pad0x4_WTXKT[0x4];                                 // 0xd4(0x4)
	Struct GameplayAbilityActivationInfo                         CurrentActivationInfo;                             // 0xd8(0x20)
	Struct GameplayEventData                                     CurrentEventData;                                  // 0xf8(0xa0)
	byte                                                         NetExecutionPolicy;                                // 0x198(0x1)
	char                                                         pad0x7_JZSSW[0x7];                                 // 0x199(0x7)
	class                                                        CostGameplayEffectClass;                           // 0x1a0(0x8)
	Class GameplayEffect*                                        CostGameplayEffect;                                // 0x1a8(0x8)
	TArray<Struct AbilityTriggerData>                            AbilityTriggers;                                   // 0x1b0(0x10)
	class                                                        CooldownGameplayEffectClass;                       // 0x1c0(0x8)
	Class GameplayEffect*                                        CooldownGameplayEffect;                            // 0x1c8(0x8)
	Struct GameplayTagQuery                                      CancelAbilitiesMatchingTagQuery;                   // 0x1d0(0x48)
	Struct GameplayTagQuery                                      ConstTagQuery;                                     // 0x218(0x48)
	Struct GameplayTagContainer                                  CancelAbilitiesWithTag;                            // 0x260(0x28)
	Struct GameplayTagContainer                                  BlockAbilitiesWithTag;                             // 0x288(0x28)
	Struct GameplayTagContainer                                  ActivationOwnedTags;                               // 0x2b0(0x28)
	Struct GameplayTagContainer                                  ActivationRequiredTags;                            // 0x2d8(0x28)
	Struct GameplayTagContainer                                  ActivationBlockedTags;                             // 0x300(0x28)
	Struct GameplayTagContainer                                  SourceRequiredTags;                                // 0x328(0x28)
	Struct GameplayTagContainer                                  SourceBlockedTags;                                 // 0x350(0x28)
	Struct GameplayTagContainer                                  TargetRequiredTags;                                // 0x378(0x28)
	Struct GameplayTagContainer                                  TargetBlockedTags;                                 // 0x3a0(0x28)
	char                                                         pad0x70_EVOVN[0x70];                               // 0x3c8(0x70)
	Class AnimMontage*                                           CurrentMontage;                                    // 0x438(0x8)
	bool                                                         bIsActive;                                         // 0x440(0x1)
	bool                                                         bIsCancelable;                                     // 0x441(0x1)
	bool                                                         bIsBlockingOtherAbilities;                         // 0x442(0x1)
	char                                                         pad0x7_O9M03[0x7];                                 // 0x441(0x7)
};


// Size 0xb70 (Full Size[0xc98] - InheritedSize[0x128]
class AbilitySystemComponent: public GameplayTasksComponent
{
public:
	char                                                         pad0x8_3IHB1[0x8];                                 // 0x128(0x8)
	TArray<Struct AttributeDefaults>                             DefaultStartingData;                               // 0x130(0x10)
	TArray<class AttributeSet*>                                  SpawnedAttributes;                                 // 0x140(0x10)
	Struct PredictionKey                                         ReplicatedPredictionKey;                           // 0x150(0x18)
	char                                                         pad0x78_NCK14[0x78];                               // 0x168(0x78)
	float                                                        OutgoingDuration;                                  // 0x1e0(0x4)
	float                                                        IncomingDuration;                                  // 0x1e4(0x4)
	Struct GameplayAbilitySpecContainer                          ActivatableAbilities;                              // 0x1e8(0xc0)
	char                                                         pad0x50_80CWK[0x50];                               // 0x2a8(0x50)
	TArray<class GameplayAbility*>                               AllReplicatedInstancedAbilities;                   // 0x2f8(0x10)
	char                                                         pad0x1b0_2XAI3[0x1b0];                             // 0x308(0x1b0)
	TArray<class GameplayAbilityTargetActor*>                    SpawnedTargetActors;                               // 0x4b8(0x10)
	Struct GameplayAbilityRepAnimMontage                         RepAnimMontageInfo;                                // 0x4c8(0x30)
	Struct GameplayAbilityLocalAnimMontage                       LocalAnimMontageInfo;                              // 0x4f8(0x30)
	char                                                         pad0xa0_38LCQ[0xa0];                               // 0x528(0xa0)
	Class Actor*                                                 OwnerActor;                                        // 0x5c8(0x8)
	Class Actor*                                                 AvatarActor;                                       // 0x5d0(0x8)
	char                                                         pad0x18_VP1TU[0x18];                               // 0x5d8(0x18)
	Struct ActiveGameplayEffectsContainer                        ActiveGameplayEffects;                             // 0x5f0(0x368)
	Struct ActiveGameplayCueContainer                            ActiveGameplayCues;                                // 0x958(0xc0)
	char                                                         pad0x130_EY93C[0x130];                             // 0xa18(0x130)
	TArray<Byte BlockedAbilityBindings>                          BlockedAbilityBindings;                            // 0xb48(0x10)
	char                                                         pad0x160_JEITG[0x160];                             // 0xb56(0x160)
};


// Size 0x0 (Full Size[0x4c0] - InheritedSize[0x4c0]
class AbilitySystemDebugHUD: public HUD
{
public:
};


// Size 0x108 (Full Size[0x130] - InheritedSize[0x28]
class AbilitySystemGlobals: public Object
{
public:
	Struct StringClassReference                                  AbilitySystemGlobalsClassName;                     // 0x28(0x10)
	Struct GameplayTag                                           ActivateFailCooldownTag;                           // 0x38(0x8)
	struct FName                                                 ActivateFailCooldownName;                          // 0x40(0x8)
	Struct GameplayTag                                           ActivateFailCostTag;                               // 0x48(0x8)
	struct FName                                                 ActivateFailCostName;                              // 0x50(0x8)
	Struct GameplayTag                                           ActivateFailTagsBlockedTag;                        // 0x58(0x8)
	struct FName                                                 ActivateFailTagsBlockedName;                       // 0x60(0x8)
	Struct GameplayTag                                           ActivateFailTagsMissingTag;                        // 0x68(0x8)
	struct FName                                                 ActivateFailTagsMissingName;                       // 0x70(0x8)
	Struct GameplayTag                                           ActivateFailNetworkingTag;                         // 0x78(0x8)
	struct FName                                                 ActivateFailNetworkingName;                        // 0x80(0x8)
	Struct FString                                               GlobalCurveTableName;                              // 0x88(0x10)
	Struct FString                                               GlobalAttributeMetaDataTableName;                  // 0x98(0x10)
	Struct FString                                               GlobalAttributeSetDefaultsTableName;               // 0xa8(0x10)
	Struct StringAssetReference                                  GlobalGameplayCueManagerName;                      // 0xb8(0x10)
	TArray<Str GameplayCueNotifyPaths>                           GameplayCueNotifyPaths;                            // 0xc8(0x10)
	Struct StringAssetReference                                  GameplayTagResponseTableName;                      // 0xd8(0x10)
	Class GameplayTagReponseTable*                               GameplayTagResponseTable;                          // 0xe8(0x8)
	bool                                                         PredictTargetGameplayEffects;                      // 0xf0(0x1)
	char                                                         pad0x7_JJ9AF[0x7];                                 // 0xf1(0x7)
	Class CurveTable*                                            GlobalCurveTable;                                  // 0xf8(0x8)
	Class CurveTable*                                            GlobalAttributeDefaultsTable;                      // 0x100(0x8)
	Class DataTable*                                             GlobalAttributeMetaDataTable;                      // 0x108(0x8)
	Class GameplayCueManager*                                    GlobalGameplayCueManager;                          // 0x110(0x8)
	char                                                         pad0x28_FO0KR[0x28];                               // 0x116(0x28)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class AbilitySystemInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x488] - InheritedSize[0x468]
class AbilitySystemTestPawn: public DefaultPawn
{
public:
	char                                                         pad0x18_FLHFY[0x18];                               // 0x468(0x18)
	Class AbilitySystemComponent*                                AbilitySystemComponent;                            // 0x480(0x8)
};


// Size 0x10 (Full Size[0x68] - InheritedSize[0x58]
class AbilityTask: public GameplayTask
{
public:
};


// Size 0x48 (Full Size[0xb0] - InheritedSize[0x68]
class AbilityTask_MoveToLocation: public AbilityTask
{
public:
	char                                                         pad0x14_OXYL7[0x14];                               // 0x68(0x14)
	Struct Vector                                                StartLocation;                                     // 0x7c(0xc)
	Struct Vector                                                TargetLocation;                                    // 0x88(0xc)
	float                                                        DurationOfMovement;                                // 0x94(0x4)
	char                                                         pad0x8_IBT8R[0x8];                                 // 0x98(0x8)
	Class CurveFloat*                                            LerpCurve;                                         // 0xa0(0x8)
	Class CurveVector*                                           LerpCurveVector;                                   // 0xa8(0x8)
};


// Size 0x18 (Full Size[0x80] - InheritedSize[0x68]
class AbilityTask_NetworkSyncPoint: public AbilityTask
{
public:
};


// Size 0x58 (Full Size[0xc0] - InheritedSize[0x68]
class AbilityTask_PlayMontageAndWait: public AbilityTask
{
public:
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class AbilityTask_Repeat: public AbilityTask
{
public:
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class AbilityTask_SpawnActor: public AbilityTask
{
public:
};


// Size 0x38 (Full Size[0xa0] - InheritedSize[0x68]
class AbilityTask_StartAbilityState: public AbilityTask
{
public:
};


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class GameplayAbilityWorldReticle: public Actor
{
public:
	Struct WorldReticleParameters                                Parameters;                                        // 0x3c8(0xc)
	bool                                                         bFaceOwnerFlat;                                    // 0x3d4(0x1)
	bool                                                         bSnapToTargetedActor;                              // 0x3d5(0x1)
	bool                                                         bIsTargetValid;                                    // 0x3d6(0x1)
	bool                                                         bIsTargetAnActor;                                  // 0x3d7(0x1)
	Class PlayerController*                                      MasterPC;                                          // 0x3d8(0x8)
	Class Actor*                                                 TargetingActor;                                    // 0x3e0(0x8)
};


// Size 0x118 (Full Size[0x4e0] - InheritedSize[0x3c8]
class GameplayAbilityTargetActor: public Actor
{
public:
	bool                                                         ShouldProduceTargetDataOnServer;                   // 0x3c8(0x1)
	char                                                         pad0x7_7G4JW[0x7];                                 // 0x3c9(0x7)
	Struct GameplayAbilityTargetingLocationInfo                  StartLocation;                                     // 0x3d0(0x70)
	char                                                         pad0x30_NB8ML[0x30];                               // 0x440(0x30)
	Class PlayerController*                                      MasterPC;                                          // 0x470(0x8)
	Class GameplayAbility*                                       OwningAbility;                                     // 0x478(0x8)
	bool                                                         bDestroyOnConfirmation;                            // 0x480(0x1)
	char                                                         pad0x7_S08RI[0x7];                                 // 0x481(0x7)
	Class Actor*                                                 SourceActor;                                       // 0x488(0x8)
	Struct WorldReticleParameters                                ReticleParams;                                     // 0x490(0xc)
	char                                                         pad0x4_D95JH[0x4];                                 // 0x49c(0x4)
	class                                                        ReticleClass;                                      // 0x4a0(0x8)
	Struct GameplayTargetDataFilterHandle                        Filter;                                            // 0x4a8(0x18)
	bool                                                         bDebug;                                            // 0x4c0(0x1)
	char                                                         pad0x21_CAU5L[0x21];                               // 0x4bf(0x21)
};


// Size 0x28 (Full Size[0x90] - InheritedSize[0x68]
class AbilityTask_VisualizeTargeting: public AbilityTask
{
public:
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class AbilityTask_WaitAbilityActivate: public AbilityTask
{
public:
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class AbilityTask_WaitAbilityCommit: public AbilityTask
{
public:
};


// Size 0x40 (Full Size[0xa8] - InheritedSize[0x68]
class AbilityTask_WaitAttributeChange: public AbilityTask
{
public:
};


// Size 0x18 (Full Size[0x80] - InheritedSize[0x68]
class AbilityTask_WaitCancel: public AbilityTask
{
public:
};


// Size 0x20 (Full Size[0x88] - InheritedSize[0x68]
class AbilityTask_WaitConfirm: public AbilityTask
{
public:
};


// Size 0x28 (Full Size[0x90] - InheritedSize[0x68]
class AbilityTask_WaitConfirmCancel: public AbilityTask
{
public:
};


// Size 0x18 (Full Size[0x80] - InheritedSize[0x68]
class AbilityTask_WaitDelay: public AbilityTask
{
public:
};


// Size 0xc8 (Full Size[0x130] - InheritedSize[0x68]
class AbilityTask_WaitGameplayEffectApplied: public AbilityTask
{
public:
};


// Size 0x18 (Full Size[0x148] - InheritedSize[0x130]
class AbilityTask_WaitGameplayEffectApplied_Self: public AbilityTask_WaitGameplayEffectApplied
{
public:
};


// Size 0x18 (Full Size[0x148] - InheritedSize[0x130]
class AbilityTask_WaitGameplayEffectApplied_Target: public AbilityTask_WaitGameplayEffectApplied
{
public:
};


// Size 0x30 (Full Size[0x98] - InheritedSize[0x68]
class AbilityTask_WaitGameplayEffectRemoved: public AbilityTask
{
public:
};


// Size 0x20 (Full Size[0x88] - InheritedSize[0x68]
class AbilityTask_WaitGameplayTag: public AbilityTask
{
public:
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class AbilityTask_WaitGameplayTagAdded: public AbilityTask_WaitGameplayTag
{
public:
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class AbilityTask_WaitGameplayTagRemoved: public AbilityTask_WaitGameplayTag
{
public:
};


// Size 0x20 (Full Size[0x88] - InheritedSize[0x68]
class AbilityTask_WaitInputPress: public AbilityTask
{
public:
};


// Size 0x20 (Full Size[0x88] - InheritedSize[0x68]
class AbilityTask_WaitInputRelease: public AbilityTask
{
public:
};


// Size 0x20 (Full Size[0x88] - InheritedSize[0x68]
class AbilityTask_WaitMovementModeChange: public AbilityTask
{
public:
};


// Size 0x10 (Full Size[0x78] - InheritedSize[0x68]
class AbilityTask_WaitOverlap: public AbilityTask
{
public:
};


// Size 0x40 (Full Size[0xa8] - InheritedSize[0x68]
class AbilityTask_WaitTargetData: public AbilityTask
{
public:
};


// Size 0x28 (Full Size[0x90] - InheritedSize[0x68]
class AbilityTask_WaitVelocityChange: public AbilityTask
{
public:
	char                                                         pad0x10_RVVNF[0x10];                               // 0x68(0x10)
	Class MovementComponent*                                     CachedMovementComponent;                           // 0x78(0x8)
	char                                                         pad0x20_VDY18[0x20];                               // 0x7e(0x20)
};


// Size 0x40 (Full Size[0x70] - InheritedSize[0x30]
class AbilitySystemTestAttributeSet: public AttributeSet
{
public:
	float                                                        MaxHealth;                                         // 0x30(0x4)
	float                                                        Health;                                            // 0x34(0x4)
	float                                                        Mana;                                              // 0x38(0x4)
	float                                                        MaxMana;                                           // 0x3c(0x4)
	float                                                        Damage;                                            // 0x40(0x4)
	float                                                        SpellDamage;                                       // 0x44(0x4)
	float                                                        PhysicalDamage;                                    // 0x48(0x4)
	float                                                        CritChance;                                        // 0x4c(0x4)
	float                                                        CritMultiplier;                                    // 0x50(0x4)
	float                                                        ArmorDamageReduction;                              // 0x54(0x4)
	float                                                        DodgeChance;                                       // 0x58(0x4)
	float                                                        LifeSteal;                                         // 0x5c(0x4)
	float                                                        Strength;                                          // 0x60(0x4)
	float                                                        StackingAttribute1;                                // 0x64(0x4)
	float                                                        StackingAttribute2;                                // 0x68(0x4)
	float                                                        NoStackAttribute;                                  // 0x6c(0x4)
};


// Size 0x0 (Full Size[0x448] - InheritedSize[0x448]
class GameplayAbility_CharacterJump: public GameplayAbility
{
public:
};


// Size 0x38 (Full Size[0x480] - InheritedSize[0x448]
class GameplayAbility_Montage: public GameplayAbility
{
public:
	Class AnimMontage*                                           MontageToPlay;                                     // 0x448(0x8)
	float                                                        PlayRate;                                          // 0x450(0x4)
	struct FName                                                 SectionName;                                       // 0x454(0x8)
	char                                                         pad0x4_DVTFY[0x4];                                 // 0x45c(0x4)
	TArray<Class GameplayEffectClassesWhileAnimating>            GameplayEffectClassesWhileAnimating;               // 0x460(0x10)
	TArray<class GameplayEffect*>                                GameplayEffectsWhileAnimating;                     // 0x470(0x10)
};


// Size 0x0 (Full Size[0xd8] - InheritedSize[0xd8]
class GameplayAbilityBlueprint: public Blueprint
{
public:
};


// Size 0x0 (Full Size[0x228] - InheritedSize[0x228]
class GameplayAbilityBlueprintGeneratedClass: public BlueprintGeneratedClass
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameplayAbilitySet: public DataAsset
{
public:
	TArray<Struct GameplayAbilityBindInfo>                       Abilities;                                         // 0x28(0x10)
};


// Size 0x0 (Full Size[0x4e0] - InheritedSize[0x4e0]
class GameplayAbilityTargetActor_Radius: public GameplayAbilityTargetActor
{
public:
	float                                                        Radius;                                            // 0x4d8(0x4)
	char                                                         pad0xc_X7SU4[0xc];                                 // 0x4da(0xc)
};


// Size 0x10 (Full Size[0x4f0] - InheritedSize[0x4e0]
class GameplayAbilityTargetActor_Trace: public GameplayAbilityTargetActor
{
public:
	float                                                        MaxRange;                                          // 0x4d8(0x4)
	Struct CollisionProfileName                                  TraceProfile;                                      // 0x4dc(0x8)
	bool                                                         bTraceAffectsAimPitch;                             // 0x4e4(0x1)
	char                                                         pad0xd_GAP1X[0xd];                                 // 0x4e3(0xd)
};


// Size 0x20 (Full Size[0x510] - InheritedSize[0x4f0]
class GameplayAbilityTargetActor_GroundTrace: public GameplayAbilityTargetActor_Trace
{
public:
	float                                                        CollisionRadius;                                   // 0x4f0(0x4)
	float                                                        CollisionHeight;                                   // 0x4f4(0x4)
	char                                                         pad0x20_PBR48[0x20];                               // 0x4f6(0x20)
};


// Size 0x20 (Full Size[0x530] - InheritedSize[0x510]
class GameplayAbilityTargetActor_ActorPlacement: public GameplayAbilityTargetActor_GroundTrace
{
public:
	class                                                        PlacedActorClass;                                  // 0x510(0x8)
	Class MaterialInterface*                                     PlacedActorMaterial;                               // 0x518(0x8)
	char                                                         pad0x20_MF07B[0x20];                               // 0x51e(0x20)
};


// Size 0x0 (Full Size[0x4f0] - InheritedSize[0x4f0]
class GameplayAbilityTargetActor_SingleLineTrace: public GameplayAbilityTargetActor_Trace
{
public:
};


// Size 0x18 (Full Size[0x400] - InheritedSize[0x3e8]
class GameplayAbilityWorldReticle_ActorVisualization: public GameplayAbilityWorldReticle
{
public:
	Class CapsuleComponent*                                      CollisionComponent;                                // 0x3e8(0x8)
	TArray<class ActorComponent*>                                VisualizationComponents;                           // 0x3f0(0x10)
};


// Size 0x158 (Full Size[0x180] - InheritedSize[0x28]
class GameplayCueManager: public DataAsset
{
public:
	Class GameplayCueSet*                                        GlobalCueSet;                                      // 0x28(0x8)
	Class ObjectLibrary*                                         GameplayCueNotifyActorObjectLibrary;               // 0x30(0x8)
	Class ObjectLibrary*                                         GameplayCueNotifyStaticObjectLibrary;              // 0x38(0x8)
	Struct StreamableManager                                     StreamableManager;                                 // 0x40(0xc0)
	char                                                         pad0x60_678ZM[0x60];                               // 0x100(0x60)
	TArray<Struct GameplayCuePendingExecute>                     PendingExecuteCues;                                // 0x160(0x10)
	int                                                          GameplayCueSendContextCount;                       // 0x170(0x4)
	char                                                         pad0x14_TFTLS[0x14];                               // 0x172(0x14)
};


// Size 0x20 (Full Size[0x3e8] - InheritedSize[0x3c8]
class GameplayCueNotify_Actor: public Actor
{
public:
	Struct GameplayTag                                           GameplayCueTag;                                    // 0x3c8(0x8)
	struct FName                                                 GameplayCueName;                                   // 0x3d0(0x8)
	bool                                                         bAutoDestroyOnRemove;                              // 0x3d8(0x1)
	char                                                         pad0x3_RG12J[0x3];                                 // 0x3d9(0x3)
	float                                                        AutoDestroyDelay;                                  // 0x3dc(0x4)
	bool                                                         IsOverride;                                        // 0x3e0(0x1)
	bool                                                         bUniqueInstancePerInstigator;                      // 0x3e1(0x1)
	bool                                                         bUniqueInstancePerSourceObject;                    // 0x3e2(0x1)
	char                                                         pad0x7_U4FSU[0x7];                                 // 0x3e1(0x7)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class GameplayCueNotify_Static: public Object
{
public:
	Struct GameplayTag                                           GameplayCueTag;                                    // 0x28(0x8)
	struct FName                                                 GameplayCueName;                                   // 0x30(0x8)
	bool                                                         IsOverride;                                        // 0x38(0x1)
	char                                                         pad0x9_6YXE9[0x9];                                 // 0x37(0x9)
};


// Size 0x10 (Full Size[0x50] - InheritedSize[0x40]
class GameplayCueNotify_HitImpact: public GameplayCueNotify_Static
{
public:
	Class SoundBase*                                             Sound;                                             // 0x40(0x8)
	Class ParticleSystem*                                        ParticleSystem;                                    // 0x48(0x8)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class GameplayCueSet: public DataAsset
{
public:
	TArray<Struct GameplayCueNotifyData>                         GameplayCueData;                                   // 0x28(0x10)
	char                                                         pad0x70_WUP2F[0x70];                               // 0x36(0x70)
};


// Size 0x0 (Full Size[0x578] - InheritedSize[0x578]
class GameplayEffectTemplate: public GameplayEffect
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameplayEffectCalculation: public Object
{
public:
	TArray<Struct GameplayEffectAttributeCaptureDefinition>      RelevantAttributesToCapture;                       // 0x28(0x10)
};


// Size 0x8 (Full Size[0x40] - InheritedSize[0x38]
class GameplayEffectExecutionCalculation: public GameplayEffectCalculation
{
public:
	bool                                                         bRequiresPassedInTags;                             // 0x38(0x1)
	char                                                         pad0x9_1TAAB[0x9];                                 // 0x37(0x9)
};


// Size 0x0 (Full Size[0x38] - InheritedSize[0x38]
class GameplayModMagnitudeCalculation: public GameplayEffectCalculation
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class GameplayEffectExtension: public Object
{
public:
	TArray<Struct GameplayAttribute>                             RelevantSourceAttributes;                          // 0x28(0x10)
	TArray<Struct GameplayAttribute>                             RelevantTargetAttributes;                          // 0x38(0x10)
};


// Size 0x8 (Full Size[0x50] - InheritedSize[0x48]
class GameplayEffectExtension_LifestealTest: public GameplayEffectExtension
{
public:
	Class GameplayEffect*                                        HealthRestoreGameplayEffect;                       // 0x48(0x8)
};


// Size 0x8 (Full Size[0x50] - InheritedSize[0x48]
class GameplayEffectExtension_ShieldTest: public GameplayEffectExtension
{
public:
	Class GameplayEffect*                                        ShieldRemoveGameplayEffect;                        // 0x48(0x8)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class GameplayEffectUIData: public Object
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class GameplayEffectUIData_TextOnly: public GameplayEffectUIData
{
public:
	Struct FText                                                 Description;                                       // 0x28(0x38)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class GameplayTagReponseTable: public DataAsset
{
public:
	TArray<Struct GameplayTagResponseTableEntry>                 Entries;                                           // 0x28(0x10)
	char                                                         pad0x70_6AAX8[0x70];                               // 0x36(0x70)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TickableAttributeSetInterface: public Interface
{
public:
};


}
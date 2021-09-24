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
// Parameters
//---------------------------------------------------------------------------

// Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
struct UGameplayCueInterface_ForwardGameplayCueToParent_Params
{
};

// Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
struct UGameplayCueInterface_BlueprintCustomHandler_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
struct UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
struct UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                 // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
struct UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
struct UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
struct UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0020(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
struct UAbilitySystemBlueprintLibrary_SetStackCount_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	int                                                StackCount;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0028(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
struct UAbilitySystemBlueprintLibrary_SetDuration_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	float                                              Duration;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0028(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
struct UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                EventTag;                                                  // 0x0008(0x0008)  (Parm)
	struct FGameplayEventData                          payload;                                                   // 0x0010(0x00A0)  (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
struct UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params
{
	class UGameplayEffect*                             InGameplayEffect;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InInstigator;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      InEffectCauser;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InLevel;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0020(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
struct UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params
{
	struct FGameplayTargetDataFilter                   Filter;                                                    // 0x0000(0x0028)  (Parm)
	class AActor*                                      FilterActor;                                               // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTargetDataFilterHandle             ReturnValue;                                               // 0x0030(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
struct UAbilitySystemBlueprintLibrary_HasHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
struct UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  ReturnValue;                                               // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  ReturnValue;                                               // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
struct UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
struct UAbilitySystemBlueprintLibrary_GetOrigin_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	struct FVector                                     ReturnValue;                                               // 0x0088(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
struct UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	struct FTransform                                  ReturnValue;                                               // 0x0090(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
struct UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	class AActor*                                      ReturnValue;                                               // 0x0088(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
struct UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            HitResult;                                                 // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  ReturnValue;                                               // 0x0014(0x0080)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
struct UAbilitySystemBlueprintLibrary_GetHitResult_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	struct FHitResult                                  ReturnValue;                                               // 0x0088(0x0080)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
struct UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	struct FVector                                     Location;                                                  // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Normal;                                                    // 0x009C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x00A8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
struct UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	struct FVector                                     Direction;                                                 // 0x0090(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x009C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
struct UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                          Attribute;                                                 // 0x0008(0x0008)  (Parm)
	bool                                               bSuccessfullyFoundAttribute;                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ReturnValue;                                               // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
struct UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
struct UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
struct UAbilitySystemBlueprintLibrary_GetActorCount_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	int                                                ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
struct UAbilitySystemBlueprintLibrary_GetActorByIndex_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	int                                                Index;                                                     // 0x0088(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ReturnValue;                                               // 0x0090(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
struct UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                              // 0x0000(0x0004)  (Parm)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
struct UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     ReturnValue;                                               // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
struct UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params
{
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0018(0x0088)  (Parm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
struct UAbilitySystemBlueprintLibrary_FilterTargetData_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetDataHandle;                                          // 0x0000(0x0010)  (Parm)
	struct FGameplayTargetDataFilterHandle             ActorFilterClass;                                          // 0x0010(0x0018)  (Parm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
struct UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
struct UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	class UObject*                                     ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	class AActor*                                      ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
struct UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	struct FVector                                     ReturnValue;                                               // 0x0020(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
struct UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	class AActor*                                      ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
struct UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	struct FHitResult                                  ReturnValue;                                               // 0x0020(0x0080)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
struct UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params
{
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0000(0x0020)  (Parm)
	class AActor*                                      ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
struct UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	int                                                Index;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
struct UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params
{
	struct FGameplayCueParameters                      Parameters;                                                // 0x0000(0x0088)  (Parm)
	struct FGameplayTagRequirements                    SourceTagReqs;                                             // 0x0088(0x0050)  (Parm, OutParm, ReferenceParm)
	struct FGameplayTagRequirements                    TargetTagReqs;                                             // 0x00D8(0x0050)  (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // 0x0128(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
struct UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FName                                       DataName;                                                  // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Magnitude;                                                 // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0030(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
struct UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetHandle;                                              // 0x0000(0x0010)  (Parm)
	struct FGameplayAbilityTargetDataHandle            HandleToAdd;                                               // 0x0010(0x0010)  (Parm)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
struct UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec;                                  // 0x0020(0x0020)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0040(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
struct UAbilitySystemBlueprintLibrary_AddGrantedTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                           // 0x0020(0x0028)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0048(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
struct UAbilitySystemBlueprintLibrary_AddGrantedTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayTag                                NewGameplayTag;                                            // 0x0020(0x0008)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0028(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
struct UAbilitySystemBlueprintLibrary_AddAssetTags_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayTagContainer                       NewGameplayTags;                                           // 0x0020(0x0028)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0048(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
struct UAbilitySystemBlueprintLibrary_AddAssetTag_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm)
	struct FGameplayTag                                NewGameplayTag;                                            // 0x0020(0x0008)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0028(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params
{
	struct FGameplayAbilityTargetingLocationInfo       SourceLocation;                                            // 0x0000(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayAbilityTargetingLocationInfo       TargetLocation;                                            // 0x0070(0x0070)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x00E0(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x0080)  (Parm, ContainsInstancedReference)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x0080(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params
{
	TArray<class AActor*>                              ActorArray;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor)
	bool                                               OneTargetPerHandle;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
struct UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle            ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
struct UGameplayAbility_SetShouldBlockOtherAbilities_Params
{
	bool                                               bShouldBlockAbilities;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
struct UGameplayAbility_SetCanBeCanceled_Params
{
	bool                                               bCanBeCanceled;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.SendGameplayEvent
struct UGameplayAbility_SendGameplayEvent_Params
{
	struct FGameplayTag                                EventTag;                                                  // 0x0000(0x0008)  (Parm)
	struct FGameplayEventData                          payload;                                                   // 0x0008(0x00A0)  (Parm)
};

// Function GameplayAbilities.GameplayAbility.MontageStop
struct UGameplayAbility_MontageStop_Params
{
	float                                              OverrideBlendOutTime;                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
struct UGameplayAbility_MontageSetNextSectionName_Params
{
	struct FName                                       FromSectionName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       ToSectionName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.MontageJumpToSection
struct UGameplayAbility_MontageJumpToSection_Params
{
	struct FName                                       SectionName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params
{
	struct FName                                       SocketName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                               // 0x0010(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
struct UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params
{
	struct FGameplayAbilityTargetingLocationInfo       ReturnValue;                                               // 0x0000(0x0070)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
struct UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
struct UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // 0x0000(0x0038)  (Parm, ContainsInstancedReference)
	struct FGameplayEventData                          payload;                                                   // 0x0038(0x00A0)  (Parm)
	bool                                               ReturnValue;                                               // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
struct UGameplayAbility_K2_RemoveGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
struct UGameplayAbility_K2_OnEndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
struct UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                     // 0x0008(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
struct UGameplayAbility_K2_ExecuteGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (Parm)
	struct FGameplayEffectContextHandle                Context;                                                   // 0x0008(0x0020)  (Parm)
};

// Function GameplayAbilities.GameplayAbility.K2_EndAbility
struct UGameplayAbility_K2_EndAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitExecute
struct UGameplayAbility_K2_CommitExecute_Params
{
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
struct UGameplayAbility_K2_CommitAbilityCost_Params
{
	bool                                               BroadcastCommitEvent;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
struct UGameplayAbility_K2_CommitAbilityCooldown_Params
{
	bool                                               BroadcastCommitEvent;                                      // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_CommitAbility
struct UGameplayAbility_K2_CommitAbility_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
struct UGameplayAbility_K2_CheckAbilityCost_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
struct UGameplayAbility_K2_CheckAbilityCooldown_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
struct UGameplayAbility_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo                   ActorInfo;                                                 // 0x0000(0x0038)  (Parm, ContainsInstancedReference)
	struct FGameplayTagContainer                       RelevantTags;                                              // 0x0038(0x0028)  (Parm, OutParm)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GameplayEffectLevel;                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GameplayEffectLevel;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                          // 0x0000(0x0020)  (ConstParm, Parm)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0020(0x0010)  (Parm)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
struct UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params
{
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                          // 0x0000(0x0020)  (ConstParm, Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
struct UGameplayAbility_K2_AddGameplayCue_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (Parm)
	struct FGameplayEffectContextHandle                Context;                                                   // 0x0008(0x0020)  (Parm)
	bool                                               bRemoveOnAbilityEnd;                                       // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
struct UGameplayAbility_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData                          EventData;                                                 // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
struct UGameplayAbility_K2_ActivateAbility_Params
{
};

// Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
struct UGameplayAbility_GetOwningComponentFromActorInfo_Params
{
	class USkeletalMeshComponent*                      ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
struct UGameplayAbility_GetOwningActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
struct UGameplayAbility_GetOutgoingGameplayEffectSpec_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
struct UGameplayAbility_GetCurrentSourceObject_Params
{
	class UObject*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.GetCurrentMontage
struct UGameplayAbility_GetCurrentMontage_Params
{
	class UAnimMontage*                                ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.GetContextFromOwner
struct UGameplayAbility_GetContextFromOwner_Params
{
	struct FGameplayAbilityTargetDataHandle            OptionalTargetData;                                        // 0x0000(0x0010)  (Parm)
	struct FGameplayEffectContextHandle                ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
struct UGameplayAbility_GetAvatarActorFromActorInfo_Params
{
	class AActor*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.GetActorInfo
struct UGameplayAbility_GetActorInfo_Params
{
	struct FGameplayAbilityActorInfo                   ReturnValue;                                               // 0x0000(0x0038)  (Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// Function GameplayAbilities.GameplayAbility.GetAbilityLevel
struct UGameplayAbility_GetAbilityLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
struct UGameplayAbility_EndTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.EndAbilityState
struct UGameplayAbility_EndAbilityState_Params
{
	struct FName                                       OptionalStateNameToEnd;                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
struct UGameplayAbility_ConfirmTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEndTask;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
struct UGameplayAbility_CancelTaskByInstanceName_Params
{
	struct FName                                       InstanceName;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params
{
	struct FGameplayTagContainer                       WithGrantedTags;                                           // 0x0000(0x0028)  (Parm)
	int                                                StacksToRemove;                                            // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
struct UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params
{
	struct FGameplayTagContainer                       WithAssetTags;                                             // 0x0000(0x0028)  (Parm)
	int                                                StacksToRemove;                                            // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
struct UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0000(0x0010)  (Parm)
	class UClass*                                      GameplayEffectClass;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                GameplayEffectLevel;                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FActiveGameplayEffectHandle>         ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
struct UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                GameplayEffectLevel;                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
struct UAbilitySystemComponent_TryActivateAbilityByClass_Params
{
	class UClass*                                      InAbilityToActivate;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bAllowRemoteActivation;                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
struct UAbilitySystemComponent_TryActivateAbilitiesByTag_Params
{
	struct FGameplayTagContainer                       GameplayTagContainer;                                      // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bAllowRemoteActivation;                                    // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0029(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
struct UAbilitySystemComponent_TargetConfirm_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.TargetCancel
struct UAbilitySystemComponent_TargetCancel_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
struct UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params
{
	bool                                               NewInhibit;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
struct UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params
{
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                              // 0x0000(0x0004)  (Parm)
	int                                                NewLevel;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
struct UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
	bool                                               InputPressed;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
	struct FGameplayEventData                          TriggerEventData;                                          // 0x0020(0x00A0)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
struct UAbilitySystemComponent_ServerTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
	bool                                               InputPressed;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
struct UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004)  (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                              // 0x0008(0x0018)  (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                      // 0x0020(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
struct UAbilitySystemComponent_ServerSetReplicatedTargetData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004)  (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                              // 0x0008(0x0018)  (Parm)
	struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle;                                // 0x0020(0x0010)  (Parm)
	struct FGameplayTag                                ApplicationTag;                                            // 0x0030(0x0008)  (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                      // 0x0038(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
struct UAbilitySystemComponent_ServerSetReplicatedEvent_Params
{
	TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0004(0x0004)  (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                              // 0x0008(0x0018)  (Parm)
	struct FPredictionKey                              CurrentPredictionKey;                                      // 0x0020(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
struct UAbilitySystemComponent_ServerSetInputReleased_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
struct UAbilitySystemComponent_ServerSetInputPressed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0000(0x0004)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
struct UAbilitySystemComponent_ServerEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                              // 0x0000(0x0004)  (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0008(0x0020)  (Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0028(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
struct UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ClientPosition;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionName;                                               // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NextSectionName;                                           // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
struct UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params
{
	class UAnimMontage*                                ClientAnimMontage;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SectionName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
struct UAbilitySystemComponent_ServerCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                           // 0x0000(0x0004)  (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0008(0x0020)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params
{
	class UClass*                                      GameplayEffect;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent;                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StacksToRemove;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
struct UAbilitySystemComponent_RemoveActiveGameplayEffect_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x0000(0x0004)  (Parm)
	int                                                StacksToRemove;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
struct UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params
{
	struct FGameplayTagContainer                       Tags;                                                      // 0x0000(0x0028)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
struct UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
struct UAbilitySystemComponent_OnRep_PredictionKey_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
struct UAbilitySystemComponent_OnRep_OwningActor_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
struct UAbilitySystemComponent_OnRep_GameplayEffects_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
struct UAbilitySystemComponent_OnRep_ActivateAbilities_Params
{
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
	struct FGameplayCueParameters                      GameplayCueParameters;                                     // 0x0020(0x0088)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                      // 0x0000(0x0090)  (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0090(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0020(0x0020)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params
{
	struct FGameplayEffectSpecForRPC                   Spec;                                                      // 0x0000(0x0090)  (ConstParm, Parm, ReferenceParm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0090(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
struct UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (ConstParm, Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0020(0x0020)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
struct UAbilitySystemComponent_MakeOutgoingSpec_Params
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                Context;                                                   // 0x0010(0x0020)  (Parm)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0030(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
struct UAbilitySystemComponent_K2_InitStats_Params
{
	class UClass*                                      Attributes;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDataTable*                                  DataTable;                                                 // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                Context;                                                   // 0x0018(0x0020)  (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0010(0x0020)  (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
struct UAbilitySystemComponent_IsGameplayCueActive_Params
{
	struct FGameplayTag                                GameplayCueTag;                                            // 0x0000(0x0008)  (ConstParm, Parm)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
struct UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
struct UAbilitySystemComponent_GetOutgoingSpec_Params
{
	class UGameplayEffect*                             GameplayEffect;                                            // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle                   ReturnValue;                                               // 0x0010(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
struct UAbilitySystemComponent_GetGameplayEffectMagnitude_Params
{
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x0000(0x0004)  (Parm)
	struct FGameplayAttribute                          Attribute;                                                 // 0x0008(0x0008)  (Parm)
	float                                              ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
struct UAbilitySystemComponent_GetGameplayEffectCount_Params
{
	class UClass*                                      SourceGameplayEffect;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent;                         // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
struct UAbilitySystemComponent_GetEffectContext_Params
{
	struct FGameplayEffectContextHandle                ReturnValue;                                               // 0x0000(0x0020)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
struct UAbilitySystemComponent_ClientTryActivateAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
struct UAbilitySystemComponent_ClientSetReplicatedEvent_Params
{
	TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilitySpecHandle                  AbilityHandle;                                             // 0x0004(0x0004)  (Parm)
	struct FPredictionKey                              AbilityOriginalPredictionKey;                              // 0x0008(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
struct UAbilitySystemComponent_ClientEndAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToEnd;                                              // 0x0000(0x0004)  (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0008(0x0020)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
struct UAbilitySystemComponent_ClientCancelAbility_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToCancel;                                           // 0x0000(0x0004)  (Parm)
	struct FGameplayAbilityActivationInfo              ActivationInfo;                                            // 0x0008(0x0020)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
struct UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
	struct FGameplayEventData                          TriggerEventData;                                          // 0x0020(0x00A0)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
struct UAbilitySystemComponent_ClientActivateAbilitySucceed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
	struct FPredictionKey                              PredictionKey;                                             // 0x0008(0x0018)  (Parm)
};

// Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
struct UAbilitySystemComponent_ClientActivateAbilityFailed_Params
{
	struct FGameplayAbilitySpecHandle                  AbilityToActivate;                                         // 0x0000(0x0004)  (Parm)
	int16_t                                            PredictionKey;                                             // 0x0004(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     Target;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                Context;                                                   // 0x0018(0x0020)  (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params
{
	class UClass*                                      GameplayEffectClass;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Level;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle                EffectContext;                                             // 0x0010(0x0020)  (Parm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm)
	class UAbilitySystemComponent*                     Target;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ReturnParm)
};

// Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
struct UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params
{
	struct FGameplayEffectSpecHandle                   SpecHandle;                                                // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle                 ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ReturnParm)
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
struct UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params
{
};

// DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
struct UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params
{
	int                                                InputID;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params
{
};

// Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
struct UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params
{
};

// Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
struct UAbilityTask_MoveToLocation_MoveToLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              Duration;                                                  // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 OptionalInterpolationCurve;                                // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveVector*                                OptionalVectorInterpolationCurve;                          // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_MoveToLocation*                 ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
struct UAbilityTask_NetworkSyncPoint_WaitNetSync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EAbilityTaskNetSyncType> SyncType;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_NetworkSyncPoint*               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
struct UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
struct UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params
{
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
struct UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInterrupted;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
struct UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                                MontageToPlay;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Rate;                                                      // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StartSection;                                              // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*             ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
struct UAbilityTask_Repeat_RepeatAction_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeBetweenActions;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalActionCount;                                          // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_Repeat*                         ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
struct UAbilityTask_SpawnActor_SpawnActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0008(0x0010)  (Parm)
	class UClass*                                      Class;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilityTask_SpawnActor*                     ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
struct UAbilityTask_SpawnActor_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0008(0x0010)  (Parm)
	class AActor*                                      SpawnedActor;                                              // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
struct UAbilityTask_SpawnActor_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle            TargetData;                                                // 0x0008(0x0010)  (Parm)
	class UClass*                                      Class;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      SpawnedActor;                                              // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
struct UAbilityTask_StartAbilityState_StartAbilityState_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       StateName;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEndCurrentState;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_StartAbilityState*              ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Value;                                                     // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
struct AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params
{
	struct FName                                       ParamName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
struct AGameplayAbilityWorldReticle_OnValidTargetChanged_Params
{
	bool                                               bNewValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
struct AGameplayAbilityWorldReticle_OnTargetingAnActor_Params
{
	bool                                               bNewValue;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
struct AGameplayAbilityWorldReticle_OnParametersInitialized_Params
{
};

// Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
struct AGameplayAbilityWorldReticle_FaceTowardSource_Params
{
	bool                                               bFaceIn2D;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
struct AGameplayAbilityTargetActor_ConfirmTargeting_Params
{
};

// Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
struct AGameplayAbilityTargetActor_CancelTargeting_Params
{
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
struct UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 TargetActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
struct UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_VisualizeTargeting*             ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
struct UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
struct UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
struct UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                WithTag;                                                   // 0x0008(0x0008)  (Parm)
	struct FGameplayTag                                WithoutTag;                                                // 0x0010(0x0008)  (Parm)
	bool                                               IncludeTriggeredAbilities;                                 // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TriggerOnce;                                               // 0x0019(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitAbilityActivate*            ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
struct UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
struct UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                WithTag;                                                   // 0x0008(0x0008)  (Parm)
	struct FGameplayTag                                WithoutTage;                                               // 0x0010(0x0008)  (Parm)
	bool                                               TriggerOnce;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitAbilityCommit*              ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
struct UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params
{
	class UGameplayAbility*                            ActivatedAbility;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                          InAttribute;                                               // 0x0008(0x0008)  (Parm)
	struct FGameplayTag                                InWithTag;                                                 // 0x0010(0x0008)  (Parm)
	struct FGameplayTag                                InWithoutTag;                                              // 0x0018(0x0008)  (Parm)
	TEnumAsByte<GameplayAbilities_EWaitAttributeChangeComparison> InComparisonType;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InComparisonValue;                                         // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TriggerOnce;                                               // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
struct UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAttribute                          Attribute;                                                 // 0x0008(0x0008)  (Parm)
	struct FGameplayTag                                WithSrcTag;                                                // 0x0010(0x0008)  (Parm)
	struct FGameplayTag                                WithoutSrcTag;                                             // 0x0018(0x0008)  (Parm)
	bool                                               TriggerOnce;                                               // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitAttributeChange*            ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
struct UAbilityTask_WaitCancel_WaitCancel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitCancel*                     ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
struct UAbilityTask_WaitCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
struct UAbilityTask_WaitCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
struct UAbilityTask_WaitConfirm_WaitConfirm_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitConfirm*                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
struct UAbilityTask_WaitConfirm_OnConfirmCallback_Params
{
	class UGameplayAbility*                            Ability;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
struct UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitConfirmCancel*              ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
struct UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
struct UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
struct UAbilityTask_WaitDelay_WaitDelay_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitDelay*                      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
struct UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params
{
	class UAbilitySystemComponent*                     Target;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpec                         SpecApplied;                                               // 0x0008(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FActiveGameplayEffectHandle                 ActiveHandle;                                              // 0x02A8(0x0004)  (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
struct UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTargetDataFilterHandle             SourceFilter;                                              // 0x0008(0x0018)  (ConstParm, Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                     // 0x0020(0x0050)  (Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                     // 0x0070(0x0050)  (Parm)
	bool                                               TriggerOnce;                                               // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      OptionalExternalOwner;                                     // 0x00C8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
struct UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTargetDataFilterHandle             TargetFilter;                                              // 0x0008(0x0018)  (ConstParm, Parm)
	struct FGameplayTagRequirements                    SourceTagRequirements;                                     // 0x0020(0x0050)  (Parm)
	struct FGameplayTagRequirements                    TargetTagRequirements;                                     // 0x0070(0x0050)  (Parm)
	bool                                               TriggerOnce;                                               // 0x00C0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class AActor*                                      OptionalExternalOwner;                                     // 0x00C8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue;                                               // 0x00D0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle                 Handle;                                                    // 0x0008(0x0004)  (Parm)
	class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
struct UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
struct UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008)  (ConstParm, Parm)
	int                                                NewCount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
struct UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // 0x0008(0x0008)  (Parm)
	class AActor*                                      OptionalExternalTarget;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyTriggerOnce;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitGameplayTagAdded*           ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
struct UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // 0x0008(0x0008)  (Parm)
	class AActor*                                      OptionalExternalTarget;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OnlyTriggerOnce;                                           // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
struct UAbilityTask_WaitInputPress_WaitInputPress_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTestAlreadyPressed;                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitInputPress*                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
struct UAbilityTask_WaitInputPress_OnPressCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
struct UAbilityTask_WaitInputRelease_WaitInputRelease_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bTestAlreadyReleased;                                      // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAbilityTask_WaitInputRelease*               ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
struct UAbilityTask_WaitInputRelease_OnReleaseCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
struct UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params
{
	class ACharacter*                                  Character;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      PreviousCustomMode;                                        // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
struct UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMode;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitMovementModeChange*         ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
struct UAbilityTask_WaitOverlap_WaitForOverlap_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitOverlap*                    ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
struct UAbilityTask_WaitOverlap_OnOverlapCallback_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
struct UAbilityTask_WaitOverlap_OnHitCallback_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     NormalImpulse;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  Hit;                                                       // 0x001C(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
struct UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 TargetActor;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
struct UAbilityTask_WaitTargetData_WaitTargetData_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       TaskInstanceName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UAbilityTask_WaitTargetData*                 ReturnValue;                                               // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params
{
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                      // 0x0000(0x0010)  (Parm)
	struct FGameplayTag                                ActivationTag;                                             // 0x0010(0x0008)  (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
struct UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                      // 0x0000(0x0010)  (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
struct UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params
{
	struct FGameplayAbilityTargetDataHandle            Data;                                                      // 0x0000(0x0010)  (Parm)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
struct UAbilityTask_WaitTargetData_FinishSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
struct UAbilityTask_WaitTargetData_BeginSpawningActor_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Class;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AGameplayAbilityTargetActor*                 SpawnedActor;                                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
struct UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              MinimumMagnitude;                                          // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_WaitVelocityChange*             ReturnValue;                                               // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
struct AGameplayCueNotify_Actor_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
struct AGameplayCueNotify_Actor_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
struct AGameplayCueNotify_Actor_OnOwnerDestroyed_Params
{
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
struct AGameplayCueNotify_Actor_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
struct AGameplayCueNotify_Actor_OnActive_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
struct AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0010(0x0088)  (Parm)
};

// Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
struct UGameplayCueNotify_Static_WhileActive_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
struct UGameplayCueNotify_Static_OnRemove_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
struct UGameplayCueNotify_Static_OnExecute_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Static.OnActive
struct UGameplayCueNotify_Static_OnActive_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0008(0x0088)  (Parm)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
struct UGameplayCueNotify_Static_K2_HandleGameplayCue_Params
{
	class AActor*                                      MyTarget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType;                                                 // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                      Parameters;                                                // 0x0010(0x0088)  (Parm)
};

// Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
struct UGameplayEffectExecutionCalculation_Execute_Params
{
	struct FGameplayEffectCustomExecutionParameters    ExecutionParams;                                           // 0x0000(0x0088)  (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput;                                        // 0x0088(0x0018)  (Parm, OutParm)
};

// Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
struct UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params
{
	struct FGameplayEffectSpec                         Spec;                                                      // 0x0000(0x02A0)  (ConstParm, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x02A0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
struct UGameplayTagReponseTable_TagResponseEvent_Params
{
	struct FGameplayTag                                Tag;                                                       // 0x0000(0x0008)  (ConstParm, Parm)
	int                                                NewCount;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbilitySystemComponent*                     ASC;                                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Idx;                                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

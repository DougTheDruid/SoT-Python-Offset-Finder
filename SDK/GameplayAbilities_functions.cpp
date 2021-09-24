// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FGameplayEffectContextHandle::AfterRead()
{
}

void FGameplayEffectContextHandle::BeforeDelete()
{
}

void FGameplayCueParameters::AfterRead()
{
}

void FGameplayCueParameters::BeforeDelete()
{
}

void FGameplayAbilityTargetDataHandle::AfterRead()
{
}

void FGameplayAbilityTargetDataHandle::BeforeDelete()
{
}

void FGameplayEffectSpecHandle::AfterRead()
{
}

void FGameplayEffectSpecHandle::BeforeDelete()
{
}

void FGameplayTargetDataFilter::AfterRead()
{
	READ_PTR_FULL(SelfActor, AActor);
	READ_PTR_FULL(RequiredActorClass, UClass);
}

void FGameplayTargetDataFilter::BeforeDelete()
{
	DELE_PTR_FULL(SelfActor);
	DELE_PTR_FULL(RequiredActorClass);
}

void FGameplayTargetDataFilterHandle::AfterRead()
{
}

void FGameplayTargetDataFilterHandle::BeforeDelete()
{
}

void FGameplayAttribute::AfterRead()
{
	READ_PTR_FULL(Attribute, UProperty);
}

void FGameplayAttribute::BeforeDelete()
{
	DELE_PTR_FULL(Attribute);
}

void FActiveGameplayEffectHandle::AfterRead()
{
}

void FActiveGameplayEffectHandle::BeforeDelete()
{
}

void FGameplayAbilityTargetingLocationInfo::AfterRead()
{
	READ_PTR_FULL(SourceActor, AActor);
	READ_PTR_FULL(SourceComponent, UMeshComponent);
	READ_PTR_FULL(SourceAbility, UGameplayAbility);
}

void FGameplayAbilityTargetingLocationInfo::BeforeDelete()
{
	DELE_PTR_FULL(SourceActor);
	DELE_PTR_FULL(SourceComponent);
	DELE_PTR_FULL(SourceAbility);
}

void FGameplayTagRequirements::AfterRead()
{
}

void FGameplayTagRequirements::BeforeDelete()
{
}

void FSetByCallerFloat::AfterRead()
{
}

void FSetByCallerFloat::BeforeDelete()
{
}

void FGameplayAbilitySpecHandle::AfterRead()
{
}

void FGameplayAbilitySpecHandle::BeforeDelete()
{
}

void FGameplayAbilitySpecDef::AfterRead()
{
	READ_PTR_FULL(Ability, UClass);
	READ_PTR_FULL(SourceObject, UObject);
}

void FGameplayAbilitySpecDef::BeforeDelete()
{
	DELE_PTR_FULL(Ability);
	DELE_PTR_FULL(SourceObject);
}

void FInheritedTagContainer::AfterRead()
{
}

void FInheritedTagContainer::BeforeDelete()
{
}

void FGameplayEffectCue::AfterRead()
{
}

void FGameplayEffectCue::BeforeDelete()
{
}

void FGameplayEffectAttributeCaptureDefinition::AfterRead()
{
}

void FGameplayEffectAttributeCaptureDefinition::BeforeDelete()
{
}

void FScalableFloat::AfterRead()
{
}

void FScalableFloat::BeforeDelete()
{
}

void FAttributeBasedFloat::AfterRead()
{
}

void FAttributeBasedFloat::BeforeDelete()
{
}

void FCustomCalculationBasedFloat::AfterRead()
{
	READ_PTR_FULL(CalculationClassMagnitude, UClass);
}

void FCustomCalculationBasedFloat::BeforeDelete()
{
	DELE_PTR_FULL(CalculationClassMagnitude);
}

void FGameplayEffectModifierMagnitude::AfterRead()
{
}

void FGameplayEffectModifierMagnitude::BeforeDelete()
{
}

void FGameplayEffectExecutionScopedModifierInfo::AfterRead()
{
}

void FGameplayEffectExecutionScopedModifierInfo::BeforeDelete()
{
}

void FGameplayEffectExecutionDefinition::AfterRead()
{
	READ_PTR_FULL(CalculationClass, UClass);
}

void FGameplayEffectExecutionDefinition::BeforeDelete()
{
	DELE_PTR_FULL(CalculationClass);
}

void FGameplayModifierInfo::AfterRead()
{
}

void FGameplayModifierInfo::BeforeDelete()
{
}

void FPredictionKey::AfterRead()
{
	READ_PTR_FULL(PredictiveConnection, UPackageMap);
}

void FPredictionKey::BeforeDelete()
{
	DELE_PTR_FULL(PredictiveConnection);
}

void FAbilityTriggerData::AfterRead()
{
}

void FAbilityTriggerData::BeforeDelete()
{
}

void FGameplayAbilityActorInfo::AfterRead()
{
}

void FGameplayAbilityActorInfo::BeforeDelete()
{
}

void FAttributeDefaults::AfterRead()
{
	READ_PTR_FULL(Attributes, UClass);
	READ_PTR_FULL(DefaultStartingTable, UDataTable);
}

void FAttributeDefaults::BeforeDelete()
{
	DELE_PTR_FULL(Attributes);
	DELE_PTR_FULL(DefaultStartingTable);
}

void FModifierSpec::AfterRead()
{
}

void FModifierSpec::BeforeDelete()
{
}

void FGameplayEffectModifiedAttribute::AfterRead()
{
}

void FGameplayEffectModifiedAttribute::BeforeDelete()
{
}

void FGameplayEffectSpecForRPC::AfterRead()
{
	READ_PTR_FULL(Def, UGameplayEffect);
}

void FGameplayEffectSpecForRPC::BeforeDelete()
{
	DELE_PTR_FULL(Def);
}

void FWorldReticleParameters::AfterRead()
{
}

void FWorldReticleParameters::BeforeDelete()
{
}

void FGameplayAbilityBindInfo::AfterRead()
{
	READ_PTR_FULL(GameplayAbilityClass, UClass);
}

void FGameplayAbilityBindInfo::BeforeDelete()
{
	DELE_PTR_FULL(GameplayAbilityClass);
}

void FGameplayCuePendingExecute::AfterRead()
{
	READ_PTR_FULL(OwningComponent, UAbilitySystemComponent);
}

void FGameplayCuePendingExecute::BeforeDelete()
{
	DELE_PTR_FULL(OwningComponent);
}

void FGameplayEventData::AfterRead()
{
	READ_PTR_FULL(Instigator, AActor);
	READ_PTR_FULL(Target, AActor);
	READ_PTR_FULL(OptionalObject, UObject);
	READ_PTR_FULL(OptionalObject2, UObject);
}

void FGameplayEventData::BeforeDelete()
{
	DELE_PTR_FULL(Instigator);
	DELE_PTR_FULL(Target);
	DELE_PTR_FULL(OptionalObject);
	DELE_PTR_FULL(OptionalObject2);
}

void FGameplayAbilityActivationInfo::AfterRead()
{
}

void FGameplayAbilityActivationInfo::BeforeDelete()
{
}

void FGameplayAbilityRepAnimMontage::AfterRead()
{
	READ_PTR_FULL(AnimMontage, UAnimMontage);
}

void FGameplayAbilityRepAnimMontage::BeforeDelete()
{
	DELE_PTR_FULL(AnimMontage);
}

void FGameplayAbilityLocalAnimMontage::AfterRead()
{
	READ_PTR_FULL(AnimMontage, UAnimMontage);
	READ_PTR_FULL(AnimatingAbility, UGameplayAbility);
}

void FGameplayAbilityLocalAnimMontage::BeforeDelete()
{
	DELE_PTR_FULL(AnimMontage);
	DELE_PTR_FULL(AnimatingAbility);
}

void FActiveGameplayCue::AfterRead()
{
	FFastArraySerializerItem::AfterRead();

}

void FActiveGameplayCue::BeforeDelete()
{
	FFastArraySerializerItem::BeforeDelete();

}

void FGameplayAbilitySpec::AfterRead()
{
	FFastArraySerializerItem::AfterRead();

	READ_PTR_FULL(Ability, UGameplayAbility);
	READ_PTR_FULL(SourceObject, UObject);
}

void FGameplayAbilitySpec::BeforeDelete()
{
	FFastArraySerializerItem::BeforeDelete();

	DELE_PTR_FULL(Ability);
	DELE_PTR_FULL(SourceObject);
}

void FGameplayAbilitySpecContainer::AfterRead()
{
	FFastArraySerializer::AfterRead();

}

void FGameplayAbilitySpecContainer::BeforeDelete()
{
	FFastArraySerializer::BeforeDelete();

}

void FGameplayEffectAttributeCaptureSpec::AfterRead()
{
}

void FGameplayEffectAttributeCaptureSpec::BeforeDelete()
{
}

void FGameplayEffectAttributeCaptureSpecContainer::AfterRead()
{
}

void FGameplayEffectAttributeCaptureSpecContainer::BeforeDelete()
{
}

void FTagContainerAggregator::AfterRead()
{
}

void FTagContainerAggregator::BeforeDelete()
{
}

void FActiveGameplayCueContainer::AfterRead()
{
	FFastArraySerializer::AfterRead();

	READ_PTR_FULL(Owner, UAbilitySystemComponent);
}

void FActiveGameplayCueContainer::BeforeDelete()
{
	FFastArraySerializer::BeforeDelete();

	DELE_PTR_FULL(Owner);
}

void FGameplayEffectSpec::AfterRead()
{
	READ_PTR_FULL(Def, UGameplayEffect);
}

void FGameplayEffectSpec::BeforeDelete()
{
	DELE_PTR_FULL(Def);
}

void FActiveGameplayEffect::AfterRead()
{
	FFastArraySerializerItem::AfterRead();

}

void FActiveGameplayEffect::BeforeDelete()
{
	FFastArraySerializerItem::BeforeDelete();

}

void FActiveGameplayEffectsContainer::AfterRead()
{
	FFastArraySerializer::AfterRead();

}

void FActiveGameplayEffectsContainer::BeforeDelete()
{
	FFastArraySerializer::BeforeDelete();

}

void FGameplayCueNotifyData::AfterRead()
{
	READ_PTR_FULL(LoadedGameplayCueClass, UClass);
}

void FGameplayCueNotifyData::BeforeDelete()
{
	DELE_PTR_FULL(LoadedGameplayCueClass);
}

void FGameplayEffectCustomExecutionParameters::AfterRead()
{
}

void FGameplayEffectCustomExecutionParameters::BeforeDelete()
{
}

void FGameplayModifierEvaluatedData::AfterRead()
{
}

void FGameplayModifierEvaluatedData::BeforeDelete()
{
}

void FGameplayEffectCustomExecutionOutput::AfterRead()
{
}

void FGameplayEffectCustomExecutionOutput::BeforeDelete()
{
}

void FGameplayTagReponsePair::AfterRead()
{
	READ_PTR_FULL(ResponseGameplayEffect, UClass);
}

void FGameplayTagReponsePair::BeforeDelete()
{
	DELE_PTR_FULL(ResponseGameplayEffect);
}

void FGameplayTagResponseTableEntry::AfterRead()
{
}

void FGameplayTagResponseTableEntry::BeforeDelete()
{
}

void FAttributeMetaData::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FAttributeMetaData::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void FGlobalCurveDataOverride::AfterRead()
{
}

void FGlobalCurveDataOverride::BeforeDelete()
{
}

void FGameplayEffectContext::AfterRead()
{
}

void FGameplayEffectContext::BeforeDelete()
{
}

void FGameplayAbilityTargetData::AfterRead()
{
}

void FGameplayAbilityTargetData::BeforeDelete()
{
}

void FGameplayAbilityTargetData_SingleTargetHit::AfterRead()
{
	FGameplayAbilityTargetData::AfterRead();

}

void FGameplayAbilityTargetData_SingleTargetHit::BeforeDelete()
{
	FGameplayAbilityTargetData::BeforeDelete();

}

void FGameplayAbilityTargetData_ActorArray::AfterRead()
{
	FGameplayAbilityTargetData::AfterRead();

}

void FGameplayAbilityTargetData_ActorArray::BeforeDelete()
{
	FGameplayAbilityTargetData::BeforeDelete();

}

void FGameplayAbilityTargetData_LocationInfo::AfterRead()
{
	FGameplayAbilityTargetData::AfterRead();

}

void FGameplayAbilityTargetData_LocationInfo::BeforeDelete()
{
	FGameplayAbilityTargetData::BeforeDelete();

}

void FGameplayAbilitySpecHandleAndPredictionKey::AfterRead()
{
}

void FGameplayAbilitySpecHandleAndPredictionKey::BeforeDelete()
{
}

void FActiveGameplayEffectQuery::AfterRead()
{
}

void FActiveGameplayEffectQuery::BeforeDelete()
{
}

void FGameplayEffectQuery::AfterRead()
{
	READ_PTR_FULL(EffectSource, UObject);
	READ_PTR_FULL(EffectDefinition, UGameplayEffect);
}

void FGameplayEffectQuery::BeforeDelete()
{
	DELE_PTR_FULL(EffectSource);
	DELE_PTR_FULL(EffectDefinition);
}

void UAttributeSet::AfterRead()
{
	UObject::AfterRead();

}

void UAttributeSet::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA5B90
//		Name   -> Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent
//		Flags  -> (BlueprintCosmetic, Native, Public, BlueprintCallable)
void UGameplayCueInterface::ForwardGameplayCueToParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.ForwardGameplayCueToParent");

	UGameplayCueInterface_ForwardGameplayCueToParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
void UGameplayCueInterface::BlueprintCustomHandler(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueInterface.BlueprintCustomHandler");

	UGameplayCueInterface_BlueprintCustomHandler_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayCueInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameplayCueInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAD530
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasOrigin");

	UAbilitySystemBlueprintLibrary_TargetDataHasOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD440
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            HitResult                                                  (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasHitResult(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasHitResult");

	UAbilitySystemBlueprintLibrary_TargetDataHasHitResult_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD350
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasEndPoint");

	UAbilitySystemBlueprintLibrary_TargetDataHasEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD260
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_TargetDataHasActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.TargetDataHasActor");

	UAbilitySystemBlueprintLibrary_TargetDataHasActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EACCE0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCountToMax(const struct FGameplayEffectSpecHandle& SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCountToMax");

	UAbilitySystemBlueprintLibrary_SetStackCountToMax_Params params;
	params.SpecHandle = SpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EACB50
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		int                                                StackCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetStackCount(const struct FGameplayEffectSpecHandle& SpecHandle, int StackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetStackCount");

	UAbilitySystemBlueprintLibrary_SetStackCount_Params params;
	params.SpecHandle = SpecHandle;
	params.StackCount = StackCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAC930
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_SetDuration(const struct FGameplayEffectSpecHandle& SpecHandle, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SetDuration");

	UAbilitySystemBlueprintLibrary_SetDuration_Params params;
	params.SpecHandle = SpecHandle;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB620
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                EventTag                                                   (Parm)
//		struct FGameplayEventData                          payload                                                    (Parm)
void UAbilitySystemBlueprintLibrary::STATIC_SendGameplayEventToActor(class AActor* Actor, const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.SendGameplayEventToActor");

	UAbilitySystemBlueprintLibrary_SendGameplayEventToActor_Params params;
	params.Actor = Actor;
	params.EventTag = EventTag;
	params.payload = payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8E80
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UGameplayEffect*                             InGameplayEffect                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      InEffectCauser                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_MakeSpecHandle(class UGameplayEffect* InGameplayEffect, class AActor* InInstigator, class AActor* InEffectCauser, float InLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeSpecHandle");

	UAbilitySystemBlueprintLibrary_MakeSpecHandle_Params params;
	params.InGameplayEffect = InGameplayEffect;
	params.InInstigator = InInstigator;
	params.InEffectCauser = InEffectCauser;
	params.InLevel = InLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA8A30
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTargetDataFilter                   Filter                                                     (Parm)
//		class AActor*                                      FilterActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTargetDataFilterHandle             ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayTargetDataFilterHandle UAbilitySystemBlueprintLibrary::STATIC_MakeFilterHandle(const struct FGameplayTargetDataFilter& Filter, class AActor* FilterActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.MakeFilterHandle");

	UAbilitySystemBlueprintLibrary_MakeFilterHandle_Params params;
	params.Filter = Filter;
	params.FilterActor = FilterActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA79D0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlledPlayer(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlledPlayer");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlledPlayer_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA78E0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_IsInstigatorLocallyControlled(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.IsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_IsInstigatorLocallyControlled_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7760
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_HasHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.HasHitResult");

	UAbilitySystemBlueprintLibrary_HasHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7600
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataOrigin(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataOrigin");

	UAbilitySystemBlueprintLibrary_GetTargetDataOrigin_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA74D0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPointTransform(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPointTransform");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPointTransform_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA73D0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetTargetDataEndPoint(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetTargetDataEndPoint");

	UAbilitySystemBlueprintLibrary_GetTargetDataEndPoint_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7020
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UAbilitySystemBlueprintLibrary::STATIC_GetOrigin(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetOrigin");

	UAbilitySystemBlueprintLibrary_GetOrigin_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6EF0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
struct FTransform UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorTransform(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorTransform");

	UAbilitySystemBlueprintLibrary_GetInstigatorTransform_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6DF0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetInstigatorActor(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetInstigatorActor");

	UAbilitySystemBlueprintLibrary_GetInstigatorActor_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6CE0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            HitResult                                                  (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResultFromTargetData(const struct FGameplayAbilityTargetDataHandle& HitResult, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResultFromTargetData");

	UAbilitySystemBlueprintLibrary_GetHitResultFromTargetData_Params params;
	params.HitResult = HitResult;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6BD0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FHitResult                                  ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_GetHitResult(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetHitResult");

	UAbilitySystemBlueprintLibrary_GetHitResult_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6870
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     Normal                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueEndLocationAndNormal(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Location, struct FVector* Normal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueEndLocationAndNormal");

	UAbilitySystemBlueprintLibrary_GetGameplayCueEndLocationAndNormal_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
	if (Normal != nullptr)
		*Normal = params.Normal;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA66F0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_GetGameplayCueDirection(class AActor* TargetActor, const struct FGameplayCueParameters& Parameters, struct FVector* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetGameplayCueDirection");

	UAbilitySystemBlueprintLibrary_GetGameplayCueDirection_Params params;
	params.TargetActor = TargetActor;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA65F0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Actor                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAttribute                          Attribute                                                  (Parm)
//		bool                                               bSuccessfullyFoundAttribute                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAbilitySystemBlueprintLibrary::STATIC_GetFloatAttribute(class AActor* Actor, const struct FGameplayAttribute& Attribute, bool* bSuccessfullyFoundAttribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetFloatAttribute");

	UAbilitySystemBlueprintLibrary_GetFloatAttribute_Params params;
	params.Actor = Actor;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccessfullyFoundAttribute != nullptr)
		*bSuccessfullyFoundAttribute = params.bSuccessfullyFoundAttribute;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA64B0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAbilitySystemBlueprintLibrary::STATIC_GetDataCountFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetDataCountFromTargetData");

	UAbilitySystemBlueprintLibrary_GetDataCountFromTargetData_Params params;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA61F0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UAbilitySystemBlueprintLibrary::STATIC_GetActorsFromTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorsFromTargetData");

	UAbilitySystemBlueprintLibrary_GetActorsFromTargetData_Params params;
	params.TargetData = TargetData;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6080
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAbilitySystemBlueprintLibrary::STATIC_GetActorCount(const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorCount");

	UAbilitySystemBlueprintLibrary_GetActorCount_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5F40
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UAbilitySystemBlueprintLibrary::STATIC_GetActorByIndex(const struct FGameplayCueParameters& Parameters, int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActorByIndex");

	UAbilitySystemBlueprintLibrary_GetActorByIndex_Params params;
	params.Parameters = Parameters;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5EC0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAbilitySystemBlueprintLibrary::STATIC_GetActiveGameplayEffectStackCount(const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetActiveGameplayEffectStackCount");

	UAbilitySystemBlueprintLibrary_GetActiveGameplayEffectStackCount_Params params;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5E40
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilitySystemComponent* UAbilitySystemBlueprintLibrary::STATIC_GetAbilitySystemComponent(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.GetAbilitySystemComponent");

	UAbilitySystemBlueprintLibrary_GetAbilitySystemComponent_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5BB0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
void UAbilitySystemBlueprintLibrary::STATIC_ForwardGameplayCueToTarget(TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.ForwardGameplayCueToTarget");

	UAbilitySystemBlueprintLibrary_ForwardGameplayCueToTarget_Params params;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA5780
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetDataHandle                                           (Parm)
//		struct FGameplayTargetDataFilterHandle             ActorFilterClass                                           (Parm)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_FilterTargetData(const struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTargetDataFilterHandle& ActorFilterClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.FilterTargetData");

	UAbilitySystemBlueprintLibrary_FilterTargetData_Params params;
	params.TargetDataHandle = TargetDataHandle;
	params.ActorFilterClass = ActorFilterClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5390
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextIsInstigatorLocallyControlled(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextIsInstigatorLocallyControlled");

	UAbilitySystemBlueprintLibrary_EffectContextIsInstigatorLocallyControlled_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5290
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_EffectContextHasHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextHasHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextHasHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5190
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetSourceObject(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetSourceObject");

	UAbilitySystemBlueprintLibrary_EffectContextGetSourceObject_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5090
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOriginalInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOriginalInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetOriginalInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4F80
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetOrigin(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetOrigin");

	UAbilitySystemBlueprintLibrary_EffectContextGetOrigin_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4E80
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetInstigatorActor(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetInstigatorActor");

	UAbilitySystemBlueprintLibrary_EffectContextGetInstigatorActor_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4D70
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		struct FHitResult                                  ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FHitResult UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetHitResult(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetHitResult");

	UAbilitySystemBlueprintLibrary_EffectContextGetHitResult_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4C70
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UAbilitySystemBlueprintLibrary::STATIC_EffectContextGetEffectCauser(const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.EffectContextGetEffectCauser");

	UAbilitySystemBlueprintLibrary_EffectContextGetEffectCauser_Params params;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4B50
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_DoesTargetDataContainActor(const struct FGameplayAbilityTargetDataHandle& TargetData, int Index, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesTargetDataContainActor");

	UAbilitySystemBlueprintLibrary_DoesTargetDataContainActor_Params params;
	params.TargetData = TargetData;
	params.Index = Index;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA4980
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		struct FGameplayTagRequirements                    SourceTagReqs                                              (Parm, OutParm, ReferenceParm)
//		struct FGameplayTagRequirements                    TargetTagReqs                                              (Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemBlueprintLibrary::STATIC_DoesGameplayCueMeetTagRequirements(const struct FGameplayCueParameters& Parameters, struct FGameplayTagRequirements* SourceTagReqs, struct FGameplayTagRequirements* TargetTagReqs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.DoesGameplayCueMeetTagRequirements");

	UAbilitySystemBlueprintLibrary_DoesGameplayCueMeetTagRequirements_Params params;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SourceTagReqs != nullptr)
		*SourceTagReqs = params.SourceTagReqs;
	if (TargetTagReqs != nullptr)
		*TargetTagReqs = params.TargetTagReqs;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2D30
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FName                                       DataName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Magnitude                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AssignSetByCallerMagnitude(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FName& DataName, float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AssignSetByCallerMagnitude");

	UAbilitySystemBlueprintLibrary_AssignSetByCallerMagnitude_Params params;
	params.SpecHandle = SpecHandle;
	params.DataName = DataName;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2BF0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetHandle                                               (Parm)
//		struct FGameplayAbilityTargetDataHandle            HandleToAdd                                                (Parm)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AppendTargetDataHandle(const struct FGameplayAbilityTargetDataHandle& TargetHandle, const struct FGameplayAbilityTargetDataHandle& HandleToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AppendTargetDataHandle");

	UAbilitySystemBlueprintLibrary_AppendTargetDataHandle_Params params;
	params.TargetHandle = TargetHandle;
	params.HandleToAdd = HandleToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2A20
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayEffectSpecHandle                   LinkedGameplayEffectSpec                                   (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddLinkedGameplayEffectSpec(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayEffectSpecHandle& LinkedGameplayEffectSpec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddLinkedGameplayEffectSpec");

	UAbilitySystemBlueprintLibrary_AddLinkedGameplayEffectSpec_Params params;
	params.SpecHandle = SpecHandle;
	params.LinkedGameplayEffectSpec = LinkedGameplayEffectSpec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2860
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayTagContainer                       NewGameplayTags                                            (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTags");

	UAbilitySystemBlueprintLibrary_AddGrantedTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA26D0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayTag                                NewGameplayTag                                             (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddGrantedTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddGrantedTag");

	UAbilitySystemBlueprintLibrary_AddGrantedTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2510
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayTagContainer                       NewGameplayTags                                            (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTags(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTagContainer& NewGameplayTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTags");

	UAbilitySystemBlueprintLibrary_AddAssetTags_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTags = NewGameplayTags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2380
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm)
//		struct FGameplayTag                                NewGameplayTag                                             (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemBlueprintLibrary::STATIC_AddAssetTag(const struct FGameplayEffectSpecHandle& SpecHandle, const struct FGameplayTag& NewGameplayTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AddAssetTag");

	UAbilitySystemBlueprintLibrary_AddAssetTag_Params params;
	params.SpecHandle = SpecHandle;
	params.NewGameplayTag = NewGameplayTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2190
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetingLocationInfo       SourceLocation                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		struct FGameplayAbilityTargetingLocationInfo       TargetLocation                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromLocations(const struct FGameplayAbilityTargetingLocationInfo& SourceLocation, const struct FGameplayAbilityTargetingLocationInfo& TargetLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromLocations");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromLocations_Params params;
	params.SourceLocation = SourceLocation;
	params.TargetLocation = TargetLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA1FF0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (Parm, ContainsInstancedReference)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromHitResult(const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromHitResult");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromHitResult_Params params;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA1E80
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		TArray<class AActor*>                              ActorArray                                                 (Parm, ZeroConstructor)
//		bool                                               OneTargetPerHandle                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActorArray(TArray<class AActor*> ActorArray, bool OneTargetPerHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActorArray");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActorArray_Params params;
	params.ActorArray = ActorArray;
	params.OneTargetPerHandle = OneTargetPerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA1DD0
//		Name   -> Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilityTargetDataHandle            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayAbilityTargetDataHandle UAbilitySystemBlueprintLibrary::STATIC_AbilityTargetDataFromActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemBlueprintLibrary.AbilityTargetDataFromActor");

	UAbilitySystemBlueprintLibrary_AbilityTargetDataFromActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilitySystemBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UAbilitySystemBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UGameplayEffect::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(UIData, UGameplayEffectUIData);
}

void UGameplayEffect::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(UIData);
}

// Function:
//		Offset -> 0x03EACAC0
//		Name   -> Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bShouldBlockAbilities                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayAbility::SetShouldBlockOtherAbilities(bool bShouldBlockAbilities)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities");

	UGameplayAbility_SetShouldBlockOtherAbilities_Params params;
	params.bShouldBlockAbilities = bShouldBlockAbilities;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC8A0
//		Name   -> Function GameplayAbilities.GameplayAbility.SetCanBeCanceled
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bCanBeCanceled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayAbility::SetCanBeCanceled(bool bCanBeCanceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SetCanBeCanceled");

	UGameplayAbility_SetCanBeCanceled_Params params;
	params.bCanBeCanceled = bCanBeCanceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB4C0
//		Name   -> Function GameplayAbilities.GameplayAbility.SendGameplayEvent
//		Flags  -> (Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                EventTag                                                   (Parm)
//		struct FGameplayEventData                          payload                                                    (Parm)
void UGameplayAbility::SendGameplayEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.SendGameplayEvent");

	UGameplayAbility_SendGameplayEvent_Params params;
	params.EventTag = EventTag;
	params.payload = payload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA92F0
//		Name   -> Function GameplayAbilities.GameplayAbility.MontageStop
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		float                                              OverrideBlendOutTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
void UGameplayAbility::MontageStop(float OverrideBlendOutTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageStop");

	UGameplayAbility_MontageStop_Params params;
	params.OverrideBlendOutTime = OverrideBlendOutTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA9230
//		Name   -> Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       FromSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       ToSectionName                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::MontageSetNextSectionName(const struct FName& FromSectionName, const struct FName& ToSectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageSetNextSectionName");

	UGameplayAbility_MontageSetNextSectionName_Params params;
	params.FromSectionName = FromSectionName;
	params.ToSectionName = ToSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA91B0
//		Name   -> Function GameplayAbilities.GameplayAbility.MontageJumpToSection
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::MontageJumpToSection(const struct FName& SectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MontageJumpToSection");

	UGameplayAbility_MontageJumpToSection_Params params;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA90C0
//		Name   -> Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FName                                       SocketName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilityTargetingLocationInfo       ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(const struct FName& SocketName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerSkeletalMeshComponent_Params params;
	params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA9030
//		Name   -> Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayAbilityTargetingLocationInfo       ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FGameplayAbilityTargetingLocationInfo UGameplayAbility::MakeTargetLocationInfoFromOwnerActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor");

	UGameplayAbility_MakeTargetLocationInfoFromOwnerActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA8B90
//		Name   -> Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UGameplayAbility::MakeOutgoingGameplayEffectSpec(class UClass* GameplayEffectClass, float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec");

	UGameplayAbility_MakeOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
//		Flags  -> (Event, Protected, BlueprintEvent, Const)
// Parameters:
//		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference)
//		struct FGameplayEventData                          payload                                                    (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& payload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent");

	UGameplayAbility_K2_ShouldAbilityRespondToEvent_Params params;
	params.ActorInfo = ActorInfo;
	params.payload = payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA89B0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
//		Flags  -> (Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (Parm)
void UGameplayAbility::K2_RemoveGameplayCue(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue");

	UGameplayAbility_K2_RemoveGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_OnEndAbility
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGameplayAbility::K2_OnEndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_OnEndAbility");

	UGameplayAbility_K2_OnEndAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA87A0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
//		Flags  -> (Native, Protected, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (Parm)
//		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm)
void UGameplayAbility::K2_ExecuteGameplayCueWithParams(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams");

	UGameplayAbility_K2_ExecuteGameplayCueWithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8650
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
//		Flags  -> (Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (Parm)
//		struct FGameplayEffectContextHandle                Context                                                    (Parm)
void UGameplayAbility::K2_ExecuteGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue");

	UGameplayAbility_K2_ExecuteGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8630
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_EndAbility
//		Flags  -> (Native, Protected, BlueprintCallable)
void UGameplayAbility::K2_EndAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_EndAbility");

	UGameplayAbility_K2_EndAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitExecute
//		Flags  -> (Event, Public, BlueprintEvent)
void UGameplayAbility::K2_CommitExecute()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitExecute");

	UGameplayAbility_K2_CommitExecute_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8590
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               BroadcastCommitEvent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CommitAbilityCost(bool BroadcastCommitEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCost");

	UGameplayAbility_K2_CommitAbilityCost_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA84F0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               BroadcastCommitEvent                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CommitAbilityCooldown(bool BroadcastCommitEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown");

	UGameplayAbility_K2_CommitAbilityCooldown_Params params;
	params.BroadcastCommitEvent = BroadcastCommitEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA84C0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CommitAbility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CommitAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CommitAbility");

	UGameplayAbility_K2_CommitAbility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA8490
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CheckAbilityCost()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCost");

	UGameplayAbility_K2_CheckAbilityCost_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA8460
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CheckAbilityCooldown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown");

	UGameplayAbility_K2_CheckAbilityCooldown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		struct FGameplayAbilityActorInfo                   ActorInfo                                                  (Parm, ContainsInstancedReference)
//		struct FGameplayTagContainer                       RelevantTags                                               (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayAbility::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_CanActivateAbility");

	UGameplayAbility_K2_CanActivateAbility_Params params;
	params.ActorInfo = ActorInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelevantTags != nullptr)
		*RelevantTags = params.RelevantTags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA82D0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FActiveGameplayEffectHandle>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToTarget");

	UGameplayAbility_K2_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7EC0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectToOwner(class UGameplayEffect* GameplayEffect, int GameplayEffectLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectToOwner");

	UGameplayAbility_K2_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffect = GameplayEffect;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7D20
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   EffectSpecHandle                                           (ConstParm, Parm)
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		TArray<struct FActiveGameplayEffectHandle>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::K2_ApplyGameplayEffectSpecToTarget(const struct FGameplayEffectSpecHandle& EffectSpecHandle, const struct FGameplayAbilityTargetDataHandle& TargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToTarget_Params params;
	params.EffectSpecHandle = EffectSpecHandle;
	params.TargetData = TargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7C20
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   EffectSpecHandle                                           (ConstParm, Parm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UGameplayAbility::K2_ApplyGameplayEffectSpecToOwner(const struct FGameplayEffectSpecHandle& EffectSpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner");

	UGameplayAbility_K2_ApplyGameplayEffectSpecToOwner_Params params;
	params.EffectSpecHandle = EffectSpecHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7AC0
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue
//		Flags  -> (Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (Parm)
//		struct FGameplayEffectContextHandle                Context                                                    (Parm)
//		bool                                               bRemoveOnAbilityEnd                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayAbility::K2_AddGameplayCue(const struct FGameplayTag& GameplayCueTag, const struct FGameplayEffectContextHandle& Context, bool bRemoveOnAbilityEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_AddGameplayCue");

	UGameplayAbility_K2_AddGameplayCue_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.Context = Context;
	params.bRemoveOnAbilityEnd = bRemoveOnAbilityEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGameplayEventData                          EventData                                                  (ConstParm, Parm, OutParm, ReferenceParm)
void UGameplayAbility::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent");

	UGameplayAbility_K2_ActivateAbilityFromEvent_Params params;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbility.K2_ActivateAbility
//		Flags  -> (Event, Protected, BlueprintEvent)
void UGameplayAbility::K2_ActivateAbility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.K2_ActivateAbility");

	UGameplayAbility_K2_ActivateAbility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA73A0
//		Name   -> Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class USkeletalMeshComponent*                      ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class USkeletalMeshComponent* UGameplayAbility::GetOwningComponentFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo");

	UGameplayAbility_GetOwningComponentFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7370
//		Name   -> Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UGameplayAbility::GetOwningActorFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo");

	UGameplayAbility_GetOwningActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7130
//		Name   -> Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UGameplayAbility::GetOutgoingGameplayEffectSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetOutgoingGameplayEffectSpec");

	UGameplayAbility_GetOutgoingGameplayEffectSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6480
//		Name   -> Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UGameplayAbility::GetCurrentSourceObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentSourceObject");

	UGameplayAbility_GetCurrentSourceObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6450
//		Name   -> Function GameplayAbilities.GameplayAbility.GetCurrentMontage
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAnimMontage*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAnimMontage* UGameplayAbility::GetCurrentMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetCurrentMontage");

	UGameplayAbility_GetCurrentMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6350
//		Name   -> Function GameplayAbilities.GameplayAbility.GetContextFromOwner
//		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            OptionalTargetData                                         (Parm)
//		struct FGameplayEffectContextHandle                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectContextHandle UGameplayAbility::GetContextFromOwner(const struct FGameplayAbilityTargetDataHandle& OptionalTargetData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetContextFromOwner");

	UGameplayAbility_GetContextFromOwner_Params params;
	params.OptionalTargetData = OptionalTargetData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6320
//		Name   -> Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UGameplayAbility::GetAvatarActorFromActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo");

	UGameplayAbility_GetAvatarActorFromActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6170
//		Name   -> Function GameplayAbilities.GameplayAbility.GetActorInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayAbilityActorInfo                   ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FGameplayAbilityActorInfo UGameplayAbility::GetActorInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetActorInfo");

	UGameplayAbility_GetActorInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5E10
//		Name   -> Function GameplayAbilities.GameplayAbility.GetAbilityLevel
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UGameplayAbility::GetAbilityLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.GetAbilityLevel");

	UGameplayAbility_GetAbilityLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5510
//		Name   -> Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::EndTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndTaskByInstanceName");

	UGameplayAbility_EndTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA5490
//		Name   -> Function GameplayAbilities.GameplayAbility.EndAbilityState
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       OptionalStateNameToEnd                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::EndAbilityState(const struct FName& OptionalStateNameToEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.EndAbilityState");

	UGameplayAbility_EndAbilityState_Params params;
	params.OptionalStateNameToEnd = OptionalStateNameToEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA4550
//		Name   -> Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEndTask                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UGameplayAbility::ConfirmTaskByInstanceName(const struct FName& InstanceName, bool bEndTask)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName");

	UGameplayAbility_ConfirmTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;
	params.bEndTask = bEndTask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3D70
//		Name   -> Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FName                                       InstanceName                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::CancelTaskByInstanceName(const struct FName& InstanceName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.CancelTaskByInstanceName");

	UGameplayAbility_CancelTaskByInstanceName_Params params;
	params.InstanceName = InstanceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3780
//		Name   -> Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       WithGrantedTags                                            (Parm)
//		int                                                StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithGrantedTags(const struct FGameplayTagContainer& WithGrantedTags, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithGrantedTags_Params params;
	params.WithGrantedTags = WithGrantedTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3650
//		Name   -> Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       WithAssetTags                                              (Parm)
//		int                                                StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayAbility::BP_RemoveGameplayEffectFromOwnerWithAssetTags(const struct FGameplayTagContainer& WithAssetTags, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags");

	UGameplayAbility_BP_RemoveGameplayEffectFromOwnerWithAssetTags_Params params;
	params.WithAssetTags = WithAssetTags;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA34C0
//		Name   -> Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FActiveGameplayEffectHandle>         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<struct FActiveGameplayEffectHandle> UGameplayAbility::BP_ApplyGameplayEffectToTarget(const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget");

	UGameplayAbility_BP_ApplyGameplayEffectToTarget_Params params;
	params.TargetData = TargetData;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA30B0
//		Name   -> Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
//		Flags  -> (Final, Native, Protected, BlueprintCallable)
// Parameters:
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                GameplayEffectLevel                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UGameplayAbility::BP_ApplyGameplayEffectToOwner(class UClass* GameplayEffectClass, int GameplayEffectLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner");

	UGameplayAbility_BP_ApplyGameplayEffectToOwner_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.GameplayEffectLevel = GameplayEffectLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameplayAbility::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(CostGameplayEffectClass, UClass);
	READ_PTR_FULL(CostGameplayEffect, UGameplayEffect);
	READ_PTR_FULL(CooldownGameplayEffectClass, UClass);
	READ_PTR_FULL(CooldownGameplayEffect, UGameplayEffect);
	READ_PTR_FULL(CurrentMontage, UAnimMontage);
}

void UGameplayAbility::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(CostGameplayEffectClass);
	DELE_PTR_FULL(CostGameplayEffect);
	DELE_PTR_FULL(CooldownGameplayEffectClass);
	DELE_PTR_FULL(CooldownGameplayEffect);
	DELE_PTR_FULL(CurrentMontage);
}

// Function:
//		Offset -> 0x03EAD790
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      InAbilityToActivate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               bAllowRemoteActivation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemComponent::TryActivateAbilityByClass(class UClass* InAbilityToActivate, bool bAllowRemoteActivation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass");

	UAbilitySystemComponent_TryActivateAbilityByClass_Params params;
	params.InAbilityToActivate = InAbilityToActivate;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD660
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       GameplayTagContainer                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bAllowRemoteActivation                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemComponent::TryActivateAbilitiesByTag(const struct FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag");

	UAbilitySystemComponent_TryActivateAbilitiesByTag_Params params;
	params.GameplayTagContainer = GameplayTagContainer;
	params.bAllowRemoteActivation = bAllowRemoteActivation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD240
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.TargetConfirm
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAbilitySystemComponent::TargetConfirm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetConfirm");

	UAbilitySystemComponent_TargetConfirm_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAD220
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.TargetCancel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAbilitySystemComponent::TargetCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.TargetCancel");

	UAbilitySystemComponent_TargetCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EACE20
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               NewInhibit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilitySystemComponent::SetUserAbilityActivationInhibited(bool NewInhibit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited");

	UAbilitySystemComponent_SetUserAbilityActivationInhibited_Params params;
	params.NewInhibit = NewInhibit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC7D0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
//		int                                                NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::SetActiveGameplayEffectLevel(const struct FActiveGameplayEffectHandle& ActiveHandle, int NewLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel");

	UAbilitySystemComponent_SetActiveGameplayEffectLevel_Params params;
	params.ActiveHandle = ActiveHandle;
	params.NewLevel = NewLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC590
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
//		bool                                               InputPressed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
//		struct FGameplayEventData                          TriggerEventData                                           (Parm)
void UAbilitySystemComponent::ServerTryActivateAbilityWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData");

	UAbilitySystemComponent_ServerTryActivateAbilityWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC430
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
//		bool                                               InputPressed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
void UAbilitySystemComponent::ServerTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate, bool InputPressed, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility");

	UAbilitySystemComponent_ServerTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.InputPressed = InputPressed;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC2A0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
//		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm)
//		struct FPredictionKey                              CurrentPredictionKey                                       (Parm)
void UAbilitySystemComponent::ServerSetReplicatedTargetDataCancelled(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled");

	UAbilitySystemComponent_ServerSetReplicatedTargetDataCancelled_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAC050
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
//		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm)
//		struct FGameplayAbilityTargetDataHandle            ReplicatedTargetDataHandle                                 (Parm)
//		struct FGameplayTag                                ApplicationTag                                             (Parm)
//		struct FPredictionKey                              CurrentPredictionKey                                       (Parm)
void UAbilitySystemComponent::ServerSetReplicatedTargetData(const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, const struct FGameplayTag& ApplicationTag, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData");

	UAbilitySystemComponent_ServerSetReplicatedTargetData_Params params;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.ReplicatedTargetDataHandle = ReplicatedTargetDataHandle;
	params.ApplicationTag = ApplicationTag;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EABE80
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
//		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm)
//		struct FPredictionKey                              CurrentPredictionKey                                       (Parm)
void UAbilitySystemComponent::ServerSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey, const struct FPredictionKey& CurrentPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent");

	UAbilitySystemComponent_ServerSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;
	params.CurrentPredictionKey = CurrentPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EABDD0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
void UAbilitySystemComponent::ServerSetInputReleased(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased");

	UAbilitySystemComponent_ServerSetInputReleased_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EABD20
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
void UAbilitySystemComponent::ServerSetInputPressed(const struct FGameplayAbilitySpecHandle& AbilityHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed");

	UAbilitySystemComponent_ServerSetInputPressed_Params params;
	params.AbilityHandle = AbilityHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EABB70
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToEnd                                               (Parm)
//		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
void UAbilitySystemComponent::ServerEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerEndAbility");

	UAbilitySystemComponent_ServerEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB9F0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ClientPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NextSectionName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::ServerCurrentMontageSetNextSectionName(class UAnimMontage* ClientAnimMontage, float ClientPosition, const struct FName& SectionName, const struct FName& NextSectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName");

	UAbilitySystemComponent_ServerCurrentMontageSetNextSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.ClientPosition = ClientPosition;
	params.SectionName = SectionName;
	params.NextSectionName = NextSectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB8F0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		class UAnimMontage*                                ClientAnimMontage                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       SectionName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::ServerCurrentMontageJumpToSectionName(class UAnimMontage* ClientAnimMontage, const struct FName& SectionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName");

	UAbilitySystemComponent_ServerCurrentMontageJumpToSectionName_Params params;
	params.ClientAnimMontage = ClientAnimMontage;
	params.SectionName = SectionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB7B0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToCancel                                            (Parm)
//		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm)
void UAbilitySystemComponent::ServerCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ServerCancelAbility");

	UAbilitySystemComponent_ServerCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB2C0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     InstigatorAbilitySystemComponent                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::RemoveActiveGameplayEffectBySourceEffect(class UClass* GameplayEffect, class UAbilitySystemComponent* InstigatorAbilitySystemComponent, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffectBySourceEffect_Params params;
	params.GameplayEffect = GameplayEffect;
	params.InstigatorAbilitySystemComponent = InstigatorAbilitySystemComponent;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB200
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm)
//		int                                                StacksToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemComponent::RemoveActiveGameplayEffect(const struct FActiveGameplayEffectHandle& Handle, int StacksToRemove)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect");

	UAbilitySystemComponent_RemoveActiveGameplayEffect_Params params;
	params.Handle = Handle;
	params.StacksToRemove = StacksToRemove;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB120
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FGameplayTagContainer                       Tags                                                       (Parm)
void UAbilitySystemComponent::RemoveActiveEffectsWithTags(const struct FGameplayTagContainer& Tags)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags");

	UAbilitySystemComponent_RemoveActiveEffectsWithTags_Params params;
	params.Tags = Tags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAE70
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
//		Flags  -> (Final, Native, Protected)
void UAbilitySystemComponent::OnRep_ReplicatedAnimMontage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage");

	UAbilitySystemComponent_OnRep_ReplicatedAnimMontage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAE50
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey
//		Flags  -> (Final, Native, Public)
void UAbilitySystemComponent::OnRep_PredictionKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_PredictionKey");

	UAbilitySystemComponent_OnRep_PredictionKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAE30
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
//		Flags  -> (Final, Native, Public)
void UAbilitySystemComponent::OnRep_OwningActor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor");

	UAbilitySystemComponent_OnRep_OwningActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAE10
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects
//		Flags  -> (Final, Native, Protected)
void UAbilitySystemComponent::OnRep_GameplayEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_GameplayEffects");

	UAbilitySystemComponent_OnRep_GameplayEffects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAADF0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
//		Flags  -> (Final, Native, Protected)
void UAbilitySystemComponent::OnRep_ActivateAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities");

	UAbilitySystemComponent_OnRep_ActivateAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA9B50
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
//		struct FGameplayCueParameters                      GameplayCueParameters                                      (Parm)
void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_WithParams(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayCueParameters& GameplayCueParameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_WithParams_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.GameplayCueParameters = GameplayCueParameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA9960
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA97D0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueExecuted(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueExecuted_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA96C0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FGameplayEffectSpecForRPC                   Spec                                                       (ConstParm, Parm, ReferenceParm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(const struct FGameplayEffectSpecForRPC& Spec, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec_Params params;
	params.Spec = Spec;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA9530
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
//		Flags  -> (Net, Native, Event, NetMulticast, Public)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
void UAbilitySystemComponent::NetMulticast_InvokeGameplayCueAdded(const struct FGameplayTag& GameplayCueTag, const struct FPredictionKey& PredictionKey, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded");

	UAbilitySystemComponent_NetMulticast_InvokeGameplayCueAdded_Params params;
	params.GameplayCueTag = GameplayCueTag;
	params.PredictionKey = PredictionKey;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8CB0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectContextHandle                Context                                                    (Parm)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemComponent::MakeOutgoingSpec(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec");

	UAbilitySystemComponent_MakeOutgoingSpec_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA88F0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_InitStats
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Attributes                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UDataTable*                                  DataTable                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::K2_InitStats(class UClass* Attributes, class UDataTable* DataTable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_InitStats");

	UAbilitySystemComponent_K2_InitStats_Params params;
	params.Attributes = Attributes;
	params.DataTable = DataTable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA8110
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameplayEffect*                             GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectContextHandle                Context                                                    (Parm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToTarget(class UGameplayEffect* GameplayEffect, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToTarget");

	UAbilitySystemComponent_K2_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7F90
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::K2_ApplyGameplayEffectToSelf(class UGameplayEffect* GameplayEffect, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.K2_ApplyGameplayEffectToSelf");

	UAbilitySystemComponent_K2_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7850
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemComponent::IsGameplayCueActive(const struct FGameplayTag& GameplayCueTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive");

	UAbilitySystemComponent_IsGameplayCueActive_Params params;
	params.GameplayCueTag = GameplayCueTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7730
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilitySystemComponent::GetUserAbilityActivationInhibited()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited");

	UAbilitySystemComponent_GetUserAbilityActivationInhibited_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA7250
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UGameplayEffect*                             GameplayEffect                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpecHandle                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectSpecHandle UAbilitySystemComponent::GetOutgoingSpec(class UGameplayEffect* GameplayEffect, float Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetOutgoingSpec");

	UAbilitySystemComponent_GetOutgoingSpec_Params params;
	params.GameplayEffect = GameplayEffect;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6B00
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm)
//		struct FGameplayAttribute                          Attribute                                                  (Parm)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UAbilitySystemComponent::GetGameplayEffectMagnitude(const struct FActiveGameplayEffectHandle& Handle, const struct FGameplayAttribute& Attribute)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude");

	UAbilitySystemComponent_GetGameplayEffectMagnitude_Params params;
	params.Handle = Handle;
	params.Attribute = Attribute;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6A40
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UClass*                                      SourceGameplayEffect                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     OptionalInstigatorFilterComponent                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UAbilitySystemComponent::GetGameplayEffectCount(class UClass* SourceGameplayEffect, class UAbilitySystemComponent* OptionalInstigatorFilterComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount");

	UAbilitySystemComponent_GetGameplayEffectCount_Params params;
	params.SourceGameplayEffect = SourceGameplayEffect;
	params.OptionalInstigatorFilterComponent = OptionalInstigatorFilterComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA6560
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.GetEffectContext
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayEffectContextHandle                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayEffectContextHandle UAbilitySystemComponent::GetEffectContext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.GetEffectContext");

	UAbilitySystemComponent_GetEffectContext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA44B0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
void UAbilitySystemComponent::ClientTryActivateAbility(const struct FGameplayAbilitySpecHandle& AbilityToActivate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility");

	UAbilitySystemComponent_ClientTryActivateAbility_Params params;
	params.AbilityToActivate = AbilityToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA4380
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilitySpecHandle                  AbilityHandle                                              (Parm)
//		struct FPredictionKey                              AbilityOriginalPredictionKey                               (Parm)
void UAbilitySystemComponent::ClientSetReplicatedEvent(TEnumAsByte<GameplayAbilities_EAbilityGenericReplicatedEvent> EventType, const struct FGameplayAbilitySpecHandle& AbilityHandle, const struct FPredictionKey& AbilityOriginalPredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent");

	UAbilitySystemComponent_ClientSetReplicatedEvent_Params params;
	params.EventType = EventType;
	params.AbilityHandle = AbilityHandle;
	params.AbilityOriginalPredictionKey = AbilityOriginalPredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA4270
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToEnd                                               (Parm)
//		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm)
void UAbilitySystemComponent::ClientEndAbility(const struct FGameplayAbilitySpecHandle& AbilityToEnd, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientEndAbility");

	UAbilitySystemComponent_ClientEndAbility_Params params;
	params.AbilityToEnd = AbilityToEnd;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA4160
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToCancel                                            (Parm)
//		struct FGameplayAbilityActivationInfo              ActivationInfo                                             (Parm)
void UAbilitySystemComponent::ClientCancelAbility(const struct FGameplayAbilitySpecHandle& AbilityToCancel, const struct FGameplayAbilityActivationInfo& ActivationInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientCancelAbility");

	UAbilitySystemComponent_ClientCancelAbility_Params params;
	params.AbilityToCancel = AbilityToCancel;
	params.ActivationInfo = ActivationInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3FB0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
//		struct FGameplayEventData                          TriggerEventData                                           (Parm)
void UAbilitySystemComponent::ClientActivateAbilitySucceedWithEventData(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey, const struct FGameplayEventData& TriggerEventData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData");

	UAbilitySystemComponent_ClientActivateAbilitySucceedWithEventData_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;
	params.TriggerEventData = TriggerEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3EC0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
//		struct FPredictionKey                              PredictionKey                                              (Parm)
void UAbilitySystemComponent::ClientActivateAbilitySucceed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, const struct FPredictionKey& PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed");

	UAbilitySystemComponent_ClientActivateAbilitySucceed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3DF0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FGameplayAbilitySpecHandle                  AbilityToActivate                                          (Parm)
//		int16_t                                            PredictionKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::ClientActivateAbilityFailed(const struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t PredictionKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed");

	UAbilitySystemComponent_ClientActivateAbilityFailed_Params params;
	params.AbilityToActivate = AbilityToActivate;
	params.PredictionKey = PredictionKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3300
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectContextHandle                Context                                                    (Parm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToTarget(class UClass* GameplayEffectClass, class UAbilitySystemComponent* Target, float Level, const struct FGameplayEffectContextHandle& Context)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToTarget_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Target = Target;
	params.Level = Level;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA3180
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      GameplayEffectClass                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectContextHandle                EffectContext                                              (Parm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectToSelf(class UClass* GameplayEffectClass, float Level, const struct FGameplayEffectContextHandle& EffectContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectToSelf_Params params;
	params.GameplayEffectClass = GameplayEffectClass;
	params.Level = Level;
	params.EffectContext = EffectContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2FA0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, ReferenceParm)
//		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle* SpecHandle, class UAbilitySystemComponent* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA2EE0
//		Name   -> Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGameplayEffectSpecHandle                   SpecHandle                                                 (Parm, OutParm, ReferenceParm)
//		struct FActiveGameplayEffectHandle                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActiveGameplayEffectHandle UAbilitySystemComponent::BP_ApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle* SpecHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf");

	UAbilitySystemComponent_BP_ApplyGameplayEffectSpecToSelf_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpecHandle != nullptr)
		*SpecHandle = params.SpecHandle;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UAbilitySystemComponent::AbilityConfirmOrCancel__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature");

	UAbilitySystemComponent_AbilityConfirmOrCancel__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		int                                                InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilitySystemComponent::AbilityAbilityKey__DelegateSignature(int InputID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature");

	UAbilitySystemComponent_AbilityAbilityKey__DelegateSignature_Params params;
	params.InputID = InputID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilitySystemComponent::AfterRead()
{
	UGameplayTasksComponent::AfterRead();

	READ_PTR_FULL(OwnerActor, AActor);
	READ_PTR_FULL(AvatarActor, AActor);
}

void UAbilitySystemComponent::BeforeDelete()
{
	UGameplayTasksComponent::BeforeDelete();

	DELE_PTR_FULL(OwnerActor);
	DELE_PTR_FULL(AvatarActor);
}

void AAbilitySystemDebugHUD::AfterRead()
{
	AHUD::AfterRead();

}

void AAbilitySystemDebugHUD::BeforeDelete()
{
	AHUD::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAD640
//		Name   -> Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts
//		Flags  -> (Exec, Native, Public)
void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCosts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCosts");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCosts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAD620
//		Name   -> Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns
//		Flags  -> (Exec, Native, Public)
void UAbilitySystemGlobals::ToggleIgnoreAbilitySystemCooldowns()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilitySystemGlobals.ToggleIgnoreAbilitySystemCooldowns");

	UAbilitySystemGlobals_ToggleIgnoreAbilitySystemCooldowns_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilitySystemGlobals::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GameplayTagResponseTable, UGameplayTagReponseTable);
	READ_PTR_FULL(GlobalCurveTable, UCurveTable);
	READ_PTR_FULL(GlobalAttributeDefaultsTable, UCurveTable);
	READ_PTR_FULL(GlobalAttributeMetaDataTable, UDataTable);
	READ_PTR_FULL(GlobalGameplayCueManager, UGameplayCueManager);
}

void UAbilitySystemGlobals::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GameplayTagResponseTable);
	DELE_PTR_FULL(GlobalCurveTable);
	DELE_PTR_FULL(GlobalAttributeDefaultsTable);
	DELE_PTR_FULL(GlobalAttributeMetaDataTable);
	DELE_PTR_FULL(GlobalGameplayCueManager);
}

void UAbilitySystemInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UAbilitySystemInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AAbilitySystemTestPawn::AfterRead()
{
	ADefaultPawn::AfterRead();

	READ_PTR_FULL(AbilitySystemComponent, UAbilitySystemComponent);
}

void AAbilitySystemTestPawn::BeforeDelete()
{
	ADefaultPawn::BeforeDelete();

	DELE_PTR_FULL(AbilitySystemComponent);
}

void UAbilityTask::AfterRead()
{
	UGameplayTask::AfterRead();

}

void UAbilityTask::BeforeDelete()
{
	UGameplayTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA9370
//		Name   -> Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 OptionalInterpolationCurve                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveVector*                                OptionalVectorInterpolationCurve                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_MoveToLocation*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_MoveToLocation* UAbilityTask_MoveToLocation::STATIC_MoveToLocation(class UObject* WorldContextObject, const struct FName& TaskInstanceName, const struct FVector& Location, float Duration, class UCurveFloat* OptionalInterpolationCurve, class UCurveVector* OptionalVectorInterpolationCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation");

	UAbilityTask_MoveToLocation_MoveToLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.Location = Location;
	params.Duration = Duration;
	params.OptionalInterpolationCurve = OptionalInterpolationCurve;
	params.OptionalVectorInterpolationCurve = OptionalVectorInterpolationCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_MoveToLocation::AfterRead()
{
	UAbilityTask::AfterRead();

	READ_PTR_FULL(LerpCurve, UCurveFloat);
	READ_PTR_FULL(LerpCurveVector, UCurveVector);
}

void UAbilityTask_MoveToLocation::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

	DELE_PTR_FULL(LerpCurve);
	DELE_PTR_FULL(LerpCurveVector);
}

// Function:
//		Offset -> 0x03EAEE70
//		Name   -> Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayAbilities_EAbilityTaskNetSyncType> SyncType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_NetworkSyncPoint*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_NetworkSyncPoint* UAbilityTask_NetworkSyncPoint::STATIC_WaitNetSync(class UObject* WorldContextObject, TEnumAsByte<GameplayAbilities_EAbilityTaskNetSyncType> SyncType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync");

	UAbilityTask_NetworkSyncPoint_WaitNetSync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SyncType = SyncType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAAE90
//		Name   -> Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_NetworkSyncPoint::OnSignalCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback");

	UAbilityTask_NetworkSyncPoint_OnSignalCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_NetworkSyncPoint::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_NetworkSyncPoint::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAA820
//		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
//		Flags  -> (Final, Native, Public)
void UAbilityTask_PlayMontageAndWait::OnMontageInterrupted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted");

	UAbilityTask_PlayMontageAndWait_OnMontageInterrupted_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA750
//		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UAnimMontage*                                Montage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInterrupted                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAbilityTask_PlayMontageAndWait::OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut");

	UAbilityTask_PlayMontageAndWait_OnMontageBlendingOut_Params params;
	params.Montage = Montage;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA4620
//		Name   -> Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAnimMontage*                                MontageToPlay                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Rate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       StartSection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_PlayMontageAndWait*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_PlayMontageAndWait* UAbilityTask_PlayMontageAndWait::STATIC_CreatePlayMontageAndWaitProxy(class UObject* WorldContextObject, const struct FName& TaskInstanceName, class UAnimMontage* MontageToPlay, float Rate, const struct FName& StartSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy");

	UAbilityTask_PlayMontageAndWait_CreatePlayMontageAndWaitProxy_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.MontageToPlay = MontageToPlay;
	params.Rate = Rate;
	params.StartSection = StartSection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_PlayMontageAndWait::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_PlayMontageAndWait::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAB3C0
//		Name   -> Function GameplayAbilities.AbilityTask_Repeat.RepeatAction
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TimeBetweenActions                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalActionCount                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_Repeat*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_Repeat* UAbilityTask_Repeat::STATIC_RepeatAction(class UObject* WorldContextObject, float TimeBetweenActions, int TotalActionCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_Repeat.RepeatAction");

	UAbilityTask_Repeat_RepeatAction_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TimeBetweenActions = TimeBetweenActions;
	params.TotalActionCount = TotalActionCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_Repeat::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_Repeat::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EACEB0
//		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UAbilityTask_SpawnActor*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_SpawnActor* UAbilityTask_SpawnActor::STATIC_SpawnActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.SpawnActor");

	UAbilityTask_SpawnActor_SpawnActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA58E0
//		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		class AActor*                                      SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_SpawnActor::FinishSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class AActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor");

	UAbilityTask_SpawnActor_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA38B0
//		Name   -> Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAbilityTargetDataHandle            TargetData                                                 (Parm)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class AActor*                                      SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilityTask_SpawnActor::BeginSpawningActor(class UObject* WorldContextObject, const struct FGameplayAbilityTargetDataHandle& TargetData, class UClass* Class, class AActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor");

	UAbilityTask_SpawnActor_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetData = TargetData;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


void UAbilityTask_SpawnActor::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_SpawnActor::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EACFD0
//		Name   -> Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       StateName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bEndCurrentState                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_StartAbilityState*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_StartAbilityState* UAbilityTask_StartAbilityState::STATIC_StartAbilityState(class UObject* WorldContextObject, const struct FName& StateName, bool bEndCurrentState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState");

	UAbilityTask_StartAbilityState_StartAbilityState_Params params;
	params.WorldContextObject = WorldContextObject;
	params.StateName = StateName;
	params.bEndCurrentState = bEndCurrentState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_StartAbilityState::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_StartAbilityState::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
//		Flags  -> (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
//		struct FName                                       ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameplayAbilityWorldReticle::SetReticleMaterialParamVector(const struct FName& ParamName, const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamVector_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       ParamName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameplayAbilityWorldReticle::SetReticleMaterialParamFloat(const struct FName& ParamName, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat");

	AGameplayAbilityWorldReticle_SetReticleMaterialParamFloat_Params params;
	params.ParamName = ParamName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameplayAbilityWorldReticle::OnValidTargetChanged(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged");

	AGameplayAbilityWorldReticle_OnValidTargetChanged_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bNewValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameplayAbilityWorldReticle::OnTargetingAnActor(bool bNewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor");

	AGameplayAbilityWorldReticle_OnTargetingAnActor_Params params;
	params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
//		Flags  -> (Event, Public, BlueprintEvent)
void AGameplayAbilityWorldReticle::OnParametersInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized");

	AGameplayAbilityWorldReticle_OnParametersInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA56F0
//		Name   -> Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bFaceIn2D                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AGameplayAbilityWorldReticle::FaceTowardSource(bool bFaceIn2D)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource");

	AGameplayAbilityWorldReticle_FaceTowardSource_Params params;
	params.bFaceIn2D = bFaceIn2D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGameplayAbilityWorldReticle::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MasterPC, APlayerController);
	READ_PTR_FULL(TargetingActor, AActor);
}

void AGameplayAbilityWorldReticle::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MasterPC);
	DELE_PTR_FULL(TargetingActor);
}

// Function:
//		Offset -> 0x03EA4530
//		Name   -> Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
//		Flags  -> (Native, Public)
void AGameplayAbilityTargetActor::ConfirmTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting");

	AGameplayAbilityTargetActor_ConfirmTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3D50
//		Name   -> Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
//		Flags  -> (Native, Public)
void AGameplayAbilityTargetActor::CancelTargeting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting");

	AGameplayAbilityTargetActor_CancelTargeting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGameplayAbilityTargetActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MasterPC, APlayerController);
	READ_PTR_FULL(OwningAbility, UGameplayAbility);
	READ_PTR_FULL(SourceActor, AActor);
	READ_PTR_FULL(ReticleClass, UClass);
}

void AGameplayAbilityTargetActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MasterPC);
	DELE_PTR_FULL(OwningAbility);
	DELE_PTR_FULL(SourceActor);
	DELE_PTR_FULL(ReticleClass);
}

// Function:
//		Offset -> 0x03EAD990
//		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_VisualizeTargeting*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargetingUsingActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* TargetActor, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor");

	UAbilityTask_VisualizeTargeting_VisualizeTargetingUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetActor = TargetActor;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAD850
//		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_VisualizeTargeting*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_VisualizeTargeting* UAbilityTask_VisualizeTargeting::STATIC_VisualizeTargeting(class UObject* WorldContextObject, class UClass* Class, const struct FName& TaskInstanceName, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting");

	UAbilityTask_VisualizeTargeting_VisualizeTargeting_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;
	params.TaskInstanceName = TaskInstanceName;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA5A10
//		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_VisualizeTargeting::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor");

	UAbilityTask_VisualizeTargeting_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3A50
//		Name   -> Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilityTask_VisualizeTargeting::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor");

	UAbilityTask_VisualizeTargeting_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


void UAbilityTask_VisualizeTargeting::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_VisualizeTargeting::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADD20
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                WithTag                                                    (Parm)
//		struct FGameplayTag                                WithoutTag                                                 (Parm)
//		bool                                               IncludeTriggeredAbilities                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitAbilityActivate*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitAbilityActivate* UAbilityTask_WaitAbilityActivate::STATIC_WaitForAbilityActivate(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate");

	UAbilityTask_WaitAbilityActivate_WaitForAbilityActivate_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTag = WithoutTag;
	params.IncludeTriggeredAbilities = IncludeTriggeredAbilities;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA9CF0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitAbilityActivate::OnAbilityActivate(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate");

	UAbilityTask_WaitAbilityActivate_OnAbilityActivate_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitAbilityActivate::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitAbilityActivate::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADEB0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                WithTag                                                    (Parm)
//		struct FGameplayTag                                WithoutTage                                                (Parm)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitAbilityCommit*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitAbilityCommit* UAbilityTask_WaitAbilityCommit::STATIC_WaitForAbilityCommit(class UObject* WorldContextObject, const struct FGameplayTag& WithTag, const struct FGameplayTag& WithoutTage, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit");

	UAbilityTask_WaitAbilityCommit_WaitForAbilityCommit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.WithTag = WithTag;
	params.WithoutTage = WithoutTage;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA9D70
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UGameplayAbility*                            ActivatedAbility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitAbilityCommit::OnAbilityCommit(class UGameplayAbility* ActivatedAbility)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit");

	UAbilityTask_WaitAbilityCommit_OnAbilityCommit_Params params;
	params.ActivatedAbility = ActivatedAbility;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitAbilityCommit::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitAbilityCommit::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAE170
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAttribute                          InAttribute                                                (Parm)
//		struct FGameplayTag                                InWithTag                                                  (Parm)
//		struct FGameplayTag                                InWithoutTag                                               (Parm)
//		TEnumAsByte<GameplayAbilities_EWaitAttributeChangeComparison> InComparisonType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InComparisonValue                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitAttributeChange*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChangeWithComparison(class UObject* WorldContextObject, const struct FGameplayAttribute& InAttribute, const struct FGameplayTag& InWithTag, const struct FGameplayTag& InWithoutTag, TEnumAsByte<GameplayAbilities_EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChangeWithComparison_Params params;
	params.WorldContextObject = WorldContextObject;
	params.InAttribute = InAttribute;
	params.InWithTag = InWithTag;
	params.InWithoutTag = InWithoutTag;
	params.InComparisonType = InComparisonType;
	params.InComparisonValue = InComparisonValue;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EADFF0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayAttribute                          Attribute                                                  (Parm)
//		struct FGameplayTag                                WithSrcTag                                                 (Parm)
//		struct FGameplayTag                                WithoutSrcTag                                              (Parm)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitAttributeChange*            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitAttributeChange* UAbilityTask_WaitAttributeChange::STATIC_WaitForAttributeChange(class UObject* WorldContextObject, const struct FGameplayAttribute& Attribute, const struct FGameplayTag& WithSrcTag, const struct FGameplayTag& WithoutSrcTag, bool TriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange");

	UAbilityTask_WaitAttributeChange_WaitForAttributeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Attribute = Attribute;
	params.WithSrcTag = WithSrcTag;
	params.WithoutSrcTag = WithoutSrcTag;
	params.TriggerOnce = TriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitAttributeChange::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitAttributeChange::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADAD0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitCancel*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitCancel* UAbilityTask_WaitCancel::STATIC_WaitCancel(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.WaitCancel");

	UAbilityTask_WaitCancel_WaitCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA6F0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitCancel::OnLocalCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback");

	UAbilityTask_WaitCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA1D0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitCancel::OnCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback");

	UAbilityTask_WaitCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitCancel::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitCancel::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADB50
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitConfirm*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitConfirm* UAbilityTask_WaitConfirm::STATIC_WaitConfirm(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm");

	UAbilityTask_WaitConfirm_WaitConfirm_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA210
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class UGameplayAbility*                            Ability                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitConfirm::OnConfirmCallback(class UGameplayAbility* Ability)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback");

	UAbilityTask_WaitConfirm_OnConfirmCallback_Params params;
	params.Ability = Ability;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitConfirm::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitConfirm::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADBD0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitConfirmCancel*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitConfirmCancel* UAbilityTask_WaitConfirmCancel::STATIC_WaitConfirmCancel(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel");

	UAbilityTask_WaitConfirmCancel_WaitConfirmCancel_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA730
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitConfirmCancel::OnLocalConfirmCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA710
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitConfirmCancel::OnLocalCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnLocalCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA290
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitConfirmCancel::OnConfirmCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback");

	UAbilityTask_WaitConfirmCancel_OnConfirmCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA1F0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitConfirmCancel::OnCancelCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback");

	UAbilityTask_WaitConfirmCancel_OnCancelCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitConfirmCancel::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitConfirmCancel::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EADC50
//		Name   -> Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitDelay*                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitDelay* UAbilityTask_WaitDelay::STATIC_WaitDelay(class UObject* WorldContextObject, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitDelay.WaitDelay");

	UAbilityTask_WaitDelay_WaitDelay_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitDelay::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitDelay::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAA070
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		class UAbilitySystemComponent*                     Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayEffectSpec                         SpecApplied                                                (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm)
void UAbilityTask_WaitGameplayEffectApplied::OnApplyGameplayEffectCallback(class UAbilitySystemComponent* Target, const struct FGameplayEffectSpec& SpecApplied, const struct FActiveGameplayEffectHandle& ActiveHandle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback");

	UAbilityTask_WaitGameplayEffectApplied_OnApplyGameplayEffectCallback_Params params;
	params.Target = Target;
	params.SpecApplied = SpecApplied;
	params.ActiveHandle = ActiveHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitGameplayEffectApplied::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitGameplayEffectApplied::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAE4D0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTargetDataFilterHandle             SourceFilter                                               (ConstParm, Parm)
//		struct FGameplayTagRequirements                    SourceTagRequirements                                      (Parm)
//		struct FGameplayTagRequirements                    TargetTagRequirements                                      (Parm)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      OptionalExternalOwner                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitGameplayEffectApplied_Self* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::STATIC_WaitGameplayEffectAppliedToSelf(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& SourceFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf");

	UAbilityTask_WaitGameplayEffectApplied_Self_WaitGameplayEffectAppliedToSelf_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SourceFilter = SourceFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitGameplayEffectApplied_Self::AfterRead()
{
	UAbilityTask_WaitGameplayEffectApplied::AfterRead();

}

void UAbilityTask_WaitGameplayEffectApplied_Self::BeforeDelete()
{
	UAbilityTask_WaitGameplayEffectApplied::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAE7A0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTargetDataFilterHandle             TargetFilter                                               (ConstParm, Parm)
//		struct FGameplayTagRequirements                    SourceTagRequirements                                      (Parm)
//		struct FGameplayTagRequirements                    TargetTagRequirements                                      (Parm)
//		bool                                               TriggerOnce                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class AActor*                                      OptionalExternalOwner                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitGameplayEffectApplied_Target* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::STATIC_WaitGameplayEffectAppliedToTarget(class UObject* WorldContextObject, const struct FGameplayTargetDataFilterHandle& TargetFilter, const struct FGameplayTagRequirements& SourceTagRequirements, const struct FGameplayTagRequirements& TargetTagRequirements, bool TriggerOnce, class AActor* OptionalExternalOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget");

	UAbilityTask_WaitGameplayEffectApplied_Target_WaitGameplayEffectAppliedToTarget_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TargetFilter = TargetFilter;
	params.SourceTagRequirements = SourceTagRequirements;
	params.TargetTagRequirements = TargetTagRequirements;
	params.TriggerOnce = TriggerOnce;
	params.OptionalExternalOwner = OptionalExternalOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitGameplayEffectApplied_Target::AfterRead()
{
	UAbilityTask_WaitGameplayEffectApplied::AfterRead();

}

void UAbilityTask_WaitGameplayEffectApplied_Target::BeforeDelete()
{
	UAbilityTask_WaitGameplayEffectApplied::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAE380
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActiveGameplayEffectHandle                 Handle                                                     (Parm)
//		class UAbilityTask_WaitGameplayEffectRemoved*      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::STATIC_WaitForGameplayEffectRemoved(class UObject* WorldContextObject, const struct FActiveGameplayEffectHandle& Handle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_WaitForGameplayEffectRemoved_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Handle = Handle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA530
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved");

	UAbilityTask_WaitGameplayEffectRemoved_OnGameplayEffectRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitGameplayEffectRemoved::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitGameplayEffectRemoved::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA5D40
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
//		Flags  -> (Native, Public)
// Parameters:
//		struct FGameplayTag                                Tag                                                        (ConstParm, Parm)
//		int                                                NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitGameplayTag::GameplayTagCallback(const struct FGameplayTag& Tag, int NewCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback");

	UAbilityTask_WaitGameplayTag_GameplayTagCallback_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitGameplayTag::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitGameplayTag::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAEA70
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                Tag                                                        (Parm)
//		class AActor*                                      OptionalExternalTarget                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitGameplayTagAdded*           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitGameplayTagAdded* UAbilityTask_WaitGameplayTagAdded::STATIC_WaitGameplayTagAdd(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd");

	UAbilityTask_WaitGameplayTagAdded_WaitGameplayTagAdd_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitGameplayTagAdded::AfterRead()
{
	UAbilityTask_WaitGameplayTag::AfterRead();

}

void UAbilityTask_WaitGameplayTagAdded::BeforeDelete()
{
	UAbilityTask_WaitGameplayTag::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAEBB0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                Tag                                                        (Parm)
//		class AActor*                                      OptionalExternalTarget                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               OnlyTriggerOnce                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitGameplayTagRemoved*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitGameplayTagRemoved* UAbilityTask_WaitGameplayTagRemoved::STATIC_WaitGameplayTagRemove(class UObject* WorldContextObject, const struct FGameplayTag& Tag, class AActor* OptionalExternalTarget, bool OnlyTriggerOnce)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove");

	UAbilityTask_WaitGameplayTagRemoved_WaitGameplayTagRemove_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Tag = Tag;
	params.OptionalExternalTarget = OptionalExternalTarget;
	params.OnlyTriggerOnce = OnlyTriggerOnce;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitGameplayTagRemoved::AfterRead()
{
	UAbilityTask_WaitGameplayTag::AfterRead();

}

void UAbilityTask_WaitGameplayTagRemoved::BeforeDelete()
{
	UAbilityTask_WaitGameplayTag::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAECF0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bTestAlreadyPressed                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitInputPress*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitInputPress* UAbilityTask_WaitInputPress::STATIC_WaitInputPress(class UObject* WorldContextObject, bool bTestAlreadyPressed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress");

	UAbilityTask_WaitInputPress_WaitInputPress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyPressed = bTestAlreadyPressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAAB30
//		Name   -> Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitInputPress::OnPressCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback");

	UAbilityTask_WaitInputPress_OnPressCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitInputPress::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitInputPress::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAEDB0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bTestAlreadyReleased                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UAbilityTask_WaitInputRelease*               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitInputRelease* UAbilityTask_WaitInputRelease::STATIC_WaitInputRelease(class UObject* WorldContextObject, bool bTestAlreadyReleased)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease");

	UAbilityTask_WaitInputRelease_WaitInputRelease_Params params;
	params.WorldContextObject = WorldContextObject;
	params.bTestAlreadyReleased = bTestAlreadyReleased;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAAB50
//		Name   -> Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitInputRelease::OnReleaseCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback");

	UAbilityTask_WaitInputRelease_OnReleaseCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitInputRelease::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitInputRelease::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAA840
//		Name   -> Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
//		Flags  -> (Final, Native, Public)
// Parameters:
//		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitMovementModeChange::OnMovementModeChange(class ACharacter* Character, TEnumAsByte<Engine_EMovementMode> PrevMovementMode, unsigned char PreviousCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange");

	UAbilityTask_WaitMovementModeChange_OnMovementModeChange_Params params;
	params.Character = Character;
	params.PrevMovementMode = PrevMovementMode;
	params.PreviousCustomMode = PreviousCustomMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA47A0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  NewMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitMovementModeChange*         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitMovementModeChange* UAbilityTask_WaitMovementModeChange::STATIC_CreateWaitMovementModeChange(class UObject* WorldContextObject, TEnumAsByte<Engine_EMovementMode> NewMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange");

	UAbilityTask_WaitMovementModeChange_CreateWaitMovementModeChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitMovementModeChange::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitMovementModeChange::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAE450
//		Name   -> Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitOverlap*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitOverlap* UAbilityTask_WaitOverlap::STATIC_WaitForOverlap(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap");

	UAbilityTask_WaitOverlap_WaitForOverlap_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA940
//		Name   -> Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback
//		Flags  -> (Final, Native, Public, HasOutParms)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UAbilityTask_WaitOverlap::OnOverlapCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnOverlapCallback");

	UAbilityTask_WaitOverlap_OnOverlapCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA550
//		Name   -> Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UAbilityTask_WaitOverlap::OnHitCallback(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback");

	UAbilityTask_WaitOverlap_OnHitCallback_Params params;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAbilityTask_WaitOverlap::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitOverlap::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAF070
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitTargetData*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetDataUsingActor(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class AGameplayAbilityTargetActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor");

	UAbilityTask_WaitTargetData_WaitTargetDataUsingActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAEF30
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       TaskInstanceName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UAbilityTask_WaitTargetData*                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitTargetData* UAbilityTask_WaitTargetData::STATIC_WaitTargetData(class UObject* WorldContextObject, const struct FName& TaskInstanceName, TEnumAsByte<GameplayAbilities_EGameplayTargetingConfirmation> ConfirmationType, class UClass* Class)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData");

	UAbilityTask_WaitTargetData_WaitTargetData_Params params;
	params.WorldContextObject = WorldContextObject;
	params.TaskInstanceName = TaskInstanceName;
	params.ConfirmationType = ConfirmationType;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAB100
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
//		Flags  -> (Final, Native, Public)
void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCancelledCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCancelledCallback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAB010
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            Data                                                       (Parm)
//		struct FGameplayTag                                ActivationTag                                              (Parm)
void UAbilityTask_WaitTargetData::OnTargetDataReplicatedCallback(const struct FGameplayAbilityTargetDataHandle& Data, const struct FGameplayTag& ActivationTag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReplicatedCallback_Params params;
	params.Data = Data;
	params.ActivationTag = ActivationTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAF60
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            Data                                                       (Parm)
void UAbilityTask_WaitTargetData::OnTargetDataReadyCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback");

	UAbilityTask_WaitTargetData_OnTargetDataReadyCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAAEB0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
//		Flags  -> (Final, Native, Public)
// Parameters:
//		struct FGameplayAbilityTargetDataHandle            Data                                                       (Parm)
void UAbilityTask_WaitTargetData::OnTargetDataCancelledCallback(const struct FGameplayAbilityTargetDataHandle& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback");

	UAbilityTask_WaitTargetData_OnTargetDataCancelledCallback_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA5AD0
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAbilityTask_WaitTargetData::FinishSpawningActor(class UObject* WorldContextObject, class AGameplayAbilityTargetActor* SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor");

	UAbilityTask_WaitTargetData_FinishSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EA3B60
//		Name   -> Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class AGameplayAbilityTargetActor*                 SpawnedActor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UAbilityTask_WaitTargetData::BeginSpawningActor(class UObject* WorldContextObject, class UClass* Class, class AGameplayAbilityTargetActor** SpawnedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor");

	UAbilityTask_WaitTargetData_BeginSpawningActor_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Class = Class;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedActor != nullptr)
		*SpawnedActor = params.SpawnedActor;


	return params.ReturnValue;
}


void UAbilityTask_WaitTargetData::AfterRead()
{
	UAbilityTask::AfterRead();

}

void UAbilityTask_WaitTargetData::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA4860
//		Name   -> Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              MinimumMagnitude                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilityTask_WaitVelocityChange*             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::STATIC_CreateWaitVelocityChange(class UObject* WorldContextObject, const struct FVector& Direction, float MinimumMagnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange");

	UAbilityTask_WaitVelocityChange_CreateWaitVelocityChange_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Direction = Direction;
	params.MinimumMagnitude = MinimumMagnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UAbilityTask_WaitVelocityChange::AfterRead()
{
	UAbilityTask::AfterRead();

	READ_PTR_FULL(CachedMovementComponent, UMovementComponent);
}

void UAbilityTask_WaitVelocityChange::BeforeDelete()
{
	UAbilityTask::BeforeDelete();

	DELE_PTR_FULL(CachedMovementComponent);
}

void UAbilitySystemTestAttributeSet::AfterRead()
{
	UAttributeSet::AfterRead();

}

void UAbilitySystemTestAttributeSet::BeforeDelete()
{
	UAttributeSet::BeforeDelete();

}

void UGameplayAbility_CharacterJump::AfterRead()
{
	UGameplayAbility::AfterRead();

}

void UGameplayAbility_CharacterJump::BeforeDelete()
{
	UGameplayAbility::BeforeDelete();

}

void UGameplayAbility_Montage::AfterRead()
{
	UGameplayAbility::AfterRead();

	READ_PTR_FULL(MontageToPlay, UAnimMontage);
}

void UGameplayAbility_Montage::BeforeDelete()
{
	UGameplayAbility::BeforeDelete();

	DELE_PTR_FULL(MontageToPlay);
}

void UGameplayAbilityBlueprint::AfterRead()
{
	UBlueprint::AfterRead();

}

void UGameplayAbilityBlueprint::BeforeDelete()
{
	UBlueprint::BeforeDelete();

}

void UGameplayAbilityBlueprintGeneratedClass::AfterRead()
{
	UBlueprintGeneratedClass::AfterRead();

}

void UGameplayAbilityBlueprintGeneratedClass::BeforeDelete()
{
	UBlueprintGeneratedClass::BeforeDelete();

}

void UGameplayAbilitySet::AfterRead()
{
	UDataAsset::AfterRead();

}

void UGameplayAbilitySet::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void AGameplayAbilityTargetActor_Radius::AfterRead()
{
	AGameplayAbilityTargetActor::AfterRead();

}

void AGameplayAbilityTargetActor_Radius::BeforeDelete()
{
	AGameplayAbilityTargetActor::BeforeDelete();

}

void AGameplayAbilityTargetActor_Trace::AfterRead()
{
	AGameplayAbilityTargetActor::AfterRead();

}

void AGameplayAbilityTargetActor_Trace::BeforeDelete()
{
	AGameplayAbilityTargetActor::BeforeDelete();

}

void AGameplayAbilityTargetActor_GroundTrace::AfterRead()
{
	AGameplayAbilityTargetActor_Trace::AfterRead();

}

void AGameplayAbilityTargetActor_GroundTrace::BeforeDelete()
{
	AGameplayAbilityTargetActor_Trace::BeforeDelete();

}

void AGameplayAbilityTargetActor_ActorPlacement::AfterRead()
{
	AGameplayAbilityTargetActor_GroundTrace::AfterRead();

	READ_PTR_FULL(PlacedActorClass, UClass);
	READ_PTR_FULL(PlacedActorMaterial, UMaterialInterface);
}

void AGameplayAbilityTargetActor_ActorPlacement::BeforeDelete()
{
	AGameplayAbilityTargetActor_GroundTrace::BeforeDelete();

	DELE_PTR_FULL(PlacedActorClass);
	DELE_PTR_FULL(PlacedActorMaterial);
}

void AGameplayAbilityTargetActor_SingleLineTrace::AfterRead()
{
	AGameplayAbilityTargetActor_Trace::AfterRead();

}

void AGameplayAbilityTargetActor_SingleLineTrace::BeforeDelete()
{
	AGameplayAbilityTargetActor_Trace::BeforeDelete();

}

void AGameplayAbilityWorldReticle_ActorVisualization::AfterRead()
{
	AGameplayAbilityWorldReticle::AfterRead();

	READ_PTR_FULL(CollisionComponent, UCapsuleComponent);
}

void AGameplayAbilityWorldReticle_ActorVisualization::BeforeDelete()
{
	AGameplayAbilityWorldReticle::BeforeDelete();

	DELE_PTR_FULL(CollisionComponent);
}

void UGameplayCueManager::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(GlobalCueSet, UGameplayCueSet);
	READ_PTR_FULL(GameplayCueNotifyActorObjectLibrary, UObjectLibrary);
	READ_PTR_FULL(GameplayCueNotifyStaticObjectLibrary, UObjectLibrary);
}

void UGameplayCueManager::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(GlobalCueSet);
	DELE_PTR_FULL(GameplayCueNotifyActorObjectLibrary);
	DELE_PTR_FULL(GameplayCueNotifyStaticObjectLibrary);
}

// Function:
//		Offset -> 0x03EAF1B0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGameplayCueNotify_Actor::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.WhileActive");

	AGameplayCueNotify_Actor_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAAB70
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGameplayCueNotify_Actor::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnRemove");

	AGameplayCueNotify_Actor_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAAB10
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
//		Flags  -> (Native, Public)
void AGameplayCueNotify_Actor::OnOwnerDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed");

	AGameplayCueNotify_Actor_OnOwnerDestroyed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03EAA2B0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGameplayCueNotify_Actor::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnExecute");

	AGameplayCueNotify_Actor_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA9DF0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.OnActive
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool AGameplayCueNotify_Actor::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.OnActive");

	AGameplayCueNotify_Actor_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
void AGameplayCueNotify_Actor::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue");

	AGameplayCueNotify_Actor_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AGameplayCueNotify_Actor::AfterRead()
{
	AActor::AfterRead();

}

void AGameplayCueNotify_Actor::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAF2F0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.WhileActive
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayCueNotify_Static::WhileActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.WhileActive");

	UGameplayCueNotify_Static_WhileActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAACB0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnRemove
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayCueNotify_Static::OnRemove(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnRemove");

	UGameplayCueNotify_Static_OnRemove_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EAA3F0
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnExecute
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayCueNotify_Static::OnExecute(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnExecute");

	UGameplayCueNotify_Static_OnExecute_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03EA9F30
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.OnActive
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayCueNotify_Static::OnActive(class AActor* MyTarget, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.OnActive");

	UGameplayCueNotify_Static_OnActive_Params params;
	params.MyTarget = MyTarget;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
//		Flags  -> (Event, Public, BlueprintEvent, Const)
// Parameters:
//		class AActor*                                      MyTarget                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayAbilities_EGameplayCueEvent>   EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayCueParameters                      Parameters                                                 (Parm)
void UGameplayCueNotify_Static::K2_HandleGameplayCue(class AActor* MyTarget, TEnumAsByte<GameplayAbilities_EGameplayCueEvent> EventType, const struct FGameplayCueParameters& Parameters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue");

	UGameplayCueNotify_Static_K2_HandleGameplayCue_Params params;
	params.MyTarget = MyTarget;
	params.EventType = EventType;
	params.Parameters = Parameters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayCueNotify_Static::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayCueNotify_Static::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayCueNotify_HitImpact::AfterRead()
{
	UGameplayCueNotify_Static::AfterRead();

	READ_PTR_FULL(Sound, USoundBase);
	READ_PTR_FULL(ParticleSystem, UParticleSystem);
}

void UGameplayCueNotify_HitImpact::BeforeDelete()
{
	UGameplayCueNotify_Static::BeforeDelete();

	DELE_PTR_FULL(Sound);
	DELE_PTR_FULL(ParticleSystem);
}

void UGameplayCueSet::AfterRead()
{
	UDataAsset::AfterRead();

}

void UGameplayCueSet::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UGameplayEffectTemplate::AfterRead()
{
	UGameplayEffect::AfterRead();

}

void UGameplayEffectTemplate::BeforeDelete()
{
	UGameplayEffect::BeforeDelete();

}

void UGameplayEffectCalculation::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayEffectCalculation::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA5590
//		Name   -> Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		struct FGameplayEffectCustomExecutionParameters    ExecutionParams                                            (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayEffectCustomExecutionOutput        OutExecutionOutput                                         (Parm, OutParm)
void UGameplayEffectExecutionCalculation::Execute(const struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayEffectExecutionCalculation.Execute");

	UGameplayEffectExecutionCalculation_Execute_Params params;
	params.ExecutionParams = ExecutionParams;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = params.OutExecutionOutput;

}


void UGameplayEffectExecutionCalculation::AfterRead()
{
	UGameplayEffectCalculation::AfterRead();

}

void UGameplayEffectExecutionCalculation::BeforeDelete()
{
	UGameplayEffectCalculation::BeforeDelete();

}

// Function:
//		Offset -> 0x03EA3C70
//		Name   -> Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintEvent, Const)
// Parameters:
//		struct FGameplayEffectSpec                         Spec                                                       (ConstParm, Parm, OutParm, ReferenceParm)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UGameplayModMagnitudeCalculation::CalculateBaseMagnitude(const struct FGameplayEffectSpec& Spec)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude");

	UGameplayModMagnitudeCalculation_CalculateBaseMagnitude_Params params;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameplayModMagnitudeCalculation::AfterRead()
{
	UGameplayEffectCalculation::AfterRead();

}

void UGameplayModMagnitudeCalculation::BeforeDelete()
{
	UGameplayEffectCalculation::BeforeDelete();

}

void UGameplayEffectExtension::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayEffectExtension::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayEffectExtension_LifestealTest::AfterRead()
{
	UGameplayEffectExtension::AfterRead();

	READ_PTR_FULL(HealthRestoreGameplayEffect, UGameplayEffect);
}

void UGameplayEffectExtension_LifestealTest::BeforeDelete()
{
	UGameplayEffectExtension::BeforeDelete();

	DELE_PTR_FULL(HealthRestoreGameplayEffect);
}

void UGameplayEffectExtension_ShieldTest::AfterRead()
{
	UGameplayEffectExtension::AfterRead();

	READ_PTR_FULL(ShieldRemoveGameplayEffect, UGameplayEffect);
}

void UGameplayEffectExtension_ShieldTest::BeforeDelete()
{
	UGameplayEffectExtension::BeforeDelete();

	DELE_PTR_FULL(ShieldRemoveGameplayEffect);
}

void UGameplayEffectUIData::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayEffectUIData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayEffectUIData_TextOnly::AfterRead()
{
	UGameplayEffectUIData::AfterRead();

}

void UGameplayEffectUIData_TextOnly::BeforeDelete()
{
	UGameplayEffectUIData::BeforeDelete();

}

// Function:
//		Offset -> 0x03EAD0D0
//		Name   -> Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
//		Flags  -> (Final, Native, Protected)
// Parameters:
//		struct FGameplayTag                                Tag                                                        (ConstParm, Parm)
//		int                                                NewCount                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UAbilitySystemComponent*                     ASC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Idx                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UGameplayTagReponseTable::TagResponseEvent(const struct FGameplayTag& Tag, int NewCount, class UAbilitySystemComponent* ASC, int Idx)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayAbilities.GameplayTagReponseTable.TagResponseEvent");

	UGameplayTagReponseTable_TagResponseEvent_Params params;
	params.Tag = Tag;
	params.NewCount = NewCount;
	params.ASC = ASC;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UGameplayTagReponseTable::AfterRead()
{
	UDataAsset::AfterRead();

}

void UGameplayTagReponseTable::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UTickableAttributeSetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UTickableAttributeSetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

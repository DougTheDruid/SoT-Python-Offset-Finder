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

void FCookableComponentSmokeFeedbackTimingEntry::AfterRead()
{
}

void FCookableComponentSmokeFeedbackTimingEntry::BeforeDelete()
{
}

void FCookerSmokeFeedbackEntry::AfterRead()
{
	READ_PTR_FULL(SmokeVFX, UParticleSystem);
}

void FCookerSmokeFeedbackEntry::BeforeDelete()
{
	DELE_PTR_FULL(SmokeVFX);
}

void FCookingClientRepresentation::AfterRead()
{
	READ_PTR_FULL(CurrentlyCookingItem, AItemInfo);
	READ_PTR_FULL(CurrentCookingItemCategory, UClass);
}

void FCookingClientRepresentation::BeforeDelete()
{
	DELE_PTR_FULL(CurrentlyCookingItem);
	DELE_PTR_FULL(CurrentCookingItemCategory);
}

void FCookingInfo::AfterRead()
{
}

void FCookingInfo::BeforeDelete()
{
}

void FOnPlacedItemInCookingPot::AfterRead()
{
	READ_PTR_FULL(ItemToCook, AItemInfo);
}

void FOnPlacedItemInCookingPot::BeforeDelete()
{
	DELE_PTR_FULL(ItemToCook);
}

void FOnItemStartedCooking::AfterRead()
{
}

void FOnItemStartedCooking::BeforeDelete()
{
}

void FOnItemStoppedCooking::AfterRead()
{
}

void FOnItemStoppedCooking::BeforeDelete()
{
}

void FCookEndTelemetryEvent::AfterRead()
{
}

void FCookEndTelemetryEvent::BeforeDelete()
{
}

void FCookStartTelemetryEvent::AfterRead()
{
}

void FCookStartTelemetryEvent::BeforeDelete()
{
}

void UCookableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCookableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCookingDefaultsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCookingDefaultsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCookingStatusPublisherInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCookingStatusPublisherInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCookingStateInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCookingStateInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCookableComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(NextCookState, UClass);
	READ_PTR_FULL(VisibleCookedExtentOverTime, UCurveFloat);
}

void UCookableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(NextCookState);
	DELE_PTR_FULL(VisibleCookedExtentOverTime);
}

void UCookerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCookerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x0342E2C0
//		Name   -> Function Cooking.CookerComponent.OnRep_CookingState
//		Flags  -> (Final, Native, Private, HasOutParms)
// Parameters:
//		struct FCookingClientRepresentation                OldRepresentation                                          (ConstParm, Parm, OutParm, ReferenceParm)
void UCookerComponent::OnRep_CookingState(const struct FCookingClientRepresentation& OldRepresentation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cooking.CookerComponent.OnRep_CookingState");

	UCookerComponent_OnRep_CookingState_Params params;
	params.OldRepresentation = OldRepresentation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCookerComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CookableStaticMeshComponent, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(CookableSkeletalMeshComponent, USkeletalMeshMemoryConstraintComponent);
	READ_PTR_FULL(AudioParams, UCookingComponentAudioParams);
	READ_PTR_FULL(CurrentlyCookingItem, AItemInfo);
	READ_PTR_FULL(SmokeParticleComponent, UParticleSystemComponent);
	READ_PTR_FULL(VisibleCookableMaterial, UMaterialInstanceDynamic);
}

void UCookerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CookableStaticMeshComponent);
	DELE_PTR_FULL(CookableSkeletalMeshComponent);
	DELE_PTR_FULL(AudioParams);
	DELE_PTR_FULL(CurrentlyCookingItem);
	DELE_PTR_FULL(SmokeParticleComponent);
	DELE_PTR_FULL(VisibleCookableMaterial);
}

void UCookingComponentAudioParams::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(CookingPool, UWwiseObjectPoolWrapper);
	READ_PTR_FULL(FoodPlaceInPot, UWwiseEvent);
	READ_PTR_FULL(CookingStart, UWwiseEvent);
	READ_PTR_FULL(CookingStop, UWwiseEvent);
}

void UCookingComponentAudioParams::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(CookingPool);
	DELE_PTR_FULL(FoodPlaceInPot);
	DELE_PTR_FULL(CookingStart);
	DELE_PTR_FULL(CookingStop);
}

void ACookingPot::AfterRead()
{
	AInteractableBase::AfterRead();

	READ_PTR_FULL(MeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(InteractableComponent, UActionRulesInteractableComponent);
	READ_PTR_FULL(CookerComponent, UCookerComponent);
}

void ACookingPot::BeforeDelete()
{
	AInteractableBase::BeforeDelete();

	DELE_PTR_FULL(MeshComponent);
	DELE_PTR_FULL(InteractableComponent);
	DELE_PTR_FULL(CookerComponent);
}

void UCookItemConditionalStatTrigger::AfterRead()
{
	UConditionalStatsTriggerType::AfterRead();

}

void UCookItemConditionalStatTrigger::BeforeDelete()
{
	UConditionalStatsTriggerType::BeforeDelete();

}

void UHasRequiredCookingStateStatCondition::AfterRead()
{
	UTargetedStatCondition::AfterRead();

}

void UHasRequiredCookingStateStatCondition::BeforeDelete()
{
	UTargetedStatCondition::BeforeDelete();

}

void UMixableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMixableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPottableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPottableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPottableComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPottableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

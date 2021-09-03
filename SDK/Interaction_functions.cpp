// Name: SoT, Version: 2.2.1.1

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

void FEventOptimalInteractionObjectChanged::AfterRead()
{
	READ_PTR_FULL(PreviousFocusObject, UObject);
	READ_PTR_FULL(NewFocusObject, UObject);
}

void FEventOptimalInteractionObjectChanged::BeforeDelete()
{
	DELE_PTR_FULL(PreviousFocusObject);
	DELE_PTR_FULL(NewFocusObject);
}

void FEventInteractionBlockingStateChanged::AfterRead()
{
}

void FEventInteractionBlockingStateChanged::BeforeDelete()
{
}

// Function Interaction.InteractableComponent.SetBoxOrigin
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 IntBoxOrigin                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableComponent::SetBoxOrigin(const struct FVector& IntBoxOrigin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxOrigin");

	UInteractableComponent_SetBoxOrigin_Params params;
	params.IntBoxOrigin = IntBoxOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableComponent.SetBoxExtent
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                 InBoxExtent                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableComponent::SetBoxExtent(const struct FVector& InBoxExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxExtent");

	UInteractableComponent_SetBoxExtent_Params params;
	params.InBoxExtent = InBoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableComponent.GetInteractableArea
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInteractableArea* UInteractableComponent::GetInteractableArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetInteractableArea");

	UInteractableComponent_GetInteractableArea_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxWorldOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxWorldOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxWorldOrigin");

	UInteractableComponent_GetBoxWorldOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxSphereRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInteractableComponent::GetBoxSphereRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxSphereRadius");

	UInteractableComponent_GetBoxSphereRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxOrigin
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxOrigin");

	UInteractableComponent_GetBoxOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableComponent.GetBoxExtent
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxExtent");

	UInteractableComponent_GetBoxExtent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInteractableComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(InteractableArea, UInteractableArea);
}

void UInteractableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(InteractableArea);
}

void UInteractionValidatorSetterInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractionValidatorSetterInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Interaction.CharacterInteractionComponent.IsInteractionValid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InInteractable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCharacterInteractionComponent::IsInteractionValid(class UObject* InInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.IsInteractionValid");

	UCharacterInteractionComponent_IsInteractionValid_Params params;
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
// (Final, Native, Public, BlueprintCallable)
void UCharacterInteractionComponent::InvalidateOptimalObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject");

	UCharacterInteractionComponent_InvalidateOptimalObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInteractableArea*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject");

	UCharacterInteractionComponent_GetOptimalFocusObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
// (Final, Native, Public, BlueprintCallable)
void UCharacterInteractionComponent::ClearAllPolicies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.ClearAllPolicies");

	UCharacterInteractionComponent_ClearAllPolicies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCharacterInteractionComponent::AfterRead()
{
	UBoxComponent::AfterRead();

	READ_PTR_FULL(CurrentOptimalInteractable, UInteractableArea);
}

void UCharacterInteractionComponent::BeforeDelete()
{
	UBoxComponent::BeforeDelete();

	DELE_PTR_FULL(CurrentOptimalInteractable);
}

void UGroupedInteractableAreaComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UGroupedInteractableAreaComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function Interaction.InteractableArea.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InParent                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetParent(class AActor* InParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetParent");

	UInteractableArea_SetParent_Params params;
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableArea.SetInteractable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                 InInteractable                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetInteractable(class UObject* InInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetInteractable");

	UInteractableArea_SetInteractable_Params params;
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableArea.SetAreaName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   InName                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetAreaName(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaName");

	UInteractableArea_SetAreaName_Params params;
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableArea.SetAreaBounds
// (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBoxSphereBounds        InBounds                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableArea::SetAreaBounds(const struct FBoxSphereBounds& InBounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaBounds");

	UInteractableArea_SetAreaBounds_Params params;
	params.InBounds = InBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableArea.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UInteractableArea::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetParent");

	UInteractableArea_GetParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetInteractable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UInteractableArea::GetInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetInteractable");

	UInteractableArea_GetInteractable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UInteractableArea::GetAreaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaName");

	UInteractableArea_GetAreaName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableArea::GetAreaLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaLocation");

	UInteractableArea_GetAreaLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableArea.GetAreaBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBoxSphereBounds        ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FBoxSphereBounds UInteractableArea::GetAreaBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaBounds");

	UInteractableArea_GetAreaBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInteractableArea::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Interactable, UObject);
	READ_PTR_FULL(Parent, AActor);
}

void UInteractableArea::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(Parent);
}

// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 DesiredTooltipWorldPosition    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace");

	UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.IsInteractableDisabled
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::IsInteractableDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.IsInteractableDisabled");

	UInteractableInterface_IsInteractableDisabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.Interact
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UInteractableInterface::Interact(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.Interact");

	UInteractableInterface_Interact_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interaction.InteractableInterface.GetInteractionState
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TEnumAsByte<Athena_EInteractableState> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Athena_EInteractableState> UInteractableInterface::GetInteractionState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetInteractionState");

	UInteractableInterface_GetInteractionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetFrontFacingVector
// (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableInterface::GetFrontFacingVector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetFrontFacingVector");

	UInteractableInterface_GetFrontFacingVector_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetClosestInteractionPoint
// (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableInterface::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetClosestInteractionPoint");

	UInteractableInterface_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class AActor*>          ActorsToIgnore                 (Parm, OutParm, ZeroConstructor)
void UInteractableInterface::GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker");

	UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;

}


// Function Interaction.InteractableInterface.GetActionRulesComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActionRulesComponent*   ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActionRulesComponent");

	UInteractableInterface_GetActionRulesComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireNotSwimming
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireNotSwimming()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotSwimming");

	UInteractableInterface_DoesRequireNotSwimming_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireNotBeingAirborne()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne");

	UInteractableInterface_DoesRequireNotBeingAirborne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.DoesRequireFacingFront
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireFacingFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireFacingFront");

	UInteractableInterface_DoesRequireFacingFront_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  NotificationInputId            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId");

	UInteractableInterface_CanInteractWithNotificationInputId_Params params;
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function Interaction.InteractableInterface.CanInteract
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  InInteractor                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::CanInteract(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteract");

	UInteractableInterface_CanInteract_Params params;
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UInteractableInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractableInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                  InteractableActor              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<Athena_EInteractableState> NewInteractableState           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableBlueprintFunctionLibrary::STATIC_SetInteractionState(class AActor* InteractableActor, TEnumAsByte<Athena_EInteractableState> NewInteractableState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState");

	UInteractableBlueprintFunctionLibrary_SetInteractionState_Params params;
	params.InteractableActor = InteractableActor;
	params.NewInteractableState = NewInteractableState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInteractableBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UInteractableBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UInteractableIdentifierInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractableIdentifierInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInteractableServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractableServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInteractableService::AfterRead()
{
	UObject::AfterRead();

}

void UInteractableService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UInteractionValidatorOwnerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractionValidatorOwnerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UInteractorInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UInteractorInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AMockActorWithCharacterInteractionComponent::AfterRead()
{
	ACharacter::AfterRead();

	READ_PTR_FULL(CharacterInteractionComponent, UCharacterInteractionComponent);
}

void AMockActorWithCharacterInteractionComponent::BeforeDelete()
{
	ACharacter::BeforeDelete();

	DELE_PTR_FULL(CharacterInteractionComponent);
}

void UMockInteractableService::AfterRead()
{
	UObject::AfterRead();

}

void UMockInteractableService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AMockInteractorActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(FocusedInteractable, UObject);
	READ_PTR_FULL(InteractedObject, UObject);
	READ_PTR_FULL(InteractNotificationType, UClass);
}

void AMockInteractorActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(FocusedInteractable);
	DELE_PTR_FULL(InteractedObject);
	DELE_PTR_FULL(InteractNotificationType);
}

void USelfInteractionInterface::AfterRead()
{
	UInterface::AfterRead();

}

void USelfInteractionInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

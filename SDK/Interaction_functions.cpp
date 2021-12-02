// Name: SoT, Version: 2.4.0

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

// Function:
//		Offset -> 0x033531B0
//		Name   -> Function Interaction.InteractableComponent.SetBoxOrigin
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     IntBoxOrigin                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableComponent::SetBoxOrigin(const struct FVector& IntBoxOrigin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxOrigin");

	UInteractableComponent_SetBoxOrigin_Params params {};
	params.IntBoxOrigin = IntBoxOrigin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03353120
//		Name   -> Function Interaction.InteractableComponent.SetBoxExtent
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     InBoxExtent                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableComponent::SetBoxExtent(const struct FVector& InBoxExtent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.SetBoxExtent");

	UInteractableComponent_SetBoxExtent_Params params {};
	params.InBoxExtent = InBoxExtent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03352DA0
//		Name   -> Function Interaction.InteractableComponent.GetInteractableArea
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UInteractableArea*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInteractableArea* UInteractableComponent::GetInteractableArea()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetInteractableArea");

	UInteractableComponent_GetInteractableArea_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352BF0
//		Name   -> Function Interaction.InteractableComponent.GetBoxWorldOrigin
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxWorldOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxWorldOrigin");

	UInteractableComponent_GetBoxWorldOrigin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352BC0
//		Name   -> Function Interaction.InteractableComponent.GetBoxSphereRadius
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float UInteractableComponent::GetBoxSphereRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxSphereRadius");

	UInteractableComponent_GetBoxSphereRadius_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352B80
//		Name   -> Function Interaction.InteractableComponent.GetBoxOrigin
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxOrigin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxOrigin");

	UInteractableComponent_GetBoxOrigin_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352B40
//		Name   -> Function Interaction.InteractableComponent.GetBoxExtent
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableComponent::GetBoxExtent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableComponent.GetBoxExtent");

	UInteractableComponent_GetBoxExtent_Params params {};

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

// Function:
//		Offset -> 0x03352F70
//		Name   -> Function Interaction.CharacterInteractionComponent.IsInteractionValid
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     InInteractable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCharacterInteractionComponent::IsInteractionValid(class UObject* InInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.IsInteractionValid");

	UCharacterInteractionComponent_IsInteractionValid_Params params {};
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352F20
//		Name   -> Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCharacterInteractionComponent::InvalidateOptimalObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject");

	UCharacterInteractionComponent_InvalidateOptimalObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03352E00
//		Name   -> Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UInteractableArea*                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UInteractableArea* UCharacterInteractionComponent::GetOptimalFocusObject()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject");

	UCharacterInteractionComponent_GetOptimalFocusObject_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x033528F0
//		Name   -> Function Interaction.CharacterInteractionComponent.ClearAllPolicies
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCharacterInteractionComponent::ClearAllPolicies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.CharacterInteractionComponent.ClearAllPolicies");

	UCharacterInteractionComponent_ClearAllPolicies_Params params {};

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

// Function:
//		Offset -> 0x033533A0
//		Name   -> Function Interaction.InteractableArea.SetParent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InParent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetParent(class AActor* InParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetParent");

	UInteractableArea_SetParent_Params params {};
	params.InParent = InParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03353240
//		Name   -> Function Interaction.InteractableArea.SetInteractable
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     InInteractable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetInteractable(class UObject* InInteractable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetInteractable");

	UInteractableArea_SetInteractable_Params params {};
	params.InInteractable = InInteractable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03353090
//		Name   -> Function Interaction.InteractableArea.SetAreaName
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FName                                       InName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableArea::SetAreaName(const struct FName& InName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaName");

	UInteractableArea_SetAreaName_Params params {};
	params.InName = InName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03353000
//		Name   -> Function Interaction.InteractableArea.SetAreaBounds
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FBoxSphereBounds                            InBounds                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UInteractableArea::SetAreaBounds(const struct FBoxSphereBounds& InBounds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.SetAreaBounds");

	UInteractableArea_SetAreaBounds_Params params {};
	params.InBounds = InBounds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03352E30
//		Name   -> Function Interaction.InteractableArea.GetParent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UInteractableArea::GetParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetParent");

	UInteractableArea_GetParent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352D70
//		Name   -> Function Interaction.InteractableArea.GetInteractable
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UObject* UInteractableArea::GetInteractable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetInteractable");

	UInteractableArea_GetInteractable_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352B00
//		Name   -> Function Interaction.InteractableArea.GetAreaName
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FName UInteractableArea::GetAreaName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaName");

	UInteractableArea_GetAreaName_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352AC0
//		Name   -> Function Interaction.InteractableArea.GetAreaLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableArea::GetAreaLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaLocation");

	UInteractableArea_GetAreaLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352A80
//		Name   -> Function Interaction.InteractableArea.GetAreaBounds
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FBoxSphereBounds                            ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
struct FBoxSphereBounds UInteractableArea::GetAreaBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableArea.GetAreaBounds");

	UInteractableArea_GetAreaBounds_Params params {};

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

// Function:
//		Offset -> 0x03353420
//		Name   -> Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     DesiredTooltipWorldPosition                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::ShouldDrawTooltipInWorldSpace(class AActor* InInteractor, struct FVector* DesiredTooltipWorldPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace");

	UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params params {};
	params.InInteractor = InInteractor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DesiredTooltipWorldPosition != nullptr)
		*DesiredTooltipWorldPosition = params.DesiredTooltipWorldPosition;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352F40
//		Name   -> Function Interaction.InteractableInterface.IsInteractableDisabled
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::IsInteractableDisabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.IsInteractableDisabled");

	UInteractableInterface_IsInteractableDisabled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352E60
//		Name   -> Function Interaction.InteractableInterface.Interact
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      NotificationInputId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UInteractableInterface::Interact(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.Interact");

	UInteractableInterface_Interact_Params params {};
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03352DD0
//		Name   -> Function Interaction.InteractableInterface.GetInteractionState
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<Athena_EInteractableState>             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<Athena_EInteractableState> UInteractableInterface::GetInteractionState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetInteractionState");

	UInteractableInterface_GetInteractionState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352D30
//		Name   -> Function Interaction.InteractableInterface.GetFrontFacingVector
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableInterface::GetFrontFacingVector()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetFrontFacingVector");

	UInteractableInterface_GetFrontFacingVector_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352C30
//		Name   -> Function Interaction.InteractableInterface.GetClosestInteractionPoint
//		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector UInteractableInterface::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetClosestInteractionPoint");

	UInteractableInterface_GetClosestInteractionPoint_Params params {};
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x033529D0
//		Name   -> Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
//		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		TArray<class AActor*>                              ActorsToIgnore                                             (Parm, OutParm, ZeroConstructor)
void UInteractableInterface::GetActorsToIgnoreDuringOcclusionChecker(TArray<class AActor*>* ActorsToIgnore)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker");

	UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActorsToIgnore != nullptr)
		*ActorsToIgnore = params.ActorsToIgnore;

}


// Function:
//		Offset -> 0x033529A0
//		Name   -> Function Interaction.InteractableInterface.GetActionRulesComponent
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UActionRulesComponent*                       ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UActionRulesComponent* UInteractableInterface::GetActionRulesComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.GetActionRulesComponent");

	UInteractableInterface_GetActionRulesComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352970
//		Name   -> Function Interaction.InteractableInterface.DoesRequireNotSwimming
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireNotSwimming()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotSwimming");

	UInteractableInterface_DoesRequireNotSwimming_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352940
//		Name   -> Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireNotBeingAirborne()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne");

	UInteractableInterface_DoesRequireNotBeingAirborne_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352910
//		Name   -> Function Interaction.InteractableInterface.DoesRequireFacingFront
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::DoesRequireFacingFront()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.DoesRequireFacingFront");

	UInteractableInterface_DoesRequireFacingFront_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352820
//		Name   -> Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      NotificationInputId                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::CanInteractWithNotificationInputId(class AActor* InInteractor, class UClass* NotificationInputId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteractWithNotificationInputId");

	UInteractableInterface_CanInteractWithNotificationInputId_Params params {};
	params.InInteractor = InInteractor;
	params.NotificationInputId = NotificationInputId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03352780
//		Name   -> Function Interaction.InteractableInterface.CanInteract
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      InInteractor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UInteractableInterface::CanInteract(class AActor* InInteractor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableInterface.CanInteract");

	UInteractableInterface_CanInteract_Params params {};
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

// Function:
//		Offset -> 0x033532C0
//		Name   -> Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InteractableActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Athena_EInteractableState>             NewInteractableState                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UInteractableBlueprintFunctionLibrary::STATIC_SetInteractionState(class AActor* InteractableActor, TEnumAsByte<Athena_EInteractableState> NewInteractableState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState");

	UInteractableBlueprintFunctionLibrary_SetInteractionState_Params params {};
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

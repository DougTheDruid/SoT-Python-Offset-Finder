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
// Parameters
//---------------------------------------------------------------------------

// Function Interaction.InteractableComponent.SetBoxOrigin
struct UInteractableComponent_SetBoxOrigin_Params
{
	struct FVector                                     IntBoxOrigin;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableComponent.SetBoxExtent
struct UInteractableComponent_SetBoxExtent_Params
{
	struct FVector                                     InBoxExtent;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableComponent.GetInteractableArea
struct UInteractableComponent_GetInteractableArea_Params
{
	class UInteractableArea*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableComponent.GetBoxWorldOrigin
struct UInteractableComponent_GetBoxWorldOrigin_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableComponent.GetBoxSphereRadius
struct UInteractableComponent_GetBoxSphereRadius_Params
{
	float                                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableComponent.GetBoxOrigin
struct UInteractableComponent_GetBoxOrigin_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableComponent.GetBoxExtent
struct UInteractableComponent_GetBoxExtent_Params
{
	struct FVector                                     ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.CharacterInteractionComponent.IsInteractionValid
struct UCharacterInteractionComponent_IsInteractionValid_Params
{
	class UObject*                                     InInteractable;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.CharacterInteractionComponent.InvalidateOptimalObject
struct UCharacterInteractionComponent_InvalidateOptimalObject_Params
{
};

// Function Interaction.CharacterInteractionComponent.GetOptimalFocusObject
struct UCharacterInteractionComponent_GetOptimalFocusObject_Params
{
	class UInteractableArea*                           ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.CharacterInteractionComponent.ClearAllPolicies
struct UCharacterInteractionComponent_ClearAllPolicies_Params
{
};

// Function Interaction.InteractableArea.SetParent
struct UInteractableArea_SetParent_Params
{
	class AActor*                                      InParent;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.SetInteractable
struct UInteractableArea_SetInteractable_Params
{
	class UObject*                                     InInteractable;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.SetAreaName
struct UInteractableArea_SetAreaName_Params
{
	struct FName                                       InName;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.SetAreaBounds
struct UInteractableArea_SetAreaBounds_Params
{
	struct FBoxSphereBounds                            InBounds;                                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableArea.GetParent
struct UInteractableArea_GetParent_Params
{
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.GetInteractable
struct UInteractableArea_GetInteractable_Params
{
	class UObject*                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.GetAreaName
struct UInteractableArea_GetAreaName_Params
{
	struct FName                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableArea.GetAreaLocation
struct UInteractableArea_GetAreaLocation_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableArea.GetAreaBounds
struct UInteractableArea_GetAreaBounds_Params
{
	struct FBoxSphereBounds                            ReturnValue;                                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.ShouldDrawTooltipInWorldSpace
struct UInteractableInterface_ShouldDrawTooltipInWorldSpace_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DesiredTooltipWorldPosition;                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.IsInteractableDisabled
struct UInteractableInterface_IsInteractableDisabled_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.Interact
struct UInteractableInterface_Interact_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NotificationInputId;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function Interaction.InteractableInterface.GetInteractionState
struct UInteractableInterface_GetInteractionState_Params
{
	TEnumAsByte<Athena_EInteractableState>             ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableInterface.GetFrontFacingVector
struct UInteractableInterface_GetFrontFacingVector_Params
{
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.GetClosestInteractionPoint
struct UInteractableInterface_GetClosestInteractionPoint_Params
{
	struct FVector                                     ReferencePosition;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              OutInteractionPointRadius;                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.GetActorsToIgnoreDuringOcclusionChecker
struct UInteractableInterface_GetActorsToIgnoreDuringOcclusionChecker_Params
{
	TArray<class AActor*>                              ActorsToIgnore;                                            // (Parm, OutParm, ZeroConstructor)
};

// Function Interaction.InteractableInterface.GetActionRulesComponent
struct UInteractableInterface_GetActionRulesComponent_Params
{
	class UActionRulesComponent*                       ReturnValue;                                               // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Interaction.InteractableInterface.DoesRequireNotSwimming
struct UInteractableInterface_DoesRequireNotSwimming_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.DoesRequireNotBeingAirborne
struct UInteractableInterface_DoesRequireNotBeingAirborne_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.DoesRequireFacingFront
struct UInteractableInterface_DoesRequireFacingFront_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.CanInteractWithNotificationInputId
struct UInteractableInterface_CanInteractWithNotificationInputId_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      NotificationInputId;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableInterface.CanInteract
struct UInteractableInterface_CanInteract_Params
{
	class AActor*                                      InInteractor;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Interaction.InteractableBlueprintFunctionLibrary.SetInteractionState
struct UInteractableBlueprintFunctionLibrary_SetInteractionState_Params
{
	class AActor*                                      InteractableActor;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Athena_EInteractableState>             NewInteractableState;                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

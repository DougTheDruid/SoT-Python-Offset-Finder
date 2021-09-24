// Name: SoT, Version: 2.3.0.Brig

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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.GetClosestInteractionPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_MediumShip_ServingHatch_Left_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.GetClosestInteractionPoint");

	ABP_MediumShip_ServingHatch_Left_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Left_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.UserConstructionScript");

	ABP_MediumShip_ServingHatch_Left_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Left_C::OnAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationStarted");

	ABP_MediumShip_ServingHatch_Left_C_OnAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationCompleted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_MediumShip_ServingHatch_Left_C::OnAnimationCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.OnAnimationCompleted");

	ABP_MediumShip_ServingHatch_Left_C_OnAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Left
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumShip_ServingHatch_Left_C::ExecuteUbergraph_BP_MediumShip_ServingHatch_Left(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumShip_ServingHatch_Left.BP_MediumShip_ServingHatch_Left_C.ExecuteUbergraph_BP_MediumShip_ServingHatch_Left");

	ABP_MediumShip_ServingHatch_Left_C_ExecuteUbergraph_BP_MediumShip_ServingHatch_Left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumShip_ServingHatch_Left_C::AfterRead()
{
	ASwitchMechanismTrigger::AfterRead();

	READ_PTR_FULL(shp_mid_serving_hatch_L_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_MediumShip_ServingHatch_Left_C::BeforeDelete()
{
	ASwitchMechanismTrigger::BeforeDelete();

	DELE_PTR_FULL(shp_mid_serving_hatch_L_01_a);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

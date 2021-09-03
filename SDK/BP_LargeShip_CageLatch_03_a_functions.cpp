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

// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.GetClosestInteractionPoint
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_LargeShip_CageLatch_03_a_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.GetClosestInteractionPoint");

	ABP_LargeShip_CageLatch_03_a_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.UserConstructionScript");

	ABP_LargeShip_CageLatch_03_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationStarted
// (Event, Protected, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_a_C::OnAnimationStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationStarted");

	ABP_LargeShip_CageLatch_03_a_C_OnAnimationStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationCompleted
// (Event, Protected, BlueprintEvent)
void ABP_LargeShip_CageLatch_03_a_C::OnAnimationCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.OnAnimationCompleted");

	ABP_LargeShip_CageLatch_03_a_C_OnAnimationCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_a
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_CageLatch_03_a_C::ExecuteUbergraph_BP_LargeShip_CageLatch_03_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_CageLatch_03_a.BP_LargeShip_CageLatch_03_a_C.ExecuteUbergraph_BP_LargeShip_CageLatch_03_a");

	ABP_LargeShip_CageLatch_03_a_C_ExecuteUbergraph_BP_LargeShip_CageLatch_03_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_CageLatch_03_a_C::AfterRead()
{
	APetCageSwitchMechanismTrigger::AfterRead();

	READ_PTR_FULL(cap_cage_door_03_a, UStaticMeshComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_LargeShip_CageLatch_03_a_C::BeforeDelete()
{
	APetCageSwitchMechanismTrigger::BeforeDelete();

	DELE_PTR_FULL(cap_cage_door_03_a);
	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

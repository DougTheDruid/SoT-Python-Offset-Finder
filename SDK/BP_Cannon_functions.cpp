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

// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Cannon.BP_Cannon_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_Cannon_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.GetDockableInfo");

	ABP_Cannon_C_GetDockableInfo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Cannon.BP_Cannon_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABP_Cannon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Cannon.BP_Cannon_C.UserConstructionScript");

	ABP_Cannon_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Cannon_C::AfterRead()
{
	ACannon::AfterRead();

	READ_PTR_FULL(GroupedInteractableArea, UGroupedInteractableAreaComponent);
	READ_PTR_FULL(Interactable, UInteractableComponent);
	READ_PTR_FULL(Collision, UStaticMeshComponent);
}

void ABP_Cannon_C::BeforeDelete()
{
	ACannon::BeforeDelete();

	DELE_PTR_FULL(GroupedInteractableArea);
	DELE_PTR_FULL(Interactable);
	DELE_PTR_FULL(Collision);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

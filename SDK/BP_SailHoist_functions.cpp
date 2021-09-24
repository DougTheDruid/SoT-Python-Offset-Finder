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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SailHoist.BP_SailHoist_C.GetDockableInfo
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDockableInfo                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FDockableInfo ABP_SailHoist_C::GetDockableInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SailHoist.BP_SailHoist_C.GetDockableInfo");

	ABP_SailHoist_C_GetDockableInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_SailHoist.BP_SailHoist_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SailHoist_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SailHoist.BP_SailHoist_C.UserConstructionScript");

	ABP_SailHoist_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_SailHoist_C::AfterRead()
{
	ASailHoist::AfterRead();

	READ_PTR_FULL(Interactable, UInteractableComponent);
}

void ABP_SailHoist_C::BeforeDelete()
{
	ASailHoist::BeforeDelete();

	DELE_PTR_FULL(Interactable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

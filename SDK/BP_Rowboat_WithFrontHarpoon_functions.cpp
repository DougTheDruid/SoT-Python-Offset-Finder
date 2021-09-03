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

// Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.GetPxActorCapacityForPhysXAggregate
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
unsigned char ABP_Rowboat_WithFrontHarpoon_C::GetPxActorCapacityForPhysXAggregate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.GetPxActorCapacityForPhysXAggregate");

	ABP_Rowboat_WithFrontHarpoon_C_GetPxActorCapacityForPhysXAggregate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Rowboat_WithFrontHarpoon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Rowboat_WithFrontHarpoon.BP_Rowboat_WithFrontHarpoon_C.UserConstructionScript");

	ABP_Rowboat_WithFrontHarpoon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Rowboat_WithFrontHarpoon_C::AfterRead()
{
	ABP_Rowboat_C::AfterRead();

	READ_PTR_FULL(Harpoon, UChildActorComponent);
}

void ABP_Rowboat_WithFrontHarpoon_C::BeforeDelete()
{
	ABP_Rowboat_C::BeforeDelete();

	DELE_PTR_FULL(Harpoon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

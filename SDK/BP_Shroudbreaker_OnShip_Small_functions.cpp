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
//		Name   -> Function BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Shroudbreaker_OnShip_Small_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Shroudbreaker_OnShip_Small.BP_Shroudbreaker_OnShip_Small_C.UserConstructionScript");

	ABP_Shroudbreaker_OnShip_Small_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Shroudbreaker_OnShip_Small_C::AfterRead()
{
	ABP_Shroudbreaker_OnShip_C::AfterRead();

}

void ABP_Shroudbreaker_OnShip_Small_C::BeforeDelete()
{
	ABP_Shroudbreaker_OnShip_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

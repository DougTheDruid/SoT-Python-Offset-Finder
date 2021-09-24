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
//		Name   -> Function BP_tls_hand_lantern_fod_02_a_Wieldable.BP_tls_hand_lantern_fod_02_a_Wieldable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_tls_hand_lantern_fod_02_a_Wieldable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_tls_hand_lantern_fod_02_a_Wieldable.BP_tls_hand_lantern_fod_02_a_Wieldable_C.UserConstructionScript");

	ABP_tls_hand_lantern_fod_02_a_Wieldable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_tls_hand_lantern_fod_02_a_Wieldable_C::AfterRead()
{
	ABP_Lantern_C::AfterRead();

}

void ABP_tls_hand_lantern_fod_02_a_Wieldable_C::BeforeDelete()
{
	ABP_Lantern_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_fod_ChickenMeatRaw_00_a_ItemProxy.BP_fod_ChickenMeatRaw_00_a_ItemProxy_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_fod_ChickenMeatRaw_00_a_ItemProxy_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_fod_ChickenMeatRaw_00_a_ItemProxy.BP_fod_ChickenMeatRaw_00_a_ItemProxy_C.UserConstructionScript");

	ABP_fod_ChickenMeatRaw_00_a_ItemProxy_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_fod_ChickenMeatRaw_00_a_ItemProxy_C::AfterRead()
{
	ABP_ProxyIngestible_Retractable_C::AfterRead();

}

void ABP_fod_ChickenMeatRaw_00_a_ItemProxy_C::BeforeDelete()
{
	ABP_ProxyIngestible_Retractable_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

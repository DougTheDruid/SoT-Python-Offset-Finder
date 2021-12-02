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
//		Name   -> Function BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ProxyIngestible_Retractable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ProxyIngestible_Retractable.BP_ProxyIngestible_Retractable_C.UserConstructionScript");

	ABP_ProxyIngestible_Retractable_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ProxyIngestible_Retractable_C::AfterRead()
{
	ABP_ProxyIngestible_C::AfterRead();

	READ_PTR_FULL(RetractableItemProxy, URetractableItemProxyComponent);
}

void ABP_ProxyIngestible_Retractable_C::BeforeDelete()
{
	ABP_ProxyIngestible_C::BeforeDelete();

	DELE_PTR_FULL(RetractableItemProxy);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_MeatItemInfo.BP_MeatItemInfo_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_MeatItemInfo_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MeatItemInfo.BP_MeatItemInfo_C.UserConstructionScript");

	ABP_MeatItemInfo_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MeatItemInfo_C::AfterRead()
{
	ARewardableItemInfo::AfterRead();

	READ_PTR_FULL(DeliverableRedirection, UDeliverableRedirectionComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_MeatItemInfo_C::BeforeDelete()
{
	ARewardableItemInfo::BeforeDelete();

	DELE_PTR_FULL(DeliverableRedirection);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

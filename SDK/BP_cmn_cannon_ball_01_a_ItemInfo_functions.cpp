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
//		Name   -> Function BP_cmn_cannon_ball_01_a_ItemInfo.BP_cmn_cannon_ball_01_a_ItemInfo_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cmn_cannon_ball_01_a_ItemInfo_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cmn_cannon_ball_01_a_ItemInfo.BP_cmn_cannon_ball_01_a_ItemInfo_C.UserConstructionScript");

	ABP_cmn_cannon_ball_01_a_ItemInfo_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_cmn_cannon_ball_01_a_ItemInfo_C::AfterRead()
{
	AItemInfo::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_cmn_cannon_ball_01_a_ItemInfo_C::BeforeDelete()
{
	AItemInfo::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TreasureMap_ItemInfo_XMarksTheSpot_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasureMap_ItemInfo_XMarksTheSpot.BP_TreasureMap_ItemInfo_XMarksTheSpot_C.UserConstructionScript");

	ABP_TreasureMap_ItemInfo_XMarksTheSpot_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TreasureMap_ItemInfo_XMarksTheSpot_C::AfterRead()
{
	ATreasureMapItemInfo::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_TreasureMap_ItemInfo_XMarksTheSpot_C::BeforeDelete()
{
	ATreasureMapItemInfo::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

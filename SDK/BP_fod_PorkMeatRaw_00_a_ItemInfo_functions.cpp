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
//		Name   -> Function BP_fod_PorkMeatRaw_00_a_ItemInfo.BP_fod_PorkMeatRaw_00_a_ItemInfo_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_fod_PorkMeatRaw_00_a_ItemInfo_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_fod_PorkMeatRaw_00_a_ItemInfo.BP_fod_PorkMeatRaw_00_a_ItemInfo_C.UserConstructionScript");

	ABP_fod_PorkMeatRaw_00_a_ItemInfo_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_fod_PorkMeatRaw_00_a_ItemInfo_C::AfterRead()
{
	ABP_MeatItemInfo_C::AfterRead();

	READ_PTR_FULL(MaterialManipulationSettings, UMaterialManipulationSettingsComponent);
	READ_PTR_FULL(LightweightStatusEffectManager, ULightWeightStatusEffectManagerComponent);
	READ_PTR_FULL(Cookable, UCookableComponent);
}

void ABP_fod_PorkMeatRaw_00_a_ItemInfo_C::BeforeDelete()
{
	ABP_MeatItemInfo_C::BeforeDelete();

	DELE_PTR_FULL(MaterialManipulationSettings);
	DELE_PTR_FULL(LightweightStatusEffectManager);
	DELE_PTR_FULL(Cookable);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

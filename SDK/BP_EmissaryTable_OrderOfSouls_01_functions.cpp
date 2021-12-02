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
//		Name   -> Function BP_EmissaryTable_OrderOfSouls_01.BP_EmissaryTable_OrderOfSouls_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_OrderOfSouls_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_OrderOfSouls_01.BP_EmissaryTable_OrderOfSouls_01_C.UserConstructionScript");

	ABP_EmissaryTable_OrderOfSouls_01_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_OrderOfSouls_01_C::AfterRead()
{
	ABP_EmissaryTable_01_C::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(EmissaryShipAffiliationTracker, UEmissaryShipAffiliationTrackerComponent);
	READ_PTR_FULL(vfx_enchanting_open_chest_ambient, UParticleSystemComponent);
	READ_PTR_FULL(con_cover_page_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_07_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_08_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_05_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_desk_model_oos_01_a, UStaticMeshComponent);
}

void ABP_EmissaryTable_OrderOfSouls_01_C::BeforeDelete()
{
	ABP_EmissaryTable_01_C::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(EmissaryShipAffiliationTracker);
	DELE_PTR_FULL(vfx_enchanting_open_chest_ambient);
	DELE_PTR_FULL(con_cover_page_oos_01_a);
	DELE_PTR_FULL(bld_shop_bone_oos_07_a);
	DELE_PTR_FULL(bld_shop_bone_oos_08_a);
	DELE_PTR_FULL(bld_shop_bone_oos_05_a);
	DELE_PTR_FULL(bld_shop_bone_oos_03_a);
	DELE_PTR_FULL(bld_shop_bone_oos_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a1);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(cap_cabin_books_aged_02_a);
	DELE_PTR_FULL(cap_desk_model_oos_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_EmissaryTable_MerchantAlliance_01.BP_EmissaryTable_MerchantAlliance_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_MerchantAlliance_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_MerchantAlliance_01.BP_EmissaryTable_MerchantAlliance_01_C.UserConstructionScript");

	ABP_EmissaryTable_MerchantAlliance_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_MerchantAlliance_01_C::AfterRead()
{
	ABP_EmissaryTable_01_C::AfterRead();

	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(EmissaryShipAffiliationTracker, UEmissaryShipAffiliationTrackerComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_emissary_table_dressing_mrh_01_a, UStaticMeshComponent);
	READ_PTR_FULL(con_cover_page_mrh_01_a, UStaticMeshComponent);
}

void ABP_EmissaryTable_MerchantAlliance_01_C::BeforeDelete()
{
	ABP_EmissaryTable_01_C::BeforeDelete();

	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(EmissaryShipAffiliationTracker);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(bld_shop_wood_box_01_a);
	DELE_PTR_FULL(bld_emissary_table_dressing_mrh_01_a);
	DELE_PTR_FULL(con_cover_page_mrh_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

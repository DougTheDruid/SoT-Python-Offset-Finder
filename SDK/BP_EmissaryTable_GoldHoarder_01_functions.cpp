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
//		Name   -> Function BP_EmissaryTable_GoldHoarder_01.BP_EmissaryTable_GoldHoarder_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_GoldHoarder_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_GoldHoarder_01.BP_EmissaryTable_GoldHoarder_01_C.UserConstructionScript");

	ABP_EmissaryTable_GoldHoarder_01_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_GoldHoarder_01_C::AfterRead()
{
	ABP_EmissaryTable_01_C::AfterRead();

	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(EmissaryShipAffiliationTracker, UEmissaryShipAffiliationTrackerComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a12, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a11, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a10, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a9, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a8, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_c2, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a7, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a6, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(trs_money_sack_medium_01_a, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_c, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_b, UStaticMeshComponent);
	READ_PTR_FULL(trs_gold_ingot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(frt_coin_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_desk_model_gld_01_a, UStaticMeshComponent);
	READ_PTR_FULL(con_cover_page_gld_01_a, UStaticMeshComponent);
}

void ABP_EmissaryTable_GoldHoarder_01_C::BeforeDelete()
{
	ABP_EmissaryTable_01_C::BeforeDelete();

	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(EmissaryShipAffiliationTracker);
	DELE_PTR_FULL(trs_gold_ingot_01_a5);
	DELE_PTR_FULL(frt_coin_01_a12);
	DELE_PTR_FULL(frt_coin_01_a11);
	DELE_PTR_FULL(frt_coin_01_a10);
	DELE_PTR_FULL(frt_coin_01_a9);
	DELE_PTR_FULL(frt_coin_01_a8);
	DELE_PTR_FULL(trs_gold_ingot_01_c2);
	DELE_PTR_FULL(frt_coin_01_a7);
	DELE_PTR_FULL(frt_coin_01_a6);
	DELE_PTR_FULL(frt_coin_01_a5);
	DELE_PTR_FULL(frt_coin_01_a4);
	DELE_PTR_FULL(frt_coin_01_a3);
	DELE_PTR_FULL(trs_gold_ingot_01_c1);
	DELE_PTR_FULL(frt_coin_01_a2);
	DELE_PTR_FULL(frt_coin_01_a1);
	DELE_PTR_FULL(trs_gold_ingot_01_a4);
	DELE_PTR_FULL(trs_gold_ingot_01_a3);
	DELE_PTR_FULL(trs_gold_ingot_01_a2);
	DELE_PTR_FULL(trs_gold_ingot_01_a1);
	DELE_PTR_FULL(trs_money_sack_medium_01_a);
	DELE_PTR_FULL(trs_gold_ingot_01_c);
	DELE_PTR_FULL(trs_gold_ingot_01_b);
	DELE_PTR_FULL(trs_gold_ingot_01_a);
	DELE_PTR_FULL(frt_coin_01_a);
	DELE_PTR_FULL(cap_desk_model_gld_01_a);
	DELE_PTR_FULL(con_cover_page_gld_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Name: SoT, Version: 2.2.1.1

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

// Function BP_tavern_frontend_bar_01_a.BP_tavern_frontend_bar_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_tavern_frontend_bar_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_tavern_frontend_bar_01_a.BP_tavern_frontend_bar_01_a_C.UserConstructionScript");

	ABP_tavern_frontend_bar_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_tavern_frontend_bar_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bld_tvn_post_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_03_a2, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem5, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(cmn_candle_01_c3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_arches_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(bld_tvn_bar_top_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(tls_tankard_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(tls_tankard_02_a2, UStaticMeshComponent);
	READ_PTR_FULL(tls_tankard_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(tls_tankard_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_b, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a6, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_barrels_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_racks_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rowboat_oar_01_a_3, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_stool_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_round_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rug_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_beam_sail_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_bar_base_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_door_02_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_door_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_interior_stairs_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_plinth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_grate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_rail_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_fireplace_surround_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tavern_frontend_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_tavern_frontend_bar_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bld_tvn_post_01_a);
	DELE_PTR_FULL(shp_rope_coil_03_a2);
	DELE_PTR_FULL(ParticleSystem5);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(cmn_candle_01_c3);
	DELE_PTR_FULL(cmn_candle_01_a3);
	DELE_PTR_FULL(cmn_candle_01_e2);
	DELE_PTR_FULL(bld_tvn_bar_arches_01_a);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(bld_tvn_bar_top_01_a);
	DELE_PTR_FULL(cmn_wheel_01_a);
	DELE_PTR_FULL(tls_tankard_01_b2);
	DELE_PTR_FULL(tls_tankard_02_a2);
	DELE_PTR_FULL(tls_tankard_01_b1);
	DELE_PTR_FULL(tls_tankard_02_a);
	DELE_PTR_FULL(cmn_candle_01_e1);
	DELE_PTR_FULL(cmn_candle_01_c1);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_b);
	DELE_PTR_FULL(trs_plate_01_a6);
	DELE_PTR_FULL(trs_plate_01_a5);
	DELE_PTR_FULL(trs_plate_01_a4);
	DELE_PTR_FULL(trs_plate_01_a3);
	DELE_PTR_FULL(trs_plate_01_a2);
	DELE_PTR_FULL(trs_plate_01_a1);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b2);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_a1);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_a);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b1);
	DELE_PTR_FULL(bld_tvn_bar_barrels_01_b);
	DELE_PTR_FULL(bld_tvn_bar_racks_01_a);
	DELE_PTR_FULL(cmn_rowboat_oar_01_a_3);
	DELE_PTR_FULL(gmp_bar_hide_01_a1);
	DELE_PTR_FULL(cmn_stool_01_a2);
	DELE_PTR_FULL(bld_tvn_round_table_01_a);
	DELE_PTR_FULL(bld_tvn_table_01_a);
	DELE_PTR_FULL(cmn_rug_01_a1);
	DELE_PTR_FULL(bld_tvn_rug_01_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(bld_tvn_beam_sail_cloth_01_a);
	DELE_PTR_FULL(bld_tvn_bar_base_01_a);
	DELE_PTR_FULL(bld_tvn_post_01_c1);
	DELE_PTR_FULL(bld_tvn_post_01_c);
	DELE_PTR_FULL(bld_shop_door_02_a1);
	DELE_PTR_FULL(bld_shop_door_02_a);
	DELE_PTR_FULL(bld_tvn_interior_stairs_01_b);
	DELE_PTR_FULL(bld_tvn_fireplace_plinth_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_grate_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_rail_01_a);
	DELE_PTR_FULL(bld_tvn_fireplace_surround_01_a);
	DELE_PTR_FULL(bld_tavern_frontend_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

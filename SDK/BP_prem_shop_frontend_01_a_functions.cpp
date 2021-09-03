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

// Function BP_prem_shop_frontend_01_a.BP_prem_shop_frontend_01_a_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_prem_shop_frontend_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_prem_shop_frontend_01_a.BP_prem_shop_frontend_01_a_C.UserConstructionScript");

	ABP_prem_shop_frontend_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_prem_shop_frontend_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(bld_prem_frontend_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(bld_tvn_post_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_par_weathervane_01_c, UStaticMeshComponent);
	READ_PTR_FULL(ptn_resu_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(ptn_resu_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(ptn_resu_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(ptn_resu_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_rack_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_rope_details_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_table_bsp_01_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_bld_pot_shop_boiler_01_a, UChildActorComponent);
	READ_PTR_FULL(cmn_animal_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e1, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_stor_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_trunk_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_pin_board_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_head_stand_01_a, UStaticMeshComponent);
	READ_PTR_FULL(ptn_pois_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(ptn_pois_01_b, UStaticMeshComponent);
	READ_PTR_FULL(tls_lantern_01_a3, USkeletalMeshComponent);
	READ_PTR_FULL(tls_lantern_01_a2, USkeletalMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bottle_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_burner_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_sideboard_03_a, UStaticMeshComponent);
	READ_PTR_FULL(fod_rum_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bottle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_map_rolls_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_shelves_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_prem_shop_frontend_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(bld_prem_frontend_01_a);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(bld_tvn_post_01_d);
	DELE_PTR_FULL(bld_par_weathervane_01_c);
	DELE_PTR_FULL(ptn_resu_01_a3);
	DELE_PTR_FULL(ptn_resu_01_a2);
	DELE_PTR_FULL(ptn_resu_01_a1);
	DELE_PTR_FULL(ptn_resu_01_a);
	DELE_PTR_FULL(bld_pot_shop_rack_01_a);
	DELE_PTR_FULL(cmn_candle_01_e2);
	DELE_PTR_FULL(cmn_candle_01_c1);
	DELE_PTR_FULL(cmn_clay_vase_02_a);
	DELE_PTR_FULL(bld_prem_shop_rope_details_01_b);
	DELE_PTR_FULL(bld_pot_shop_table_bsp_01_a);
	DELE_PTR_FULL(BP_bld_pot_shop_boiler_01_a);
	DELE_PTR_FULL(cmn_animal_cage_01_a);
	DELE_PTR_FULL(cmn_candle_01_e1);
	DELE_PTR_FULL(gmp_bar_stor_01_a);
	DELE_PTR_FULL(cap_cabin_trunk_cloth_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(bld_shop_wood_box_02_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(cap_cabin_books_aged_03_a1);
	DELE_PTR_FULL(cap_cabin_books_03_a1);
	DELE_PTR_FULL(cap_cabin_books_aged_01_a);
	DELE_PTR_FULL(cap_cabin_books_aged_03_a);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(cmn_moneybag_01_a1);
	DELE_PTR_FULL(cmn_clay_vase_01_b);
	DELE_PTR_FULL(bld_enc_shop_pin_board_01_a);
	DELE_PTR_FULL(bld_cls_shop_head_stand_01_a);
	DELE_PTR_FULL(ptn_pois_01_b1);
	DELE_PTR_FULL(ptn_pois_01_b);
	DELE_PTR_FULL(tls_lantern_01_a3);
	DELE_PTR_FULL(tls_lantern_01_a2);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_b);
	DELE_PTR_FULL(cmn_bottle_01_a1);
	DELE_PTR_FULL(bld_enc_shop_burner_pot_01_a);
	DELE_PTR_FULL(bld_int_large_sideboard_03_a);
	DELE_PTR_FULL(fod_rum_01_a);
	DELE_PTR_FULL(cmn_bottle_01_a);
	DELE_PTR_FULL(cmn_moneybag_01_a);
	DELE_PTR_FULL(cmn_clay_vase_01_a);
	DELE_PTR_FULL(cmn_clay_pot_01_a);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(cap_cabin_map_rolls_01_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(cap_cabin_curtain_03_a);
	DELE_PTR_FULL(bld_int_small_shelves_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

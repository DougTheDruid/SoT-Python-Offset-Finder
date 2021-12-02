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
//		Name   -> Function BP_prem_shop_wld_01_a.BP_prem_shop_wld_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_prem_shop_wld_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_prem_shop_wld_01_a.BP_prem_shop_wld_01_a_C.UserConstructionScript");

	ABP_prem_shop_wld_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_prem_shop_wld_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(CompanyRegion, UCompanyRegionComponent);
	READ_PTR_FULL(tls_wld_torch_skull_b, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_Orb_light_a, UStaticMeshComponent);
	READ_PTR_FULL(PointLight15, UPointLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(PointLight14, UPointLightComponent);
	READ_PTR_FULL(PointLight13, UPointLightComponent);
	READ_PTR_FULL(PointLight12, UPointLightComponent);
	READ_PTR_FULL(PointLight10, UPointLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PointLight9, UPointLightComponent);
	READ_PTR_FULL(PointLight7, UPointLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PointLight6, UPointLightComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(AnimalSack, UStaticMeshComponent);
	READ_PTR_FULL(Pot, UStaticMeshComponent);
	READ_PTR_FULL(Banana_Sack, UStaticMeshComponent);
	READ_PTR_FULL(Boat2, UStaticMeshComponent);
	READ_PTR_FULL(fod_banana_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Book3, UStaticMeshComponent);
	READ_PTR_FULL(Book2, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(RopeExterior, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(Bottle5, UStaticMeshComponent);
	READ_PTR_FULL(Mannequin2, UStaticMeshComponent);
	READ_PTR_FULL(Book, UStaticMeshComponent);
	READ_PTR_FULL(Sidetable, UStaticMeshComponent);
	READ_PTR_FULL(Moneysack2, UStaticMeshComponent);
	READ_PTR_FULL(Moneysack1, UStaticMeshComponent);
	READ_PTR_FULL(DrapesRoof, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher4, UStaticMeshComponent);
	READ_PTR_FULL(WoodPole2, UStaticMeshComponent);
	READ_PTR_FULL(WoodPole1, UStaticMeshComponent);
	READ_PTR_FULL(Ladder4, UStaticMeshComponent);
	READ_PTR_FULL(Shelf1, UStaticMeshComponent);
	READ_PTR_FULL(Bananas1, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher2, UStaticMeshComponent);
	READ_PTR_FULL(Ladder3, UStaticMeshComponent);
	READ_PTR_FULL(Ladder2, UStaticMeshComponent);
	READ_PTR_FULL(Platform, UStaticMeshComponent);
	READ_PTR_FULL(Ladder1, UStaticMeshComponent);
	READ_PTR_FULL(Collar1, UStaticMeshComponent);
	READ_PTR_FULL(Hooks2, UStaticMeshComponent);
	READ_PTR_FULL(Hooks1, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher3, UStaticMeshComponent);
	READ_PTR_FULL(Sack_Banana2, UStaticMeshComponent);
	READ_PTR_FULL(Sack_Banana, UStaticMeshComponent);
	READ_PTR_FULL(Sack_Banana3, UStaticMeshComponent);
	READ_PTR_FULL(Mannequin, UStaticMeshComponent);
	READ_PTR_FULL(Dreamcatcher1, UStaticMeshComponent);
	READ_PTR_FULL(BP_wil_monkey_big_04, UChildActorComponent);
	READ_PTR_FULL(BP_wil_parrot_04, UChildActorComponent);
	READ_PTR_FULL(bld_shop_sign_ancient_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bottle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_animal_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_bird_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bird_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_rope_details_01_d, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(PointLight8, UPointLightComponent);
	READ_PTR_FULL(bp_lantern_hook_01_a, UChildActorComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kra_shark_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_table_wld_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_wilds_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_prem_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_shelf_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_shelf_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_aged_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_books_03_a, UStaticMeshComponent);
	READ_PTR_FULL(trs_coins_01_a_coin_2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_broken_shovel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_clay_vase_01_b, UStaticMeshComponent);
	READ_PTR_FULL(trs_plate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_dice_kra_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_dice_01_e, UStaticMeshComponent);
	READ_PTR_FULL(gmp_dice_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_pin_board_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_burner_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_sideboard_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_moneybag_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_step_ladder_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_par_weathervane_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_post_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_shelves_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_frame_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_chimney_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_gate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_fence_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_pot_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_prem_shop_wld_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(CompanyRegion);
	DELE_PTR_FULL(tls_wld_torch_skull_b);
	DELE_PTR_FULL(tls_wld_Orb_light_a);
	DELE_PTR_FULL(PointLight15);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(PointLight14);
	DELE_PTR_FULL(PointLight13);
	DELE_PTR_FULL(PointLight12);
	DELE_PTR_FULL(PointLight10);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PointLight9);
	DELE_PTR_FULL(PointLight7);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PointLight6);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(AnimalSack);
	DELE_PTR_FULL(Pot);
	DELE_PTR_FULL(Banana_Sack);
	DELE_PTR_FULL(Boat2);
	DELE_PTR_FULL(fod_banana_01_a);
	DELE_PTR_FULL(Book3);
	DELE_PTR_FULL(Book2);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(RopeExterior);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(Bottle5);
	DELE_PTR_FULL(Mannequin2);
	DELE_PTR_FULL(Book);
	DELE_PTR_FULL(Sidetable);
	DELE_PTR_FULL(Moneysack2);
	DELE_PTR_FULL(Moneysack1);
	DELE_PTR_FULL(DrapesRoof);
	DELE_PTR_FULL(Dreamcatcher4);
	DELE_PTR_FULL(WoodPole2);
	DELE_PTR_FULL(WoodPole1);
	DELE_PTR_FULL(Ladder4);
	DELE_PTR_FULL(Shelf1);
	DELE_PTR_FULL(Bananas1);
	DELE_PTR_FULL(Dreamcatcher2);
	DELE_PTR_FULL(Ladder3);
	DELE_PTR_FULL(Ladder2);
	DELE_PTR_FULL(Platform);
	DELE_PTR_FULL(Ladder1);
	DELE_PTR_FULL(Collar1);
	DELE_PTR_FULL(Hooks2);
	DELE_PTR_FULL(Hooks1);
	DELE_PTR_FULL(Dreamcatcher3);
	DELE_PTR_FULL(Sack_Banana2);
	DELE_PTR_FULL(Sack_Banana);
	DELE_PTR_FULL(Sack_Banana3);
	DELE_PTR_FULL(Mannequin);
	DELE_PTR_FULL(Dreamcatcher1);
	DELE_PTR_FULL(BP_wil_monkey_big_04);
	DELE_PTR_FULL(BP_wil_parrot_04);
	DELE_PTR_FULL(bld_shop_sign_ancient_01_a);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(cmn_bottle_01_a);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(cmn_animal_cage_01_a);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(bld_cls_shop_bird_cage_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_a1);
	DELE_PTR_FULL(cmn_moneybag_01_a2);
	DELE_PTR_FULL(cmn_bird_cage_01_a);
	DELE_PTR_FULL(bld_prem_shop_rope_details_01_d);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(PointLight8);
	DELE_PTR_FULL(bp_lantern_hook_01_a);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(gmp_bar_hide_01_a4);
	DELE_PTR_FULL(bld_enc_shop_sign_01_a);
	DELE_PTR_FULL(cap_cage_01_a);
	DELE_PTR_FULL(shp_kra_shark_rug_01_a);
	DELE_PTR_FULL(bld_pot_shop_table_wld_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a1);
	DELE_PTR_FULL(bld_prem_shop_wilds_details_01_a);
	DELE_PTR_FULL(bld_prem_shop_01_a);
	DELE_PTR_FULL(bld_int_large_shelf_03_a1);
	DELE_PTR_FULL(bld_int_large_shelf_03_a);
	DELE_PTR_FULL(cap_cabin_books_aged_03_a);
	DELE_PTR_FULL(cap_cabin_books_02_a);
	DELE_PTR_FULL(cap_cabin_books_03_a);
	DELE_PTR_FULL(trs_coins_01_a_coin_2);
	DELE_PTR_FULL(cmn_broken_shovel_01_a);
	DELE_PTR_FULL(cmn_clay_vase_01_b);
	DELE_PTR_FULL(trs_plate_01_a);
	DELE_PTR_FULL(gmp_dice_kra_01_a);
	DELE_PTR_FULL(gmp_dice_01_e);
	DELE_PTR_FULL(gmp_dice_01_d);
	DELE_PTR_FULL(bld_enc_shop_pin_board_01_a);
	DELE_PTR_FULL(bld_enc_shop_burner_pot_01_a);
	DELE_PTR_FULL(bld_int_large_sideboard_03_a);
	DELE_PTR_FULL(cmn_moneybag_01_a);
	DELE_PTR_FULL(cmn_step_ladder_01_a);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(bld_par_weathervane_01_b);
	DELE_PTR_FULL(bld_tvn_post_01_c);
	DELE_PTR_FULL(cap_cabin_curtain_03_a);
	DELE_PTR_FULL(bld_int_small_shelves_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_frame_01_a);
	DELE_PTR_FULL(bld_pot_shop_roof_beam_01_a);
	DELE_PTR_FULL(bld_pot_shop_chimney_01_a);
	DELE_PTR_FULL(bld_pot_gate_01_a);
	DELE_PTR_FULL(bld_pot_fence_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a3);
	DELE_PTR_FULL(bld_pot_hatch_01_a);
	DELE_PTR_FULL(bld_pot_shop_door_01_a);
	DELE_PTR_FULL(bld_pot_shop_window_01_a2);
	DELE_PTR_FULL(bld_pot_shop_window_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

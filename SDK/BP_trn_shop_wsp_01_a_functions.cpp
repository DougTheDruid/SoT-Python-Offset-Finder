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
//		Name   -> Function BP_trn_shop_wsp_01_a.BP_trn_shop_wsp_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_trn_shop_wsp_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_trn_shop_wsp_01_a.BP_trn_shop_wsp_01_a_C.UserConstructionScript");

	ABP_trn_shop_wsp_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_trn_shop_wsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(wsp_trn_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_trn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh35, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh34, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_hanging_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(BP_MusicBox, UChildActorComponent);
	READ_PTR_FULL(BP_IslandEquipmentChest, UChildActorComponent);
	READ_PTR_FULL(wsp_bottle_burner, UChildActorComponent);
	READ_PTR_FULL(StaticMesh33, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh32, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh31, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh30, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(StaticMesh29, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh28, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh27, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh26, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh25, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh24, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(cmn_wheel_01_a__cmn_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(wsp_vine_02_g, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_d, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_02_d, UStaticMeshComponent);
	READ_PTR_FULL(wsp_plant_ball_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_08_c, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(tls_shovel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_ship_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_oar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabin_curtain_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cap_cabinet_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(msc_voice_box_01_a, USkeletalMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_rowboat_oar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_shelves_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_sideboard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(cmn_lantern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_04_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_looted_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b2, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_trn_shop_wsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(wsp_trn_shop_dressing_01_b);
	DELE_PTR_FULL(wsp_trn_shop_dressing_01_a);
	DELE_PTR_FULL(StaticMesh35);
	DELE_PTR_FULL(StaticMesh34);
	DELE_PTR_FULL(bld_trn_shop_hanging_sign_01_a);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(BP_MusicBox);
	DELE_PTR_FULL(BP_IslandEquipmentChest);
	DELE_PTR_FULL(wsp_bottle_burner);
	DELE_PTR_FULL(StaticMesh33);
	DELE_PTR_FULL(StaticMesh32);
	DELE_PTR_FULL(StaticMesh31);
	DELE_PTR_FULL(StaticMesh30);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(StaticMesh29);
	DELE_PTR_FULL(StaticMesh28);
	DELE_PTR_FULL(StaticMesh27);
	DELE_PTR_FULL(StaticMesh26);
	DELE_PTR_FULL(StaticMesh25);
	DELE_PTR_FULL(StaticMesh24);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(cmn_wheel_01_a__cmn_wheel_01_a);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(wsp_vine_02_g);
	DELE_PTR_FULL(wsp_vine_01_a);
	DELE_PTR_FULL(wsp_vine_01_b);
	DELE_PTR_FULL(wsp_vine_01_d);
	DELE_PTR_FULL(wsp_vine_02_d);
	DELE_PTR_FULL(wsp_plant_ball_01_a);
	DELE_PTR_FULL(wsp_bush_08_c);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(tls_shovel_01_a);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_03_a);
	DELE_PTR_FULL(bld_out_shop_roof_ship_wheel_01_a);
	DELE_PTR_FULL(bld_shop_drapes_03_a);
	DELE_PTR_FULL(cmn_oar_01_a);
	DELE_PTR_FULL(cap_cabin_curtain_03_a);
	DELE_PTR_FULL(cap_cabinet_01_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(msc_voice_box_01_a);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(bld_shop_wood_box_01_a);
	DELE_PTR_FULL(cmn_rowboat_oar_01_a);
	DELE_PTR_FULL(bld_int_small_shelf_01_a);
	DELE_PTR_FULL(bld_int_small_shelves_03_a);
	DELE_PTR_FULL(bld_int_small_sideboard_01_a);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(cmn_lantern_01_a);
	DELE_PTR_FULL(bld_shop_drapes_04_a);
	DELE_PTR_FULL(bld_shop_drapes_02_a);
	DELE_PTR_FULL(cmn_looted_box_01_a);
	DELE_PTR_FULL(cmn_wooden_crate_01_a);
	DELE_PTR_FULL(gmp_bar_hide_01_a);
	DELE_PTR_FULL(shp_kitchen_shelf_02_a);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(bld_trn_roof_beam_01_a);
	DELE_PTR_FULL(bld_trn_shop_window_01_b2);
	DELE_PTR_FULL(bld_trn_shop_window_01_b1);
	DELE_PTR_FULL(bld_trn_shop_window_01_b);
	DELE_PTR_FULL(bld_trn_shop_door_01_a);
	DELE_PTR_FULL(bld_trn_shop_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

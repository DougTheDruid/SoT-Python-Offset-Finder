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
//		Name   -> Function BP_out_shop_wld_01_a.BP_out_shop_wld_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_out_shop_wld_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_out_shop_wld_01_a.BP_out_shop_wld_01_a_C.UserConstructionScript");

	ABP_out_shop_wld_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_out_shop_wld_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bld_out_shop_rail_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_steps_01, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_front_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_anchor_02_a, UStaticMeshComponent);
	READ_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_03_a_3, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorage_Barrel_Outpost_3, UChildActorComponent);
	READ_PTR_FULL(BP_IslandStorage_Barrel_Outpost, UChildActorComponent);
	READ_PTR_FULL(PointLight7, UPointLightComponent);
	READ_PTR_FULL(PointLight6, UPointLightComponent);
	READ_PTR_FULL(StaticMesh17, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(StaticMesh15, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_9, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_8, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_7, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_6, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_2, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_3, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_4, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a_5, UStaticMeshComponent);
	READ_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_01_a, UChildActorComponent);
	READ_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_02_a, UChildActorComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(vfx_tavern_candle_looping_01, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(shp_rope_coil_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_workbench_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_ship_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_lantern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_wilds_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bucket_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_02_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_int_hook_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bucket_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a1, UStaticMeshComponent);
	READ_PTR_FULL(shp_rope_coil_05_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hatch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_drapes_rear_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hanging_wood_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_hook_bands_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_plank_netting_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_barrel_netting_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_drapes_front_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_winch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_out_shop_roof_barrels_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_out_shop_wld_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bld_out_shop_rail_01);
	DELE_PTR_FULL(bld_out_shop_steps_01);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(bld_out_shop_front_sign_01_a);
	DELE_PTR_FULL(shp_anchor_02_a);
	DELE_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_03_a_3);
	DELE_PTR_FULL(BP_IslandStorage_Barrel_Outpost_3);
	DELE_PTR_FULL(BP_IslandStorage_Barrel_Outpost);
	DELE_PTR_FULL(PointLight7);
	DELE_PTR_FULL(PointLight6);
	DELE_PTR_FULL(StaticMesh17);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(StaticMesh15);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(gmp_bar_hide_01_a_9);
	DELE_PTR_FULL(gmp_bar_hide_01_a_8);
	DELE_PTR_FULL(gmp_bar_hide_01_a_7);
	DELE_PTR_FULL(gmp_bar_hide_01_a_6);
	DELE_PTR_FULL(gmp_bar_hide_01_a_2);
	DELE_PTR_FULL(gmp_bar_hide_01_a_3);
	DELE_PTR_FULL(gmp_bar_hide_01_a_4);
	DELE_PTR_FULL(gmp_bar_hide_01_a_5);
	DELE_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_01_a);
	DELE_PTR_FULL(BP_OutpostCrate_bld_shop_wood_box_02_a);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(vfx_tavern_candle_looping_01);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(shp_rope_coil_03_a);
	DELE_PTR_FULL(bld_out_shop_workbench_01_a);
	DELE_PTR_FULL(bld_out_shop_roof_ship_wheel_01_a);
	DELE_PTR_FULL(cmn_lantern_01_a);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a);
	DELE_PTR_FULL(cmn_skeleton_head_01_a);
	DELE_PTR_FULL(bld_out_shop_wilds_details_01_a);
	DELE_PTR_FULL(cmn_bucket_01_a1);
	DELE_PTR_FULL(shp_rope_coil_02_a);
	DELE_PTR_FULL(shp_int_hook_01_a);
	DELE_PTR_FULL(shp_kitchen_shelf_01_a);
	DELE_PTR_FULL(cmn_bucket_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_03_a1);
	DELE_PTR_FULL(shp_rope_coil_05_a);
	DELE_PTR_FULL(bld_out_shop_hatch_01_a);
	DELE_PTR_FULL(bld_out_shop_drapes_rear_01_a);
	DELE_PTR_FULL(bld_out_shop_hanging_wood_01_a);
	DELE_PTR_FULL(bld_out_shop_hook_bands_01_a);
	DELE_PTR_FULL(bld_out_shop_plank_netting_01_a);
	DELE_PTR_FULL(bld_out_shop_barrel_netting_01_a);
	DELE_PTR_FULL(bld_out_shop_drapes_front_01_a);
	DELE_PTR_FULL(bld_out_shop_winch_01_a);
	DELE_PTR_FULL(bld_out_shop_roof_beam_01_a);
	DELE_PTR_FULL(bld_out_shop_roof_barrels_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_cls_shop_wsp_01_a.BP_cls_shop_wsp_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cls_shop_wsp_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cls_shop_wsp_01_a.BP_cls_shop_wsp_01_a_C.UserConstructionScript");

	ABP_cls_shop_wsp_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_cls_shop_wsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(bld_cls_shop_mannequin_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_mannequin_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(wsp_cls_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_cls_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(vfx_dust_01_air, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(BP_IslandVanityChest, UChildActorComponent);
	READ_PTR_FULL(StaticMesh24, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(BP_IslandStorageBarrel_Outpost_2, UChildActorComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(StaticMesh23, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(wsp_light_plate_a, UChildActorComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(wsp_bottle_burner, UChildActorComponent);
	READ_PTR_FULL(wsp_light_large_pot, UChildActorComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(wsp_vine_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_fern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_04_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_debris_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bucket_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_step_ladder_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_bird_cage_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_large_shelf_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_tvn_animal_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_c, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cmn_bookcase_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_clothes_lines_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_hanging_cloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_side_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_main_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_cls_shop_wsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(bld_cls_shop_mannequin_01_a1);
	DELE_PTR_FULL(bld_cls_shop_mannequin_01_a);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(wsp_cls_shop_dressing_01_b);
	DELE_PTR_FULL(wsp_cls_shop_dressing_01_a);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(vfx_dust_01_air);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(BP_IslandVanityChest);
	DELE_PTR_FULL(StaticMesh24);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(BP_IslandStorageBarrel_Outpost_2);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(StaticMesh23);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(wsp_light_plate_a);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(wsp_bottle_burner);
	DELE_PTR_FULL(wsp_light_large_pot);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(wsp_vine_01_b);
	DELE_PTR_FULL(wsp_bush_fern_01_a);
	DELE_PTR_FULL(bld_shop_drapes_04_a);
	DELE_PTR_FULL(bld_shop_drapes_02_a);
	DELE_PTR_FULL(cmn_barrel_debris_03_a);
	DELE_PTR_FULL(cmn_barrel_debris_01_a);
	DELE_PTR_FULL(cmn_bucket_01_a);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_02_a);
	DELE_PTR_FULL(cmn_step_ladder_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_a);
	DELE_PTR_FULL(bld_enc_shop_rug_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_b);
	DELE_PTR_FULL(bld_cls_shop_hanging_rope_01_a);
	DELE_PTR_FULL(bld_cls_shop_bird_cage_01_a);
	DELE_PTR_FULL(bld_int_large_shelf_03_a);
	DELE_PTR_FULL(bld_tvn_animal_rug_01_a);
	DELE_PTR_FULL(wsp_vine_01_c);
	DELE_PTR_FULL(wsp_vine_01_d);
	DELE_PTR_FULL(cmn_bookcase_01_a);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(bld_cls_shp_sign_01_a);
	DELE_PTR_FULL(bld_cls_shp_stairs_01_a);
	DELE_PTR_FULL(bld_cls_shop_door_01_a);
	DELE_PTR_FULL(bld_cls_shop_window_01_a2);
	DELE_PTR_FULL(bld_cls_shop_window_01_a1);
	DELE_PTR_FULL(bld_cls_shop_window_01_a);
	DELE_PTR_FULL(bld_cls_shp_clothes_lines_01_a);
	DELE_PTR_FULL(bld_cls_shp_hanging_cloth_01_a);
	DELE_PTR_FULL(bld_cls_shp_side_roof_01_a);
	DELE_PTR_FULL(bld_cls_shp_main_roof_01_a);
	DELE_PTR_FULL(bld_cls_shop_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

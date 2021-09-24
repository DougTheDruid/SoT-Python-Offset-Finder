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
//		Name   -> Function BP_wpn_shop_wsp_01_a.BP_wpn_shop_wsp_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_wpn_shop_wsp_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wpn_shop_wsp_01_a.BP_wpn_shop_wsp_01_a_C.UserConstructionScript");

	ABP_wpn_shop_wsp_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_wpn_shop_wsp_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(cmn_ammo_crate_01_b_vc, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(wsp_wpn_shop_dressing_01_c, UStaticMeshComponent);
	READ_PTR_FULL(wsp_wpn_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wsp_wpn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(vfx_dust_01_air, UParticleSystemComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(BP_IslandWeaponsChest, UChildActorComponent);
	READ_PTR_FULL(bp_lantern_hook_01_a, UChildActorComponent);
	READ_PTR_FULL(wsp_light_plate_b, UChildActorComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(SpotLight7, USpotLightComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_03_a, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(wsp_vine_01_c, UStaticMeshComponent);
	READ_PTR_FULL(wsp_vine_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_fern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_bush_08_c, UStaticMeshComponent);
	READ_PTR_FULL(shp_pistol_rack_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_small_sideboard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_hanging_target_broken_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_furnace_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_doorframe_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_hanging_target_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c2, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_lantern_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_small_balcony_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_pillars_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_wpn_shop_wsp_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(cmn_ammo_crate_01_b_vc);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(wsp_wpn_shop_dressing_01_c);
	DELE_PTR_FULL(wsp_wpn_shop_dressing_01_b);
	DELE_PTR_FULL(wsp_wpn_shop_dressing_01_a);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(vfx_dust_01_air);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(BP_IslandWeaponsChest);
	DELE_PTR_FULL(bp_lantern_hook_01_a);
	DELE_PTR_FULL(wsp_light_plate_b);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(SpotLight7);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_03_a);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(wsp_vine_01_c);
	DELE_PTR_FULL(wsp_vine_01_b);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(wsp_bush_fern_01_a);
	DELE_PTR_FULL(wsp_bush_08_c);
	DELE_PTR_FULL(shp_pistol_rack_01_a);
	DELE_PTR_FULL(bld_int_small_sideboard_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_02_a);
	DELE_PTR_FULL(bld_wpn_shop_hanging_target_broken_01_a);
	DELE_PTR_FULL(bld_shop_drapes_01_a);
	DELE_PTR_FULL(bld_wpn_shop_furnace_01_a);
	DELE_PTR_FULL(bld_wpn_shop_table_01_a);
	DELE_PTR_FULL(bld_wpn_shop_doorframe_01_a);
	DELE_PTR_FULL(bld_wpn_shop_01_a);
	DELE_PTR_FULL(bld_wpn_shop_hanging_target_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_b);
	DELE_PTR_FULL(bld_wpn_shop_window_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c2);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c);
	DELE_PTR_FULL(bld_wpn_shop_lantern_01_b);
	DELE_PTR_FULL(bld_wpn_roof_beam_01_a);
	DELE_PTR_FULL(bld_shop_small_balcony_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_c1);
	DELE_PTR_FULL(bld_wpn_shop_window_01_b1);
	DELE_PTR_FULL(bld_wpn_shop_window_01_a1);
	DELE_PTR_FULL(bld_wpn_shop_sign_01_a);
	DELE_PTR_FULL(bld_wpn_shop_pillars_01_a);
	DELE_PTR_FULL(bld_wpn_shop_door_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

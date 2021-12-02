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
//		Name   -> Function BP_wpn_shop_wld_01_a.BP_wpn_shop_wld_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_wpn_shop_wld_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_wpn_shop_wld_01_a.BP_wpn_shop_wld_01_a_C.UserConstructionScript");

	ABP_wpn_shop_wld_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_wpn_shop_wld_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(Collision_02, UBoxComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(wld_wpn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(BP_IslandWeaponsChest, UChildActorComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(ChildActor3, UChildActorComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_Orb_light_a1, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_torch_skull_a, UChildActorComponent);
	READ_PTR_FULL(vfx_fireplace_tavern, UParticleSystemComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(shp_kra_skin_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_furnace_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_hanging_target_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_doorframe_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_lantern_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_wpn_shop_wilds_details_01_a, UStaticMeshComponent);
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

void ABP_wpn_shop_wld_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(Collision_02);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(wld_wpn_shop_dressing_01_a);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(BP_IslandWeaponsChest);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(ChildActor3);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(tls_wld_Orb_light_a1);
	DELE_PTR_FULL(tls_wld_torch_skull_a);
	DELE_PTR_FULL(vfx_fireplace_tavern);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(shp_kra_skin_rug_01_a);
	DELE_PTR_FULL(bld_wpn_shop_window_01_a);
	DELE_PTR_FULL(bld_wpn_shop_table_01_a);
	DELE_PTR_FULL(bld_shop_wood_box_02_a);
	DELE_PTR_FULL(bld_wpn_shop_furnace_01_a);
	DELE_PTR_FULL(bld_wpn_shop_hanging_target_01_a);
	DELE_PTR_FULL(bld_wpn_shop_01_a);
	DELE_PTR_FULL(bld_wpn_shop_doorframe_01_b);
	DELE_PTR_FULL(bld_wpn_shop_lantern_01_b);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a1);
	DELE_PTR_FULL(cmn_skeleton_head_01_a1);
	DELE_PTR_FULL(cmn_skeleton_head_01_b);
	DELE_PTR_FULL(cmn_skeleton_head_01_a);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a);
	DELE_PTR_FULL(bld_wpn_shop_wilds_details_01_a);
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

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
//		Name   -> Function BP_cls_shop_wld_01_a.BP_cls_shop_wld_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_cls_shop_wld_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_cls_shop_wld_01_a.BP_cls_shop_wld_01_a_C.UserConstructionScript");

	ABP_cls_shop_wld_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_cls_shop_wld_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(bld_cls_shop_mannequin_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(wld_cls_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(wld_cls_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh23, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh21, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh20, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(BP_IslandVanityChest, UChildActorComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor5, UChildActorComponent);
	READ_PTR_FULL(ChildActor4, UChildActorComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(ChildActor3, UChildActorComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(StaticMesh19, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh18, UStaticMeshComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(StaticMesh17, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh16, UStaticMeshComponent);
	READ_PTR_FULL(tls_wld_Orb_light_a, UStaticMeshComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(tls_wld_torch_skull_a, UChildActorComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_rope_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_04_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_02_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_stool_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_wash_board_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_tin_tub_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_c, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_dye_pot_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_boots_04_a_R, UStaticMeshComponent);
	READ_PTR_FULL(cmn_boots_04_a_L, UStaticMeshComponent);
	READ_PTR_FULL(cmn_boots_02_a_R, UStaticMeshComponent);
	READ_PTR_FULL(cmn_boots_02_a_L, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_hanging_cloth_03_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kra_shark_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kra_skin_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_wilds_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_stairs_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_window_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shp_main_roof_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_cls_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_cls_shop_wld_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(bld_cls_shop_mannequin_01_a);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(wld_cls_shop_dressing_01_b);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(wld_cls_shop_dressing_01_a);
	DELE_PTR_FULL(StaticMesh23);
	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh21);
	DELE_PTR_FULL(StaticMesh20);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(BP_IslandVanityChest);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(ChildActor5);
	DELE_PTR_FULL(ChildActor4);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(ChildActor3);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(StaticMesh19);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(StaticMesh18);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(StaticMesh17);
	DELE_PTR_FULL(StaticMesh16);
	DELE_PTR_FULL(tls_wld_Orb_light_a);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(tls_wld_torch_skull_a);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(bld_cls_shop_hanging_rope_01_a);
	DELE_PTR_FULL(bld_shop_drapes_03_a);
	DELE_PTR_FULL(bld_shop_drapes_04_a);
	DELE_PTR_FULL(bld_shop_drapes_02_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_c);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_lid_01_b);
	DELE_PTR_FULL(bld_int_stool_01_a);
	DELE_PTR_FULL(bld_cls_shp_wash_board_01_a);
	DELE_PTR_FULL(bld_cls_shp_tin_tub_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_c);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_a);
	DELE_PTR_FULL(bld_cls_shp_dye_pot_01_b);
	DELE_PTR_FULL(cmn_boots_04_a_R);
	DELE_PTR_FULL(cmn_boots_04_a_L);
	DELE_PTR_FULL(cmn_boots_02_a_R);
	DELE_PTR_FULL(cmn_boots_02_a_L);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(bld_cls_shop_hanging_cloth_03_a);
	DELE_PTR_FULL(shp_kra_shark_rug_01_a);
	DELE_PTR_FULL(shp_kra_skin_rug_01_a);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a);
	DELE_PTR_FULL(cmn_skeleton_head_01_b);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(cmn_skeleton_head_01_a);
	DELE_PTR_FULL(bld_cls_shop_wilds_details_01_a);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(bld_cls_shp_sign_01_a);
	DELE_PTR_FULL(bld_cls_shp_stairs_01_a);
	DELE_PTR_FULL(bld_cls_shop_door_01_a);
	DELE_PTR_FULL(bld_cls_shop_window_01_a2);
	DELE_PTR_FULL(bld_cls_shop_window_01_a1);
	DELE_PTR_FULL(bld_cls_shop_window_01_a);
	DELE_PTR_FULL(bld_cls_shp_main_roof_01_a);
	DELE_PTR_FULL(bld_cls_shop_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

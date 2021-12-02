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
//		Name   -> Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Is_Hidden                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_shop_oos_01_a_C::Set_Magic_Box_Hidden(bool Is_Hidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.Set Magic Box Hidden");

	ABP_shop_oos_01_a_C_Set_Magic_Box_Hidden_Params params {};
	params.Is_Hidden = Is_Hidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_shop_oos_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_shop_oos_01_a.BP_shop_oos_01_a_C.UserConstructionScript");

	ABP_shop_oos_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_shop_oos_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(wsp_Oos_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Collision_01, UBoxComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(vfx_candle_01_magic_blue2, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_magic_blue1, UParticleSystemComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_04_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_chicken_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a5, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a3, UStaticMeshComponent);
	READ_PTR_FULL(MagicBox, UChildActorComponent);
	READ_PTR_FULL(bld_int_small_sideboard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_flag_post_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(vfx_mist_furnace_pirate_hideout, UParticleSystemComponent);
	READ_PTR_FULL(vfx_dust_01_air, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_smoke_tavern1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_magic_blue, UParticleSystemComponent);
	READ_PTR_FULL(bld_shop_bone_oos_02_a2, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_05_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_bone_oos_08_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_cloth_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_cloth_walls_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight6, USpotLightComponent);
	READ_PTR_FULL(SpotLight5, USpotLightComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(Box, UBoxComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(wsp_light_large_pot, UChildActorComponent);
	READ_PTR_FULL(vfx_magic_fire_pot, UParticleSystemComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(CompanyRegion, UCompanyRegionComponent);
	READ_PTR_FULL(bld_shop_entrance_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_pillar_symbols_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_kettle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_int_stool_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_enc_shop_burner_pot_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_barrel_salvage_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(cmn_wooden_crate_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_curtain_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_crate_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_skull_barrel_oos_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_shop_oos_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(wsp_Oos_shop_dressing_01_a);
	DELE_PTR_FULL(Collision_01);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(vfx_candle_01_magic_blue2);
	DELE_PTR_FULL(vfx_candle_01_magic_blue1);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(bld_shop_bone_oos_04_a);
	DELE_PTR_FULL(cmn_skeleton_head_chicken_01_a);
	DELE_PTR_FULL(cmn_wooden_crate_01_a5);
	DELE_PTR_FULL(cmn_wooden_crate_01_a4);
	DELE_PTR_FULL(cmn_wooden_crate_01_a3);
	DELE_PTR_FULL(MagicBox);
	DELE_PTR_FULL(bld_int_small_sideboard_01_a);
	DELE_PTR_FULL(bld_flag_post_oos_01_a);
	DELE_PTR_FULL(vfx_mist_furnace_pirate_hideout);
	DELE_PTR_FULL(vfx_dust_01_air);
	DELE_PTR_FULL(vfx_candle_01_smoke_tavern1);
	DELE_PTR_FULL(vfx_candle_01_magic_blue);
	DELE_PTR_FULL(bld_shop_bone_oos_02_a2);
	DELE_PTR_FULL(bld_shop_bone_oos_05_a1);
	DELE_PTR_FULL(bld_shop_bone_oos_08_a);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(bld_shop_table_cloth_oos_01_a);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(cmn_wooden_crate_01_a2);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(bld_shop_cloth_walls_oos_01_a);
	DELE_PTR_FULL(SpotLight6);
	DELE_PTR_FULL(SpotLight5);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(Box);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(wsp_light_large_pot);
	DELE_PTR_FULL(vfx_magic_fire_pot);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(CompanyRegion);
	DELE_PTR_FULL(bld_shop_entrance_oos_01_a);
	DELE_PTR_FULL(bld_shop_pillar_symbols_oos_01_a);
	DELE_PTR_FULL(bld_enc_shop_kettle_01_a);
	DELE_PTR_FULL(bld_int_stool_01_a);
	DELE_PTR_FULL(bld_enc_shop_burner_pot_01_a);
	DELE_PTR_FULL(cmn_barrel_salvage_01_d);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(cmn_wooden_crate_01_a1);
	DELE_PTR_FULL(cmn_wooden_crate_01_a);
	DELE_PTR_FULL(bld_shop_curtain_oos_01_a);
	DELE_PTR_FULL(bld_shop_table_oos_01_a);
	DELE_PTR_FULL(bld_shop_skull_crate_oos_01_a);
	DELE_PTR_FULL(bld_shop_skull_barrel_oos_01_a);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

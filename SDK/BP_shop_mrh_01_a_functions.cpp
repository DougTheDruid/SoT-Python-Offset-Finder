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
//		Name   -> Function BP_shop_mrh_01_a.BP_shop_mrh_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_shop_mrh_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_shop_mrh_01_a.BP_shop_mrh_01_a_C.UserConstructionScript");

	ABP_shop_mrh_01_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_shop_mrh_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(CommodityManifestBook, UChildActorComponent);
	READ_PTR_FULL(bld_prem_shop_plinth_01_b, UStaticMeshComponent);
	READ_PTR_FULL(vfx_candle_01_tavern_02, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_flickering_tavern_small_02, UParticleSystemComponent);
	READ_PTR_FULL(cmn_candle_01_b, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_d_02, UStaticMeshComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(vfx_candle_01_tavern1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_flickering_tavern_small, UParticleSystemComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cmp_ships_manifest_mrh_01_e, UStaticMeshComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(bld_shop_mrh_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_mrh_01_f, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_mrh_01_e, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_mrh_01_d, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_mrh_01_c, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight4, USpotLightComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(CompanyRegion, UCompanyRegionComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(bp_light_volume_sphere_orange_a, UChildActorComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(tls_wld_Orb_light_a, UChildActorComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(vfx_candle_01_tavern, UParticleSystemComponent);
	READ_PTR_FULL(bld_shop_globe_mrh_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_par_lantern_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_blackboard_mch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_map_board_mch_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_03_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_wood_box_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_shop_mrh_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(CommodityManifestBook);
	DELE_PTR_FULL(bld_prem_shop_plinth_01_b);
	DELE_PTR_FULL(vfx_candle_01_tavern_02);
	DELE_PTR_FULL(vfx_candle_01_flickering_tavern_small_02);
	DELE_PTR_FULL(cmn_candle_01_b);
	DELE_PTR_FULL(cmn_candle_01_d_02);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(vfx_candle_01_tavern1);
	DELE_PTR_FULL(vfx_candle_01_flickering_tavern_small);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_d);
	DELE_PTR_FULL(cmp_ships_manifest_mrh_01_e);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(bld_shop_mrh_01_b);
	DELE_PTR_FULL(bld_shop_mrh_01_f);
	DELE_PTR_FULL(bld_shop_mrh_01_e);
	DELE_PTR_FULL(bld_shop_mrh_01_d);
	DELE_PTR_FULL(bld_shop_mrh_01_c);
	DELE_PTR_FULL(SpotLight4);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(CompanyRegion);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(bp_light_volume_sphere_orange_a);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(tls_wld_Orb_light_a);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(vfx_candle_01_tavern);
	DELE_PTR_FULL(bld_shop_globe_mrh_01_a);
	DELE_PTR_FULL(bld_par_lantern_01_a);
	DELE_PTR_FULL(bld_shop_blackboard_mch_01_a);
	DELE_PTR_FULL(bld_shop_map_board_mch_01_a);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(bld_shop_wood_box_03_a);
	DELE_PTR_FULL(bld_shop_wood_box_01_a);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

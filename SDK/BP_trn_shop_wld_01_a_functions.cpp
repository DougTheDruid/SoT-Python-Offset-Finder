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
//		Name   -> Function BP_trn_shop_wld_01_a.BP_trn_shop_wld_01_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_trn_shop_wld_01_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_trn_shop_wld_01_a.BP_trn_shop_wld_01_a_C.UserConstructionScript");

	ABP_trn_shop_wld_01_a_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_trn_shop_wld_01_a_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(PetHangoutSpot, UPetHangoutSpotComponent);
	READ_PTR_FULL(wld_trn_shop_dressing_01_b, UStaticMeshComponent);
	READ_PTR_FULL(wld_trn_shop_dressing_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh29, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh24, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_hanging_sign_01_a, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight3, USpotLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(BP_MusicBox, UChildActorComponent);
	READ_PTR_FULL(BP_IslandEquipmentChest, UChildActorComponent);
	READ_PTR_FULL(StaticMesh28, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh27, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh26, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh25, UStaticMeshComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(ChildActor2, UChildActorComponent);
	READ_PTR_FULL(ChildActor1, UChildActorComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PointLight9, UPointLightComponent);
	READ_PTR_FULL(PointLight8, UPointLightComponent);
	READ_PTR_FULL(PointLight7, UPointLightComponent);
	READ_PTR_FULL(PointLight6, UPointLightComponent);
	READ_PTR_FULL(PointLight5, UPointLightComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem20, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem19, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem18, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem17, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem16, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem15, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem14, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem13, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem12, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem11, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem10, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem9, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem8, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem7, UParticleSystemComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem6, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem5, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem4, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(StaticMesh23, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh22, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh31, UStaticMeshComponent);
	READ_PTR_FULL(AudioSpace, UChildActorComponent);
	READ_PTR_FULL(bld_shop_drapes_03_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_oar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh19, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh18, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh14, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh13, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh12, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh11, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh10, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh9, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(cap_skull_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_d, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(shp_kra_skin_rug_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kra_wheel_01_a, UStaticMeshComponent);
	READ_PTR_FULL(shp_kitchen_shelf_02_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(gmp_bar_hide_01_a1, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_table_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_shop_drapes_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(cmn_skeleton_head_boar_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_wilds_details_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_roof_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_window_01_b, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_door_01_a, UStaticMeshComponent);
	READ_PTR_FULL(bld_trn_shop_01_a, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_trn_shop_wld_01_a_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(PetHangoutSpot);
	DELE_PTR_FULL(wld_trn_shop_dressing_01_b);
	DELE_PTR_FULL(wld_trn_shop_dressing_01_a);
	DELE_PTR_FULL(StaticMesh29);
	DELE_PTR_FULL(StaticMesh24);
	DELE_PTR_FULL(bld_trn_shop_hanging_sign_01_a);
	DELE_PTR_FULL(SpotLight3);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(BP_MusicBox);
	DELE_PTR_FULL(BP_IslandEquipmentChest);
	DELE_PTR_FULL(StaticMesh28);
	DELE_PTR_FULL(StaticMesh27);
	DELE_PTR_FULL(StaticMesh26);
	DELE_PTR_FULL(StaticMesh25);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(ChildActor2);
	DELE_PTR_FULL(ChildActor1);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PointLight9);
	DELE_PTR_FULL(PointLight8);
	DELE_PTR_FULL(PointLight7);
	DELE_PTR_FULL(PointLight6);
	DELE_PTR_FULL(PointLight5);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(ParticleSystem20);
	DELE_PTR_FULL(ParticleSystem19);
	DELE_PTR_FULL(ParticleSystem18);
	DELE_PTR_FULL(ParticleSystem17);
	DELE_PTR_FULL(ParticleSystem16);
	DELE_PTR_FULL(ParticleSystem15);
	DELE_PTR_FULL(ParticleSystem14);
	DELE_PTR_FULL(ParticleSystem13);
	DELE_PTR_FULL(ParticleSystem12);
	DELE_PTR_FULL(ParticleSystem11);
	DELE_PTR_FULL(ParticleSystem10);
	DELE_PTR_FULL(ParticleSystem9);
	DELE_PTR_FULL(ParticleSystem8);
	DELE_PTR_FULL(ParticleSystem7);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(ParticleSystem6);
	DELE_PTR_FULL(ParticleSystem5);
	DELE_PTR_FULL(ParticleSystem4);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(StaticMesh23);
	DELE_PTR_FULL(StaticMesh22);
	DELE_PTR_FULL(StaticMesh31);
	DELE_PTR_FULL(AudioSpace);
	DELE_PTR_FULL(bld_shop_drapes_03_a);
	DELE_PTR_FULL(cmn_oar_01_a);
	DELE_PTR_FULL(StaticMesh19);
	DELE_PTR_FULL(StaticMesh18);
	DELE_PTR_FULL(StaticMesh14);
	DELE_PTR_FULL(StaticMesh13);
	DELE_PTR_FULL(StaticMesh12);
	DELE_PTR_FULL(StaticMesh11);
	DELE_PTR_FULL(StaticMesh10);
	DELE_PTR_FULL(StaticMesh9);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_a);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(cap_skull_candle_01_a);
	DELE_PTR_FULL(cmn_candle_01_d);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(shp_kra_skin_rug_01_a);
	DELE_PTR_FULL(shp_kra_wheel_01_a);
	DELE_PTR_FULL(shp_kitchen_shelf_02_a);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(gmp_bar_hide_01_a1);
	DELE_PTR_FULL(bld_shop_table_01_a);
	DELE_PTR_FULL(bld_shop_drapes_01_a);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(cmn_skeleton_head_boar_01_a);
	DELE_PTR_FULL(bld_trn_shop_wilds_details_01_a);
	DELE_PTR_FULL(bld_trn_roof_beam_01_a);
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

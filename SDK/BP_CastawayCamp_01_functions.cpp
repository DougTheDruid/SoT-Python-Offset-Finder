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
//		Name   -> Function BP_CastawayCamp_01.BP_CastawayCamp_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CastawayCamp_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_01.BP_CastawayCamp_01_C.UserConstructionScript");

	ABP_CastawayCamp_01_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CastawayCamp_01_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(WorldLocationPopUp, UWorldLocationPopUpComponent);
	READ_PTR_FULL(wsp_cave_rock_small__a, UStaticMeshComponent);
	READ_PTR_FULL(wsp_cave_rock_large__c, UStaticMeshComponent);
	READ_PTR_FULL(Decal12, UDecalComponent);
	READ_PTR_FULL(NavMesh_Blocker, UBoxComponent);
	READ_PTR_FULL(mainClothShadowOnly, UStaticMeshComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(StaticMesh8, UStaticMeshComponent);
	READ_PTR_FULL(chestCollision, UBoxComponent);
	READ_PTR_FULL(shp_chest_com_01_a, USkeletalMeshComponent);
	READ_PTR_FULL(bld_castawaycamp_clothdoor_01_a_skel, USkeletalMeshComponent);
	READ_PTR_FULL(StaticMesh7, UStaticMeshComponent);
	READ_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER5, UStaticMeshComponent);
	READ_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER4, UStaticMeshComponent);
	READ_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER3, UStaticMeshComponent);
	READ_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER2, UStaticMeshComponent);
	READ_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER1, UStaticMeshComponent);
	READ_PTR_FULL(BeachNPCSpawnFlowLocation4, UBeachNPCSpawnFlowLocationComponent);
	READ_PTR_FULL(BeachNPCSpawnFlowLocation3, UBeachNPCSpawnFlowLocationComponent);
	READ_PTR_FULL(BeachNPCSpawnFlowLocation2, UBeachNPCSpawnFlowLocationComponent);
	READ_PTR_FULL(BeachNPCSpawnFlowLocation1, UBeachNPCSpawnFlowLocationComponent);
	READ_PTR_FULL(StaticMesh6, UStaticMeshComponent);
	READ_PTR_FULL(cmn_looted__box_01_b, UStaticMeshComponent);
	READ_PTR_FULL(Audio, UChildActorComponent);
	READ_PTR_FULL(PointLight4, UPointLightComponent);
	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(wpn_cutlass_gho_01_a, UStaticMeshComponent);
	READ_PTR_FULL(skd_pincher_sword_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_effigy_sunken_pearl_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_effigy_dark_brethren_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_effigy_captain_damned_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_effigy_pirates_life_01_a, UStaticMeshComponent);
	READ_PTR_FULL(Decal11, UDecalComponent);
	READ_PTR_FULL(Decal10, UDecalComponent);
	READ_PTR_FULL(Decal9, UDecalComponent);
	READ_PTR_FULL(Decal8, UDecalComponent);
	READ_PTR_FULL(Decal7, UDecalComponent);
	READ_PTR_FULL(Decal6, UDecalComponent);
	READ_PTR_FULL(Decal5, UDecalComponent);
	READ_PTR_FULL(Decal4, UDecalComponent);
	READ_PTR_FULL(Decal3, UDecalComponent);
	READ_PTR_FULL(Decal2, UDecalComponent);
	READ_PTR_FULL(Decal1, UDecalComponent);
	READ_PTR_FULL(Decal, UDecalComponent);
	READ_PTR_FULL(shp_wreck_beam_01_b, UStaticMeshComponent);
	READ_PTR_FULL(shp_wreck_beam_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh5, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(castawaycamp_hut_01_a, UStaticMeshComponent);
	READ_PTR_FULL(gmp_castawayCloth_01_a, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0143, UStaticMeshComponent);
	READ_PTR_FULL(ParticleSystemComponent02, UParticleSystemComponent);
	READ_PTR_FULL(StaticMeshComponent0139, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0138, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0137, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0136, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0135, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0134, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0132, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0131, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0130, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0129, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0128, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0127, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0124, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0123, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0121, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0119, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0117, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent0116, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent095, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent094, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent093, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent092, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent091, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent090, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent089, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent088, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent087, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent086, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent085, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent084, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent083, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent082, UStaticMeshComponent);
	READ_PTR_FULL(LightComponent01, UPointLightComponent);
	READ_PTR_FULL(LightComponent0, UPointLightComponent);
	READ_PTR_FULL(StaticMeshComponent051, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent050, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent049, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent048, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent047, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent046, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent045, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent044, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent043, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent042, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent041, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent039, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent038, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent037, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent036, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent035, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent034, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent033, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent032, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent031, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent028, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent027, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent026, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent025, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent024, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent023, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent019, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent018, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent017, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent016, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent015, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent014, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent012, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent011, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent010, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent09, UStaticMeshComponent);
	READ_PTR_FULL(StaticMeshComponent08, UStaticMeshComponent);
	READ_PTR_FULL(SharedRoot, USceneComponent);
}

void ABP_CastawayCamp_01_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(WorldLocationPopUp);
	DELE_PTR_FULL(wsp_cave_rock_small__a);
	DELE_PTR_FULL(wsp_cave_rock_large__c);
	DELE_PTR_FULL(Decal12);
	DELE_PTR_FULL(NavMesh_Blocker);
	DELE_PTR_FULL(mainClothShadowOnly);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(StaticMesh8);
	DELE_PTR_FULL(chestCollision);
	DELE_PTR_FULL(shp_chest_com_01_a);
	DELE_PTR_FULL(bld_castawaycamp_clothdoor_01_a_skel);
	DELE_PTR_FULL(StaticMesh7);
	DELE_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER5);
	DELE_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER4);
	DELE_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER3);
	DELE_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER2);
	DELE_PTR_FULL(gmp_tal_questbook_smp_static_01_a_PLACEHOLDER1);
	DELE_PTR_FULL(BeachNPCSpawnFlowLocation4);
	DELE_PTR_FULL(BeachNPCSpawnFlowLocation3);
	DELE_PTR_FULL(BeachNPCSpawnFlowLocation2);
	DELE_PTR_FULL(BeachNPCSpawnFlowLocation1);
	DELE_PTR_FULL(StaticMesh6);
	DELE_PTR_FULL(cmn_looted__box_01_b);
	DELE_PTR_FULL(Audio);
	DELE_PTR_FULL(PointLight4);
	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(wpn_cutlass_gho_01_a);
	DELE_PTR_FULL(skd_pincher_sword_01_a);
	DELE_PTR_FULL(gmp_effigy_sunken_pearl_01_a);
	DELE_PTR_FULL(gmp_effigy_dark_brethren_01_a);
	DELE_PTR_FULL(gmp_effigy_captain_damned_01_a);
	DELE_PTR_FULL(gmp_effigy_pirates_life_01_a);
	DELE_PTR_FULL(Decal11);
	DELE_PTR_FULL(Decal10);
	DELE_PTR_FULL(Decal9);
	DELE_PTR_FULL(Decal8);
	DELE_PTR_FULL(Decal7);
	DELE_PTR_FULL(Decal6);
	DELE_PTR_FULL(Decal5);
	DELE_PTR_FULL(Decal4);
	DELE_PTR_FULL(Decal3);
	DELE_PTR_FULL(Decal2);
	DELE_PTR_FULL(Decal1);
	DELE_PTR_FULL(Decal);
	DELE_PTR_FULL(shp_wreck_beam_01_b);
	DELE_PTR_FULL(shp_wreck_beam_01_a);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(StaticMesh5);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(castawaycamp_hut_01_a);
	DELE_PTR_FULL(gmp_castawayCloth_01_a);
	DELE_PTR_FULL(StaticMeshComponent0143);
	DELE_PTR_FULL(ParticleSystemComponent02);
	DELE_PTR_FULL(StaticMeshComponent0139);
	DELE_PTR_FULL(StaticMeshComponent0138);
	DELE_PTR_FULL(StaticMeshComponent0137);
	DELE_PTR_FULL(StaticMeshComponent0136);
	DELE_PTR_FULL(StaticMeshComponent0135);
	DELE_PTR_FULL(StaticMeshComponent0134);
	DELE_PTR_FULL(StaticMeshComponent0132);
	DELE_PTR_FULL(StaticMeshComponent0131);
	DELE_PTR_FULL(StaticMeshComponent0130);
	DELE_PTR_FULL(StaticMeshComponent0129);
	DELE_PTR_FULL(StaticMeshComponent0128);
	DELE_PTR_FULL(StaticMeshComponent0127);
	DELE_PTR_FULL(StaticMeshComponent0124);
	DELE_PTR_FULL(StaticMeshComponent0123);
	DELE_PTR_FULL(StaticMeshComponent0121);
	DELE_PTR_FULL(StaticMeshComponent0119);
	DELE_PTR_FULL(StaticMeshComponent0117);
	DELE_PTR_FULL(StaticMeshComponent0116);
	DELE_PTR_FULL(StaticMeshComponent095);
	DELE_PTR_FULL(StaticMeshComponent094);
	DELE_PTR_FULL(StaticMeshComponent093);
	DELE_PTR_FULL(StaticMeshComponent092);
	DELE_PTR_FULL(StaticMeshComponent091);
	DELE_PTR_FULL(StaticMeshComponent090);
	DELE_PTR_FULL(StaticMeshComponent089);
	DELE_PTR_FULL(StaticMeshComponent088);
	DELE_PTR_FULL(StaticMeshComponent087);
	DELE_PTR_FULL(StaticMeshComponent086);
	DELE_PTR_FULL(StaticMeshComponent085);
	DELE_PTR_FULL(StaticMeshComponent084);
	DELE_PTR_FULL(StaticMeshComponent083);
	DELE_PTR_FULL(StaticMeshComponent082);
	DELE_PTR_FULL(LightComponent01);
	DELE_PTR_FULL(LightComponent0);
	DELE_PTR_FULL(StaticMeshComponent051);
	DELE_PTR_FULL(StaticMeshComponent050);
	DELE_PTR_FULL(StaticMeshComponent049);
	DELE_PTR_FULL(StaticMeshComponent048);
	DELE_PTR_FULL(StaticMeshComponent047);
	DELE_PTR_FULL(StaticMeshComponent046);
	DELE_PTR_FULL(StaticMeshComponent045);
	DELE_PTR_FULL(StaticMeshComponent044);
	DELE_PTR_FULL(StaticMeshComponent043);
	DELE_PTR_FULL(StaticMeshComponent042);
	DELE_PTR_FULL(StaticMeshComponent041);
	DELE_PTR_FULL(StaticMeshComponent039);
	DELE_PTR_FULL(StaticMeshComponent038);
	DELE_PTR_FULL(StaticMeshComponent037);
	DELE_PTR_FULL(StaticMeshComponent036);
	DELE_PTR_FULL(StaticMeshComponent035);
	DELE_PTR_FULL(StaticMeshComponent034);
	DELE_PTR_FULL(StaticMeshComponent033);
	DELE_PTR_FULL(StaticMeshComponent032);
	DELE_PTR_FULL(StaticMeshComponent031);
	DELE_PTR_FULL(StaticMeshComponent028);
	DELE_PTR_FULL(StaticMeshComponent027);
	DELE_PTR_FULL(StaticMeshComponent026);
	DELE_PTR_FULL(StaticMeshComponent025);
	DELE_PTR_FULL(StaticMeshComponent024);
	DELE_PTR_FULL(StaticMeshComponent023);
	DELE_PTR_FULL(StaticMeshComponent019);
	DELE_PTR_FULL(StaticMeshComponent018);
	DELE_PTR_FULL(StaticMeshComponent017);
	DELE_PTR_FULL(StaticMeshComponent016);
	DELE_PTR_FULL(StaticMeshComponent015);
	DELE_PTR_FULL(StaticMeshComponent014);
	DELE_PTR_FULL(StaticMeshComponent012);
	DELE_PTR_FULL(StaticMeshComponent011);
	DELE_PTR_FULL(StaticMeshComponent010);
	DELE_PTR_FULL(StaticMeshComponent09);
	DELE_PTR_FULL(StaticMeshComponent08);
	DELE_PTR_FULL(SharedRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

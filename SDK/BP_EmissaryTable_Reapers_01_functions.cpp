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
//		Name   -> Function BP_EmissaryTable_Reapers_01.BP_EmissaryTable_Reapers_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_Reapers_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_Reapers_01.BP_EmissaryTable_Reapers_01_C.UserConstructionScript");

	ABP_EmissaryTable_Reapers_01_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_Reapers_01_C::AfterRead()
{
	ABP_EmissaryTable_01_C::AfterRead();

	READ_PTR_FULL(ParticleSystem4, UParticleSystemComponent);
	READ_PTR_FULL(shp_gho_candle_01_c1, UStaticMeshComponent);
	READ_PTR_FULL(shp_gho_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(shp_gho_candle_01_b1, UStaticMeshComponent);
	READ_PTR_FULL(shp_gho_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(shp_gho_candle_01_b, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh4, UStaticMeshComponent);
	READ_PTR_FULL(bld_reapers_mask_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmp_papers_reaper_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmp_tools_reaper_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmp_goblet_reaper_02_a, UStaticMeshComponent);
	READ_PTR_FULL(cmp_papers_reaper_01_a, UStaticMeshComponent);
	READ_PTR_FULL(EmissaryShipAffiliationTracker, UEmissaryShipAffiliationTrackerComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_tavern, UParticleSystemComponent);
	READ_PTR_FULL(StaticMesh3, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh2, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
}

void ABP_EmissaryTable_Reapers_01_C::BeforeDelete()
{
	ABP_EmissaryTable_01_C::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem4);
	DELE_PTR_FULL(shp_gho_candle_01_c1);
	DELE_PTR_FULL(shp_gho_candle_01_e);
	DELE_PTR_FULL(shp_gho_candle_01_b1);
	DELE_PTR_FULL(shp_gho_candle_01_c);
	DELE_PTR_FULL(shp_gho_candle_01_b);
	DELE_PTR_FULL(StaticMesh4);
	DELE_PTR_FULL(bld_reapers_mask_01_a);
	DELE_PTR_FULL(cmp_papers_reaper_02_a);
	DELE_PTR_FULL(cmp_tools_reaper_01_a);
	DELE_PTR_FULL(cmp_goblet_reaper_02_a);
	DELE_PTR_FULL(cmp_papers_reaper_01_a);
	DELE_PTR_FULL(EmissaryShipAffiliationTracker);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(vfx_candle_01_tavern);
	DELE_PTR_FULL(StaticMesh3);
	DELE_PTR_FULL(StaticMesh2);
	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

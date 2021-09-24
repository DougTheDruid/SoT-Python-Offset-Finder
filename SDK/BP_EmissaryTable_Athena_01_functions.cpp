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
//		Name   -> Function BP_EmissaryTable_Athena_01.BP_EmissaryTable_Athena_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_EmissaryTable_Athena_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_EmissaryTable_Athena_01.BP_EmissaryTable_Athena_01_C.UserConstructionScript");

	ABP_EmissaryTable_Athena_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_EmissaryTable_Athena_01_C::AfterRead()
{
	ABP_EmissaryTable_01_C::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(EmissaryShipAffiliationTracker, UEmissaryShipAffiliationTrackerComponent);
	READ_PTR_FULL(vfx_candle_01_magic2, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_magic1, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_magic, UParticleSystemComponent);
	READ_PTR_FULL(wpn_cutlass_leg_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_d, UStaticMeshComponent);
	READ_PTR_FULL(con_cover_page_leg_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_c, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_a, UStaticMeshComponent);
	READ_PTR_FULL(cmn_candle_01_e, UStaticMeshComponent);
	READ_PTR_FULL(cap_desk_model_leg_01_a, UStaticMeshComponent);
}

void ABP_EmissaryTable_Athena_01_C::BeforeDelete()
{
	ABP_EmissaryTable_01_C::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(EmissaryShipAffiliationTracker);
	DELE_PTR_FULL(vfx_candle_01_magic2);
	DELE_PTR_FULL(vfx_candle_01_magic1);
	DELE_PTR_FULL(vfx_candle_01_magic);
	DELE_PTR_FULL(wpn_cutlass_leg_01_a);
	DELE_PTR_FULL(cmn_candle_01_d);
	DELE_PTR_FULL(con_cover_page_leg_01_a);
	DELE_PTR_FULL(cmn_candle_01_c);
	DELE_PTR_FULL(cmn_candle_01_a);
	DELE_PTR_FULL(cmn_candle_01_e);
	DELE_PTR_FULL(cap_desk_model_leg_01_a);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

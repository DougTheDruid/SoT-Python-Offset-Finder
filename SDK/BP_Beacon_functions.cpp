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
//		Name   -> Function BP_Beacon.BP_Beacon_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Beacon_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Beacon.BP_Beacon_C.UserConstructionScript");

	ABP_Beacon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Beacon_C::AfterRead()
{
	ABeacon::AfterRead();

	READ_PTR_FULL(PointLight3, UPointLightComponent);
	READ_PTR_FULL(PointLight2, UPointLightComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem6, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_smoke_tavern, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem5, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem4, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem3, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(vfx_candle_01_tavern, UParticleSystemComponent);
}

void ABP_Beacon_C::BeforeDelete()
{
	ABeacon::BeforeDelete();

	DELE_PTR_FULL(PointLight3);
	DELE_PTR_FULL(PointLight2);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(ParticleSystem6);
	DELE_PTR_FULL(vfx_candle_01_smoke_tavern);
	DELE_PTR_FULL(ParticleSystem5);
	DELE_PTR_FULL(ParticleSystem4);
	DELE_PTR_FULL(ParticleSystem3);
	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(vfx_candle_01_tavern);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

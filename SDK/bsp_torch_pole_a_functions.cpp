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
//		Name   -> Function bsp_torch_pole_a.bsp_torch_pole_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Absp_torch_pole_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bsp_torch_pole_a.bsp_torch_pole_a_C.UserConstructionScript");

	Absp_torch_pole_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Absp_torch_pole_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
}

void Absp_torch_pole_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(ParticleSystem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

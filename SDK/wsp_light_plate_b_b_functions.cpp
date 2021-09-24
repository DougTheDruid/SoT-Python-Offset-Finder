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
//		Name   -> Function wsp_light_plate_b_b.wsp_light_plate_b_b_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_light_plate_b_b_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_light_plate_b_b.wsp_light_plate_b_b_C.UserConstructionScript");

	Awsp_light_plate_b_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_light_plate_b_b_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
}

void Awsp_light_plate_b_b_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

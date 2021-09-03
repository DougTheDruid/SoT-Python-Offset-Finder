// Name: SoT, Version: 2.2.1.1

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

// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent
// (Public, BlueprintCallable, BlueprintEvent)
void Asot_frontend_01_a_lighting_C::LightingTestEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.LightingTestEvent");

	Asot_frontend_01_a_lighting_C_LightingTestEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Asot_frontend_01_a_lighting_C::ExecuteUbergraph_sot_frontend_01_a_lighting(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function sot_frontend_01_a_lighting.sot_frontend_01_a_lighting_C.ExecuteUbergraph_sot_frontend_01_a_lighting");

	Asot_frontend_01_a_lighting_C_ExecuteUbergraph_sot_frontend_01_a_lighting_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Asot_frontend_01_a_lighting_C::AfterRead()
{
	ALevelScriptActor::AfterRead();

	READ_PTR_FULL(LightingController_UniqueObjectNameForCooking_441630218_RefProperty, AMatineeActor);
}

void Asot_frontend_01_a_lighting_C::BeforeDelete()
{
	ALevelScriptActor::BeforeDelete();

	DELE_PTR_FULL(LightingController_UniqueObjectNameForCooking_441630218_RefProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

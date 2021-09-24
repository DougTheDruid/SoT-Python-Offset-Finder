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
//		Name   -> Function wsp_torch_a_a.wsp_torch_a_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_torch_a_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.UserConstructionScript");

	Awsp_torch_a_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function wsp_torch_a_a.wsp_torch_a_a_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Awsp_torch_a_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.ReceiveBeginPlay");

	Awsp_torch_a_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function wsp_torch_a_a.wsp_torch_a_a_C.ExecuteUbergraph_wsp_torch_a_a
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Awsp_torch_a_a_C::ExecuteUbergraph_wsp_torch_a_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_a_a.wsp_torch_a_a_C.ExecuteUbergraph_wsp_torch_a_a");

	Awsp_torch_a_a_C_ExecuteUbergraph_wsp_torch_a_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_torch_a_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(vfx_fire_torch, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Awsp_torch_a_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(vfx_fire_torch);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function wsp_torch_b.wsp_torch_b_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Awsp_torch_b_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_b.wsp_torch_b_C.UserConstructionScript");

	Awsp_torch_b_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function wsp_torch_b.wsp_torch_b_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Awsp_torch_b_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_b.wsp_torch_b_C.ReceiveBeginPlay");

	Awsp_torch_b_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function wsp_torch_b.wsp_torch_b_C.ExecuteUbergraph_wsp_torch_b
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Awsp_torch_b_C::ExecuteUbergraph_wsp_torch_b(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function wsp_torch_b.wsp_torch_b_C.ExecuteUbergraph_wsp_torch_b");

	Awsp_torch_b_C_ExecuteUbergraph_wsp_torch_b_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Awsp_torch_b_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(vfx_fire_torch, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Awsp_torch_b_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(vfx_fire_torch);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function cmn_torch_a.cmn_torch_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Acmn_torch_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.UserConstructionScript");

	Acmn_torch_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function cmn_torch_a.cmn_torch_a_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Acmn_torch_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.ReceiveBeginPlay");

	Acmn_torch_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function cmn_torch_a.cmn_torch_a_C.ExecuteUbergraph_cmn_torch_a
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Acmn_torch_a_C::ExecuteUbergraph_cmn_torch_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function cmn_torch_a.cmn_torch_a_C.ExecuteUbergraph_cmn_torch_a");

	Acmn_torch_a_C_ExecuteUbergraph_cmn_torch_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Acmn_torch_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(vfx_fire_torch, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Acmn_torch_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(vfx_fire_torch);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

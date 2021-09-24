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
//		Name   -> Function bp_fire_bin_a.bp_fire_bin_a_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Abp_fire_bin_a_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.UserConstructionScript");

	Abp_fire_bin_a_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function bp_fire_bin_a.bp_fire_bin_a_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Abp_fire_bin_a_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.ReceiveBeginPlay");

	Abp_fire_bin_a_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function bp_fire_bin_a.bp_fire_bin_a_C.ExecuteUbergraph_bp_fire_bin_a
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Abp_fire_bin_a_C::ExecuteUbergraph_bp_fire_bin_a(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bp_fire_bin_a.bp_fire_bin_a_C.ExecuteUbergraph_bp_fire_bin_a");

	Abp_fire_bin_a_C_ExecuteUbergraph_bp_fire_bin_a_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Abp_fire_bin_a_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(vfx_fire_bin, UParticleSystemComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
}

void Abp_fire_bin_a_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(vfx_fire_bin);
	DELE_PTR_FULL(PointLight);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void Abld_beacon_01_b_fire_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.UserConstructionScript");

	Abld_beacon_01_b_fire_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void Abld_beacon_01_b_fire_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ReceiveBeginPlay");

	Abld_beacon_01_b_fire_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ExecuteUbergraph_bld_beacon_01_b_fire
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void Abld_beacon_01_b_fire_C::ExecuteUbergraph_bld_beacon_01_b_fire(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function bld_beacon_01_b_fire.bld_beacon_01_b_fire_C.ExecuteUbergraph_bld_beacon_01_b_fire");

	Abld_beacon_01_b_fire_C_ExecuteUbergraph_bld_beacon_01_b_fire_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void Abld_beacon_01_b_fire_C::AfterRead()
{
	AStaticMeshActor::AfterRead();

	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(vfx_fire_beacon, UParticleSystemComponent);
}

void Abld_beacon_01_b_fire_C::BeforeDelete()
{
	AStaticMeshActor::BeforeDelete();

	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(vfx_fire_beacon);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

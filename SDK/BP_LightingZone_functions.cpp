// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x016629C0
//		Name   -> Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LightingZone_C::Update_Lighting_Zone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.Update Lighting Zone");

	ABP_LightingZone_C_Update_Lighting_Zone_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LightingZone_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.UserConstructionScript");

	ABP_LightingZone_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_LightingZone_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.ReceiveBeginPlay");

	ABP_LightingZone_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LightingZone_C::ExecuteUbergraph_BP_LightingZone(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightingZone.BP_LightingZone_C.ExecuteUbergraph_BP_LightingZone");

	ABP_LightingZone_C_ExecuteUbergraph_BP_LightingZone_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LightingZone_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(InnerSphere, USphereComponent);
	READ_PTR_FULL(OuterSphere, USphereComponent);
	READ_PTR_FULL(LightingZone, ULightingZoneComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_LightingZone_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(InnerSphere);
	DELE_PTR_FULL(OuterSphere);
	DELE_PTR_FULL(LightingZone);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

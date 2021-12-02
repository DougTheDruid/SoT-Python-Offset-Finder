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
//		Name   -> Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FogVolume_Undersea_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.UserConstructionScript");

	ABP_FogVolume_Undersea_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FogVolume_Undersea_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ReceiveTick");

	ABP_FogVolume_Undersea_C_ReceiveTick_Params params {};
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_FogVolume_Undersea_C::ExecuteUbergraph_BP_FogVolume_Undersea(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FogVolume_Undersea.BP_FogVolume_Undersea_C.ExecuteUbergraph_BP_FogVolume_Undersea");

	ABP_FogVolume_Undersea_C_ExecuteUbergraph_BP_FogVolume_Undersea_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FogVolume_Undersea_C::AfterRead()
{
	AFogVolume::AfterRead();

}

void ABP_FogVolume_Undersea_C::BeforeDelete()
{
	AFogVolume::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

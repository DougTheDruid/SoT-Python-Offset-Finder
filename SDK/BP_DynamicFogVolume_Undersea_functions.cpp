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
//		Name   -> Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_DynamicFogVolume_Undersea_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.UserConstructionScript");

	ABP_DynamicFogVolume_Undersea_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicFogVolume_Undersea_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.ReceiveTick");

	ABP_DynamicFogVolume_Undersea_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.ExecuteUbergraph_BP_DynamicFogVolume_Undersea
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicFogVolume_Undersea_C::ExecuteUbergraph_BP_DynamicFogVolume_Undersea(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicFogVolume_Undersea.BP_DynamicFogVolume_Undersea_C.ExecuteUbergraph_BP_DynamicFogVolume_Undersea");

	ABP_DynamicFogVolume_Undersea_C_ExecuteUbergraph_BP_DynamicFogVolume_Undersea_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DynamicFogVolume_Undersea_C::AfterRead()
{
	ABP_DynamicDensityFogVolume_C::AfterRead();

}

void ABP_DynamicFogVolume_Undersea_C::BeforeDelete()
{
	ABP_DynamicDensityFogVolume_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

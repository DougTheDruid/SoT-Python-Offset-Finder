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
//		Name   -> Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LegendSkellyFort_SkullCloud_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.UserConstructionScript");

	ABP_LegendSkellyFort_SkullCloud_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_LegendSkellyFort_SkullCloud_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ReceiveBeginPlay");

	ABP_LegendSkellyFort_SkullCloud_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LegendSkellyFort_SkullCloud_C::ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LegendSkellyFort_SkullCloud.BP_LegendSkellyFort_SkullCloud_C.ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud");

	ABP_LegendSkellyFort_SkullCloud_C_ExecuteUbergraph_BP_LegendSkellyFort_SkullCloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LegendSkellyFort_SkullCloud_C::AfterRead()
{
	ABP_RotatableSignalCloud_C::AfterRead();

	READ_PTR_FULL(BP_Audio_LegendarySkullCloud_Play_Wwise_Event, UChildActorComponent);
}

void ABP_LegendSkellyFort_SkullCloud_C::BeforeDelete()
{
	ABP_RotatableSignalCloud_C::BeforeDelete();

	DELE_PTR_FULL(BP_Audio_LegendarySkullCloud_Play_Wwise_Event);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump
// (BlueprintCallable, BlueprintEvent)
void UBP_FishAnimGraph_C::AnimNotify_StartJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_StartJump");

	UBP_FishAnimGraph_C_AnimNotify_StartJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump
// (BlueprintCallable, BlueprintEvent)
void UBP_FishAnimGraph_C::AnimNotify_EndJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishAnimGraph.BP_FishAnimGraph_C.AnimNotify_EndJump");

	UBP_FishAnimGraph_C_AnimNotify_EndJump_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_FishAnimGraph_C::ExecuteUbergraph_BP_FishAnimGraph(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FishAnimGraph.BP_FishAnimGraph_C.ExecuteUbergraph_BP_FishAnimGraph");

	UBP_FishAnimGraph_C_ExecuteUbergraph_BP_FishAnimGraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_FishAnimGraph_C::AfterRead()
{
	UFishAnimationInstance::AfterRead();

}

void UBP_FishAnimGraph_C::BeforeDelete()
{
	UFishAnimationInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

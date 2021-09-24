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
//		Name   -> Function BP_Storm.BP_Storm_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Storm_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.UserConstructionScript");

	ABP_Storm_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Storm.BP_Storm_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Storm_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.ReceiveBeginPlay");

	ABP_Storm_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Storm.BP_Storm_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Storm_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.ReceiveTick");

	ABP_Storm_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Storm_C::ExecuteUbergraph_BP_Storm(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Storm.BP_Storm_C.ExecuteUbergraph_BP_Storm");

	ABP_Storm_C_ExecuteUbergraph_BP_Storm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Storm_C::AfterRead()
{
	AStorm::AfterRead();

	READ_PTR_FULL(Lightning4, UStaticMeshComponent);
	READ_PTR_FULL(Lightning3, UStaticMeshComponent);
	READ_PTR_FULL(Lightning2, UStaticMeshComponent);
	READ_PTR_FULL(Lightning1, UStaticMeshComponent);
}

void ABP_Storm_C::BeforeDelete()
{
	AStorm::BeforeDelete();

	DELE_PTR_FULL(Lightning4);
	DELE_PTR_FULL(Lightning3);
	DELE_PTR_FULL(Lightning2);
	DELE_PTR_FULL(Lightning1);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

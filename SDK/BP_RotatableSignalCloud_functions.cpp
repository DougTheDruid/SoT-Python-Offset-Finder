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
//		Name   -> Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_RotatableSignalCloud_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.UserConstructionScript");

	ABP_RotatableSignalCloud_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_RotatableSignalCloud_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ReceiveBeginPlay");

	ABP_RotatableSignalCloud_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ExecuteUbergraph_BP_RotatableSignalCloud
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_RotatableSignalCloud_C::ExecuteUbergraph_BP_RotatableSignalCloud(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_RotatableSignalCloud.BP_RotatableSignalCloud_C.ExecuteUbergraph_BP_RotatableSignalCloud");

	ABP_RotatableSignalCloud_C_ExecuteUbergraph_BP_RotatableSignalCloud_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_RotatableSignalCloud_C::AfterRead()
{
	AGameplayEventSignal_StaticMesh::AfterRead();

	READ_PTR_FULL(RotateMeshToLocalPlayer, URotateMeshToLocalPlayerComponent);
}

void ABP_RotatableSignalCloud_C::BeforeDelete()
{
	AGameplayEventSignal_StaticMesh::BeforeDelete();

	DELE_PTR_FULL(RotateMeshToLocalPlayer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

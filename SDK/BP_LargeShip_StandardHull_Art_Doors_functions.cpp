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
//		Name   -> Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_Doors_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.UserConstructionScript");

	ABP_LargeShip_StandardHull_Art_Doors_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_LargeShip_StandardHull_Art_Doors_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.ReceiveBeginPlay");

	ABP_LargeShip_StandardHull_Art_Doors_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.ExecuteUbergraph_BP_LargeShip_StandardHull_Art_Doors
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LargeShip_StandardHull_Art_Doors_C::ExecuteUbergraph_BP_LargeShip_StandardHull_Art_Doors(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LargeShip_StandardHull_Art_Doors.BP_LargeShip_StandardHull_Art_Doors_C.ExecuteUbergraph_BP_LargeShip_StandardHull_Art_Doors");

	ABP_LargeShip_StandardHull_Art_Doors_C_ExecuteUbergraph_BP_LargeShip_StandardHull_Art_Doors_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_LargeShip_StandardHull_Art_Doors_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(StaticMesh1, UStaticMeshComponent);
	READ_PTR_FULL(StaticMesh, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_LargeShip_StandardHull_Art_Doors_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(StaticMesh1);
	DELE_PTR_FULL(StaticMesh);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

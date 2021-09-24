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
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.CollectRippleGenerators
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_WaterVolume_Optimized_C::CollectRippleGenerators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.CollectRippleGenerators");

	ABP_WaterVolume_Optimized_C_CollectRippleGenerators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_WaterVolume_Optimized_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.UserConstructionScript");

	ABP_WaterVolume_Optimized_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_WaterVolume_Optimized_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveBeginPlay");

	ABP_WaterVolume_Optimized_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_Optimized_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorBeginOverlap");

	ABP_WaterVolume_Optimized_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_Optimized_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ReceiveActorEndOverlap");

	ABP_WaterVolume_Optimized_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ExecuteUbergraph_BP_WaterVolume_Optimized
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_WaterVolume_Optimized_C::ExecuteUbergraph_BP_WaterVolume_Optimized(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_WaterVolume_Optimized.BP_WaterVolume_Optimized_C.ExecuteUbergraph_BP_WaterVolume_Optimized");

	ABP_WaterVolume_Optimized_C_ExecuteUbergraph_BP_WaterVolume_Optimized_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_WaterVolume_Optimized_C::AfterRead()
{
	AWaterVolume::AfterRead();

	READ_PTR_FULL(WaterPlaneActivatationVolume, UStaticMeshComponent);
	READ_PTR_FULL(FlatWaterPlane, UFlatWaterPlaneComponent);
	READ_PTR_FULL(FlatWaterMesh, UFlatWaterMeshComponent);
	READ_PTR_FULL(Root, USceneComponent);
}

void ABP_WaterVolume_Optimized_C::BeforeDelete()
{
	AWaterVolume::BeforeDelete();

	DELE_PTR_FULL(WaterPlaneActivatationVolume);
	DELE_PTR_FULL(FlatWaterPlane);
	DELE_PTR_FULL(FlatWaterMesh);
	DELE_PTR_FULL(Root);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

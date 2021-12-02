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
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMaterialInstance*                           Seagull_Material                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UMaterialInstance*                           Seagull_MT_LOD                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Seagull01_8POI_C::seagull_Fade(class UMaterialInstance* Seagull_Material, class UMaterialInstance* Seagull_MT_LOD)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.seagull_Fade");

	ABP_Seagull01_8POI_C_seagull_Fade_Params params {};
	params.Seagull_Material = Seagull_Material;
	params.Seagull_MT_LOD = Seagull_MT_LOD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Seagull01_8POI_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.UserConstructionScript");

	ABP_Seagull01_8POI_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_Seagull01_8POI_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ReceiveBeginPlay");

	ABP_Seagull01_8POI_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Seagull01_8POI_C::FadeIn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeIn");

	ABP_Seagull01_8POI_C_FadeIn_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Seagull01_8POI_C::FadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.FadeOut");

	ABP_Seagull01_8POI_C_FadeOut_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_Seagull01_8POI_C::ExecuteUbergraph_BP_Seagull01_8POI(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Seagull01_8POI.BP_Seagull01_8POI_C.ExecuteUbergraph_BP_Seagull01_8POI");

	ABP_Seagull01_8POI_C_ExecuteUbergraph_BP_Seagull01_8POI_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Seagull01_8POI_C::AfterRead()
{
	ASeagulls::AfterRead();

	READ_PTR_FULL(WwiseEmitter1, UWwiseEmitterComponent);
	READ_PTR_FULL(WwiseEmitter, UWwiseEmitterComponent);
	READ_PTR_FULL(wil_seagull_01_ProcAnim8, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(seagulls_MI, UMaterialInterface);
	READ_PTR_FULL(seagulls_MT, UMaterialInstanceDynamic);
	READ_PTR_FULL(seagulls_MI_LOD, UMaterialInterface);
	READ_PTR_FULL(seagulls_MT_LOD, UMaterialInstanceDynamic);
	READ_PTR_FULL(WwiseEvent, UWwiseEvent);
}

void ABP_Seagull01_8POI_C::BeforeDelete()
{
	ASeagulls::BeforeDelete();

	DELE_PTR_FULL(WwiseEmitter1);
	DELE_PTR_FULL(WwiseEmitter);
	DELE_PTR_FULL(wil_seagull_01_ProcAnim8);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(seagulls_MI);
	DELE_PTR_FULL(seagulls_MT);
	DELE_PTR_FULL(seagulls_MI_LOD);
	DELE_PTR_FULL(seagulls_MT_LOD);
	DELE_PTR_FULL(WwiseEvent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

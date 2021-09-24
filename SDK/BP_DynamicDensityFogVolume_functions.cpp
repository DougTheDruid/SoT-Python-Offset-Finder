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
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BlendAmount                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::BlendParams(float BlendAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.BlendParams");

	ABP_DynamicDensityFogVolume_C_BlendParams_Params params;
	params.BlendAmount = BlendAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::OnRep_NextState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.OnRep_NextState");

	ABP_DynamicDensityFogVolume_C_OnRep_NextState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UserConstructionScript");

	ABP_DynamicDensityFogVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::StateBlend__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__FinishedFunc");

	ABP_DynamicDensityFogVolume_C_StateBlend__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::StateBlend__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.StateBlend__UpdateFunc");

	ABP_DynamicDensityFogVolume_C_StateBlend__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ReceiveBeginPlay");

	ABP_DynamicDensityFogVolume_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UCanvas*                                     Canvas                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::UpdateCanvas(class UCanvas* Canvas, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.UpdateCanvas");

	ABP_DynamicDensityFogVolume_C_UpdateCanvas_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::ChangeState(int State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ChangeState");

	ABP_DynamicDensityFogVolume_C_ChangeState_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_DynamicDensityFogVolume_C::SetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.SetState");

	ABP_DynamicDensityFogVolume_C_SetState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_DynamicDensityFogVolume_C::ExecuteUbergraph_BP_DynamicDensityFogVolume(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicDensityFogVolume.BP_DynamicDensityFogVolume_C.ExecuteUbergraph_BP_DynamicDensityFogVolume");

	ABP_DynamicDensityFogVolume_C_ExecuteUbergraph_BP_DynamicDensityFogVolume_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_DynamicDensityFogVolume_C::AfterRead()
{
	AFogVolume::AfterRead();

	READ_PTR_FULL(StateBlend, UTimelineComponent);
	READ_PTR_FULL(UpdateMaterial, UMaterialInstanceDynamic);
	READ_PTR_FULL(Canvas, UCanvasRenderTarget2D);
}

void ABP_DynamicDensityFogVolume_C::BeforeDelete()
{
	AFogVolume::BeforeDelete();

	DELE_PTR_FULL(StateBlend);
	DELE_PTR_FULL(UpdateMaterial);
	DELE_PTR_FULL(Canvas);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

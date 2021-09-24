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
//		Name   -> Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_CastawayCamp_AudioLayer_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.UserConstructionScript");

	ABP_CastawayCamp_AudioLayer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_CastawayCamp_AudioLayer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveBeginPlay");

	ABP_CastawayCamp_AudioLayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CastawayCamp_AudioLayer_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ReceiveEndPlay");

	ABP_CastawayCamp_AudioLayer_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CastawayCamp_AudioLayer_C::ExecuteUbergraph_BP_CastawayCamp_AudioLayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CastawayCamp_AudioLayer.BP_CastawayCamp_AudioLayer_C.ExecuteUbergraph_BP_CastawayCamp_AudioLayer");

	ABP_CastawayCamp_AudioLayer_C_ExecuteUbergraph_BP_CastawayCamp_AudioLayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CastawayCamp_AudioLayer_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Flapping, UWwiseEmitterComponent);
	READ_PTR_FULL(Campfire, UWwiseEmitterComponent);
	READ_PTR_FULL(CastawayCamp_Audio, UWwiseEmitterComponent);
	READ_PTR_FULL(Campfire_Play, UWwiseEvent);
	READ_PTR_FULL(Campfire_Stop, UWwiseEvent);
	READ_PTR_FULL(Flapping_Play, UWwiseEvent);
	READ_PTR_FULL(Flapping_Stop, UWwiseEvent);
}

void ABP_CastawayCamp_AudioLayer_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Flapping);
	DELE_PTR_FULL(Campfire);
	DELE_PTR_FULL(CastawayCamp_Audio);
	DELE_PTR_FULL(Campfire_Play);
	DELE_PTR_FULL(Campfire_Stop);
	DELE_PTR_FULL(Flapping_Play);
	DELE_PTR_FULL(Flapping_Stop);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UBP_Prompt_Sitting_ThirdPerson_C::Evaluate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.Evaluate");

	UBP_Prompt_Sitting_ThirdPerson_C_Evaluate_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_Sitting_ThirdPerson_C::RegisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.RegisterOtherEvents_Implementable");

	UBP_Prompt_Sitting_ThirdPerson_C_RegisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_Prompt_Sitting_ThirdPerson_C::UnregisterOtherEvents_Implementable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.UnregisterOtherEvents_Implementable");

	UBP_Prompt_Sitting_ThirdPerson_C_UnregisterOtherEvents_Implementable_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventLocalPlayerEnteredSittingState        Event                                                      (Parm)
void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingState(const struct FEventLocalPlayerEnteredSittingState& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingState");

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingState_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventLocalPlayerExittedSittingState        Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerExitedSittingState(const struct FEventLocalPlayerExittedSittingState& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerExitedSittingState");

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerExitedSittingState_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FEventLocalPlayerEnteredSittingThirdPersonCameraState Event                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_Sitting_ThirdPerson_C::LocalPlayerEnteredSittingThirdPersonCamera(const struct FEventLocalPlayerEnteredSittingThirdPersonCameraState& Event)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.LocalPlayerEnteredSittingThirdPersonCamera");

	UBP_Prompt_Sitting_ThirdPerson_C_LocalPlayerEnteredSittingThirdPersonCamera_Params params {};
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_Prompt_Sitting_ThirdPerson_C::ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Prompt_Sitting_ThirdPerson.BP_Prompt_Sitting_ThirdPerson_C.ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson");

	UBP_Prompt_Sitting_ThirdPerson_C_ExecuteUbergraph_BP_Prompt_Sitting_ThirdPerson_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_Prompt_Sitting_ThirdPerson_C::AfterRead()
{
	UBP_PromptCoordinator_Base_C::AfterRead();

}

void UBP_Prompt_Sitting_ThirdPerson_C::BeforeDelete()
{
	UBP_PromptCoordinator_Base_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

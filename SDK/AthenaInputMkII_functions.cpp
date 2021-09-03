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

void UAthenaCharacterBaseMovementComponent::AfterRead()
{
	UInputComponent::AfterRead();

}

void UAthenaCharacterBaseMovementComponent::BeforeDelete()
{
	UInputComponent::BeforeDelete();

}

void UAthenaCharacterBaseMovementComponentWithInterference::AfterRead()
{
	UAthenaCharacterBaseMovementComponent::AfterRead();

}

void UAthenaCharacterBaseMovementComponentWithInterference::BeforeDelete()
{
	UAthenaCharacterBaseMovementComponent::BeforeDelete();

}

// Function AthenaInputMkII.MovementInterferenceComponent.OnMoveRightInput
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovementInterferenceComponent::OnMoveRightInput(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInputMkII.MovementInterferenceComponent.OnMoveRightInput");

	UMovementInterferenceComponent_OnMoveRightInput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaInputMkII.MovementInterferenceComponent.OnMoveForwardInput
// (Final, Native, Private)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMovementInterferenceComponent::OnMoveForwardInput(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaInputMkII.MovementInterferenceComponent.OnMoveForwardInput");

	UMovementInterferenceComponent_OnMoveForwardInput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMovementInterferenceComponent::AfterRead()
{
	UInputComponent::AfterRead();

}

void UMovementInterferenceComponent::BeforeDelete()
{
	UInputComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

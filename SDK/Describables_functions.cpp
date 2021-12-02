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
//		Offset -> 0x01315EE0
//		Name   -> Function Describables.DescribableComponent.SetTooltipActive
//		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               IsActive                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDescribableComponent::SetTooltipActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.SetTooltipActive");

	UDescribableComponent_SetTooltipActive_Params params {};
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01315EC0
//		Name   -> Function Describables.DescribableComponent.OnRep_TooltipActive
//		Flags  -> (Final, RequiredAPI, Native, Private)
void UDescribableComponent::OnRep_TooltipActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.OnRep_TooltipActive");

	UDescribableComponent_OnRep_TooltipActive_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UDescribableComponent::AfterRead()
{
	UInteractableComponent::AfterRead();

}

void UDescribableComponent::BeforeDelete()
{
	UInteractableComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

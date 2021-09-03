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

// Function Describables.DescribableComponent.SetTooltipActive
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                           IsActive                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UDescribableComponent::SetTooltipActive(bool IsActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.SetTooltipActive");

	UDescribableComponent_SetTooltipActive_Params params;
	params.IsActive = IsActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Describables.DescribableComponent.OnRep_TooltipActive
// (Final, RequiredAPI, Native, Private)
void UDescribableComponent::OnRep_TooltipActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Describables.DescribableComponent.OnRep_TooltipActive");

	UDescribableComponent_OnRep_TooltipActive_Params params;

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

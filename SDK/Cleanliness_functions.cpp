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

void FCleanlinessInfo::AfterRead()
{
}

void FCleanlinessInfo::BeforeDelete()
{
}

void FEventQuickCleanRequest::AfterRead()
{
}

void FEventQuickCleanRequest::BeforeDelete()
{
}

void UCleanlinessInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCleanlinessInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UCleanlinessTransferInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCleanlinessTransferInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo
// (Final, Native, Private)
void UCleanlinessComponent::OnRep_CleanlinessInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Cleanliness.CleanlinessComponent.OnRep_CleanlinessInfo");

	UCleanlinessComponent_OnRep_CleanlinessInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCleanlinessComponent::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(DirtinessStrengthToMaterialStrength, UCurveFloat);
}

void UCleanlinessComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(DirtinessStrengthToMaterialStrength);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

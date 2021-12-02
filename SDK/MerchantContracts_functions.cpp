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

void FItemAndReward::AfterRead()
{
	READ_PTR_FULL(ItemDesc, UClass);
}

void FItemAndReward::BeforeDelete()
{
	DELE_PTR_FULL(ItemDesc);
}

void FMerchantContractItemDesc::AfterRead()
{
	READ_PTR_FULL(AllocatedCrate, UClass);
	READ_PTR_FULL(FaunaSpecies, UClass);
	READ_PTR_FULL(FaunaBreed, UClass);
}

void FMerchantContractItemDesc::BeforeDelete()
{
	DELE_PTR_FULL(AllocatedCrate);
	DELE_PTR_FULL(FaunaSpecies);
	DELE_PTR_FULL(FaunaBreed);
}

void FMerchantContractDeliveryRequest::AfterRead()
{
}

void FMerchantContractDeliveryRequest::BeforeDelete()
{
}

void FMerchantContract::AfterRead()
{
}

void FMerchantContract::BeforeDelete()
{
}

void FPlayerMerchantContract::AfterRead()
{
}

void FPlayerMerchantContract::BeforeDelete()
{
}

// Function:
//		Offset -> 0x0362A670
//		Name   -> Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              TimeLimit                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UMerchantContractsBlueprintLibrary::STATIC_GetDateFromTimeLimit(float TimeLimit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MerchantContracts.MerchantContractsBlueprintLibrary.GetDateFromTimeLimit");

	UMerchantContractsBlueprintLibrary_GetDateFromTimeLimit_Params params {};
	params.TimeLimit = TimeLimit;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMerchantContractsBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UMerchantContractsBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UMerchantContractsServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMerchantContractsServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UMerchantContractsService::AfterRead()
{
	UObject::AfterRead();

}

void UMerchantContractsService::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UPlayerMerchantContractsInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPlayerMerchantContractsInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UPlayerMerchantContractsComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPlayerMerchantContractsComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

void FOceanCrawlerLocomotionAnimationDataStructure::AfterRead()
{
	READ_PTR_FULL(LocomotionIntoAsBlendspace, UBlendSpace1D);
	READ_PTR_FULL(Idle, UAnimSequence);
	READ_PTR_FULL(LocomotionOutOf, UAnimSequence);
	READ_PTR_FULL(LocomotionOutOfAsBlendspace, UBlendSpace1D);
	READ_PTR_FULL(Locomotion, UBlendSpace);
}

void FOceanCrawlerLocomotionAnimationDataStructure::BeforeDelete()
{
	DELE_PTR_FULL(LocomotionIntoAsBlendspace);
	DELE_PTR_FULL(Idle);
	DELE_PTR_FULL(LocomotionOutOf);
	DELE_PTR_FULL(LocomotionOutOfAsBlendspace);
	DELE_PTR_FULL(Locomotion);
}

void FOceanCrawlerSporeBreathAnimationData::AfterRead()
{
	READ_PTR_FULL(Into, UBlendSpace1D);
	READ_PTR_FULL(Locomotion, UBlendSpace1D);
	READ_PTR_FULL(Outof, UBlendSpace1D);
}

void FOceanCrawlerSporeBreathAnimationData::BeforeDelete()
{
	DELE_PTR_FULL(Into);
	DELE_PTR_FULL(Locomotion);
	DELE_PTR_FULL(Outof);
}

void FOceanCrawlerAnimationDataStructure::AfterRead()
{
	READ_PTR_FULL(MontageData, UCustomAnimationMontageDefinitionListingDataAsset);
	READ_PTR_FULL(AttackAnimations, UAthenaAnimationWeaponDataAsset);
}

void FOceanCrawlerAnimationDataStructure::BeforeDelete()
{
	DELE_PTR_FULL(MontageData);
	DELE_PTR_FULL(AttackAnimations);
}

void UOceanCrawlerAnimationData::AfterRead()
{
	UAnimationData::AfterRead();

}

void UOceanCrawlerAnimationData::BeforeDelete()
{
	UAnimationData::BeforeDelete();

}

// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)
void UOceanCrawlerAnimationInstance::ClearActiveAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.ClearActiveAttack");

	UOceanCrawlerAnimationInstance_ClearActiveAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)
void UOceanCrawlerAnimationInstance::BeginNewAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OceanCrawlersAnimation.OceanCrawlerAnimationInstance.BeginNewAttack");

	UOceanCrawlerAnimationInstance_BeginNewAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UOceanCrawlerAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UOceanCrawlerAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

void UOceanCrawlerAnimationServerData::AfterRead()
{
	UAnimationServerData::AfterRead();

	READ_PTR_FULL(AnimInstanceType, UClass);
}

void UOceanCrawlerAnimationServerData::BeforeDelete()
{
	UAnimationServerData::BeforeDelete();

	DELE_PTR_FULL(AnimInstanceType);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

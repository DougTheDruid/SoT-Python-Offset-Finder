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

void FSirenAnimationLocomotion::AfterRead()
{
	READ_PTR_FULL(TreadwaterSequence, UAnimSequence);
	READ_PTR_FULL(LongwaysLocomotionBlendSpace, UBlendSpace1D);
	READ_PTR_FULL(LocomotionTurningAdditiveBlendSpace, UBlendSpace1D);
	READ_PTR_FULL(LocomotionSpinningAdditiveBlendSpace, UBlendSpace1D);
	READ_PTR_FULL(DivingFromSurfaceSequence, UAnimSequence);
	READ_PTR_FULL(EmergingToSurfaceSequence, UAnimSequence);
}

void FSirenAnimationLocomotion::BeforeDelete()
{
	DELE_PTR_FULL(TreadwaterSequence);
	DELE_PTR_FULL(LongwaysLocomotionBlendSpace);
	DELE_PTR_FULL(LocomotionTurningAdditiveBlendSpace);
	DELE_PTR_FULL(LocomotionSpinningAdditiveBlendSpace);
	DELE_PTR_FULL(DivingFromSurfaceSequence);
	DELE_PTR_FULL(EmergingToSurfaceSequence);
}

void FSirenAnimationDataStructure::AfterRead()
{
	READ_PTR_FULL(FullBodyMontageListings, UCustomAnimationMontageDefinitionListingDataAsset);
	READ_PTR_FULL(AttackAnimationAsset, UAthenaAnimationWeaponDataAsset);
}

void FSirenAnimationDataStructure::BeforeDelete()
{
	DELE_PTR_FULL(FullBodyMontageListings);
	DELE_PTR_FULL(AttackAnimationAsset);
}

void USirenAnimationData::AfterRead()
{
	UAnimationData::AfterRead();

}

void USirenAnimationData::BeforeDelete()
{
	UAnimationData::BeforeDelete();

}

// Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack
// (Final, Native, Public, BlueprintCallable)
void USirenAnimationInstance::ClearActiveAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.ClearActiveAttack");

	USirenAnimationInstance_ClearActiveAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SirensAnimation.SirenAnimationInstance.BeginNewAttack
// (Final, Native, Public, BlueprintCallable)
void USirenAnimationInstance::BeginNewAttack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function SirensAnimation.SirenAnimationInstance.BeginNewAttack");

	USirenAnimationInstance_BeginNewAttack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void USirenAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void USirenAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

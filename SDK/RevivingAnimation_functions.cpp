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

void FReviveGhostAnimations::AfterRead()
{
	READ_PTR_FULL(ReviveInto, UAnimSequence);
	READ_PTR_FULL(SwimmingReviveInto, UAnimSequence);
	READ_PTR_FULL(ReviveLoop, UAnimSequence);
	READ_PTR_FULL(ReviveOutOf, UAnimSequence);
	READ_PTR_FULL(ReviveOutOfLoop, UAnimSequence);
}

void FReviveGhostAnimations::BeforeDelete()
{
	DELE_PTR_FULL(ReviveInto);
	DELE_PTR_FULL(SwimmingReviveInto);
	DELE_PTR_FULL(ReviveLoop);
	DELE_PTR_FULL(ReviveOutOf);
	DELE_PTR_FULL(ReviveOutOfLoop);
}

void UReviveGhostAnimationData::AfterRead()
{
	UAnimationData::AfterRead();

	READ_PTR_FULL(ReviveAnimationsDataAsset, UReviveGhostAnimationDataAsset);
}

void UReviveGhostAnimationData::BeforeDelete()
{
	UAnimationData::BeforeDelete();

	DELE_PTR_FULL(ReviveAnimationsDataAsset);
}

void UReviveGhostAnimationDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UReviveGhostAnimationDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UReviveGhostAnimationInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UReviveGhostAnimationInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

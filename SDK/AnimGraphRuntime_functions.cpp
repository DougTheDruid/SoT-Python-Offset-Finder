// Name: SoT, Version: 2.3.0

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

void FAnimNode_CopyPoseFromMesh::AfterRead()
{
	FAnimNode_Base::AfterRead();

	READ_PTR_FULL(SourceMeshComponent, USkeletalMeshComponent);
}

void FAnimNode_CopyPoseFromMesh::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

	DELE_PTR_FULL(SourceMeshComponent);
}

void FAnimNode_SkeletalControlBase::AfterRead()
{
	FAnimNode_Base::AfterRead();

}

void FAnimNode_SkeletalControlBase::BeforeDelete()
{
	FAnimNode_Base::BeforeDelete();

}

void FAnimNode_BoneDrivenController::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

	READ_PTR_FULL(DrivingCurve, UCurveFloat);
}

void FAnimNode_BoneDrivenController::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

	DELE_PTR_FULL(DrivingCurve);
}

void FAnimNode_CopyBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_CopyBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_Fabrik::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_Fabrik::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_HandIKRetargeting::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_HandIKRetargeting::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_LookAt::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_LookAt::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_ModifyBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ModifyBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_ObserveBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_ObserveBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_RotationMultiplier::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_RotationMultiplier::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_SpringBone::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_SpringBone::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_Trail::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_Trail::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void FAnimNode_TwoBoneIK::AfterRead()
{
	FAnimNode_SkeletalControlBase::AfterRead();

}

void FAnimNode_TwoBoneIK::BeforeDelete()
{
	FAnimNode_SkeletalControlBase::BeforeDelete();

}

void UAnimSequencerInstance::AfterRead()
{
	UAnimInstance::AfterRead();

}

void UAnimSequencerInstance::BeforeDelete()
{
	UAnimInstance::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

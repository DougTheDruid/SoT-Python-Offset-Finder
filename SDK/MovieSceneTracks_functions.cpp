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

void FMovieSceneCameraAnimSectionData::AfterRead()
{
	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void FMovieSceneCameraAnimSectionData::BeforeDelete()
{
	DELE_PTR_FULL(CameraAnim);
}

void FMovieSceneCameraShakeSectionData::AfterRead()
{
	READ_PTR_FULL(ShakeClass, UClass);
}

void FMovieSceneCameraShakeSectionData::BeforeDelete()
{
	DELE_PTR_FULL(ShakeClass);
}

void FMovieSceneEventParameters::AfterRead()
{
}

void FMovieSceneEventParameters::BeforeDelete()
{
}

void FEventPayload::AfterRead()
{
}

void FEventPayload::BeforeDelete()
{
}

void FMovieSceneEventSectionData::AfterRead()
{
}

void FMovieSceneEventSectionData::BeforeDelete()
{
}

void FColorParameterNameAndCurves::AfterRead()
{
}

void FColorParameterNameAndCurves::BeforeDelete()
{
}

void FVectorParameterNameAndCurves::AfterRead()
{
}

void FVectorParameterNameAndCurves::BeforeDelete()
{
}

void FScalarParameterNameAndCurve::AfterRead()
{
}

void FScalarParameterNameAndCurve::BeforeDelete()
{
}

void FMovieSceneSkeletalAnimationParams::AfterRead()
{
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void FMovieSceneSkeletalAnimationParams::BeforeDelete()
{
	DELE_PTR_FULL(Animation);
}

void FMovieScene3DTransformKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DTransformKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DScaleKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DScaleKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DRotationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DRotationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieScene3DLocationKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieScene3DLocationKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneColorKeyStruct::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneColorKeyStruct::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneVectorKeyStructBase::AfterRead()
{
	FMovieSceneKeyStruct::AfterRead();

}

void FMovieSceneVectorKeyStructBase::BeforeDelete()
{
	FMovieSceneKeyStruct::BeforeDelete();

}

void FMovieSceneVector4KeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector4KeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVectorKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVectorKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneVector2DKeyStruct::AfterRead()
{
	FMovieSceneVectorKeyStructBase::AfterRead();

}

void FMovieSceneVector2DKeyStruct::BeforeDelete()
{
	FMovieSceneVectorKeyStructBase::BeforeDelete();

}

void FMovieSceneParameterSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneComponentMaterialSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneComponentMaterialSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneSpawnSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSpawnSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DAttachSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DAttachSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DPathSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DPathSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieScene3DTransformSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieScene3DTransformSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneActorReferenceSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneActorReferenceSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneAudioSectionTemplateData::AfterRead()
{
	READ_PTR_FULL(Sound, USoundBase);
}

void FMovieSceneAudioSectionTemplateData::BeforeDelete()
{
	DELE_PTR_FULL(Sound);
}

void FMovieSceneAudioSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAudioSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneAdditiveCameraAnimationTrackTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAdditiveCameraAnimationTrackTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneAdditiveCameraAnimationTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneCameraShakeSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraShakeSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneCameraAnimSectionTemplate::AfterRead()
{
	FMovieSceneAdditiveCameraAnimationTemplate::AfterRead();

}

void FMovieSceneCameraAnimSectionTemplate::BeforeDelete()
{
	FMovieSceneAdditiveCameraAnimationTemplate::BeforeDelete();

}

void FMovieSceneCameraCutSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneCameraCutSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneColorSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneColorSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneEventSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneEventSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneFadeSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneFadeSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneLevelVisibilitySharedTrack::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneLevelVisibilitySharedTrack::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneLevelVisibilitySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneLevelVisibilitySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneParticleParameterSectionTemplate::AfterRead()
{
	FMovieSceneParameterSectionTemplate::AfterRead();

}

void FMovieSceneParticleParameterSectionTemplate::BeforeDelete()
{
	FMovieSceneParameterSectionTemplate::BeforeDelete();

}

void FMovieSceneParticleSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneParticleSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneVectorPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneVectorPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneStringPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneStringPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneIntegerPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneIntegerPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneEnumPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneEnumPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneBytePropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneBytePropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneFloatPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneFloatPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneBoolPropertySectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneBoolPropertySectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSkeletalAnimationSharedTrack::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSkeletalAnimationSharedTrack::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::AfterRead()
{
	FMovieSceneSkeletalAnimationParams::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplateParameters::BeforeDelete()
{
	FMovieSceneSkeletalAnimationParams::BeforeDelete();

}

void FMovieSceneSkeletalAnimationSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSkeletalAnimationSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneSlomoSectionTemplate::AfterRead()
{
	FMovieSceneEvalTemplate::AfterRead();

}

void FMovieSceneSlomoSectionTemplate::BeforeDelete()
{
	FMovieSceneEvalTemplate::BeforeDelete();

}

void FMovieSceneVisibilitySectionTemplate::AfterRead()
{
	FMovieSceneBoolPropertySectionTemplate::AfterRead();

}

void FMovieSceneVisibilitySectionTemplate::BeforeDelete()
{
	FMovieSceneBoolPropertySectionTemplate::BeforeDelete();

}

void UMovieScene3DConstraintSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DConstraintSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScene3DAttachSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DAttachSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DPathSection::AfterRead()
{
	UMovieScene3DConstraintSection::AfterRead();

}

void UMovieScene3DPathSection::BeforeDelete()
{
	UMovieScene3DConstraintSection::BeforeDelete();

}

void UMovieScene3DConstraintTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieScene3DConstraintTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieScene3DAttachTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DAttachTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DPathTrack::AfterRead()
{
	UMovieScene3DConstraintTrack::AfterRead();

}

void UMovieScene3DPathTrack::BeforeDelete()
{
	UMovieScene3DConstraintTrack::BeforeDelete();

}

void UMovieScene3DTransformSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieScene3DTransformSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneActorReferenceSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneActorReferenceSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneAudioSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(Sound, USoundBase);
}

void UMovieSceneAudioSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(Sound);
}

void UMovieSceneAudioTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneAudioTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneBoolSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneBoolSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneSpawnSection::AfterRead()
{
	UMovieSceneBoolSection::AfterRead();

}

void UMovieSceneSpawnSection::BeforeDelete()
{
	UMovieSceneBoolSection::BeforeDelete();

}

void UMovieSceneByteSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneByteSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneCameraAnimSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(CameraAnim, UCameraAnim);
}

void UMovieSceneCameraAnimSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(CameraAnim);
}

void UMovieSceneCameraAnimTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraAnimTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneCameraCutSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneCameraCutSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneCameraCutTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraCutTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneCameraShakeSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(ShakeClass, UClass);
}

void UMovieSceneCameraShakeSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(ShakeClass);
}

void UMovieSceneCameraShakeTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneCameraShakeTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneColorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneColorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEnumSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEnumSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneEventSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneEventSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneSpawnTrack::AfterRead()
{
	UMovieSceneTrack::AfterRead();

}

void UMovieSceneSpawnTrack::BeforeDelete()
{
	UMovieSceneTrack::BeforeDelete();

}

void UMovieSceneEventTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneEventTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneFloatSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneFloatSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneFadeSection::AfterRead()
{
	UMovieSceneFloatSection::AfterRead();

}

void UMovieSceneFadeSection::BeforeDelete()
{
	UMovieSceneFloatSection::BeforeDelete();

}

void UMovieSceneSlomoSection::AfterRead()
{
	UMovieSceneFloatSection::AfterRead();

}

void UMovieSceneSlomoSection::BeforeDelete()
{
	UMovieSceneFloatSection::BeforeDelete();

}

void UMovieSceneIntegerSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneIntegerSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneLevelVisibilitySection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneLevelVisibilitySection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieScenePropertyTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieScenePropertyTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneLevelVisibilityTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneLevelVisibilityTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneParameterSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParameterSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneMaterialTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneMaterialTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneComponentMaterialTrack::AfterRead()
{
	UMovieSceneMaterialTrack::AfterRead();

}

void UMovieSceneComponentMaterialTrack::BeforeDelete()
{
	UMovieSceneMaterialTrack::BeforeDelete();

}

void UMovieSceneParticleParameterTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleParameterTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneParticleSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneParticleSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneParticleTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneParticleTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieScene3DTransformTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieScene3DTransformTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneActorReferenceTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneActorReferenceTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneBoolTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneBoolTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVisibilityTrack::AfterRead()
{
	UMovieSceneBoolTrack::AfterRead();

}

void UMovieSceneVisibilityTrack::BeforeDelete()
{
	UMovieSceneBoolTrack::BeforeDelete();

}

void UMovieSceneByteTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneByteTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneColorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneColorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneEnumTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

	READ_PTR_FULL(Enum, UEnum);
}

void UMovieSceneEnumTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

	DELE_PTR_FULL(Enum);
}

void UMovieSceneFloatTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneFloatTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneFadeTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneFadeTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneSlomoTrack::AfterRead()
{
	UMovieSceneFloatTrack::AfterRead();

}

void UMovieSceneSlomoTrack::BeforeDelete()
{
	UMovieSceneFloatTrack::BeforeDelete();

}

void UMovieSceneIntegerTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneIntegerTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneStringTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneStringTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneVectorTrack::AfterRead()
{
	UMovieScenePropertyTrack::AfterRead();

}

void UMovieSceneVectorTrack::BeforeDelete()
{
	UMovieScenePropertyTrack::BeforeDelete();

}

void UMovieSceneSkeletalAnimationSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(AnimSequence, UAnimSequence);
	READ_PTR_FULL(Animation, UAnimSequenceBase);
}

void UMovieSceneSkeletalAnimationSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(AnimSequence);
	DELE_PTR_FULL(Animation);
}

void UMovieSceneSkeletalAnimationTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSkeletalAnimationTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneStringSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneStringSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

void UMovieSceneSubSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

	READ_PTR_FULL(SubSequence, UMovieSceneSequence);
}

void UMovieSceneSubSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

	DELE_PTR_FULL(SubSequence);
}

void UMovieSceneCinematicShotSection::AfterRead()
{
	UMovieSceneSubSection::AfterRead();

}

void UMovieSceneCinematicShotSection::BeforeDelete()
{
	UMovieSceneSubSection::BeforeDelete();

}

void UMovieSceneSubTrack::AfterRead()
{
	UMovieSceneNameableTrack::AfterRead();

}

void UMovieSceneSubTrack::BeforeDelete()
{
	UMovieSceneNameableTrack::BeforeDelete();

}

void UMovieSceneCinematicShotTrack::AfterRead()
{
	UMovieSceneSubTrack::AfterRead();

}

void UMovieSceneCinematicShotTrack::BeforeDelete()
{
	UMovieSceneSubTrack::BeforeDelete();

}

void UMovieSceneVectorSection::AfterRead()
{
	UMovieSceneSection::AfterRead();

}

void UMovieSceneVectorSection::BeforeDelete()
{
	UMovieSceneSection::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

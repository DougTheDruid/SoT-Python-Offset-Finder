#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum MovieSceneTracks.MovieScene3DPathSection_Axis
enum class MovieSceneTracks_EMovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X = 0,
	MovieScene3DPathSection_Axis__Y = 1,
	MovieScene3DPathSection_Axis__Z = 2,
	MovieScene3DPathSection_Axis__NEG_X = 3,
	MovieScene3DPathSection_Axis__NEG_Y = 4,
	MovieScene3DPathSection_Axis__NEG_Z = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX = 6,

};

// Enum MovieSceneTracks.EShow3DTrajectory
enum class MovieSceneTracks_EShow3DTrajectory : uint8_t
{
	EShow3DTrajectory__EST_OnlyWhenSelected = 0,
	EShow3DTrajectory__EST_Always  = 1,
	EShow3DTrajectory__EST_Never   = 2,
	EShow3DTrajectory__EST_MAX     = 3,

};

// Enum MovieSceneTracks.ELevelVisibility
enum class MovieSceneTracks_ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible      = 0,
	ELevelVisibility__Hidden       = 1,
	ELevelVisibility__ELevelVisibility_MAX = 2,

};

// Enum MovieSceneTracks.EParticleKey
enum class MovieSceneTracks_EParticleKey : uint8_t
{
	EParticleKey__Activate         = 0,
	EParticleKey__Deactivate       = 1,
	EParticleKey__Trigger          = 2,
	EParticleKey__EParticleKey_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData
// 0x0020
struct FMovieSceneCameraAnimSectionData
{
	class UCameraAnim*                                 CameraAnim;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayScale;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendInTime;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLooping;                                                  // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2L8P[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData
// 0x0020
struct FMovieSceneCameraShakeSectionData
{
	class UClass*                                      ShakeClass;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              PlayScale;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C5BO[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x0010(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2616[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneEventParameters
// 0x0018
struct FMovieSceneEventParameters
{
	unsigned char                                      UnknownData_9Q6X[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.EventPayload
// 0x0030
struct FEventPayload
{
	struct FName                                       EventName;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsSubtitleEvent;                                           // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AK1E[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ActorNumber;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SubtitleIndex;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_59JJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneEventParameters                  Parameters;                                                // 0x0018(0x0018) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionData
// 0x0020
struct FMovieSceneEventSectionData
{
	TArray<float>                                      KeyTimes;                                                  // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FEventPayload>                       KeyValues;                                                 // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves
// 0x01F0
struct FColorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7VF5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  RedCurve;                                                  // 0x0010(0x0078)
	struct FRichCurve                                  GreenCurve;                                                // 0x0088(0x0078)
	struct FRichCurve                                  BlueCurve;                                                 // 0x0100(0x0078)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0178(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves
// 0x0178
struct FVectorParameterNameAndCurves
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_QQIA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  XCurve;                                                    // 0x0010(0x0078)
	struct FRichCurve                                  YCurve;                                                    // 0x0088(0x0078)
	struct FRichCurve                                  ZCurve;                                                    // 0x0100(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve
// 0x0088
struct FScalarParameterNameAndCurve
{
	struct FName                                       ParameterName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8E0F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  ParameterCurve;                                            // 0x0010(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams
// 0x0098
struct FMovieSceneSkeletalAnimationParams
{
	class UAnimSequenceBase*                           Animation;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartOffset;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndOffset;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bReverse : 1;                                              // 0x0014(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_B52P[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRichCurve                                  Weight;                                                    // 0x0020(0x0078) (Edit)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct
// 0x0070 (0x0078 - 0x0008)
struct FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Scale;                                                     // 0x0020(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_J8ZB[0x4C];                                    // 0x002C(0x004C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Scale;                                                     // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_68ML[0x1C];                                    // 0x0014(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{
	struct FRotator                                    Rotation;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YX8U[0x1C];                                    // 0x0014(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct
// 0x0028 (0x0030 - 0x0008)
struct FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{
	struct FVector                                     Location;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LI8P[0x1C];                                    // 0x0014(0x001C) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct
// 0x0050 (0x0058 - 0x0008)
struct FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LVSK[0x40];                                    // 0x0018(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase
// 0x0040 (0x0048 - 0x0008)
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{
	unsigned char                                      UnknownData_O1AG[0x40];                                    // 0x0008(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct
// 0x0018 (0x0060 - 0x0048)
struct FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{
	unsigned char                                      UnknownData_UEKR[0x8];                                     // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector4                                    Vector;                                                    // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct
// 0x0010 (0x0058 - 0x0048)
struct FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector                                     Vector;                                                    // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ITGZ[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{
	struct FVector2D                                   Vector;                                                    // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate
// 0x0030 (0x0048 - 0x0018)
struct FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{
	TArray<struct FScalarParameterNameAndCurve>        Scalars;                                                   // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       Vectors;                                                   // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        Colors;                                                    // 0x0038(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{
	int                                                MaterialIndex;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_N595[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSpawnSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              Curve;                                                     // 0x0018(0x0070)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DAttachSectionTemplate
// 0x0020 (0x0038 - 0x0018)
struct FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       AttachGuid;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       AttachSocketName;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AttachComponentName;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       PathGuid;                                                  // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRichCurve                                  TimingCurve;                                               // 0x0028(0x0078)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> FrontAxisEnum;                                             // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> UpAxisEnum;                                                // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FRTW[0x2];                                     // 0x00A2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x00A4(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bReverse : 1;                                              // 0x00A4(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bForceUpright : 1;                                         // 0x00A4(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_7X97[0x3];                                     // 0x00A5(0x0003) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieScene3DTransformSectionTemplate
// 0x0438 (0x0450 - 0x0018)
struct FMovieScene3DTransformSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  TranslationCurve[0x3];                                     // 0x0018(0x0168)
	struct FRichCurve                                  RotationCurve[0x3];                                        // 0x0180(0x0168)
	struct FRichCurve                                  ScaleCurve[0x3];                                           // 0x02E8(0x0168)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
// 0x00A0 (0x00B8 - 0x0018)
struct FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x0038(0x0070)
	TArray<struct FGuid>                               ActorGuids;                                                // 0x00A8(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplateData
// 0x0118
struct FMovieSceneAudioSectionTemplateData
{
	class USoundBase*                                  Sound;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AudioStartOffset;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                                 AudioRange;                                                // 0x000C(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BB6L[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  AudioPitchMultiplierCurve;                                 // 0x0020(0x0078)
	struct FRichCurve                                  AudioVolumeCurve;                                          // 0x0098(0x0078)
	int                                                RowIndex;                                                  // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MWWU[0x4];                                     // 0x0114(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate
// 0x0118 (0x0130 - 0x0018)
struct FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneAudioSectionTemplateData         AudioData;                                                 // 0x0018(0x0118)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTrackTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTrackTemplate : public FMovieSceneEvalTemplate
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraShakeSectionData           SourceData;                                                // 0x0018(0x0020)
	float                                              SectionStartTime;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FQ77[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{
	struct FMovieSceneCameraAnimSectionData            SourceData;                                                // 0x0018(0x0020)
	float                                              SectionStartTime;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EBCR[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneCameraCutSectionTemplate
// 0x0010 (0x0028 - 0x0018)
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FGuid                                       CameraGuid;                                                // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate
// 0x01F8 (0x0210 - 0x0018)
struct FMovieSceneColorSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FName                                       PropertyName;                                              // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PropertyPath;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FRichCurve                                  Curves[0x4];                                               // 0x0030(0x01E0)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate
// 0x0028 (0x0040 - 0x0018)
struct FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0018(0x0020)
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x0038(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_CFZK[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  FadeCurve;                                                 // 0x0018(0x0078)
	struct FLinearColor                                FadeColor;                                                 // 0x0090(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bFadeAudio : 1;                                            // 0x00A0(0x0001) BIT_FIELD (NoDestructor)
	unsigned char                                      UnknownData_OPOY[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneLevelVisibilitySharedTrack : public FMovieSceneEvalTemplate
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
// 0x0018 (0x0030 - 0x0018)
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{
	TEnumAsByte<MovieSceneTracks_ELevelVisibility>     Visibility;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9EG3[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
// 0x0000 (0x0048 - 0x0048)
struct FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate
// 0x0070 (0x0088 - 0x0018)
struct FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FIntegralCurve                              ParticleKeys;                                              // 0x0018(0x0070)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
// 0x0208 (0x0220 - 0x0018)
struct FMovieSceneVectorPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FRichCurve                                  ComponentCurves[0x4];                                      // 0x0038(0x01E0) (Protected)
	int                                                NumChannelsUsed;                                           // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_INIK[0x4];                                     // 0x021C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneStringPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FStringCurve                                StringCurve;                                               // 0x0038(0x0078) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FIntegralCurve                              IntegerCurve;                                              // 0x0038(0x0070) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneEnumPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FIntegralCurve                              EnumCurve;                                                 // 0x0038(0x0070) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneBytePropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBytePropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FIntegralCurve                              ByteCurve;                                                 // 0x0038(0x0070) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
// 0x0098 (0x00B0 - 0x0018)
struct FMovieSceneFloatPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FRichCurve                                  FloatCurve;                                                // 0x0038(0x0078) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
// 0x0090 (0x00A8 - 0x0018)
struct FMovieSceneBoolPropertySectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieScenePropertySectionData              PropertyData;                                              // 0x0018(0x0020) (Protected)
	struct FIntegralCurve                              BoolCurve;                                                 // 0x0038(0x0070) (Protected)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSharedTrack
// 0x0000 (0x0018 - 0x0018)
struct FMovieSceneSkeletalAnimationSharedTrack : public FMovieSceneEvalTemplate
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
// 0x0008 (0x00A0 - 0x0098)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{
	float                                              SectionStartTime;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SectionEndTime;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
// 0x00A0 (0x00B8 - 0x0018)
struct FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;                                                    // 0x0018(0x00A0)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate
// 0x0078 (0x0090 - 0x0018)
struct FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FRichCurve                                  SlomoCurve;                                                // 0x0018(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate
// 0x0008 (0x00B0 - 0x00A8)
struct FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{
	bool                                               bTemporarilyHiddenInGame;                                  // 0x00A8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3OGW[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

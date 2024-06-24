#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x30
struct EventPayload
{
public:
	struct FName                                                 EventName;                                         // 0x0(0x8)
	bool                                                         IsSubtitleEvent;                                   // 0x8(0x1)
	int                                                          ActorNumber;                                       // 0xc(0x4)
	int                                                          SubtitleIndex;                                     // 0x10(0x4)
	struct MovieSceneEventParameters                             Parameters;                                        // 0x18(0x18)
};


// Size 0xa8
struct MovieScene3DPathSectionTemplate
{
public:
	struct Guid                                                  PathGuid;                                          // 0x18(0x10)
	struct RichCurve                                             TimingCurve;                                       // 0x28(0x78)
	char                                                         FrontAxisEnum;                                     // 0xa0(0x1)
	char                                                         UpAxisEnum;                                        // 0xa1(0x1)
	bool                                                         bFollow;                                           // 0xa4(0x1)
	bool                                                         bReverse;                                          // 0xa4(0x1)
	bool                                                         bForceUpright;                                     // 0xa4(0x1)
};


// Size 0xa8
struct MovieSceneFadeSectionTemplate
{
public:
	struct RichCurve                                             FadeCurve;                                         // 0x18(0x78)
	struct LinearColor                                           FadeColor;                                         // 0x90(0x10)
	bool                                                         bFadeAudio;                                        // 0xa0(0x1)
};


// Size 0x60
struct MovieSceneVector4KeyStruct
{
public:
	struct Vector4                                               Vector;                                            // 0x50(0x10)
};


// Size 0x50
struct MovieSceneVector2DKeyStruct
{
public:
	struct Vector2D                                              Vector;                                            // 0x48(0x8)
};


// Size 0x88
struct ScalarParameterNameAndCurve
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	struct RichCurve                                             ParameterCurve;                                    // 0x10(0x78)
};


// Size 0xa8
struct MovieSceneBoolPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct IntegralCurve                                         BoolCurve;                                         // 0x38(0x70)
};


// Size 0x30
struct MovieScene3DLocationKeyStruct
{
public:
	struct Vector                                                Location;                                          // 0x8(0xc)
};


// Size 0xb0
struct MovieSceneVisibilitySectionTemplate
{
public:
	bool                                                         bTemporarilyHiddenInGame;                          // 0xa8(0x1)
};


// Size 0xa0
struct MovieSceneSkeletalAnimationSectionTemplateParameters
{
public:
	float                                                        SectionStartTime;                                  // 0x98(0x4)
	float                                                        SectionEndTime;                                    // 0x9c(0x4)
};


// Size 0x178
struct VectorParameterNameAndCurves
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	struct RichCurve                                             XCurve;                                            // 0x10(0x78)
	struct RichCurve                                             YCurve;                                            // 0x88(0x78)
	struct RichCurve                                             ZCurve;                                            // 0x100(0x78)
};


// Size 0x20
struct MovieSceneCameraShakeSectionData
{
public:
	class UClass*                                                ShakeClass;                                        // 0x0(0x8)
	float                                                        PlayScale;                                         // 0x8(0x4)
	char                                                         PlaySpace;                                         // 0xc(0x1)
	struct Rotator                                               UserDefinedPlaySpace;                              // 0x10(0xc)
};


// Size 0xa8
struct MovieSceneIntegerPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct IntegralCurve                                         IntegerCurve;                                      // 0x38(0x70)
};


// Size 0xa8
struct MovieSceneBytePropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct IntegralCurve                                         ByteCurve;                                         // 0x38(0x70)
};


// Size 0x220
struct MovieSceneVectorPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct RichCurve                                             ComponentCurves;                                   // 0x38(0x78)
	int                                                          NumChannelsUsed;                                   // 0x218(0x4)
};


// Size 0xb0
struct MovieSceneFloatPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct RichCurve                                             FloatCurve;                                        // 0x38(0x78)
};


// Size 0x58
struct MovieSceneColorKeyStruct
{
public:
	struct LinearColor                                           Color;                                             // 0x8(0x10)
};


// Size 0x88
struct MovieSceneParticleSectionTemplate
{
public:
	struct IntegralCurve                                         ParticleKeys;                                      // 0x18(0x70)
};


// Size 0x450
struct MovieScene3DTransformSectionTemplate
{
public:
	struct RichCurve                                             TranslationCurve;                                  // 0x18(0x78)
	struct RichCurve                                             RotationCurve;                                     // 0x180(0x78)
	struct RichCurve                                             ScaleCurve;                                        // 0x2e8(0x78)
};


// Size 0x98
struct MovieSceneSkeletalAnimationParams
{
public:
	class AnimSequenceBase*                                      Animation;                                         // 0x0(0x8)
	float                                                        StartOffset;                                       // 0x8(0x4)
	float                                                        EndOffset;                                         // 0xc(0x4)
	float                                                        PlayRate;                                          // 0x10(0x4)
	bool                                                         bReverse;                                          // 0x14(0x1)
	struct FName                                                 SlotName;                                          // 0x18(0x8)
	struct RichCurve                                             Weight;                                            // 0x20(0x78)
};


// Size 0x88
struct MovieSceneSpawnSectionTemplate
{
public:
	struct IntegralCurve                                         Curve;                                             // 0x18(0x70)
};


// Size 0x30
struct MovieSceneLevelVisibilitySectionTemplate
{
public:
	char                                                         Visibility;                                        // 0x18(0x1)
	TArray<struct Name>                                          LevelNames;                                        // 0x20(0x10)
};


// Size 0x30
struct MovieScene3DScaleKeyStruct
{
public:
	struct Vector                                                Scale;                                             // 0x8(0xc)
};


// Size 0x38
struct MovieScene3DAttachSectionTemplate
{
public:
	struct Guid                                                  AttachGuid;                                        // 0x18(0x10)
	struct FName                                                 AttachSocketName;                                  // 0x28(0x8)
	struct FName                                                 AttachComponentName;                               // 0x30(0x8)
};


// Size 0x210
struct MovieSceneColorSectionTemplate
{
public:
	struct FName                                                 PropertyName;                                      // 0x18(0x8)
	struct FString                                               PropertyPath;                                      // 0x20(0x10)
	struct RichCurve                                             Curves;                                            // 0x30(0x78)
};


// Size 0xa8
struct MovieSceneEnumPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct IntegralCurve                                         EnumCurve;                                         // 0x38(0x70)
};


// Size 0x30
struct MovieScene3DRotationKeyStruct
{
public:
	struct Rotator                                               Rotation;                                          // 0x8(0xc)
};


// Size 0x118
struct MovieSceneAudioSectionTemplateData
{
public:
	class SoundBase*                                             Sound;                                             // 0x0(0x8)
	float                                                        AudioStartOffset;                                  // 0x8(0x4)
	struct FloatRange                                            AudioRange;                                        // 0xc(0x10)
	struct RichCurve                                             AudioPitchMultiplierCurve;                         // 0x20(0x78)
	struct RichCurve                                             AudioVolumeCurve;                                  // 0x98(0x78)
	int                                                          RowIndex;                                          // 0x110(0x4)
};


// Size 0x58
struct MovieSceneVectorKeyStruct
{
public:
	struct Vector                                                Vector;                                            // 0x48(0xc)
};


// Size 0x1f0
struct ColorParameterNameAndCurves
{
public:
	struct FName                                                 ParameterName;                                     // 0x0(0x8)
	int                                                          Index;                                             // 0x8(0x4)
	struct RichCurve                                             RedCurve;                                          // 0x10(0x78)
	struct RichCurve                                             GreenCurve;                                        // 0x88(0x78)
	struct RichCurve                                             BlueCurve;                                         // 0x100(0x78)
	struct RichCurve                                             AlphaCurve;                                        // 0x178(0x78)
};


// Size 0xb0
struct MovieSceneStringPropertySectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct StringCurve                                           StringCurve;                                       // 0x38(0x78)
};


// Size 0x20
struct MovieSceneCameraAnimSectionData
{
public:
	class CameraAnim*                                            CameraAnim;                                        // 0x0(0x8)
	float                                                        PlayRate;                                          // 0x8(0x4)
	float                                                        PlayScale;                                         // 0xc(0x4)
	float                                                        BlendInTime;                                       // 0x10(0x4)
	float                                                        BlendOutTime;                                      // 0x14(0x4)
	bool                                                         bLooping;                                          // 0x18(0x1)
};


// Size 0x90
struct MovieSceneSlomoSectionTemplate
{
public:
	struct RichCurve                                             SlomoCurve;                                        // 0x18(0x78)
};


// Size 0xb8
struct MovieSceneActorReferenceSectionTemplate
{
public:
	struct MovieScenePropertySectionData                         PropertyData;                                      // 0x18(0x20)
	struct IntegralCurve                                         ActorGuidIndexCurve;                               // 0x38(0x70)
	TArray<struct Guid>                                          ActorGuids;                                        // 0xa8(0x10)
};


// Size 0x50
struct MovieSceneComponentMaterialSectionTemplate
{
public:
	int                                                          MaterialIndex;                                     // 0x48(0x4)
};


// Size 0x28
struct MovieSceneCameraCutSectionTemplate
{
public:
	struct Guid                                                  CameraGuid;                                        // 0x18(0x10)
};


// Size 0x78
struct MovieScene3DTransformKeyStruct
{
public:
	struct Vector                                                Location;                                          // 0x8(0xc)
	struct Rotator                                               Rotation;                                          // 0x14(0xc)
	struct Vector                                                Scale;                                             // 0x20(0xc)
};


// Size 0xc0
struct MovieSceneSkeletalAnimationSectionTemplate
{
public:
	struct MovieSceneSkeletalAnimationSectionTemplateParameters  Params;                                            // 0x18(0xa0)
	char                                                         AnimationSubtype;                                  // 0xb8(0x1)
};


// Size 0x20
struct MovieSceneEventSectionData
{
public:
	TArray<float>                                                KeyTimes;                                          // 0x0(0x10)
	TArray<struct EventPayload>                                  KeyValues;                                         // 0x10(0x10)
};


// Size 0x48
struct MovieSceneParameterSectionTemplate
{
public:
	TArray<struct ScalarParameterNameAndCurve>                   Scalars;                                           // 0x18(0x10)
	TArray<struct VectorParameterNameAndCurves>                  Vectors;                                           // 0x28(0x10)
	TArray<struct ColorParameterNameAndCurves>                   Colors;                                            // 0x38(0x10)
};


// Size 0x130
struct MovieSceneAudioSectionTemplate
{
public:
	struct MovieSceneAudioSectionTemplateData                    AudioData;                                         // 0x18(0x118)
};


// Size 0x40
struct MovieSceneCameraAnimSectionTemplate
{
public:
	struct MovieSceneCameraAnimSectionData                       SourceData;                                        // 0x18(0x20)
	float                                                        SectionStartTime;                                  // 0x38(0x4)
};


// Size 0x40
struct MovieSceneCameraShakeSectionTemplate
{
public:
	struct MovieSceneCameraShakeSectionData                      SourceData;                                        // 0x18(0x20)
	float                                                        SectionStartTime;                                  // 0x38(0x4)
};


// Size 0x40
struct MovieSceneEventSectionTemplate
{
public:
	struct MovieSceneEventSectionData                            EventData;                                         // 0x18(0x20)
	bool                                                         bFireEventsWhenForwards;                           // 0x38(0x1)
	bool                                                         bFireEventsWhenBackwards;                          // 0x38(0x1)
};



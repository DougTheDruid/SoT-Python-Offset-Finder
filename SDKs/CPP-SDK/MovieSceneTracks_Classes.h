// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class MovieScene3DConstraintSection: public MovieSceneSection
{
public:
	struct Guid                                                  ConstraintId;                                      // 0x98(0x10)
};


// Size 0x18 (Full Size[0xc0] - InheritedSize[0xa8]
class MovieScene3DAttachSection: public MovieScene3DConstraintSection
{
public:
	struct FName                                                 AttachSocketName;                                  // 0xa8(0x8)
	struct FName                                                 AttachComponentName;                               // 0xb0(0x8)
	bool                                                         bConstrainTx;                                      // 0xb8(0x1)
	bool                                                         bConstrainTy;                                      // 0xb8(0x1)
	bool                                                         bConstrainTz;                                      // 0xb8(0x1)
	bool                                                         bConstrainRx;                                      // 0xb8(0x1)
	bool                                                         bConstrainRy;                                      // 0xb8(0x1)
	bool                                                         bConstrainRz;                                      // 0xb8(0x1)
	char                                                         pad0x7_9NRBZ[0x7];                                 // 0xb9(0x7)
};


// Size 0x80 (Full Size[0x128] - InheritedSize[0xa8]
class MovieScene3DPathSection: public MovieScene3DConstraintSection
{
public:
	struct RichCurve                                             TimingCurve;                                       // 0xa8(0x78)
	byte                                                         FrontAxisEnum;                                     // 0x120(0x1)
	byte                                                         UpAxisEnum;                                        // 0x121(0x1)
	char                                                         pad0x2_102MM[0x2];                                 // 0x122(0x2)
	bool                                                         bFollow;                                           // 0x124(0x1)
	bool                                                         bReverse;                                          // 0x124(0x1)
	bool                                                         bForceUpright;                                     // 0x124(0x1)
	char                                                         pad0x3_SFT1R[0x3];                                 // 0x125(0x3)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieScene3DConstraintTrack: public MovieSceneTrack
{
public:
	TArray<class MovieSceneSection*>                             ConstraintSections;                                // 0x88(0x10)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class MovieScene3DAttachTrack: public MovieScene3DConstraintTrack
{
public:
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class MovieScene3DPathTrack: public MovieScene3DConstraintTrack
{
public:
};


// Size 0x440 (Full Size[0x4d8] - InheritedSize[0x98]
class MovieScene3DTransformSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_Y9XD8[0x8];                                 // 0x98(0x8)
	struct RichCurve                                             Translation;                                       // 0xa0(0x78)
	char                                                         pad0xf0_LU198[0xf0];                               // 0x118(0xf0)
	struct RichCurve                                             Rotation;                                          // 0x208(0x78)
	char                                                         pad0xf0_EC52P[0xf0];                               // 0x280(0xf0)
	struct RichCurve                                             Scale;                                             // 0x370(0x78)
	char                                                         pad0xf0_Q3608[0xf0];                               // 0x3e8(0xf0)
};


// Size 0x98 (Full Size[0x130] - InheritedSize[0x98]
class MovieSceneActorReferenceSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_VPMAL[0x8];                                 // 0x98(0x8)
	struct IntegralCurve                                         ActorGuidIndexCurve;                               // 0xa0(0x70)
	char                                                         pad0x10_ESRFN[0x10];                               // 0x110(0x10)
	TArray<Str ActorGuidStrings>                                 ActorGuidStrings;                                  // 0x120(0x10)
};


// Size 0x110 (Full Size[0x1a8] - InheritedSize[0x98]
class MovieSceneAudioSection: public MovieSceneSection
{
public:
	class SoundBase*                                             Sound;                                             // 0x98(0x8)
	float                                                        StartOffset;                                       // 0xa0(0x4)
	float                                                        AudioStartTime;                                    // 0xa4(0x4)
	float                                                        AudioDilationFactor;                               // 0xa8(0x4)
	float                                                        AudioVolume;                                       // 0xac(0x4)
	struct RichCurve                                             SoundVolume;                                       // 0xb0(0x78)
	struct RichCurve                                             PitchMultiplier;                                   // 0x128(0x78)
	bool                                                         bSuppressSubtitles;                                // 0x1a0(0x1)
	char                                                         pad0x7_TCC65[0x7];                                 // 0x1a1(0x7)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneAudioTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             AudioSections;                                     // 0x88(0x10)
};


// Size 0x80 (Full Size[0x118] - InheritedSize[0x98]
class MovieSceneBoolSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_TB25X[0x8];                                 // 0x98(0x8)
	bool                                                         DefaultValue;                                      // 0xa0(0x1)
	char                                                         pad0x7_P1RAO[0x7];                                 // 0xa1(0x7)
	struct IntegralCurve                                         BoolCurve;                                         // 0xa8(0x70)
};


// Size 0x0 (Full Size[0x118] - InheritedSize[0x118]
class MovieSceneSpawnSection: public MovieSceneBoolSection
{
public:
};


// Size 0x78 (Full Size[0x110] - InheritedSize[0x98]
class MovieSceneByteSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_6XNE0[0x8];                                 // 0x98(0x8)
	struct IntegralCurve                                         ByteCurve;                                         // 0xa0(0x70)
};


// Size 0x40 (Full Size[0xd8] - InheritedSize[0x98]
class MovieSceneCameraAnimSection: public MovieSceneSection
{
public:
	struct MovieSceneCameraAnimSectionData                       AnimData;                                          // 0x98(0x20)
	class CameraAnim*                                            CameraAnim;                                        // 0xb8(0x8)
	float                                                        PlayRate;                                          // 0xc0(0x4)
	float                                                        PlayScale;                                         // 0xc4(0x4)
	float                                                        BlendInTime;                                       // 0xc8(0x4)
	float                                                        BlendOutTime;                                      // 0xcc(0x4)
	bool                                                         bLooping;                                          // 0xd0(0x1)
	char                                                         pad0x7_G5QQV[0x7];                                 // 0xd1(0x7)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneCameraAnimTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             CameraAnimSections;                                // 0x88(0x10)
};


// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class MovieSceneCameraCutSection: public MovieSceneSection
{
public:
	struct Guid                                                  CameraGuid;                                        // 0x98(0x10)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneCameraCutTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
};


// Size 0x40 (Full Size[0xd8] - InheritedSize[0x98]
class MovieSceneCameraShakeSection: public MovieSceneSection
{
public:
	struct MovieSceneCameraShakeSectionData                      ShakeData;                                         // 0x98(0x20)
	class UClass*                                                ShakeClass;                                        // 0xb8(0x8)
	float                                                        PlayScale;                                         // 0xc0(0x4)
	byte                                                         PlaySpace;                                         // 0xc4(0x1)
	char                                                         pad0x3_DB5ST[0x3];                                 // 0xc5(0x3)
	struct Rotator                                               UserDefinedPlaySpace;                              // 0xc8(0xc)
	char                                                         pad0x4_HH11Q[0x4];                                 // 0xd4(0x4)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneCameraShakeTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             CameraShakeSections;                               // 0x88(0x10)
};


// Size 0x1e8 (Full Size[0x280] - InheritedSize[0x98]
class MovieSceneColorSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_3L636[0x8];                                 // 0x98(0x8)
	struct RichCurve                                             RedCurve;                                          // 0xa0(0x78)
	struct RichCurve                                             GreenCurve;                                        // 0x118(0x78)
	struct RichCurve                                             BlueCurve;                                         // 0x190(0x78)
	struct RichCurve                                             AlphaCurve;                                        // 0x208(0x78)
};


// Size 0x78 (Full Size[0x110] - InheritedSize[0x98]
class MovieSceneEnumSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_5USV3[0x8];                                 // 0x98(0x8)
	struct IntegralCurve                                         EnumCurve;                                         // 0xa0(0x70)
};


// Size 0x110 (Full Size[0x1a8] - InheritedSize[0x98]
class MovieSceneEventSection: public MovieSceneSection
{
public:
	struct NameCurve                                             Events;                                            // 0x98(0x68)
	struct MovieSceneEventSectionData                            EventData;                                         // 0x100(0x20)
	char                                                         pad0x88_DKQ0V[0x88];                               // 0x120(0x88)
};


// Size 0x20 (Full Size[0xa8] - InheritedSize[0x88]
class MovieSceneSpawnTrack: public MovieSceneTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
	struct Guid                                                  ObjectGuid;                                        // 0x98(0x10)
};


// Size 0x18 (Full Size[0xa0] - InheritedSize[0x88]
class MovieSceneEventTrack: public MovieSceneNameableTrack
{
public:
	bool                                                         bFireEventsWhenForwards;                           // 0x88(0x1)
	bool                                                         bFireEventsWhenBackwards;                          // 0x88(0x1)
	char                                                         pad0x7_8SI83[0x7];                                 // 0x89(0x7)
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x90(0x10)
};


// Size 0x80 (Full Size[0x118] - InheritedSize[0x98]
class MovieSceneFloatSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_RYTHT[0x8];                                 // 0x98(0x8)
	struct RichCurve                                             FloatCurve;                                        // 0xa0(0x78)
};


// Size 0x18 (Full Size[0x130] - InheritedSize[0x118]
class MovieSceneFadeSection: public MovieSceneFloatSection
{
public:
	struct LinearColor                                           FadeColor;                                         // 0x118(0x10)
	bool                                                         bFadeAudio;                                        // 0x128(0x1)
	char                                                         pad0x7_FEF1C[0x7];                                 // 0x129(0x7)
};


// Size 0x0 (Full Size[0x118] - InheritedSize[0x118]
class MovieSceneSlomoSection: public MovieSceneFloatSection
{
public:
};


// Size 0x78 (Full Size[0x110] - InheritedSize[0x98]
class MovieSceneIntegerSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_EDNOS[0x8];                                 // 0x98(0x8)
	struct IntegralCurve                                         IntegerCurve;                                      // 0xa0(0x70)
};


// Size 0x18 (Full Size[0xb0] - InheritedSize[0x98]
class MovieSceneLevelVisibilitySection: public MovieSceneSection
{
public:
	byte                                                         Visibility;                                        // 0x98(0x1)
	char                                                         pad0x7_6W188[0x7];                                 // 0x99(0x7)
	TArray<struct FName>                                         LevelNames;                                        // 0xa0(0x10)
};


// Size 0x28 (Full Size[0xb0] - InheritedSize[0x88]
class MovieScenePropertyTrack: public MovieSceneNameableTrack
{
public:
	struct FName                                                 PropertyName;                                      // 0x88(0x8)
	struct FString                                               PropertyPath;                                      // 0x90(0x10)
	TArray<class MovieSceneSection*>                             Sections;                                          // 0xa0(0x10)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneLevelVisibilityTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
};


// Size 0x30 (Full Size[0xc8] - InheritedSize[0x98]
class MovieSceneParameterSection: public MovieSceneSection
{
public:
	TArray<struct ScalarParameterNameAndCurve>                   ScalarParameterNamesAndCurves;                     // 0x98(0x10)
	TArray<struct VectorParameterNameAndCurves>                  VectorParameterNamesAndCurves;                     // 0xa8(0x10)
	TArray<struct ColorParameterNameAndCurves>                   ColorParameterNamesAndCurves;                      // 0xb8(0x10)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneMaterialTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class MovieSceneComponentMaterialTrack: public MovieSceneMaterialTrack
{
public:
	int                                                          MaterialIndex;                                     // 0x98(0x4)
	char                                                         pad0x4_WKXON[0x4];                                 // 0x9c(0x4)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneParticleParameterTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
};


// Size 0x70 (Full Size[0x108] - InheritedSize[0x98]
class MovieSceneParticleSection: public MovieSceneSection
{
public:
	struct IntegralCurve                                         ParticleKeys;                                      // 0x98(0x70)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneParticleTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             ParticleSections;                                  // 0x88(0x10)
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieScene3DTransformTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneActorReferenceTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneBoolTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneVisibilityTrack: public MovieSceneBoolTrack
{
public:
};


// Size 0x8 (Full Size[0xb8] - InheritedSize[0xb0]
class MovieSceneByteTrack: public MovieScenePropertyTrack
{
public:
	class Enum*                                                  Enum;                                              // 0xb0(0x8)
};


// Size 0x8 (Full Size[0xb8] - InheritedSize[0xb0]
class MovieSceneColorTrack: public MovieScenePropertyTrack
{
public:
	bool                                                         bIsSlateColor;                                     // 0xb0(0x1)
	char                                                         pad0x7_FYKFH[0x7];                                 // 0xb1(0x7)
};


// Size 0x8 (Full Size[0xb8] - InheritedSize[0xb0]
class MovieSceneEnumTrack: public MovieScenePropertyTrack
{
public:
	class Enum*                                                  Enum;                                              // 0xb0(0x8)
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneFloatTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneFadeTrack: public MovieSceneFloatTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneSlomoTrack: public MovieSceneFloatTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneIntegerTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x0 (Full Size[0xb0] - InheritedSize[0xb0]
class MovieSceneStringTrack: public MovieScenePropertyTrack
{
public:
};


// Size 0x8 (Full Size[0xb8] - InheritedSize[0xb0]
class MovieSceneVectorTrack: public MovieScenePropertyTrack
{
public:
	int                                                          NumChannelsUsed;                                   // 0xb0(0x4)
	char                                                         pad0x4_GAZGG[0x4];                                 // 0xb4(0x4)
};


// Size 0xc0 (Full Size[0x158] - InheritedSize[0x98]
class MovieSceneSkeletalAnimationSection: public MovieSceneSection
{
public:
	struct MovieSceneSkeletalAnimationParams                     Params;                                            // 0x98(0x98)
	class AnimSequence*                                          AnimSequence;                                      // 0x130(0x8)
	class AnimSequenceBase*                                      Animation;                                         // 0x138(0x8)
	float                                                        StartOffset;                                       // 0x140(0x4)
	float                                                        EndOffset;                                         // 0x144(0x4)
	float                                                        PlayRate;                                          // 0x148(0x4)
	bool                                                         bReverse;                                          // 0x14c(0x1)
	char                                                         pad0x3_VAM1H[0x3];                                 // 0x14d(0x3)
	struct FName                                                 SlotName;                                          // 0x150(0x8)
};


// Size 0x18 (Full Size[0xa0] - InheritedSize[0x88]
class MovieSceneSkeletalAnimationTrack: public MovieSceneNameableTrack
{
public:
	byte                                                         TrackSubtype;                                      // 0x88(0x1)
	char                                                         pad0x7_M857E[0x7];                                 // 0x89(0x7)
	TArray<class MovieSceneSection*>                             AnimationSections;                                 // 0x90(0x10)
};


// Size 0x80 (Full Size[0x118] - InheritedSize[0x98]
class MovieSceneStringSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_IE53O[0x8];                                 // 0x98(0x8)
	struct StringCurve                                           StringCurve;                                       // 0xa0(0x78)
};


// Size 0x68 (Full Size[0x100] - InheritedSize[0x98]
class MovieSceneSubSection: public MovieSceneSection
{
public:
	struct MovieSceneSectionParameters                           Parameters;                                        // 0x98(0x10)
	float                                                        StartOffset;                                       // 0xa8(0x4)
	float                                                        TimeScale;                                         // 0xac(0x4)
	float                                                        PrerollTime;                                       // 0xb0(0x4)
	char                                                         pad0x4_D4SKW[0x4];                                 // 0xb4(0x4)
	class MovieSceneSequence*                                    SubSequence;                                       // 0xb8(0x8)
	struct FString                                               TargetSequenceName;                                // 0xe0(0x10)
	struct DirectoryPath                                         TargetPathToRecordTo;                              // 0xf0(0x10)
};


// Size 0x38 (Full Size[0x138] - InheritedSize[0x100]
class MovieSceneCinematicShotSection: public MovieSceneSubSection
{
public:
	struct FText                                                 DisplayName;                                       // 0x100(0x38)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class MovieSceneSubTrack: public MovieSceneNameableTrack
{
public:
	TArray<class MovieSceneSection*>                             Sections;                                          // 0x88(0x10)
};


// Size 0x0 (Full Size[0x98] - InheritedSize[0x98]
class MovieSceneCinematicShotTrack: public MovieSceneSubTrack
{
public:
};


// Size 0x1f0 (Full Size[0x288] - InheritedSize[0x98]
class MovieSceneVectorSection: public MovieSceneSection
{
public:
	char                                                         pad0x8_VG1F4[0x8];                                 // 0x98(0x8)
	struct RichCurve                                             Curves;                                            // 0xa0(0x78)
	char                                                         pad0x168_AAWBQ[0x168];                             // 0x118(0x168)
	int                                                          ChannelsUsed;                                      // 0x280(0x4)
	char                                                         pad0x4_DJ77P[0x4];                                 // 0x284(0x4)
};


}
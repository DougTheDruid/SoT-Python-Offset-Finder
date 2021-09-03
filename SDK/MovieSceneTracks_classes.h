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
// Classes
//---------------------------------------------------------------------------

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	struct FGuid                                       ConstraintId;                                              // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0018 (FullSize[0x00C0] - InheritedSize[0x00A8])
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                          // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       AttachComponentName;                                       // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bConstrainTx : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bConstrainTy : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bConstrainTz : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bConstrainRx : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bConstrainRy : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bConstrainRz : 1;                                          // 0x00B8(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_MZDV[0x7];                                     // 0x00B9(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0080 (FullSize[0x0128] - InheritedSize[0x00A8])
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	struct FRichCurve                                  TimingCurve;                                               // 0x00A8(0x0078) (Edit)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> FrontAxisEnum;                                             // 0x0120(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<MovieSceneTracks_EMovieScene3DPathSection_Axis> UpAxisEnum;                                                // 0x0121(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1K4A[0x2];                                     // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bFollow : 1;                                               // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bReverse : 1;                                              // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bForceUpright : 1;                                         // 0x0124(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_KYR8[0x3];                                     // 0x0125(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  ConstraintSections;                                        // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0440 (FullSize[0x04D8] - InheritedSize[0x0098])
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_0EF5[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Translation[0x3];                                          // 0x00A0(0x0168)
	struct FRichCurve                                  Rotation[0x3];                                             // 0x0208(0x0168)
	struct FRichCurve                                  Scale[0x3];                                                // 0x0370(0x0168)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0098 (FullSize[0x0130] - InheritedSize[0x0098])
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_W57H[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              ActorGuidIndexCurve;                                       // 0x00A0(0x0070)
	unsigned char                                      UnknownData_WAZO[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             ActorGuidStrings;                                          // 0x0120(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0110 (FullSize[0x01A8] - InheritedSize[0x0098])
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	class USoundBase*                                  Sound;                                                     // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartOffset;                                               // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AudioStartTime;                                            // 0x00A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AudioDilationFactor;                                       // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AudioVolume;                                               // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRichCurve                                  SoundVolume;                                               // 0x00B0(0x0078) (Edit)
	struct FRichCurve                                  PitchMultiplier;                                           // 0x0128(0x0078) (Edit)
	bool                                               bSuppressSubtitles;                                        // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GGHJ[0x7];                                     // 0x01A1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AudioSections;                                             // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_1IIP[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               DefaultValue;                                              // 0x00A0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_UQQV[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              BoolCurve;                                                 // 0x00A8(0x0070)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_10L1[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              ByteCurve;                                                 // 0x00A0(0x0070)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraAnimSectionData            AnimData;                                                  // 0x0098(0x0020) (Edit)
	class UCameraAnim*                                 CameraAnim;                                                // 0x00B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayScale;                                                 // 0x00C4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendInTime;                                               // 0x00C8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BlendOutTime;                                              // 0x00CC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bLooping;                                                  // 0x00D0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3P9X[0x7];                                     // 0x00D1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraAnimSections;                                        // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	struct FGuid                                       CameraGuid;                                                // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0040 (FullSize[0x00D8] - InheritedSize[0x0098])
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	struct FMovieSceneCameraShakeSectionData           ShakeData;                                                 // 0x0098(0x0020) (Edit)
	class UClass*                                      ShakeClass;                                                // 0x00B8(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              PlayScale;                                                 // 0x00C0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ECameraAnimPlaySpace>           PlaySpace;                                                 // 0x00C4(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XICW[0x3];                                     // 0x00C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRotator                                    UserDefinedPlaySpace;                                      // 0x00C8(0x000C) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TJO2[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  CameraShakeSections;                                       // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x01E8 (FullSize[0x0280] - InheritedSize[0x0098])
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_6BI0[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  RedCurve;                                                  // 0x00A0(0x0078)
	struct FRichCurve                                  GreenCurve;                                                // 0x0118(0x0078)
	struct FRichCurve                                  BlueCurve;                                                 // 0x0190(0x0078)
	struct FRichCurve                                  AlphaCurve;                                                // 0x0208(0x0078)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_LVJM[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              EnumCurve;                                                 // 0x00A0(0x0070)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0110 (FullSize[0x01A8] - InheritedSize[0x0098])
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	struct FNameCurve                                  Events;                                                    // 0x0098(0x0068) (Deprecated)
	struct FMovieSceneEventSectionData                 EventData;                                                 // 0x0100(0x0020)
	unsigned char                                      UnknownData_D6WB[0x88];                                    // 0x0120(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)
	struct FGuid                                       ObjectGuid;                                                // 0x0098(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      bFireEventsWhenForwards : 1;                               // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bFireEventsWhenBackwards : 1;                              // 0x0088(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_TQUB[0x7];                                     // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0090(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_B30F[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  FloatCurve;                                                // 0x00A0(0x0078)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0018 (FullSize[0x0130] - InheritedSize[0x0118])
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	struct FLinearColor                                FadeColor;                                                 // 0x0118(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      bFadeAudio : 1;                                            // 0x0128(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_4HMQ[0x7];                                     // 0x0129(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (FullSize[0x0118] - InheritedSize[0x0118])
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0078 (FullSize[0x0110] - InheritedSize[0x0098])
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_VQ6Z[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FIntegralCurve                              IntegerCurve;                                              // 0x00A0(0x0070)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0018 (FullSize[0x00B0] - InheritedSize[0x0098])
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	TEnumAsByte<MovieSceneTracks_ELevelVisibility>     Visibility;                                                // 0x0098(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YQHZ[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               LevelNames;                                                // 0x00A0(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0028 (FullSize[0x00B0] - InheritedSize[0x0088])
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FName                                       PropertyName;                                              // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FString                                     PropertyPath;                                              // 0x0090(0x0010) (ZeroConstructor, Protected, HasGetValueTypeHash)
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x00A0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0030 (FullSize[0x00C8] - InheritedSize[0x0098])
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	TArray<struct FScalarParameterNameAndCurve>        ScalarParameterNamesAndCurves;                             // 0x0098(0x0010) (ZeroConstructor)
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                             // 0x00A8(0x0010) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                              // 0x00B8(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	int                                                MaterialIndex;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DNSB[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0070 (FullSize[0x0108] - InheritedSize[0x0098])
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ParticleKeys;                                              // 0x0098(0x0070)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  ParticleSections;                                          // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:
	bool                                               bIsSlateColor;                                             // 0x00B0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_3LRU[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:
	class UEnum*                                       Enum;                                                      // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:
	int                                                NumChannelsUsed;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_37IK[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00C0 (FullSize[0x0158] - InheritedSize[0x0098])
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                    // 0x0098(0x0098) (Edit)
	class UAnimSequence*                               AnimSequence;                                              // 0x0130(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                           Animation;                                                 // 0x0138(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartOffset;                                               // 0x0140(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndOffset;                                                 // 0x0144(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PlayRate;                                                  // 0x0148(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bReverse : 1;                                              // 0x014C(0x0001) BIT_FIELD (Deprecated, NoDestructor)
	unsigned char                                      UnknownData_D7ZZ[0x3];                                     // 0x014D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SlotName;                                                  // 0x0150(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  AnimationSections;                                         // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x0080 (FullSize[0x0118] - InheritedSize[0x0098])
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_Q0TX[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringCurve                                StringCurve;                                               // 0x00A0(0x0078)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSubSection
// 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters                Parameters;                                                // 0x0098(0x0010) (Edit)
	float                                              StartOffset;                                               // 0x00A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeScale;                                                 // 0x00AC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PrerollTime;                                               // 0x00B0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F9YB[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         SubSequence;                                               // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                             // 0x00C0(0x001C) (Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5GUL[0x4];                                     // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetSequenceName;                                        // 0x00E0(0x0010) (Edit, ZeroConstructor, Protected, HasGetValueTypeHash)
	struct FDirectoryPath                              TargetPathToRecordTo;                                      // 0x00F0(0x0010) (Edit, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0038 (FullSize[0x0138] - InheritedSize[0x0100])
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:
	struct FText                                       DisplayName;                                               // 0x0100(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_BZKL[0x20];                                    // 0x0100(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>                  Sections;                                                  // 0x0088(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (FullSize[0x0098] - InheritedSize[0x0098])
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x01F0 (FullSize[0x0288] - InheritedSize[0x0098])
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData_Y7AA[0x8];                                     // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRichCurve                                  Curves[0x4];                                               // 0x00A0(0x01E0)
	int                                                ChannelsUsed;                                              // 0x0280(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PIPO[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

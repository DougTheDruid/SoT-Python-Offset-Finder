#pragma once

// Name: SoT, Version: 2.3.0


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

// Class MovieScene.MovieSceneSignedObject
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                       Signature;                                                 // 0x0028(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_V7HQ[0x48];                                    // 0x0038(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieScene
// 0x0080 (FullSize[0x0100] - InheritedSize[0x0080])
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>                Spawnables;                                                // 0x0080(0x0010) (ZeroConstructor)
	TArray<struct FMovieScenePossessable>              Possessables;                                              // 0x0090(0x0010) (ZeroConstructor)
	TArray<struct FMovieSceneBinding>                  ObjectBindings;                                            // 0x00A0(0x0010) (ZeroConstructor, ContainsInstancedReference)
	TArray<class UMovieSceneTrack*>                    MasterTracks;                                              // 0x00B0(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	class UMovieSceneTrack*                            CameraCutTrack;                                            // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFloatRange                                 SelectionRange;                                            // 0x00C8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFloatRange                                 PlaybackRange;                                             // 0x00D8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bForceFixedFrameIntervalPlayback;                          // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OC01[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FixedFrameInterval;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InTime;                                                    // 0x00F0(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutTime;                                                   // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StartTime;                                                 // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndTime;                                                   // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneBindingOverridesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOverridesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverridesInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UMovieSceneBindingOverrides : public UObject
{
public:
	unsigned char                                      UnknownData_9CD5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMovieSceneBindingOverrideData>      BindingData;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData_CRG6[0x58];                                    // 0x0040(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneFolder
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMovieSceneFolder : public UObject
{
public:
	struct FName                                       FolderName;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMovieSceneFolder*>                   ChildFolders;                                              // 0x0030(0x0010) (ZeroConstructor)
	TArray<class UMovieSceneTrack*>                    ChildMasterTracks;                                         // 0x0040(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference)
	TArray<struct FString>                             ChildObjectBindingStrings;                                 // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_EA38[0x10];                                    // 0x0060(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneSequencePlayer
// 0x05D8 (FullSize[0x0600] - InheritedSize[0x0028])
class UMovieSceneSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData_I6I5[0x368];                                   // 0x0028(0x0368) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPlay;                                                    // 0x0390(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnStop;                                                    // 0x03A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPause;                                                   // 0x03B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      bIsPlaying : 1;                                            // 0x03C0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bReversePlayback : 1;                                      // 0x03C0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      bPendingFirstUpdate : 1;                                   // 0x03C0(0x0001) BIT_FIELD (NoDestructor, Protected)
	unsigned char                                      UnknownData_129N[0x7];                                     // 0x03C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMovieSceneSequence*                         Sequence;                                                  // 0x03C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              TimeCursorPosition;                                        // 0x03D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              StartTime;                                                 // 0x03D4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              EndTime;                                                   // 0x03D8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                CurrentNumLoops;                                           // 0x03DC(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_74P4[0x10];                                    // 0x03E0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x03F0(0x0028) (Protected)
	unsigned char                                      UnknownData_UUPQ[0x1E8];                                   // 0x0418(0x01E8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}



	void Stop();
	void StartPlayingNextTick();
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void PlayReverse();
	void PlayLooping(int NumLoops);
	void Play();
	void Pause();
	bool IsPlaying();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	float GetLength();
	void ChangePlaybackDirection();
	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneSection
// 0x0018 (FullSize[0x0098] - InheritedSize[0x0080])
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions               EvalOptions;                                               // 0x0080(0x0002) (Edit)
	unsigned char                                      UnknownData_Z21C[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StartTime;                                                 // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndTime;                                                   // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RowIndex;                                                  // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OverlapPriority;                                           // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIsActive : 1;                                             // 0x0094(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsLocked : 1;                                             // 0x0094(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      bIsInfinite : 1;                                           // 0x0094(0x0001) BIT_FIELD (Edit, NoDestructor)
	unsigned char                                      UnknownData_10VN[0x3];                                     // 0x0095(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneTrack
// 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions                 EvalOptions;                                               // 0x0080(0x0004) (Edit)
	unsigned char                                      UnknownData_YA8W[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneSequence
// 0x0228 (FullSize[0x02A8] - InheritedSize[0x0080])
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FCachedMovieSceneEvaluationTemplate         EvaluationTemplate;                                        // 0x0080(0x0220)
	struct FMovieSceneTrackCompilationParams           TemplateParameters;                                        // 0x02A0(0x0001)
	bool                                               bParentContextsAreSignificant;                             // 0x02A1(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_TCEI[0x6];                                     // 0x02A2(0x0006) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

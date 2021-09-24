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

// Class LevelSequence.LevelSequence
// 0x00F8 (FullSize[0x03A0] - InheritedSize[0x02A8])
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLevelSequenceObjectReferenceMap            ObjectReferences;                                          // 0x02B0(0x00A0)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                          // 0x0350(0x0050) (ZeroConstructor, Deprecated)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequenceSubtitlesInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULevelSequenceSubtitlesInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceSubtitlesInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequencePlayer
// 0x0040 (FullSize[0x0640] - InheritedSize[0x0600])
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	class AActor*                                      SpawnablesParent;                                          // 0x0600(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UA0D[0x38];                                    // 0x0608(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}



	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings);
	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULevelSequenceBurnInInitSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                               bUseBurnIn;                                                // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ZJLP[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringClassReference                       BurnInClass;                                               // 0x0030(0x0010) (Edit, ZeroConstructor)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                  // 0x0040(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequenceActor
// 0x0070 (FullSize[0x0440] - InheritedSize[0x03D0])
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData_ERG4[0x8];                                     // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               bAutoPlay;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FD3A[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x03E0(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                            // 0x0408(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       LevelSequence;                                             // 0x0410(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                             // 0x0420(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                          // 0x0428(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, AdvancedDisplay, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                      SpawnablesParent;                                          // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                            // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}



	void SetSequence(class ULevelSequence* InSequence, bool LoadSequence);
	void SetBinding(const struct FMovieSceneObjectBindingPtr& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingPtr& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool Load);
	void AddBinding(const struct FMovieSceneObjectBindingPtr& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
	void AfterRead();
	void BeforeDelete();

};

// Class LevelSequence.LevelSequenceBurnIn
// 0x0098 (FullSize[0x02C8] - InheritedSize[0x0230])
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot                FrameInformation;                                          // 0x0230(0x0090) (BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected)
	class ALevelSequenceActor*                         LevelSequenceActor;                                        // 0x02C0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}



	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

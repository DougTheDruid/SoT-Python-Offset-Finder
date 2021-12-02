#pragma once

// Name: SoT, Version: 2.4.0


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

// Class ActorSequence.ActorSequence
// 0x0028 (FullSize[0x02D0] - InheritedSize[0x02A8])
class UActorSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                                 MovieScene;                                                // 0x02A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FActorSequenceObjectReferenceMap            ObjectReferences;                                          // 0x02B0(0x0020)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequence");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ActorSequence.ActorSequenceComponent
// 0x0040 (FullSize[0x0108] - InheritedSize[0x00C8])
class UActorSequenceComponent : public UActorComponent
{
public:
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                          // 0x00C8(0x0028) (Edit, Protected)
	class UActorSequence*                              Sequence;                                                  // 0x00F0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash)
	class UActorSequencePlayer*                        SequencePlayer;                                            // 0x00F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	bool                                               bAutoPlay;                                                 // 0x0100(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_SRAW[0x7];                                     // 0x0101(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ActorSequence.ActorSequencePlayer
// 0x0000 (FullSize[0x0600] - InheritedSize[0x0600])
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

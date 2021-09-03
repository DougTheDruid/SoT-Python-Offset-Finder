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

// Class RareAudio.WwiseEmitterComponent
// 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
class UWwiseEmitterComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_O1O9[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWwiseEmitter                               Emitter;                                                   // 0x02B8(0x0020) (BlueprintVisible, BlueprintReadOnly)
	class UWwiseObjectPoolWrapper*                     WwiseObjectPoolWrapper;                                    // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AnimNotifyWwiseEmitterComponent
// 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
class UAnimNotifyWwiseEmitterComponent : public UWwiseEmitterComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AnimNotifyWwiseEmitterComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AnimNotify_WwiseSound
// 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
class UAnimNotify_WwiseSound : public UAnimNotify
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OwnedByWorld;                                              // 0x0040(0x0001) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F5VY[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseObjectPoolWrapper*                     OwnedByWorldWisePoolToUse;                                 // 0x0048(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_92TX[0x20];                                    // 0x0050(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AnimNotify_WwiseSound");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AnimNotify_WwiseSoundMeshSwitch
// 0x0018 (FullSize[0x0088] - InheritedSize[0x0070])
class UAnimNotify_WwiseSoundMeshSwitch : public UAnimNotify_WwiseSound
{
public:
	struct FName                                       SkeletalMeshSwitchGroup;                                   // 0x0070(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAnimNotify_SoundSwitch>             MeshOverrides;                                             // 0x0078(0x0010) (Edit, BlueprintReadOnly, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AnimNotify_WwiseSoundMeshSwitch");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AnimNotifyState_WwiseSound
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class UAnimNotifyState_WwiseSound : public UAnimNotifyState
{
public:
	class UWwiseEvent*                                 WwiseEvent;                                                // 0x0028(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 WwiseEventEnd;                                             // 0x0030(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OMLT[0x50];                                    // 0x0038(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AnimNotifyState_WwiseSound");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioEventToComponentMap
// 0x0008 (FullSize[0x03D8] - InheritedSize[0x03D0])
class AAudioEventToComponentMap : public AActor
{
public:
	class UAudioEventToComponentMapComponent*          AudioEventToComponentMapComponent;                         // 0x03D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMap");
		return ptr;
	}



	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioEventToComponentMapComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UAudioEventToComponentMapComponent : public UActorComponent
{
public:
	TArray<struct FEventToComponentMapping>            LocalComponentMappings;                                    // 0x00C8(0x0010) (ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioEventToComponentMapComponent");
		return ptr;
	}



	void ClearMappings();
	void AddMappingWithSingleEmitterComponent(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, class UWwiseEmitterComponent** WwiseEmitterComponent, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
	void AddMapping(class UWwiseEvent* PlayEvent, class UWwiseEvent* StopEvent, TArray<class UWwiseEmitterComponent*>* WwiseEmitterComponents, class UWwiseObjectPoolWrapper* WwiseEmitterPool);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.WwiseEmitterBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWwiseEmitterBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.WwiseEmitterBlueprintLibrary");
		return ptr;
	}



	void STATIC_WwiseStopGlobalEvent(class UWwiseEvent* Event, float FadeTime);
	void STATIC_WwiseSetState(const struct FName& StateGroup, const struct FName& StateValue);
	void STATIC_WwiseSetGlobalRTPC(const struct FName& RTPCName, float RTPCValue);
	void STATIC_WwisePostOneShotOnOwner(class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FWwiseEmitterCreationParams& CreationParams, const struct FVector& Offset, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship);
	int STATIC_WwisePostGlobalEvent(class UWwiseEvent* Event);
	int STATIC_WwisePostEventAtLocation(struct FWwiseEmitter* Emitter, class UWwiseEvent* Event, const struct FVector& Location, const struct FVector& Front, class UWwiseObjectPoolWrapper* EmitterPool, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship);
	bool STATIC_WwiseIsGlobalEvent(class UWwiseEvent* Event);
	bool STATIC_WwiseGetListenerInfo(struct FWwiseListenerInfo* InfoOut, int Viewport);
	bool STATIC_WwiseGetListenerEmitter(struct FWwiseEmitter* Emitter, class UObject* WorldContextObject, int ListenerIndex, const struct FName& Name, const struct FVector& Offset, bool bFollowOrientaion, class UWwiseObjectPoolWrapper* EmitterPool);
	bool STATIC_WwiseGetGlobalRTPC(const struct FName& RTPCName, float* RTPCValue);
	bool STATIC_WwiseEmitterWaitToComplete(const struct FWwiseEmitter& Emitter, int PlayId, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo);
	bool STATIC_WwiseEmitterStop(const struct FWwiseEmitter& Emitter, int PlayId, float FadeTime);
	bool STATIC_WwiseEmitterSetSwitch(const struct FWwiseEmitter& Emitter, const struct FName& SwitchGroup, const struct FName& Value);
	bool STATIC_WwiseEmitterSetRTPCOnAll(TArray<struct FWwiseEmitter> Emitters, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterSetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterSetParams(const struct FWwiseEmitter& Emitter, const struct FWwiseEmitterParams& Params);
	bool STATIC_WwiseEmitterSetLocation(const struct FWwiseEmitter& Emitter, const struct FVector& Location);
	TArray<int> STATIC_WwiseEmitterPostEventOnAll(TArray<struct FWwiseEmitter> Emitters, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int STATIC_WwiseEmitterPostEvent(const struct FWwiseEmitter& Emitter, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	bool STATIC_WwiseEmitterIsValid(const struct FWwiseEmitter& Emitter);
	bool STATIC_WwiseEmitterIsPlaying(const struct FWwiseEmitter& Emitter, class UWwiseEvent* Event);
	bool STATIC_WwiseEmitterGetRTPC(const struct FWwiseEmitter& Emitter, const struct FName& Name, float* Value);
	void STATIC_WwiseEmitterDestroy(struct FWwiseEmitter* Emitter);
	bool STATIC_WwiseEmitterComponentSetRTPCOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, const struct FName& Name, float Value);
	bool STATIC_WwiseEmitterComponentSetRTPC(class UWwiseEmitterComponent* EmitterComponent, const struct FName& Name, float Value);
	TArray<int> STATIC_WwiseEmitterComponentPostEventOnAll(TArray<class UWwiseEmitterComponent*> EmitterComponents, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	int STATIC_WwiseEmitterComponentPostEvent(class UWwiseEmitterComponent* EmitterComponent, class UWwiseEvent* WwiseEvent, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FName& SourcePath, const struct FName& SourceObj);
	bool STATIC_WwiseCreateEmitter(struct FWwiseEmitter* Emitter, const struct FName& Name, class UObject* Owner, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Offset);
	int STATIC_WwiseCreateDetachedEmitter(struct FWwiseEmitter* Emitter, const struct FName& Name, class UWwiseObjectPoolWrapper* EmitterPool, const struct FVector& Location, const struct FWwiseEmitterCreationParams& CreationParams, TEnumAsByte<RareAudio_EEmitterRelationship> Relationship, const struct FVector& Forward);
	bool STATIC_SeekOnEvent(const struct FWwiseEmitter& WwiseEmitter, class UWwiseEvent* in_eventID, int in_iPosition, bool in_bSeekToNearestMarker, int in_PlayingID);
	bool STATIC_GetPlaybackPosition(const struct FWwiseEmitter& WwiseEmitter, int in_PlayingID, int* PlaybackPositionInMs);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.WwiseEmitterComponentBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UWwiseEmitterComponentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.WwiseEmitterComponentBlueprintLibrary");
		return ptr;
	}



	bool STATIC_GetNamedEmitter(struct FWwiseEmitter* OutEmitter, const struct FName& InNameOfEmitterToRetrieve, class AActor* InActorToFindEmitterOn);
	bool STATIC_GetClosestNEmitters(TArray<struct FWwiseEmitter>* OutEmitters, const struct FVector& InFromPosition, int InNumEmittersToFind, class AActor* InActorToFindClosestEmitterOn);
	bool STATIC_GetClosestEmitter(struct FWwiseEmitter* OutEmitter, const struct FVector& InFromPosition, class AActor* InActorToFindClosestEmitterOn);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.WwiseObjectPoolWrapper
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UWwiseObjectPoolWrapper : public UObject
{
public:
	struct FName                                       PoolName;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxResources;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxProxies;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableOcclusion;                                          // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DisableReverb;                                             // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0AIO[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWwiseNativeEmitterPoolDensityParams        PoolDensityParams;                                         // 0x0040(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData_CR4I[0x18];                                    // 0x0068(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.WwiseObjectPoolWrapper");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioIslandStaticMeshAssociatorBase
// 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
class AAudioIslandStaticMeshAssociatorBase : public AActor
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioIslandStaticMeshAssociatorBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioPortalComponent
// 0x0030 (FullSize[0x02E0] - InheritedSize[0x02B0])
class UAudioPortalComponent : public USceneComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioInsideSpace;                                          // 0x02B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioSpaceDataAsset*                        AudioOutsideSpace;                                         // 0x02B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PortalTriggerDistance;                                     // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InsideRtpcUpdateDistance;                                  // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutsideRtpcUpdateDistance;                                 // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrackAttachmentToActor;                                    // 0x02CC(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L1I2[0x13];                                    // 0x02CD(0x0013) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioPortalComponent");
		return ptr;
	}



	void SetParentShip(class AActor* ParentShip);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioPortalInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAudioPortalInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioPortalInterface");
		return ptr;
	}



	void UnregisterPortal(class UAudioPortalComponent* AudioPortal);
	void RegisterPortal(class UAudioPortalComponent* AudioPortal, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortalsInSpecificSpace(class UAudioSpaceDataAsset* AudioSpace, class AActor* OwningActor);
	TArray<TWeakObjectPtr<class UAudioPortalComponent>> GetAllRegisteredPortals();
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioPortalService
// 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
class UAudioPortalService : public UObject
{
public:
	unsigned char                                      UnknownData_ZQ8Z[0xB0];                                    // 0x0028(0x00B0) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioPortalService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioSpaceComponent
// 0x0010 (FullSize[0x0600] - InheritedSize[0x05F0])
class UAudioSpaceComponent : public UStaticMeshComponent
{
public:
	class UAudioSpaceDataAsset*                        AudioSpace;                                                // 0x05F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8AGW[0x8];                                     // 0x05F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioSpaceComponent");
		return ptr;
	}



	void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool FromSweep, const struct FHitResult& SweepResult);
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioSpaceDataAsset
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UAudioSpaceDataAsset : public UDataAsset
{
public:
	struct FName                                       RtpcToUpdate;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AmbienceToStart;                                           // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 AmbienceToStop;                                            // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioSpaceDataAsset");
		return ptr;
	}



	struct FName GetRtpcName();
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.AudioSpaceTrackerComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UAudioSpaceTrackerComponent : public UActorComponent
{
public:
	TArray<class UAudioSpaceComponent*>                CurrentSpaces;                                             // 0x00C8(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.AudioSpaceTrackerComponent");
		return ptr;
	}



	class UAudioSpaceDataAsset* GetCurrentSpace();
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.RareAudioHardwareDeviceService
// 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
class URareAudioHardwareDeviceService : public UAudioHardwareDeviceService
{
public:
	unsigned char                                      UnknownData_COI3[0x10];                                    // 0x0040(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.RareAudioHardwareDeviceService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.StaticMeshAudioDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UStaticMeshAudioDataAsset : public UDataAsset
{
public:
	TArray<struct FStaticMeshAudioAssociation>         MeshToAudioAssociations;                                   // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.StaticMeshAudioEmittersComponent
// 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
class UStaticMeshAudioEmittersComponent : public USceneComponent
{
public:
	TArray<struct FStaticMeshComponentAudioAssociation> InstanceAssociations;                                      // 0x02B0(0x0010) (ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.StaticMeshAudioEmittersComponent");
		return ptr;
	}



	void PopulateInstanceAssociations();
	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.TritonAcousticMap
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UTritonAcousticMap : public UObject
{
public:
	struct FString                                     TritonMapFilename;                                         // 0x0028(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YYLC[0x28];                                    // 0x0038(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.TritonAcousticMap");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.TritonComponent
// 0x0010 (FullSize[0x02C0] - InheritedSize[0x02B0])
class UTritonComponent : public USceneComponent
{
public:
	class UTritonAcousticMap*                          TritonMapAsset;                                            // 0x02B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TritonEffectRadius;                                        // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E817[0x4];                                     // 0x02BC(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.TritonComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class RareAudio.TritonService
// 0x0108 (FullSize[0x0130] - InheritedSize[0x0028])
class UTritonService : public UObject
{
public:
	unsigned char                                      UnknownData_UU4P[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTritonComponent*>                    RegisteredTritonComponents;                                // 0x0038(0x0010) (ExportObject, ZeroConstructor, Transient, ContainsInstancedReference)
	unsigned char                                      UnknownData_EX1R[0xA8];                                    // 0x0048(0x00A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTritonComponent*                            CachedListenerInfo;                                        // 0x00F0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_38UI[0x38];                                    // 0x00F8(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class RareAudio.TritonService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

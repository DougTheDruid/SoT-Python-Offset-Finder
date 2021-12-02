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

// Class Music.MusicZoneInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.MusicZoneInterface");
		return ptr;
	}



	bool CanPlayForPlayer(class AActor* Player);
	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneComponent
// 0x00C0 (FullSize[0x0370] - InheritedSize[0x02B0])
class UMusicZoneComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData_7NPR[0x8];                                     // 0x02B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              InnerRadius;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OuterRadius;                                               // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LocationRTPC;                                              // 0x02C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LocalRTPC;                                                 // 0x02C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_832Z[0x7];                                     // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWwiseEvent*                                 PlayEvent;                                                 // 0x02D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                                 StopEvent;                                                 // 0x02D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWwiseEvent*>                         OneShotEvents;                                             // 0x02E0(0x0010) (Edit, ZeroConstructor)
	class UWwiseObjectPoolWrapper*                     EmitterPool;                                               // 0x02F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableAfterPlayThrough;                                   // 0x02F8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActivateOnBeginPlay;                                       // 0x02F9(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BHMK[0x6];                                     // 0x02FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnMusicZoneStarted;                                        // 0x0300(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData_QG7L[0x60];                                    // 0x0310(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.MusicZoneComponent");
		return ptr;
	}



	struct FWwiseEmitter GetEmitter();
	void DisableZone();
	void Client_StopMusicAndDisableZone();
	void Client_PlayOneShot(int Index);
	void ActivateZone();
	void AfterRead();
	void BeforeDelete();

};

// Class Music.AISpawnerMusicZoneComponent
// 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
class UAISpawnerMusicZoneComponent : public UMusicZoneComponent
{
public:
	class UWwiseEvent*                                 BattleWonEvent;                                            // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAISpawner*                                  AISpawner;                                                 // 0x0378(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APawn*>                               SpawnerPawns;                                              // 0x0380(0x0010) (Net, ZeroConstructor)
	TEnumAsByte<Music_EAISpawnerMusicZoneState>        SpawnerState;                                              // 0x0390(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XRU3[0xF];                                     // 0x0391(0x000F) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.AISpawnerMusicZoneComponent");
		return ptr;
	}



	void OnRep_SpawnerState();
	void AfterRead();
	void BeforeDelete();

};

// Class Music.SynchedMusicZoneComponent
// 0x0030 (FullSize[0x03A0] - InheritedSize[0x0370])
class USynchedMusicZoneComponent : public UMusicZoneComponent
{
public:
	float                                              StartDelayTime;                                            // 0x0370(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayFromStartTimeMS;                                       // 0x0374(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FB6P[0x28];                                    // 0x0378(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.SynchedMusicZoneComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMusicZoneServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.MusicZoneServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Music.MusicZoneService
// 0x00A8 (FullSize[0x0478] - InheritedSize[0x03D0])
class AMusicZoneService : public AActor
{
public:
	unsigned char                                      UnknownData_4V9X[0xA8];                                    // 0x03D0(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Music.MusicZoneService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class TreasuryFramework.TreasuryWaveDataAsset
// 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
class UTreasuryWaveDataAsset : public UDataAsset
{
public:
	TArray<class UAIProgressiveWavesSpawner*>          Waves1Player;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)
	TArray<class UAIProgressiveWavesSpawner*>          Waves2Player;                                              // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<class UAIProgressiveWavesSpawner*>          Waves3Player;                                              // 0x0048(0x0010) (Edit, ZeroConstructor)
	TArray<class UAIProgressiveWavesSpawner*>          Waves4Player;                                              // 0x0058(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TreasuryFramework.TreasuryWaveDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class TreasuryFramework.TreasuryRoom
// 0x00F0 (FullSize[0x04C0] - InheritedSize[0x03D0])
class ATreasuryRoom : public AActor
{
public:
	class UBoxComponent*                               RoomAreaComponent;                                         // 0x03D0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TreasuryInactiveDurationMinSeconds;                        // 0x03D8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TreasuryInactiveDurationMaxSeconds;                        // 0x03DC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RoomFailureDurationSeconds;                                // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              WaveDelaySeconds;                                          // 0x03E4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EncounterDelaySeconds;                                     // 0x03E8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VaultDoorAnimDurationSeconds;                              // 0x03EC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VaultDoorOpenDurationSeconds;                              // 0x03F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MinWavesInEncounter;                                       // 0x03F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxWavesInEncounter;                                       // 0x03F8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxEncounters;                                             // 0x03FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTreasuryWaveEncounter>              WaveEncounters;                                            // 0x0400(0x0010) (Edit, ZeroConstructor, DisableEditOnTemplate)
	class AActor*                                      FloodMechanismActor;                                       // 0x0410(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      FloodTriggerActor;                                         // 0x0418(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DrainMechanismActor;                                       // 0x0420(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DrainTriggerActor;                                         // 0x0428(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      VaultMechanismActor;                                       // 0x0430(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      VaultTriggerActor;                                         // 0x0438(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      VaultLootSpawner;                                          // 0x0440(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                      VaultLootSpawnLocationActor;                               // 0x0448(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              OverlappingActors;                                         // 0x0450(0x0010) (ZeroConstructor, Protected)
	TArray<TWeakObjectPtr<class AController>>          CachedParticipantControllers;                              // 0x0460(0x0010) (ZeroConstructor, Protected, UObjectWrapper)
	class AActor*                                      VaultLootSpawnerActor;                                     // 0x0470(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMechanismActionComponent*                   FloodMechanismComponent;                                   // 0x0478(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMechanismActionComponent*                   DrainMechanismComponent;                                   // 0x0480(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMechanismActionComponent*                   VaultMechanismComponent;                                   // 0x0488(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      FloodTriggerComponent[0x10];                               // 0x0490(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.FloodTriggerComponent
	unsigned char                                      DrainTriggerComponent[0x10];                               // 0x04A0(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.DrainTriggerComponent
	unsigned char                                      VaultTriggerComponent[0x10];                               // 0x04B0(0x0010) UNKNOWN PROPERTY: InterfaceProperty TreasuryFramework.TreasuryRoom.VaultTriggerComponent


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TreasuryFramework.TreasuryRoom");
		return ptr;
	}



	void OnWaveStart(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType);
	void OnWaveFinished();
	void OnWaveComplete(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType);
	void OnVaultOpen();
	void OnVaultClosed();
	void OnTreasuryStateChange(TEnumAsByte<TreasuryFramework_ETreasuryState> PrevState, TEnumAsByte<TreasuryFramework_ETreasuryState> NewState);
	void OnTreasuryDeactivate();
	void OnTreasuryActivate();
	void OnStartRaiseWater();
	void OnStartDrainWater();
	void OnRoomStarted();
	void OnRaisedWater();
	void OnDrainedWater();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

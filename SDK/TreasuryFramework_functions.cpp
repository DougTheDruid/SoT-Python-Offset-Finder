// Name: SoT, Version: 2.4.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FTreasuryWaveEncounter::AfterRead()
{
	READ_PTR_FULL(SpawnerMechanism, ASpawnAIWaveMechanismAction);
	READ_PTR_FULL(MechanismTrigger, AActor);
	READ_PTR_FULL(Waves, UTreasuryWaveDataAsset);
	READ_PTR_FULL(FinalWaves, UTreasuryWaveDataAsset);
}

void FTreasuryWaveEncounter::BeforeDelete()
{
	DELE_PTR_FULL(SpawnerMechanism);
	DELE_PTR_FULL(MechanismTrigger);
	DELE_PTR_FULL(Waves);
	DELE_PTR_FULL(FinalWaves);
}

void FTreasuryWaveTracker::AfterRead()
{
}

void FTreasuryWaveTracker::BeforeDelete()
{
}

void FEventTreasuryRoomInactive::AfterRead()
{
}

void FEventTreasuryRoomInactive::BeforeDelete()
{
}

void FEventTreasuryRoomActive::AfterRead()
{
}

void FEventTreasuryRoomActive::BeforeDelete()
{
}

// Function:
//		Offset -> 0x014BC960
//		Name   -> Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AShimmerActor::OnDeactivateShimmer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.ShimmerActor.OnDeactivateShimmer");

	AShimmerActor_OnDeactivateShimmer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BC940
//		Name   -> Function TreasuryFramework.ShimmerActor.OnActivateShimmer
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void AShimmerActor::OnActivateShimmer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.ShimmerActor.OnActivateShimmer");

	AShimmerActor_OnActivateShimmer_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AShimmerActor::AfterRead()
{
	AActor::AfterRead();

}

void AShimmerActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UTreasuryWaveDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UTreasuryWaveDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x014BCEC0
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveStart
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<TreasuryFramework_ETreasuryWaveType>   WaveType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnWaveStart(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType, TEnumAsByte<TreasuryFramework_ETreasuryWaveType> WaveType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveStart");

	ATreasuryRoom_OnWaveStart_Params params {};
	params.EncounterType = EncounterType;
	params.WaveType = WaveType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCE20
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveFinished
//		Flags  -> (Final, Native, Protected)
void ATreasuryRoom::OnWaveFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveFinished");

	ATreasuryRoom_OnWaveFinished_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCDA0
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnWaveComplete
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnWaveComplete(TEnumAsByte<TreasuryFramework_ETreasuryEncounterType> EncounterType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnWaveComplete");

	ATreasuryRoom_OnWaveComplete_Params params {};
	params.EncounterType = EncounterType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCD80
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnVaultOpen
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnVaultOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultOpen");

	ATreasuryRoom_OnVaultOpen_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCD60
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnVaultClosed
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnVaultClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnVaultClosed");

	ATreasuryRoom_OnVaultClosed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCCA0
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange
//		Flags  -> (Native, Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TreasuryFramework_ETreasuryState>      PrevState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<TreasuryFramework_ETreasuryState>      NewState                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnTreasuryStateChange(TEnumAsByte<TreasuryFramework_ETreasuryState> PrevState, TEnumAsByte<TreasuryFramework_ETreasuryState> NewState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryStateChange");

	ATreasuryRoom_OnTreasuryStateChange_Params params {};
	params.PrevState = PrevState;
	params.NewState = NewState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCC80
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnTreasuryDeactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryDeactivate");

	ATreasuryRoom_OnTreasuryDeactivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCC60
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnTreasuryActivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnTreasuryActivate");

	ATreasuryRoom_OnTreasuryActivate_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCC40
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnStartRaiseWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartRaiseWater");

	ATreasuryRoom_OnStartRaiseWater_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCC20
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnStartDrainWater
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnStartDrainWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnStartDrainWater");

	ATreasuryRoom_OnStartDrainWater_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCC00
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnRoomStarted
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnRoomStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRoomStarted");

	ATreasuryRoom_OnRoomStarted_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCB60
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnRaisedWater
//		Flags  -> (Final, Native, Protected)
void ATreasuryRoom::OnRaisedWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnRaisedWater");

	ATreasuryRoom_OnRaisedWater_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCAD0
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnLeaveRoom
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnLeaveRoom(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnLeaveRoom");

	ATreasuryRoom_OnLeaveRoom_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCA40
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnEnterRoom
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATreasuryRoom::OnEnterRoom(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnEnterRoom");

	ATreasuryRoom_OnEnterRoom_Params params {};
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BCA20
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup
//		Flags  -> (Native, Event, Public, BlueprintEvent)
void ATreasuryRoom::OnEncounterParamsSetup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnEncounterParamsSetup");

	ATreasuryRoom_OnEncounterParamsSetup_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BC980
//		Name   -> Function TreasuryFramework.TreasuryRoom.OnDrainedWater
//		Flags  -> (Final, Native, Protected)
void ATreasuryRoom::OnDrainedWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.OnDrainedWater");

	ATreasuryRoom_OnDrainedWater_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x014BC910
//		Name   -> Function TreasuryFramework.TreasuryRoom.GetState
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TEnumAsByte<TreasuryFramework_ETreasuryState>      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<TreasuryFramework_ETreasuryState> ATreasuryRoom::GetState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TreasuryFramework.TreasuryRoom.GetState");

	ATreasuryRoom_GetState_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ATreasuryRoom::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(RoomAreaComponent, UBoxComponent);
	READ_PTR_FULL(FloodMechanismActor, AActor);
	READ_PTR_FULL(FloodTriggerActor, AActor);
	READ_PTR_FULL(DrainMechanismActor, AActor);
	READ_PTR_FULL(DrainTriggerActor, AActor);
	READ_PTR_FULL(VaultMechanismActor, AActor);
	READ_PTR_FULL(VaultTriggerActor, AActor);
	READ_PTR_FULL(VaultLootSpawner, UClass);
	READ_PTR_FULL(VaultLootSpawnLocationActor, AActor);
	READ_PTR_FULL(VaultLootSpawnerActor, AActor);
	READ_PTR_FULL(FloodMechanismComponent, UMechanismActionComponent);
	READ_PTR_FULL(DrainMechanismComponent, UMechanismActionComponent);
	READ_PTR_FULL(VaultMechanismComponent, UMechanismActionComponent);
}

void ATreasuryRoom::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(RoomAreaComponent);
	DELE_PTR_FULL(FloodMechanismActor);
	DELE_PTR_FULL(FloodTriggerActor);
	DELE_PTR_FULL(DrainMechanismActor);
	DELE_PTR_FULL(DrainTriggerActor);
	DELE_PTR_FULL(VaultMechanismActor);
	DELE_PTR_FULL(VaultTriggerActor);
	DELE_PTR_FULL(VaultLootSpawner);
	DELE_PTR_FULL(VaultLootSpawnLocationActor);
	DELE_PTR_FULL(VaultLootSpawnerActor);
	DELE_PTR_FULL(FloodMechanismComponent);
	DELE_PTR_FULL(DrainMechanismComponent);
	DELE_PTR_FULL(VaultMechanismComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

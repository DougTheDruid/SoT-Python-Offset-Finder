// Name: SoT, Version: 2.3.0

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

void FMusicZoneDestroyedEvent::AfterRead()
{
}

void FMusicZoneDestroyedEvent::BeforeDelete()
{
}

void FMusicZoneSpawnedEvent::AfterRead()
{
}

void FMusicZoneSpawnedEvent::BeforeDelete()
{
}

// Function:
//		Offset -> 0x036BAC80
//		Name   -> Function Music.MusicZoneInterface.CanPlayForPlayer
//		Flags  -> (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		class AActor*                                      Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UMusicZoneInterface::CanPlayForPlayer(class AActor* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneInterface.CanPlayForPlayer");

	UMusicZoneInterface_CanPlayForPlayer_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UMusicZoneInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMusicZoneInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x036BADE0
//		Name   -> Function Music.MusicZoneComponent.GetEmitter
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FWwiseEmitter                               ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FWwiseEmitter UMusicZoneComponent::GetEmitter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.GetEmitter");

	UMusicZoneComponent_GetEmitter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x036BADC0
//		Name   -> Function Music.MusicZoneComponent.DisableZone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMusicZoneComponent::DisableZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.DisableZone");

	UMusicZoneComponent_DisableZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036BADA0
//		Name   -> Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
void UMusicZoneComponent::Client_StopMusicAndDisableZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone");

	UMusicZoneComponent_Client_StopMusicAndDisableZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036BAD20
//		Name   -> Function Music.MusicZoneComponent.Client_PlayOneShot
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public, BlueprintCallable)
// Parameters:
//		int                                                Index                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UMusicZoneComponent::Client_PlayOneShot(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.Client_PlayOneShot");

	UMusicZoneComponent_Client_PlayOneShot_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x036BAC60
//		Name   -> Function Music.MusicZoneComponent.ActivateZone
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMusicZoneComponent::ActivateZone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.MusicZoneComponent.ActivateZone");

	UMusicZoneComponent_ActivateZone_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UMusicZoneComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(PlayEvent, UWwiseEvent);
	READ_PTR_FULL(StopEvent, UWwiseEvent);
	READ_PTR_FULL(EmitterPool, UWwiseObjectPoolWrapper);
}

void UMusicZoneComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(PlayEvent);
	DELE_PTR_FULL(StopEvent);
	DELE_PTR_FULL(EmitterPool);
}

// Function:
//		Offset -> 0x036BAE60
//		Name   -> Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
//		Flags  -> (Final, Native, Private)
void UAISpawnerMusicZoneComponent::OnRep_SpawnerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState");

	UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAISpawnerMusicZoneComponent::AfterRead()
{
	UMusicZoneComponent::AfterRead();

	READ_PTR_FULL(BattleWonEvent, UWwiseEvent);
	READ_PTR_FULL(AISpawner, UAISpawner);
}

void UAISpawnerMusicZoneComponent::BeforeDelete()
{
	UMusicZoneComponent::BeforeDelete();

	DELE_PTR_FULL(BattleWonEvent);
	DELE_PTR_FULL(AISpawner);
}

void USynchedMusicZoneComponent::AfterRead()
{
	UMusicZoneComponent::AfterRead();

}

void USynchedMusicZoneComponent::BeforeDelete()
{
	UMusicZoneComponent::BeforeDelete();

}

void UMusicZoneServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMusicZoneServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void AMusicZoneService::AfterRead()
{
	AActor::AfterRead();

}

void AMusicZoneService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_PlayFinalWaveMusic
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_TreasuryWaveMusic_C::Client_PlayFinalWaveMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_PlayFinalWaveMusic");

	ABP_TreasuryWaveMusic_C_Client_PlayFinalWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_StopFinalWaveMusic
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_TreasuryWaveMusic_C::Client_StopFinalWaveMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_StopFinalWaveMusic");

	ABP_TreasuryWaveMusic_C_Client_StopFinalWaveMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetSirensOrOceanCrawlers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsSirents                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Client_SetSirensOrOceanCrawlers(bool InIsSirents)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetSirensOrOceanCrawlers");

	ABP_TreasuryWaveMusic_C_Client_SetSirensOrOceanCrawlers_Params params;
	params.InIsSirents = InIsSirents;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveType
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::OnRep_WaveType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveType");

	ABP_TreasuryWaveMusic_C_OnRep_WaveType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetSirensOrOceanCrawlers
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSirens                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Server_SetSirensOrOceanCrawlers(bool IsSirens)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetSirensOrOceanCrawlers");

	ABP_TreasuryWaveMusic_C_Server_SetSirensOrOceanCrawlers_Params params;
	params.IsSirens = IsSirens;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShotSfx_TreasuryFillEmpty
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsWaterFilling                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Server_PlayOneShotSfx_TreasuryFillEmpty(bool InIsWaterFilling)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShotSfx_TreasuryFillEmpty");

	ABP_TreasuryWaveMusic_C_Server_PlayOneShotSfx_TreasuryFillEmpty_Params params;
	params.InIsWaterFilling = InIsWaterFilling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShot_TreasuryFillEmpty
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsWaterFilling                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Server_PlayOneShot_TreasuryFillEmpty(bool InIsWaterFilling)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShot_TreasuryFillEmpty");

	ABP_TreasuryWaveMusic_C_Server_PlayOneShot_TreasuryFillEmpty_Params params;
	params.InIsWaterFilling = InIsWaterFilling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_TreasuryComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::OnRep_TreasuryComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_TreasuryComplete");

	ABP_TreasuryWaveMusic_C_OnRep_TreasuryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_TreasuryComplete
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::Server_PlayOneshot_TreasuryComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_TreasuryComplete");

	ABP_TreasuryWaveMusic_C_Server_PlayOneshot_TreasuryComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_NewWave
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::Server_PlayOneshot_NewWave()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_NewWave");

	ABP_TreasuryWaveMusic_C_Server_PlayOneshot_NewWave_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetIsMusicZoneActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsMusicZoneActive                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Client_SetIsMusicZoneActive(bool InIsMusicZoneActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetIsMusicZoneActive");

	ABP_TreasuryWaveMusic_C_Client_SetIsMusicZoneActive_Params params;
	params.InIsMusicZoneActive = InIsMusicZoneActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetMusicZoneIsActive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsMusicZoneActive                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Server_SetMusicZoneIsActive(bool InIsMusicZoneActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetMusicZoneIsActive");

	ABP_TreasuryWaveMusic_C_Server_SetMusicZoneIsActive_Params params;
	params.InIsMusicZoneActive = InIsMusicZoneActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_MusicZoneIsActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::OnRep_MusicZoneIsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_MusicZoneIsActive");

	ABP_TreasuryWaveMusic_C_OnRep_MusicZoneIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_UpdateWaveActiveness
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsWaveActive                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Server_UpdateWaveActiveness(bool InIsWaveActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_UpdateWaveActiveness");

	ABP_TreasuryWaveMusic_C_Server_UpdateWaveActiveness_Params params;
	params.InIsWaveActive = InIsWaveActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveIsActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::OnRep_WaveIsActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveIsActive");

	ABP_TreasuryWaveMusic_C_OnRep_WaveIsActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SwitchWaveActiveness
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsWaveActive                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::Client_SwitchWaveActiveness(bool IsWaveActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SwitchWaveActiveness");

	ABP_TreasuryWaveMusic_C_Client_SwitchWaveActiveness_Params params;
	params.IsWaveActive = IsWaveActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.UserConstructionScript");

	ABP_TreasuryWaveMusic_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ReceiveBeginPlay");

	ABP_TreasuryWaveMusic_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_PlayFinalMusic
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::Multicast_PlayFinalMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_PlayFinalMusic");

	ABP_TreasuryWaveMusic_C_Multicast_PlayFinalMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_StopFinalMusic
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::Multicast_StopFinalMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_StopFinalMusic");

	ABP_TreasuryWaveMusic_C_Multicast_StopFinalMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.RefreshState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::RefreshState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.RefreshState");

	ABP_TreasuryWaveMusic_C_RefreshState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_RefreshMusic
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABP_TreasuryWaveMusic_C::Multicast_RefreshMusic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_RefreshMusic");

	ABP_TreasuryWaveMusic_C_Multicast_RefreshMusic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ExecuteUbergraph_BP_TreasuryWaveMusic
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TreasuryWaveMusic_C::ExecuteUbergraph_BP_TreasuryWaveMusic(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ExecuteUbergraph_BP_TreasuryWaveMusic");

	ABP_TreasuryWaveMusic_C_ExecuteUbergraph_BP_TreasuryWaveMusic_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TreasuryWaveMusic_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(MusicZone, UMusicZoneComponent);
}

void ABP_TreasuryWaveMusic_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(MusicZone);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

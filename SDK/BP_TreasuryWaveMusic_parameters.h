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
// Parameters
//---------------------------------------------------------------------------

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_PlayFinalWaveMusic
struct ABP_TreasuryWaveMusic_C_Client_PlayFinalWaveMusic_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_StopFinalWaveMusic
struct ABP_TreasuryWaveMusic_C_Client_StopFinalWaveMusic_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetSirensOrOceanCrawlers
struct ABP_TreasuryWaveMusic_C_Client_SetSirensOrOceanCrawlers_Params
{
	bool                                               InIsSirents;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveType
struct ABP_TreasuryWaveMusic_C_OnRep_WaveType_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetSirensOrOceanCrawlers
struct ABP_TreasuryWaveMusic_C_Server_SetSirensOrOceanCrawlers_Params
{
	bool                                               IsSirens;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShotSfx_TreasuryFillEmpty
struct ABP_TreasuryWaveMusic_C_Server_PlayOneShotSfx_TreasuryFillEmpty_Params
{
	bool                                               InIsWaterFilling;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneShot_TreasuryFillEmpty
struct ABP_TreasuryWaveMusic_C_Server_PlayOneShot_TreasuryFillEmpty_Params
{
	bool                                               InIsWaterFilling;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_TreasuryComplete
struct ABP_TreasuryWaveMusic_C_OnRep_TreasuryComplete_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_TreasuryComplete
struct ABP_TreasuryWaveMusic_C_Server_PlayOneshot_TreasuryComplete_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_PlayOneshot_NewWave
struct ABP_TreasuryWaveMusic_C_Server_PlayOneshot_NewWave_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SetIsMusicZoneActive
struct ABP_TreasuryWaveMusic_C_Client_SetIsMusicZoneActive_Params
{
	bool                                               InIsMusicZoneActive;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_SetMusicZoneIsActive
struct ABP_TreasuryWaveMusic_C_Server_SetMusicZoneIsActive_Params
{
	bool                                               InIsMusicZoneActive;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_MusicZoneIsActive
struct ABP_TreasuryWaveMusic_C_OnRep_MusicZoneIsActive_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Server_UpdateWaveActiveness
struct ABP_TreasuryWaveMusic_C_Server_UpdateWaveActiveness_Params
{
	bool                                               InIsWaveActive;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.OnRep_WaveIsActive
struct ABP_TreasuryWaveMusic_C_OnRep_WaveIsActive_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Client_SwitchWaveActiveness
struct ABP_TreasuryWaveMusic_C_Client_SwitchWaveActiveness_Params
{
	bool                                               IsWaveActive;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.UserConstructionScript
struct ABP_TreasuryWaveMusic_C_UserConstructionScript_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ReceiveBeginPlay
struct ABP_TreasuryWaveMusic_C_ReceiveBeginPlay_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_PlayFinalMusic
struct ABP_TreasuryWaveMusic_C_Multicast_PlayFinalMusic_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_StopFinalMusic
struct ABP_TreasuryWaveMusic_C_Multicast_StopFinalMusic_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.RefreshState
struct ABP_TreasuryWaveMusic_C_RefreshState_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.Multicast_RefreshMusic
struct ABP_TreasuryWaveMusic_C_Multicast_RefreshMusic_Params
{
};

// Function BP_TreasuryWaveMusic.BP_TreasuryWaveMusic_C.ExecuteUbergraph_BP_TreasuryWaveMusic
struct ABP_TreasuryWaveMusic_C_ExecuteUbergraph_BP_TreasuryWaveMusic_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

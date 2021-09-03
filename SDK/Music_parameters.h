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
// Parameters
//---------------------------------------------------------------------------

// Function Music.MusicZoneInterface.CanPlayForPlayer
struct UMusicZoneInterface_CanPlayForPlayer_Params
{
	class AActor*                                      Player;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function Music.MusicZoneComponent.GetEmitter
struct UMusicZoneComponent_GetEmitter_Params
{
	struct FWwiseEmitter                               ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function Music.MusicZoneComponent.DisableZone
struct UMusicZoneComponent_DisableZone_Params
{
};

// Function Music.MusicZoneComponent.Client_StopMusicAndDisableZone
struct UMusicZoneComponent_Client_StopMusicAndDisableZone_Params
{
};

// Function Music.MusicZoneComponent.Client_PlayOneShot
struct UMusicZoneComponent_Client_PlayOneShot_Params
{
	int                                                Index;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Music.MusicZoneComponent.ActivateZone
struct UMusicZoneComponent_ActivateZone_Params
{
};

// Function Music.AISpawnerMusicZoneComponent.OnRep_SpawnerState
struct UAISpawnerMusicZoneComponent_OnRep_SpawnerState_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

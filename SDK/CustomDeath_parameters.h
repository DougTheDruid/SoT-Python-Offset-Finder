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

// Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
struct UCustomDeathInterface_SetShouldUseRevivalFlow_Params
{
	struct FSetShouldUseRevivalFlowData                SetShouldUseRevivalFlowData;                               // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params
{
	struct FSetShouldSkipFerryOfTheDamnedData          SetShouldSkipFerryOfTheDamnedData;                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
struct UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params
{
	struct FGameModeDeathPenaltyRespawnTimerData       GameModeDeathPenaltyRespawnTimerData;                      // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
struct UCustomDeathInterface_SetCustomPlayerStart_Params
{
	struct FSetCustomPlayerStartData                   SetCustomPlayerStartData;                                  // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
struct UCustomDeathInterface_SetCustomConfigForPlayer_Params
{
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomDeathConfiguration                   CustomDeathConfiguration;                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
struct UCustomDeathInterface_ResetCustomConfigForPlayer_Params
{
	struct FResetCustomConfigForPlayerData             ResetCustomConfigForPlayerData;                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.KillPlayer
struct UCustomDeathInterface_KillPlayer_Params
{
	struct FKillPlayerData                             KillPlayerData;                                            // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.KillCrew
struct UCustomDeathInterface_KillCrew_Params
{
	struct FKillCrewData                               KillCrewData;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
struct UCustomDeathInterface_GetShouldUseRevivalFlow_Params
{
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDefaultValue;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params
{
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
struct UCustomDeathInterface_GetCustomPlayerStart_Params
{
	int                                                PlayerId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
struct UCustomDeathInterface_ForcePlayerRespawn_Params
{
	struct FForcePlayerRespawnData                     ForcePlayerRespawnData;                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
struct UCustomDeathInterface_DestroyCustomPlayerStart_Params
{
	struct FDestroyCustomPlayerStartData               DestroyCustomPlayerStartData;                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
struct UCustomDeathInterface_CreateNewCustomPlayerStart_Params
{
	struct FCustomPlayerStartConfigData                CustomPlayerStartConfigData;                               // (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerStart*                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

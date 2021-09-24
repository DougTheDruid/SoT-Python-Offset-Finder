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

// Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
struct UCustomDeathInterface_SetShouldUseRevivalFlow_Params
{
	struct FSetShouldUseRevivalFlowData                SetShouldUseRevivalFlowData;                               // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params
{
	struct FSetShouldSkipFerryOfTheDamnedData          SetShouldSkipFerryOfTheDamnedData;                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
struct UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params
{
	struct FGameModeDeathPenaltyRespawnTimerData       GameModeDeathPenaltyRespawnTimerData;                      // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
struct UCustomDeathInterface_SetCustomPlayerStart_Params
{
	struct FSetCustomPlayerStartData                   SetCustomPlayerStartData;                                  // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
struct UCustomDeathInterface_SetCustomConfigForPlayer_Params
{
	int                                                PlayerId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCustomDeathConfiguration                   CustomDeathConfiguration;                                  // 0x0008(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
struct UCustomDeathInterface_ResetCustomConfigForPlayer_Params
{
	struct FResetCustomConfigForPlayerData             ResetCustomConfigForPlayerData;                            // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.KillPlayer
struct UCustomDeathInterface_KillPlayer_Params
{
	struct FKillPlayerData                             KillPlayerData;                                            // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.KillCrew
struct UCustomDeathInterface_KillCrew_Params
{
	struct FKillCrewData                               KillCrewData;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
struct UCustomDeathInterface_GetShouldUseRevivalFlow_Params
{
	int                                                PlayerId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDefaultValue;                                             // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
struct UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params
{
	int                                                PlayerId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
struct UCustomDeathInterface_GetCustomPlayerStart_Params
{
	int                                                PlayerId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                                ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
struct UCustomDeathInterface_ForcePlayerRespawn_Params
{
	struct FForcePlayerRespawnData                     ForcePlayerRespawnData;                                    // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
struct UCustomDeathInterface_DestroyCustomPlayerStart_Params
{
	struct FDestroyCustomPlayerStartData               DestroyCustomPlayerStartData;                              // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
struct UCustomDeathInterface_CreateNewCustomPlayerStart_Params
{
	struct FCustomPlayerStartConfigData                CustomPlayerStartConfigData;                               // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm)
	class APlayerStart*                                ReturnValue;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

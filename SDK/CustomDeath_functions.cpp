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

void FSetShouldUseRevivalFlowData::AfterRead()
{
}

void FSetShouldUseRevivalFlowData::BeforeDelete()
{
}

void FSetShouldSkipFerryOfTheDamnedData::AfterRead()
{
}

void FSetShouldSkipFerryOfTheDamnedData::BeforeDelete()
{
}

void FGameModeDeathPenaltyRespawnTimerData::AfterRead()
{
}

void FGameModeDeathPenaltyRespawnTimerData::BeforeDelete()
{
}

void FSetCustomPlayerStartData::AfterRead()
{
}

void FSetCustomPlayerStartData::BeforeDelete()
{
}

void FCustomDeathConfiguration::AfterRead()
{
}

void FCustomDeathConfiguration::BeforeDelete()
{
}

void FResetCustomConfigForPlayerData::AfterRead()
{
}

void FResetCustomConfigForPlayerData::BeforeDelete()
{
}

void FKillPlayerData::AfterRead()
{
}

void FKillPlayerData::BeforeDelete()
{
}

void FForcePlayerRespawnData::AfterRead()
{
}

void FForcePlayerRespawnData::BeforeDelete()
{
}

void FDestroyCustomPlayerStartData::AfterRead()
{
}

void FDestroyCustomPlayerStartData::BeforeDelete()
{
}

void FCustomPlayerStartConfigData::AfterRead()
{
}

void FCustomPlayerStartConfigData::BeforeDelete()
{
}

void FKillCrewData::AfterRead()
{
}

void FKillCrewData::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03E869E0
//		Name   -> Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FSetShouldUseRevivalFlowData                SetShouldUseRevivalFlowData                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::SetShouldUseRevivalFlow(const struct FSetShouldUseRevivalFlowData& SetShouldUseRevivalFlowData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetShouldUseRevivalFlow");

	UCustomDeathInterface_SetShouldUseRevivalFlow_Params params {};
	params.SetShouldUseRevivalFlowData = SetShouldUseRevivalFlowData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86950
//		Name   -> Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FSetShouldSkipFerryOfTheDamnedData          SetShouldSkipFerryOfTheDamnedData                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::SetShouldSkipFerryOfTheDamned(const struct FSetShouldSkipFerryOfTheDamnedData& SetShouldSkipFerryOfTheDamnedData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetShouldSkipFerryOfTheDamned");

	UCustomDeathInterface_SetShouldSkipFerryOfTheDamned_Params params {};
	params.SetShouldSkipFerryOfTheDamnedData = SetShouldSkipFerryOfTheDamnedData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E868C0
//		Name   -> Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FGameModeDeathPenaltyRespawnTimerData       GameModeDeathPenaltyRespawnTimerData                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::SetGameModeDeathPenaltyRespawnTimer(const struct FGameModeDeathPenaltyRespawnTimerData& GameModeDeathPenaltyRespawnTimerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetGameModeDeathPenaltyRespawnTimer");

	UCustomDeathInterface_SetGameModeDeathPenaltyRespawnTimer_Params params {};
	params.GameModeDeathPenaltyRespawnTimerData = GameModeDeathPenaltyRespawnTimerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86820
//		Name   -> Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FSetCustomPlayerStartData                   SetCustomPlayerStartData                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCustomDeathInterface::SetCustomPlayerStart(const struct FSetCustomPlayerStartData& SetCustomPlayerStartData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetCustomPlayerStart");

	UCustomDeathInterface_SetCustomPlayerStart_Params params {};
	params.SetCustomPlayerStartData = SetCustomPlayerStartData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E86720
//		Name   -> Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		int                                                PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FCustomDeathConfiguration                   CustomDeathConfiguration                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UCustomDeathInterface::SetCustomConfigForPlayer(int PlayerId, const struct FCustomDeathConfiguration& CustomDeathConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.SetCustomConfigForPlayer");

	UCustomDeathInterface_SetCustomConfigForPlayer_Params params {};
	params.PlayerId = PlayerId;
	params.CustomDeathConfiguration = CustomDeathConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86690
//		Name   -> Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FResetCustomConfigForPlayerData             ResetCustomConfigForPlayerData                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::ResetCustomConfigForPlayer(const struct FResetCustomConfigForPlayerData& ResetCustomConfigForPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.ResetCustomConfigForPlayer");

	UCustomDeathInterface_ResetCustomConfigForPlayer_Params params {};
	params.ResetCustomConfigForPlayerData = ResetCustomConfigForPlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86600
//		Name   -> Function CustomDeath.CustomDeathInterface.KillPlayer
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FKillPlayerData                             KillPlayerData                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::KillPlayer(const struct FKillPlayerData& KillPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.KillPlayer");

	UCustomDeathInterface_KillPlayer_Params params {};
	params.KillPlayerData = KillPlayerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86560
//		Name   -> Function CustomDeath.CustomDeathInterface.KillCrew
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FKillCrewData                               KillCrewData                                               (ConstParm, Parm, OutParm, ReferenceParm)
void UCustomDeathInterface::KillCrew(const struct FKillCrewData& KillCrewData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.KillCrew");

	UCustomDeathInterface_KillCrew_Params params {};
	params.KillCrewData = KillCrewData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86490
//		Name   -> Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow
//		Flags  -> (Native, Public)
// Parameters:
//		int                                                PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bDefaultValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCustomDeathInterface::GetShouldUseRevivalFlow(int PlayerId, bool bDefaultValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetShouldUseRevivalFlow");

	UCustomDeathInterface_GetShouldUseRevivalFlow_Params params {};
	params.PlayerId = PlayerId;
	params.bDefaultValue = bDefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E863F0
//		Name   -> Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned
//		Flags  -> (Native, Public)
// Parameters:
//		int                                                PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCustomDeathInterface::GetShouldSkipFerryOfTheDamned(int PlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetShouldSkipFerryOfTheDamned");

	UCustomDeathInterface_GetShouldSkipFerryOfTheDamned_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E86350
//		Name   -> Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart
//		Flags  -> (Native, Public)
// Parameters:
//		int                                                PlayerId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerStart*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APlayerStart* UCustomDeathInterface::GetCustomPlayerStart(int PlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.GetCustomPlayerStart");

	UCustomDeathInterface_GetCustomPlayerStart_Params params {};
	params.PlayerId = PlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E862C0
//		Name   -> Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FForcePlayerRespawnData                     ForcePlayerRespawnData                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UCustomDeathInterface::ForcePlayerRespawn(const struct FForcePlayerRespawnData& ForcePlayerRespawnData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.ForcePlayerRespawn");

	UCustomDeathInterface_ForcePlayerRespawn_Params params {};
	params.ForcePlayerRespawnData = ForcePlayerRespawnData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03E86200
//		Name   -> Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FDestroyCustomPlayerStartData               DestroyCustomPlayerStartData                               (ConstParm, Parm, OutParm, ReferenceParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UCustomDeathInterface::DestroyCustomPlayerStart(const struct FDestroyCustomPlayerStartData& DestroyCustomPlayerStartData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.DestroyCustomPlayerStart");

	UCustomDeathInterface_DestroyCustomPlayerStart_Params params {};
	params.DestroyCustomPlayerStartData = DestroyCustomPlayerStartData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03E86140
//		Name   -> Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart
//		Flags  -> (Native, Public, HasOutParms)
// Parameters:
//		struct FCustomPlayerStartConfigData                CustomPlayerStartConfigData                                (ConstParm, Parm, OutParm, ReferenceParm)
//		class APlayerStart*                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class APlayerStart* UCustomDeathInterface::CreateNewCustomPlayerStart(const struct FCustomPlayerStartConfigData& CustomPlayerStartConfigData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomDeath.CustomDeathInterface.CreateNewCustomPlayerStart");

	UCustomDeathInterface_CreateNewCustomPlayerStart_Params params {};
	params.CustomPlayerStartConfigData = CustomPlayerStartConfigData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCustomDeathInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UCustomDeathInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void ACustomDeathService::AfterRead()
{
	AActor::AfterRead();

}

void ACustomDeathService::BeforeDelete()
{
	AActor::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

// Name: SoT, Version: 2.2.1.1

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

// Function AthenaCheat.AthenaCheatManager.WindTriggerChange
// (Final, Exec, Native, Public)
// Parameters:
// int                            ChangeInstantly                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::WindTriggerChange(int ChangeInstantly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindTriggerChange");

	UAthenaCheatManager_WindTriggerChange_Params params;
	params.ChangeInstantly = ChangeInstantly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindSetVector
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::WindSetVector(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetVector");

	UAthenaCheatManager_WindSetVector_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindSetMagnitude
// (Final, Exec, Native, Public)
// Parameters:
// float                          Magnitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::WindSetMagnitude(float Magnitude)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetMagnitude");

	UAthenaCheatManager_WindSetMagnitude_Params params;
	params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindSetDirection
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::WindSetDirection(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindSetDirection");

	UAthenaCheatManager_WindSetDirection_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindReloadParams
// (Final, Exec, Native, Public)
void UAthenaCheatManager::WindReloadParams()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindReloadParams");

	UAthenaCheatManager_WindReloadParams_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindPrintDirection
// (Final, Exec, Native, Public)
void UAthenaCheatManager::WindPrintDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindPrintDirection");

	UAthenaCheatManager_WindPrintDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindEnableDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::WindEnableDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindEnableDebug");

	UAthenaCheatManager_WindEnableDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindDisableDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::WindDisableDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindDisableDebug");

	UAthenaCheatManager_WindDisableDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera
// (Final, Exec, Native, Public)
void UAthenaCheatManager::WindAlignWithCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.WindAlignWithCamera");

	UAthenaCheatManager_WindAlignWithCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.Walk
// (Exec, Native, Public)
void UAthenaCheatManager::Walk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Walk");

	UAthenaCheatManager_Walk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.VomitWithType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   VomitType                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::VomitWithType(const struct FName& VomitType, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.VomitWithType");

	UAthenaCheatManager_VomitWithType_Params params;
	params.VomitType = VomitType;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.Vomit
// (Final, Exec, Native, Public)
void UAthenaCheatManager::Vomit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Vomit");

	UAthenaCheatManager_Vomit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew
// (Final, Exec, Native, Public)
void UAthenaCheatManager::UnlockTradeRouteSelectionForMyCrew()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForMyCrew");

	UAthenaCheatManager_UnlockTradeRouteSelectionForMyCrew_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::UnlockTradeRouteSelectionForCrew(const struct FGuid& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockTradeRouteSelectionForCrew");

	UAthenaCheatManager_UnlockTradeRouteSelectionForCrew_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnlockEntitlement
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 EntitlementId                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::UnlockEntitlement(const struct FString& EntitlementId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockEntitlement");

	UAthenaCheatManager_UnlockEntitlement_Params params;
	params.EntitlementId = EntitlementId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::UnlockAllEntitlements(int TrueFalse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEntitlements");

	UAthenaCheatManager_UnlockAllEntitlements_Params params;
	params.TrueFalse = TrueFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements
// (Final, Exec, Native, Public)
void UAthenaCheatManager::UnlockAllEmblemsAndAchievements()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnlockAllEmblemsAndAchievements");

	UAthenaCheatManager_UnlockAllEmblemsAndAchievements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.UnBreakLeg
// (Final, Exec, Native, Public)
void UAthenaCheatManager::UnBreakLeg()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.UnBreakLeg");

	UAthenaCheatManager_UnBreakLeg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TutorialAction
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActionTypeString               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TutorialAction(const struct FString& ActionTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TutorialAction");

	UAthenaCheatManager_TutorialAction_Params params;
	params.ActionTypeString = ActionTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerTunnelMigration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerTunnelMigration");

	UAthenaCheatManager_TriggerTunnelMigration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Identifier                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TriggerRewardNotification(struct FName* Identifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerRewardNotification");

	UAthenaCheatManager_TriggerRewardNotification_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Identifier != nullptr)
		*Identifier = params.Identifier;

}


// Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction
// (Final, Exec, Native, Public)
// Parameters:
// int                            ActionType                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TriggerLandmarkReaction(int ActionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerLandmarkReaction");

	UAthenaCheatManager_TriggerLandmarkReaction_Params params;
	params.ActionType = ActionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerFogManagerAtNearestIsland()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerFogManagerAtNearestIsland");

	UAthenaCheatManager_TriggerFogManagerAtNearestIsland_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 EmblemFriendlyName             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TriggerEmblemUnlockedMessage(const struct FString& EmblemFriendlyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerEmblemUnlockedMessage");

	UAthenaCheatManager_TriggerEmblemUnlockedMessage_Params params;
	params.EmblemFriendlyName = EmblemFriendlyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsConnect                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            UserId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ControllerId                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TriggerControllerConnectionChange(bool IsConnect, int UserId, int ControllerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerControllerConnectionChange");

	UAthenaCheatManager_TriggerControllerConnectionChange_Params params;
	params.IsConnect = IsConnect;
	params.UserId = UserId;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerContestMatchmakingMigration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerContestMatchmakingMigration");

	UAthenaCheatManager_TriggerContestMatchmakingMigration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerContestBannerUnfurl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerContestBannerUnfurl");

	UAthenaCheatManager_TriggerContestBannerUnfurl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerAIShipTimerBattle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipTimerBattle");

	UAthenaCheatManager_TriggerAIShipTimerBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerAIShipPassive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipPassive");

	UAthenaCheatManager_TriggerAIShipPassive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerAIShipEncounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipEncounter");

	UAthenaCheatManager_TriggerAIShipEncounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TriggerAIShipAggressive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TriggerAIShipAggressive");

	UAthenaCheatManager_TriggerAIShipAggressive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Id                             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ToggleVideprinter(const struct FString& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleVideprinter");

	UAthenaCheatManager_ToggleVideprinter_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleThirdPerson()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleThirdPerson");

	UAthenaCheatManager_ToggleThirdPerson_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleSeaClueLocationQueryDebugDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleSeaClueLocationQueryDebugDisplay");

	UAthenaCheatManager_ToggleSeaClueLocationQueryDebugDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleRetailDrawDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleRetailDrawDebug");

	UAthenaCheatManager_ToggleRetailDrawDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsServer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleProjectileAimBaseAdjustmentsServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsServer");

	UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsLocalClient
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleProjectileAimBaseAdjustmentsLocalClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleProjectileAimBaseAdjustmentsLocalClient");

	UAthenaCheatManager_ToggleProjectileAimBaseAdjustmentsLocalClient_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleNoClip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleNoClip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNoClip");

	UAthenaCheatManager_ToggleNoClip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleNearestSuperheatedWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestSuperheatedWater");

	UAthenaCheatManager_ToggleNearestSuperheatedWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleNearestLava
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleNearestLava()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleNearestLava");

	UAthenaCheatManager_ToggleNearestLava_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::ToggleMigrationPointOfInterestChecks(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleMigrationPointOfInterestChecks");

	UAthenaCheatManager_ToggleMigrationPointOfInterestChecks_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleIslandSelectionDebugDisplay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleIslandSelectionDebugDisplay");

	UAthenaCheatManager_ToggleIslandSelectionDebugDisplay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleFastShipControls()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleFastShipControls");

	UAthenaCheatManager_ToggleFastShipControls_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDrowning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDrowning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrowning");

	UAthenaCheatManager_ToggleDrowning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDrawShipSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrawShipSpeed");

	UAthenaCheatManager_ToggleDrawShipSpeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDrawAboveIslandBounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDrawAboveIslandBounds");

	UAthenaCheatManager_ToggleDrawAboveIslandBounds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDisplayCannonAISpawnerZones()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDisplayCannonAISpawnerZones");

	UAthenaCheatManager_ToggleDisplayCannonAISpawnerZones_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::ToggleDebugFlying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDebugFlying");

	UAthenaCheatManager_ToggleDebugFlying_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDeathCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDeathCamera");

	UAthenaCheatManager_ToggleDeathCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleDamageAllowedToPlayerShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleDamageAllowedToPlayerShip");

	UAthenaCheatManager_ToggleDamageAllowedToPlayerShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleContestScoreDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleContestScoreDebug");

	UAthenaCheatManager_ToggleContestScoreDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleCinematicCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleCinematicCamera");

	UAthenaCheatManager_ToggleCinematicCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ToggleAttributeOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ToggleAttributeOverride");

	UAthenaCheatManager_ToggleAttributeOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TestCrashDumpCreationOnRunnableThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnRunnableThread");

	UAthenaCheatManager_TestCrashDumpCreationOnRunnableThread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TestCrashDumpCreationOnMainThread()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TestCrashDumpCreationOnMainThread");

	UAthenaCheatManager_TestCrashDumpCreationOnMainThread_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportToShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToShip");

	UAthenaCheatManager_TeleportToShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportToPlayerStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToPlayerStart");

	UAthenaCheatManager_TeleportToPlayerStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportToNearestTreasureLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToNearestTreasureLocation");

	UAthenaCheatManager_TeleportToNearestTreasureLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportToLocation(float LocationX, float LocationY, float LocationZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToLocation");

	UAthenaCheatManager_TeleportToLocation_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToHideout
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportToHideout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToHideout");

	UAthenaCheatManager_TeleportToHideout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DestinationId                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportToDebugDestinationLocation(const struct FString& ActorIdString, const struct FString& DestinationId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToDebugDestinationLocation");

	UAthenaCheatManager_TeleportToDebugDestinationLocation_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationId = DestinationId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportToAggressiveGhostShipEncounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportToAggressiveGhostShipEncounter");

	UAthenaCheatManager_TeleportToAggressiveGhostShipEncounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Z                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportShip(float X, float Y, float Z)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportShip");

	UAthenaCheatManager_TeleportShip_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportPlayerToSpireLocation(int SpireIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSpireLocation");

	UAthenaCheatManager_TeleportPlayerToSpireLocation_Params params;
	params.SpireIndex = SpireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportPlayerToSafety()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToSafety");

	UAthenaCheatManager_TeleportPlayerToSafety_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          OffsetX                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OffsetY                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OffsetZ                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ReturnTime                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportPlayerToOffsetAndReturn(float OffsetX, float OffsetY, float OffsetZ, float ReturnTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToOffsetAndReturn");

	UAthenaCheatManager_TeleportPlayerToOffsetAndReturn_Params params;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.OffsetZ = OffsetZ;
	params.ReturnTime = ReturnTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportPlayerToKraken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayerToKraken");

	UAthenaCheatManager_TeleportPlayerToKraken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::TeleportPlayersCrewShipToPlayerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportPlayersCrewShipToPlayerLocation");

	UAthenaCheatManager_TeleportPlayersCrewShipToPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportOutOfHideout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportOutOfHideout");

	UAthenaCheatManager_TeleportOutOfHideout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportCrewToShip(const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToShip");

	UAthenaCheatManager_TeleportCrewToShip_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportCrewToSafeSpawnLocationFromRemoteActor(const struct FString& ActorIdString, const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocationFromRemoteActor");

	UAthenaCheatManager_TeleportCrewToSafeSpawnLocationFromRemoteActor_Params params;
	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportCrewToSafeSpawnLocation(const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewToSafeSpawnLocation");

	UAthenaCheatManager_TeleportCrewToSafeSpawnLocation_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportCrewMemberToShip(const struct FString& ActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportCrewMemberToShip");

	UAthenaCheatManager_TeleportCrewMemberToShip_Params params;
	params.ActorIdString = ActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportAllPlayersToShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToShip");

	UAthenaCheatManager_TeleportAllPlayersToShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportAllPlayersToPlayerStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllPlayersToPlayerStart");

	UAthenaCheatManager_TeleportAllPlayersToPlayerStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportAllCrewsToShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToShips");

	UAthenaCheatManager_TeleportAllCrewsToShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations
// (Final, Exec, Native, Public)
void UAthenaCheatManager::TeleportAllCrewsToCrewSpawnLocations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportAllCrewsToCrewSpawnLocations");

	UAthenaCheatManager_TeleportAllCrewsToCrewSpawnLocations_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            DestinationActorType           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToTrackedActorType(const struct FString& ActorIdString, int DestinationActorType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToTrackedActorType");

	UAthenaCheatManager_TeleportActorToTrackedActorType_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationActorType = DestinationActorType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ControllerActorIdString        (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 TeleportLocationActorIdString  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToTeleportLocationActor(const struct FString& ControllerActorIdString, const struct FString& TeleportLocationActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToTeleportLocationActor");

	UAthenaCheatManager_TeleportActorToTeleportLocationActor_Params params;
	params.ControllerActorIdString = ControllerActorIdString;
	params.TeleportLocationActorIdString = TeleportLocationActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToLocation(const struct FString& ActorIdString, float LocationX, float LocationY, float LocationZ, float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToLocation");

	UAthenaCheatManager_TeleportActorToLocation_Params params;
	params.ActorIdString = ActorIdString;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 IslandName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToIsland(const struct FString& ActorIdString, const struct FString& IslandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToIsland");

	UAthenaCheatManager_TeleportActorToIsland_Params params;
	params.ActorIdString = ActorIdString;
	params.IslandName = IslandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToDigSite(const struct FString& ActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToDigSite");

	UAthenaCheatManager_TeleportActorToDigSite_Params params;
	params.ActorIdString = ActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DestinationActorIdString       (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          OffsetX                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OffsetY                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          OffsetZ                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::TeleportActorToActorWithOffset(const struct FString& ActorIdString, const struct FString& DestinationActorIdString, float OffsetX, float OffsetY, float OffsetZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.TeleportActorToActorWithOffset");

	UAthenaCheatManager_TeleportActorToActorWithOffset_Params params;
	params.ActorIdString = ActorIdString;
	params.DestinationActorIdString = DestinationActorIdString;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;
	params.OffsetZ = OffsetZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SuperSailor
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SuperSailor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SuperSailor");

	UAthenaCheatManager_SuperSailor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StoreWieldedItemInBootyStorageInCurrentIsland()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorageInCurrentIsland");

	UAthenaCheatManager_StoreWieldedItemInBootyStorageInCurrentIsland_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 IslandName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::StoreWieldedItemInBootyStorage(const struct FString& IslandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreWieldedItemInBootyStorage");

	UAthenaCheatManager_StoreWieldedItemInBootyStorage_Params params;
	params.IslandName = IslandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StoreShipLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::StoreShipLocation(float LocationX, float LocationY, float LocationZ, float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StoreShipLocation");

	UAthenaCheatManager_StoreShipLocation_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StopShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::StopShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopShip");

	UAthenaCheatManager_StopShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StopPetHangout
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StopPetHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopPetHangout");

	UAthenaCheatManager_StopPetHangout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StopLocalSequences
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StopLocalSequences()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopLocalSequences");

	UAthenaCheatManager_StopLocalSequences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StopAllShips
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::StopAllShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopAllShips");

	UAthenaCheatManager_StopAllShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StopAllPetsHangout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StopAllPetsHangout");

	UAthenaCheatManager_StopAllPetsHangout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartVoyage
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SourceAssetName                (Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Development                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::StartVoyage(const struct FString& SourceAssetName, bool Development)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartVoyage");

	UAthenaCheatManager_StartVoyage_Params params;
	params.SourceAssetName = SourceAssetName;
	params.Development = Development;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartSicknessOnPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartSicknessOnPlayer");

	UAthenaCheatManager_StartSicknessOnPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 RomeVoyageString               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::StartSelectedRomeVoyage(const struct FString& RomeVoyageString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartSelectedRomeVoyage");

	UAthenaCheatManager_StartSelectedRomeVoyage_Params params;
	params.RomeVoyageString = RomeVoyageString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartNearestVolcano
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartNearestVolcano()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestVolcano");

	UAthenaCheatManager_StartNearestVolcano_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartNearestGeysers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartNearestGeysers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestGeysers");

	UAthenaCheatManager_StartNearestGeysers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartNearestEarthquake()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartNearestEarthquake");

	UAthenaCheatManager_StartNearestEarthquake_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartDemoSession
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartDemoSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartDemoSession");

	UAthenaCheatManager_StartDemoSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC
// (Final, Exec, Native, Public)
// Parameters:
// int                            NumOfCrates                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::StartCargoRunFromNearestNPC(int NumOfCrates)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartCargoRunFromNearestNPC");

	UAthenaCheatManager_StartCargoRunFromNearestNPC_Params params;
	params.NumOfCrates = NumOfCrates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartAshenLordGeysers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAshenLordGeysers");

	UAthenaCheatManager_StartAshenLordGeysers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartAllVolcanos
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartAllVolcanos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllVolcanos");

	UAthenaCheatManager_StartAllVolcanos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages
// (Final, Exec, Native, Public)
void UAthenaCheatManager::StartAllCrewVoyages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.StartAllCrewVoyages");

	UAthenaCheatManager_StartAllCrewVoyages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpireStreamOut
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpireStreamOut(int SpireIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpireStreamOut");

	UAthenaCheatManager_SpireStreamOut_Params params;
	params.SpireIndex = SpireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpireStreamIn
// (Final, Exec, Native, Public)
// Parameters:
// int                            SpireIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpireStreamIn(int SpireIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpireStreamIn");

	UAthenaCheatManager_SpireStreamIn_Params params;
	params.SpireIndex = SpireIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpinShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          YawSpdInDegreesPerSecond       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpinShip(float YawSpdInDegreesPerSecond)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpinShip");

	UAthenaCheatManager_SpinShip_Params params;
	params.YawSpdInDegreesPerSecond = YawSpdInDegreesPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnWatercraft
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 WatercraftClassString          (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnWatercraft(const struct FString& WatercraftClassString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnWatercraft");

	UAthenaCheatManager_SpawnWatercraft_Params params;
	params.WatercraftClassString = WatercraftClassString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ChestTypeString                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnTreasureChestOfType(struct FString* ChestTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureChestOfType");

	UAthenaCheatManager_SpawnTreasureChestOfType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;

}


// Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 TypeString                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnTreasureArtifact(const struct FString& TypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTreasureArtifact");

	UAthenaCheatManager_SpawnTreasureArtifact_Params params;
	params.TypeString = TypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnTinySharkAtLocation(float X, float Y, float Z, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtLocation");

	UAthenaCheatManager_SpawnTinySharkAtLocation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            ControllerParamIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PartIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnTinySharkAtCurrentLocation(int ControllerParamIndex, int PartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnTinySharkAtCurrentLocation");

	UAthenaCheatManager_SpawnTinySharkAtCurrentLocation_Params params;
	params.ControllerParamIndex = ControllerParamIndex;
	params.PartIndex = PartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnStrongholdKeyFromGameEventType(const struct FString& FortEventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKeyFromGameEventType");

	UAthenaCheatManager_SpawnStrongholdKeyFromGameEventType_Params params;
	params.FortEventName = FortEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnStrongholdKey()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnStrongholdKey");

	UAthenaCheatManager_SpawnStrongholdKey_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IslandName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnSmallShipAtIsland(const struct FString& IslandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShipAtIsland");

	UAthenaCheatManager_SpawnSmallShipAtIsland_Params params;
	params.IslandName = IslandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnSmallShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnSmallShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSmallShip");

	UAthenaCheatManager_SpawnSmallShip_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnSkeletonAtNearestAISpawnPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnSkeletonAtNearestAISpawnPoint");

	UAthenaCheatManager_SpawnSkeletonAtNearestAISpawnPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnShipOfType
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 TypeString                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnShipOfType(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw, const struct FString& TypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipOfType");

	UAthenaCheatManager_SpawnShipOfType_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;
	params.TypeString = TypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable
// (Final, Exec, Native, Public)
// Parameters:
// float                          XProportion                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          YProportion                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 TypeString                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnShipInFrontOfNearestAIInteractable(float XProportion, float YProportion, float Yaw, const struct FString& TypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipInFrontOfNearestAIInteractable");

	UAthenaCheatManager_SpawnShipInFrontOfNearestAIInteractable_Params params;
	params.XProportion = XProportion;
	params.YProportion = YProportion;
	params.Yaw = Yaw;
	params.TypeString = TypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InShipDescAssetString          (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnShipFromDesc(const struct FString& InShipDescAssetString, float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipFromDesc");

	UAthenaCheatManager_SpawnShipFromDesc_Params params;
	params.InShipDescAssetString = InShipDescAssetString;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 IslandName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnShipAtIsland(const struct FString& IslandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShipAtIsland");

	UAthenaCheatManager_SpawnShipAtIsland_Params params;
	params.IslandName = IslandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnYaw                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnShip(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, float SpawnYaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnShip");

	UAthenaCheatManager_SpawnShip_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.SpawnYaw = SpawnYaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ChestTypeString                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnRomeTreasureChestOfType(const struct FString& ChestTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnRomeTreasureChestOfType");

	UAthenaCheatManager_SpawnRomeTreasureChestOfType_Params params;
	params.ChestTypeString = ChestTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            NumToSpawn                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnNumberOfAI(const struct FString& AIDescString, int NumToSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNumberOfAI");

	UAthenaCheatManager_SpawnNumberOfAI_Params params;
	params.AIDescString = AIDescString;
	params.NumToSpawn = NumToSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersRandom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersRandom");

	UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersRandom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnNightmareAggressiveGhostShipEncountersNearToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnNightmareAggressiveGhostShipEncountersNearToPlayer");

	UAthenaCheatManager_SpawnNightmareAggressiveGhostShipEncountersNearToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ChestTypeString                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int                            Num                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnMultipleTreasureChestsOfType(struct FString* ChestTypeString, int Num)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMultipleTreasureChestsOfType");

	UAthenaCheatManager_SpawnMultipleTreasureChestsOfType_Params params;
	params.Num = Num;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MessageInABottleTypeString     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnMessageInABottle(const struct FString& MessageInABottleTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMessageInABottle");

	UAthenaCheatManager_SpawnMessageInABottle_Params params;
	params.MessageInABottleTypeString = MessageInABottleTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMermaid
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnMermaid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMermaid");

	UAthenaCheatManager_SpawnMermaid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 FaunaTypeString                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnMerchantFauna(const struct FString& FaunaTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantFauna");

	UAthenaCheatManager_SpawnMerchantFauna_Params params;
	params.FaunaTypeString = FaunaTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MerchantCrateTypeString        (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnMerchantCrate(const struct FString& MerchantCrateTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCrate");

	UAthenaCheatManager_SpawnMerchantCrate_Params params;
	params.MerchantCrateTypeString = MerchantCrateTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 MerchantCargoTypeString        (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnMerchantCargo(const struct FString& MerchantCargoTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnMerchantCargo");

	UAthenaCheatManager_SpawnMerchantCargo_Params params;
	params.MerchantCargoTypeString = MerchantCargoTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       NumTentacles                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnKrakenAtCurrentLocationWithNumTentacles(uint32_t NumTentacles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocationWithNumTentacles");

	UAthenaCheatManager_SpawnKrakenAtCurrentLocationWithNumTentacles_Params params;
	params.NumTentacles = NumTentacles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnKrakenAtCurrentLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnKrakenAtCurrentLocation");

	UAthenaCheatManager_SpawnKrakenAtCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemString                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnItemOnFloor(const struct FString& ItemString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnItemOnFloor");

	UAthenaCheatManager_SpawnItemOnFloor_Params params;
	params.ItemString = ItemString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnItemInHand
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ItemString                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnItemInHand(const struct FString& ItemString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnItemInHand");

	UAthenaCheatManager_SpawnItemInHand_Params params;
	params.ItemString = ItemString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnGoldMound
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 GoldMoundTypeString            (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnGoldMound(const struct FString& GoldMoundTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGoldMound");

	UAthenaCheatManager_SpawnGoldMound_Params params;
	params.GoldMoundTypeString = GoldMoundTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy
// (Final, Exec, Native, Public)
// Parameters:
// float                          Dormancy                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnGeyserAtPlayerLocationWithDormancy(float Dormancy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocationWithDormancy");

	UAthenaCheatManager_SpawnGeyserAtPlayerLocationWithDormancy_Params params;
	params.Dormancy = Dormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnGeyserAtPlayerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtPlayerLocation");

	UAthenaCheatManager_SpawnGeyserAtPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Dormancy                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnGeyserAtLocation(float LocationX, float LocationY, float LocationZ, float Dormancy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnGeyserAtLocation");

	UAthenaCheatManager_SpawnGeyserAtLocation_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Dormancy = Dormancy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnFogAtPlayerPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFogAtPlayerPosition");

	UAthenaCheatManager_SpawnFogAtPlayerPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InBaitType                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnFishAtPlayerLocation(const struct FString& InBaitType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnFishAtPlayerLocation");

	UAthenaCheatManager_SpawnFishAtPlayerLocation_Params params;
	params.InBaitType = InBaitType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CannonballTypeString           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnCursedCannonball(const struct FString& CannonballTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCursedCannonball");

	UAthenaCheatManager_SpawnCursedCannonball_Params params;
	params.CannonballTypeString = CannonballTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 ChestTypeString                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnCollectorsChestOfType(struct FString* ChestTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCollectorsChestOfType");

	UAthenaCheatManager_SpawnCollectorsChestOfType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChestTypeString != nullptr)
		*ChestTypeString = params.ChestTypeString;

}


// Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SpawnCargoRunCrateString       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnCargoRunCrate(const struct FString& SpawnCargoRunCrateString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCargoRunCrate");

	UAthenaCheatManager_SpawnCargoRunCrate_Params params;
	params.SpawnCargoRunCrateString = SpawnCargoRunCrateString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Distance                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnCabinDoorInFrontOfPlayer(float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnCabinDoorInFrontOfPlayer");

	UAthenaCheatManager_SpawnCabinDoorInFrontOfPlayer_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnBountyReward
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 BountyTypeString               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnBountyReward(const struct FString& BountyTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBountyReward");

	UAthenaCheatManager_SpawnBountyReward_Params params;
	params.BountyTypeString = BountyTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnBootyPickupPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBootyPickupPoint");

	UAthenaCheatManager_SpawnBootyPickupPoint_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup
// (Final, Exec, Native, Public)
// Parameters:
// bool                           ForcedCloseSpawn               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SpawnBarrelGroup(bool ForcedCloseSpawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnBarrelGroup");

	UAthenaCheatManager_SpawnBarrelGroup_Params params;
	params.ForcedCloseSpawn = ForcedCloseSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAThousandTreasureChests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAThousandTreasureChests");

	UAthenaCheatManager_SpawnAThousandTreasureChests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 DebugWieldableTypeString       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAndEquipDebugWieldable(const struct FString& DebugWieldableTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAndEquipDebugWieldable");

	UAthenaCheatManager_SpawnAndEquipDebugWieldable_Params params;
	params.DebugWieldableTypeString = DebugWieldableTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAINoTrigger(const struct FString& AIDescString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAINoTrigger");

	UAthenaCheatManager_SpawnAINoTrigger_Params params;
	params.AIDescString = AIDescString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIEncounterString              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAIEncounter(const struct FString& AIEncounterString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIEncounter");

	UAthenaCheatManager_SpawnAIEncounter_Params params;
	params.AIEncounterString = AIEncounterString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAIAtNearestAISpawnPoint(const struct FString& AIDescString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtNearestAISpawnPoint");

	UAthenaCheatManager_SpawnAIAtNearestAISpawnPoint_Params params;
	params.AIDescString = AIDescString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationZ                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAIAtLocationDelayed(const struct FString& AIDescString, float LocationX, float LocationY, float LocationZ, float Yaw, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtLocationDelayed");

	UAthenaCheatManager_SpawnAIAtLocationDelayed_Params params;
	params.AIDescString = AIDescString;
	params.LocationX = LocationX;
	params.LocationY = LocationY;
	params.LocationZ = LocationZ;
	params.Yaw = Yaw;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Delay                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAIAtCurrentLocationDelayed(const struct FString& AIDescString, float Delay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAIAtCurrentLocationDelayed");

	UAthenaCheatManager_SpawnAIAtCurrentLocationDelayed_Params params;
	params.AIDescString = AIDescString;
	params.Delay = Delay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAI
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIDescString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SpawnAI(const struct FString& AIDescString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAI");

	UAthenaCheatManager_SpawnAI_Params params;
	params.AIDescString = AIDescString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid");

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireTheHellishMermaid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireFriendlyFormation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireFriendlyFormation");

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireFriendlyFormation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpireEnemyFormation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpireEnemyFormation");

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpireEnemyFormation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAggressiveGhostShipEncounterSpire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounterSpire");

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounterSpire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SpawnAggressiveGhostShipEncounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SpawnAggressiveGhostShipEncounter");

	UAthenaCheatManager_SpawnAggressiveGhostShipEncounter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::SmoulderClosestShipFire()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SmoulderClosestShipFire");

	UAthenaCheatManager_SmoulderClosestShipFire_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::SmoulderAllShipFires()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SmoulderAllShipFires");

	UAthenaCheatManager_SmoulderAllShipFires_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SlowMotionOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SlowMotionOverride(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SlowMotionOverride");

	UAthenaCheatManager_SlowMotionOverride_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SkipToEndOfOnboarding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SkipToEndOfOnboarding");

	UAthenaCheatManager_SkipToEndOfOnboarding_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SinkShipWithKeelOverIndex(int KeelOverConfigIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipWithKeelOverIndex");

	UAthenaCheatManager_SinkShipWithKeelOverIndex_Params params;
	params.KeelOverConfigIndex = KeelOverConfigIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ShipActorIdString              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SinkShipByActorId(const struct FString& ShipActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShipByActorId");

	UAthenaCheatManager_SinkShipByActorId_Params params;
	params.ShipActorIdString = ShipActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SinkShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkShip");

	UAthenaCheatManager_SinkShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SinkClosestItemProxy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkClosestItemProxy");

	UAthenaCheatManager_SinkClosestItemProxy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkAllBarrels
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SinkAllBarrels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllBarrels");

	UAthenaCheatManager_SinkAllBarrels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SinkAllAIShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SinkAllAIShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SinkAllAIShips");

	UAthenaCheatManager_SinkAllAIShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SingleStickRight
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SingleStickRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickRight");

	UAthenaCheatManager_SingleStickRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SingleStickOff
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SingleStickOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickOff");

	UAthenaCheatManager_SingleStickOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SingleStickLeft
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SingleStickLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SingleStickLeft");

	UAthenaCheatManager_SingleStickLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SimulateTunnelFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulateTunnelFailure");

	UAthenaCheatManager_SimulateTunnelFailure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Id                             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SimulatePetReactRequest(const struct FString& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulatePetReactRequest");

	UAthenaCheatManager_SimulatePetReactRequest_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Id                             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SimulatePetReactCancellation(const struct FString& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SimulatePetReactCancellation");

	UAthenaCheatManager_SimulatePetReactCancellation_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowTavernBanners
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowTavernBanners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTavernBanners");

	UAthenaCheatManager_ShowTavernBanners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowTaleDebug_WithVariables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug_WithVariables");

	UAthenaCheatManager_ShowTaleDebug_WithVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowTaleDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowTaleDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowTaleDebug");

	UAthenaCheatManager_ShowTaleDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowRandomCrewMemberGamerCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowRandomCrewMemberGamerCard");

	UAthenaCheatManager_ShowRandomCrewMemberGamerCard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowEmissaryVoteIndicators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowEmissaryVoteIndicators");

	UAthenaCheatManager_ShowEmissaryVoteIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowAllWelds
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowAllWelds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllWelds");

	UAthenaCheatManager_ShowAllWelds_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShowAllRomeBeacons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllRomeBeacons");

	UAthenaCheatManager_ShowAllRomeBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ShowAllianceStatus(const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShowAllianceStatus");

	UAthenaCheatManager_ShowAllianceStatus_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne
// (Final, Exec, Native, Public)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ShipwrecksSpawnOne(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnOne");

	UAthenaCheatManager_ShipwrecksSpawnOne_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom
// (Final, Exec, Native, Public)
// Parameters:
// float                          SpawnLocationX                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationY                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SpawnLocationZ                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 WreckAsset                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ShipwrecksSpawnCustom(float SpawnLocationX, float SpawnLocationY, float SpawnLocationZ, const struct FString& WreckAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksSpawnCustom");

	UAthenaCheatManager_ShipwrecksSpawnCustom_Params params;
	params.SpawnLocationX = SpawnLocationX;
	params.SpawnLocationY = SpawnLocationY;
	params.SpawnLocationZ = SpawnLocationZ;
	params.WreckAsset = WreckAsset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShipwrecksRemoveCustom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksRemoveCustom");

	UAthenaCheatManager_ShipwrecksRemoveCustom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShipwrecksRegen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipwrecksRegen");

	UAthenaCheatManager_ShipwrecksRegen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ShipUpdateMassProperies()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ShipUpdateMassProperies");

	UAthenaCheatManager_ShipUpdateMassProperies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetWheelAngle
// (Final, Exec, Native, Public)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetWheelAngle(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWheelAngle");

	UAthenaCheatManager_SetWheelAngle_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut
// (Final, Exec, Native, Public)
// Parameters:
// bool                           WeaponsLockedOut               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetWeaponsLockedOut(bool WeaponsLockedOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWeaponsLockedOut");

	UAthenaCheatManager_SetWeaponsLockedOut_Params params;
	params.WeaponsLockedOut = WeaponsLockedOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetWaveFlag
// (Final, Exec, Native, Public)
// Parameters:
// int                            InFlag                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetWaveFlag(int InFlag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaveFlag");

	UAthenaCheatManager_SetWaveFlag_Params params;
	params.InFlag = InFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams
// (Final, Exec, Native, Public)
// Parameters:
// float                          Amplitude                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          WaveLength                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PropagationSpeed               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetWaterWaveParams(float Amplitude, float WaveLength, float PropagationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetWaterWaveParams");

	UAthenaCheatManager_SetWaterWaveParams_Params params;
	params.Amplitude = Amplitude;
	params.WaveLength = WaveLength;
	params.PropagationSpeed = PropagationSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetVoiceChatEndpointXAudio2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointXAudio2");

	UAthenaCheatManager_SetVoiceChatEndpointXAudio2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetVoiceChatEndpointWwise()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetVoiceChatEndpointWwise");

	UAthenaCheatManager_SetVoiceChatEndpointWwise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUseWwise()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUseWwise");

	UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUseWwise_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetUnattenuatedChatMixingMethodToUsePlatform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetUnattenuatedChatMixingMethodToUsePlatform");

	UAthenaCheatManager_SetUnattenuatedChatMixingMethodToUsePlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetTinySharkToOneHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTinySharkToOneHealth");

	UAthenaCheatManager_SetTinySharkToOneHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetTimeScalar
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeScalar                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetTimeScalar(float TimeScalar)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeScalar");

	UAthenaCheatManager_SetTimeScalar_Params params;
	params.TimeScalar = TimeScalar;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Minutes                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetTimeHoursAndMinutes(int Hours, int Minutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTimeHoursAndMinutes");

	UAthenaCheatManager_SetTimeHoursAndMinutes_Params params;
	params.Hours = Hours;
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetTime(int Hours)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTime");

	UAthenaCheatManager_SetTime_Params params;
	params.Hours = Hours;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed
// (Final, Exec, Native, Public)
// Parameters:
// int                            Seed                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetTaleSelectorSeed(int Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetTaleSelectorSeed");

	UAthenaCheatManager_SetTaleSelectorSeed_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetShroudbreakerActive(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShroudbreakerActive");

	UAthenaCheatManager_SetShroudbreakerActive_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipYaw
// (Final, Exec, Native, Public)
// Parameters:
// float                          Yaw                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetShipYaw(float Yaw)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipYaw");

	UAthenaCheatManager_SetShipYaw_Params params;
	params.Yaw = Yaw;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetShipWheelFullyRepaired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyRepaired");

	UAthenaCheatManager_SetShipWheelFullyRepaired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetShipWheelFullyDamaged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipWheelFullyDamaged");

	UAthenaCheatManager_SetShipWheelFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipRoll
// (Final, Exec, Native, Public)
// Parameters:
// float                          Roll                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetShipRoll(float Roll)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipRoll");

	UAthenaCheatManager_SetShipRoll_Params params;
	params.Roll = Roll;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetShipFullyDamaged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipFullyDamaged");

	UAthenaCheatManager_SetShipFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetShipCapstanFullyRepaired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyRepaired");

	UAthenaCheatManager_SetShipCapstanFullyRepaired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetShipCapstanFullyDamaged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipCapstanFullyDamaged");

	UAthenaCheatManager_SetShipCapstanFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend
// (Final, Exec, Native, Public)
// Parameters:
// float                          UnaryBlend                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetShipBuoyancyBlend(float UnaryBlend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetShipBuoyancyBlend");

	UAthenaCheatManager_SetShipBuoyancyBlend_Params params;
	params.UnaryBlend = UnaryBlend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions
// (Final, Exec, Native, Public)
// Parameters:
// float                          Proportion                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetSailLoweredProportions(float Proportion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailLoweredProportions");

	UAthenaCheatManager_SetSailLoweredProportions_Params params;
	params.Proportion = Proportion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetSailAngles
// (Final, Exec, Native, Public)
// Parameters:
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetSailAngles(float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetSailAngles");

	UAthenaCheatManager_SetSailAngles_Params params;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetPreventLeakingOnAllShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllShips");

	UAthenaCheatManager_SetPreventLeakingOnAllShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// bool                           PreventLeaking                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetPreventLeakingOnAllDamageZones(bool PreventLeaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPreventLeakingOnAllDamageZones");

	UAthenaCheatManager_SetPreventLeakingOnAllDamageZones_Params params;
	params.PreventLeaking = PreventLeaking;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetPlayerVisibleToAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerVisibleToAI");

	UAthenaCheatManager_SetPlayerVisibleToAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetPlayerInvisibleToAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPlayerInvisibleToAI");

	UAthenaCheatManager_SetPlayerInvisibleToAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPhotoMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetPhotoMode(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPhotoMode");

	UAthenaCheatManager_SetPhotoMode_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow
// (Final, Exec, Native, Public)
// Parameters:
// float                          TimeWindow                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetPetMovementTimeWindow(float TimeWindow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetPetMovementTimeWindow");

	UAthenaCheatManager_SetPetMovementTimeWindow_Params params;
	params.TimeWindow = TimeWindow;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetNonCrewChatSpatialisation(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetNonCrewChatSpatialisation");

	UAthenaCheatManager_SetNonCrewChatSpatialisation_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxNumOfSpawnedActors          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetMaxNumOfSpawnedAI(int MaxNumOfSpawnedActors)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxNumOfSpawnedAI");

	UAthenaCheatManager_SetMaxNumOfSpawnedAI_Params params;
	params.MaxNumOfSpawnedActors = MaxNumOfSpawnedActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetMaxMovingPetsOnShips(int MaxMovingPets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnShips");

	UAthenaCheatManager_SetMaxMovingPetsOnShips_Params params;
	params.MaxMovingPets = MaxMovingPets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetMaxMovingPetsOnServer(int MaxMovingPets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnServer");

	UAthenaCheatManager_SetMaxMovingPetsOnServer_Params params;
	params.MaxMovingPets = MaxMovingPets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand
// (Final, Exec, Native, Public)
// Parameters:
// int                            MaxMovingPets                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetMaxMovingPetsOnLand(int MaxMovingPets)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMaxMovingPetsOnLand");

	UAthenaCheatManager_SetMaxMovingPetsOnLand_Params params;
	params.MaxMovingPets = MaxMovingPets;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetMastsFullyRepaired()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMastsFullyRepaired");

	UAthenaCheatManager_SetMastsFullyRepaired_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetMastsFullyDamaged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetMastsFullyDamaged");

	UAthenaCheatManager_SetMastsFullyDamaged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled
// (Exec, Native, Public)
// Parameters:
// bool                           Disabled                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetKnockbackDisabled(bool Disabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetKnockbackDisabled");

	UAthenaCheatManager_SetKnockbackDisabled_Params params;
	params.Disabled = Disabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetIdleDisconnectEnabled(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetIdleDisconnectEnabled");

	UAthenaCheatManager_SetIdleDisconnectEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bActive                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetHealthInfoReplicateOverride(bool bActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetHealthInfoReplicateOverride");

	UAthenaCheatManager_SetHealthInfoReplicateOverride_Params params;
	params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetGrogSecondary
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InValue                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetGrogSecondary(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGrogSecondary");

	UAthenaCheatManager_SetGrogSecondary_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetGodMode
// (Final, Exec, Native, Public)
// Parameters:
// bool                           GodModeOn                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetGodMode(bool GodModeOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGodMode");

	UAthenaCheatManager_SetGodMode_Params params;
	params.GodModeOn = GodModeOn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride
// (Final, Exec, Native, Public)
// Parameters:
// int                            RequiredPlayerCount            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetGlitterbeardRequiredPlayersOverride(int RequiredPlayerCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetGlitterbeardRequiredPlayersOverride");

	UAthenaCheatManager_SetGlitterbeardRequiredPlayersOverride_Params params;
	params.RequiredPlayerCount = RequiredPlayerCount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetFOV
// (Final, Exec, Native, Public)
// Parameters:
// float                          InNewFOV                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetFOV(float InNewFOV)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFOV");

	UAthenaCheatManager_SetFOV_Params params;
	params.InNewFOV = InNewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour
// (Final, Exec, Native, Public)
// Parameters:
// int                            InFlameOfFateType              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetFlameOfFateColour(int InFlameOfFateType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetFlameOfFateColour");

	UAthenaCheatManager_SetFlameOfFateColour_Params params;
	params.InFlameOfFateType = InFlameOfFateType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetDebugItemSource
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetDebugItemSource(const struct FString& Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugItemSource");

	UAthenaCheatManager_SetDebugItemSource_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InStage                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetDebugHealthStage(int InStage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugHealthStage");

	UAthenaCheatManager_SetDebugHealthStage_Params params;
	params.InStage = InStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel
// (Final, Exec, Native, Public)
// Parameters:
// bool                           bUseProjectileChannel          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetDebugCameraUseProjectileCollisionChannel(bool bUseProjectileChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDebugCameraUseProjectileCollisionChannel");

	UAthenaCheatManager_SetDebugCameraUseProjectileCollisionChannel_Params params;
	params.bUseProjectileChannel = bUseProjectileChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer
// (Final, Exec, Native, Public)
// Parameters:
// float                          InSpawnTimer                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetDeathPenaltyRespawnTimer(float InSpawnTimer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDeathPenaltyRespawnTimer");

	UAthenaCheatManager_SetDeathPenaltyRespawnTimer_Params params;
	params.InSpawnTimer = InSpawnTimer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip
// (Final, Exec, Native, Public)
// Parameters:
// bool                           InAllowDamage                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetDamageAllowedToPlayerShip(bool InAllowDamage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetDamageAllowedToPlayerShip");

	UAthenaCheatManager_SetDamageAllowedToPlayerShip_Params params;
	params.InAllowDamage = InAllowDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::SetCutsceneResponseCoordinatorDebug(bool Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCutsceneResponseCoordinatorDebug");

	UAthenaCheatManager_SetCutsceneResponseCoordinatorDebug_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCurrentCulture
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Culture                        (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetCurrentCulture(const struct FString& Culture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCurrentCulture");

	UAthenaCheatManager_SetCurrentCulture_Params params;
	params.Culture = Culture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset
// (Final, Exec, Native, Public)
// Parameters:
// int                            AssetIndex                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetCoordinatedKrakenPhaseAsset(int AssetIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenPhaseAsset");

	UAthenaCheatManager_SetCoordinatedKrakenPhaseAsset_Params params;
	params.AssetIndex = AssetIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetInactive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetInactive");

	UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetInactive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SetCoordinatedKrakenCurrentPhaseAssetActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCoordinatedKrakenCurrentPhaseAssetActive");

	UAthenaCheatManager_SetCoordinatedKrakenCurrentPhaseAssetActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetCapstanPosition
// (Final, Exec, Native, Public)
// Parameters:
// float                          Position                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetCapstanPosition(float Position)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetCapstanPosition");

	UAthenaCheatManager_SetCapstanPosition_Params params;
	params.Position = Position;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InBindingName                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 InKeyName                      (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAxisBinding(const struct FString& InBindingName, const struct FString& InKeyName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAxisBinding");

	UAthenaCheatManager_SetAxisBinding_Params params;
	params.InBindingName = InBindingName;
	params.InKeyName = InKeyName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance
// (Final, Exec, Native, Public)
// Parameters:
// float                          HitChance                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAllAIOverrideCannonShotHitChance(float HitChance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAllAIOverrideCannonShotHitChance");

	UAthenaCheatManager_SetAllAIOverrideCannonShotHitChance_Params params;
	params.HitChance = HitChance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 TeamAString                    (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 TeamBString                    (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 AttitudeString                 (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAITeamAttitude(const struct FString& TeamAString, const struct FString& TeamBString, const struct FString& AttitudeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAITeamAttitude");

	UAthenaCheatManager_SetAITeamAttitude_Params params;
	params.TeamAString = TeamAString;
	params.TeamBString = TeamBString;
	params.AttitudeString = AttitudeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIAbilityString                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAIExclusiveAbility(const struct FString& AIAbilityString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAIExclusiveAbility");

	UAthenaCheatManager_SetAIExclusiveAbility_Params params;
	params.AIAbilityString = AIAbilityString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIAbilityString                (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          IntervalCooldownMultiplier     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          ActivationCooldownMultiplier   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAIAbilityTimeMultiplier(const struct FString& AIAbilityString, float IntervalCooldownMultiplier, float ActivationCooldownMultiplier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAIAbilityTimeMultiplier");

	UAthenaCheatManager_SetAIAbilityTimeMultiplier_Params params;
	params.AIAbilityString = AIAbilityString;
	params.IntervalCooldownMultiplier = IntervalCooldownMultiplier;
	params.ActivationCooldownMultiplier = ActivationCooldownMultiplier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AIAbilityString                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SetAbilityAlwaysOn(const struct FString& AIAbilityString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SetAbilityAlwaysOn");

	UAthenaCheatManager_SetAbilityAlwaysOn_Params params;
	params.AIAbilityString = AIAbilityString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SendUpdateVoyageProgressEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendUpdateVoyageProgressEvent");

	UAthenaCheatManager_SendUpdateVoyageProgressEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SendStatEvent
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       StatId                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64_t                       StatValue                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SendStatEvent(uint32_t StatId, uint64_t StatValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendStatEvent");

	UAthenaCheatManager_SendStatEvent_Params params;
	params.StatId = StatId;
	params.StatValue = StatValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CompanyNameAndRewardIdSeparatedByColon (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::SendRewardRequestEvent(const struct FString& CompanyNameAndRewardIdSeparatedByColon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendRewardRequestEvent");

	UAthenaCheatManager_SendRewardRequestEvent_Params params;
	params.CompanyNameAndRewardIdSeparatedByColon = CompanyNameAndRewardIdSeparatedByColon;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SendResetReaperLevelEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SendResetReaperLevelEvent");

	UAthenaCheatManager_SendResetReaperLevelEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ScuttleShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::ScuttleShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScuttleShip");

	UAthenaCheatManager_ScuttleShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeStart
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ScreenFadeStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeStart");

	UAthenaCheatManager_ScreenFadeStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ScreenFadeEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ScreenFadeEnd");

	UAthenaCheatManager_ScreenFadeEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerToggleDebugDraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerToggleDebugDraw");

	UAthenaCheatManager_SchedulerToggleDebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerSkipToNext()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerSkipToNext");

	UAthenaCheatManager_SchedulerSkipToNext_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitTinyShark()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitTinyShark");

	UAthenaCheatManager_SchedulerInitTinyShark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitSkellyFort()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitSkellyFort");

	UAthenaCheatManager_SchedulerInitSkellyFort_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitKraken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitKraken");

	UAthenaCheatManager_SchedulerInitKraken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitDefault");

	UAthenaCheatManager_SchedulerInitDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitAshenLord()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAshenLord");

	UAthenaCheatManager_SchedulerInitAshenLord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitAIShipPassive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipPassive");

	UAthenaCheatManager_SchedulerInitAIShipPassive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitAIShipBattle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipBattle");

	UAthenaCheatManager_SchedulerInitAIShipBattle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitAIShipAggro()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAIShipAggro");

	UAthenaCheatManager_SchedulerInitAIShipAggro_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::SchedulerInitAggroGhostShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerInitAggroGhostShip");

	UAthenaCheatManager_SchedulerInitAggroGhostShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SchedulerAdvance
// (Final, Exec, Native, Public)
// Parameters:
// float                          Time                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::SchedulerAdvance(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SchedulerAdvance");

	UAthenaCheatManager_SchedulerAdvance_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SailShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::SailShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SailShip");

	UAthenaCheatManager_SailShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.SailAllShips
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::SailAllShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.SailAllShips");

	UAthenaCheatManager_SailAllShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy
// (Final, Exec, Native, Public)
// Parameters:
// float                          SecondsToRewindBy              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::RewindPhysicsSceneBy(float SecondsToRewindBy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RewindPhysicsSceneBy");

	UAthenaCheatManager_RewindPhysicsSceneBy_Params params;
	params.SecondsToRewindBy = SecondsToRewindBy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReviveLocalPlayerInstantly()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerInstantly");

	UAthenaCheatManager_ReviveLocalPlayerInstantly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReviveLocalPlayerAccordingToReviveTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReviveLocalPlayerAccordingToReviveTime");

	UAthenaCheatManager_ReviveLocalPlayerAccordingToReviveTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReviveAllPlayerCharactersAccordingToReviveTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReviveAllPlayerCharactersAccordingToReviveTime");

	UAthenaCheatManager_ReviveAllPlayerCharactersAccordingToReviveTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RetrieveItemsFromBootyStorageInCurrentIsland()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorageInCurrentIsland");

	UAthenaCheatManager_RetrieveItemsFromBootyStorageInCurrentIsland_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 IslandName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::RetrieveItemsFromBootyStorage(const struct FString& IslandName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RetrieveItemsFromBootyStorage");

	UAthenaCheatManager_RetrieveItemsFromBootyStorage_Params params;
	params.IslandName = IslandName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ShipActorIdString              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ResurfaceShipByActorId(const struct FString& ShipActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResurfaceShipByActorId");

	UAthenaCheatManager_ResurfaceShipByActorId_Params params;
	params.ShipActorIdString = ShipActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RestoreAndRestockShipAndPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestoreAndRestockShipAndPlayer");

	UAthenaCheatManager_RestoreAndRestockShipAndPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RestockIslandBarrels()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockIslandBarrels");

	UAthenaCheatManager_RestockIslandBarrels_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RestockAllReplenishables()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RestockAllReplenishables");

	UAthenaCheatManager_RestockAllReplenishables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RespawnAllIslandItemSpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RespawnAllIslandItemSpawners");

	UAthenaCheatManager_RespawnAllIslandItemSpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime
// (Final, Exec, Native, Public)
// Parameters:
// float                          Timer                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ResetTinySharkSpawnTimerWithTime(float Timer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimerWithTime");

	UAthenaCheatManager_ResetTinySharkSpawnTimerWithTime_Params params;
	params.Timer = Timer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetTinySharkSpawnTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTinySharkSpawnTimer");

	UAthenaCheatManager_ResetTinySharkSpawnTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetTaleSelectorSeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetTaleSelectorSeed");

	UAthenaCheatManager_ResetTaleSelectorSeed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetStats
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetStats()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetStats");

	UAthenaCheatManager_ResetStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetNearestVault
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetNearestVault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetNearestVault");

	UAthenaCheatManager_ResetNearestVault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetNearestEventRoom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetNearestEventRoom");

	UAthenaCheatManager_ResetNearestEventRoom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetMouseDelta
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetMouseDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMouseDelta");

	UAthenaCheatManager_ResetMouseDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetMaxNumOfSpawnedAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMaxNumOfSpawnedAI");

	UAthenaCheatManager_ResetMaxNumOfSpawnedAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetMaxMovingPetsOnServerToDefault()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetMaxMovingPetsOnServerToDefault");

	UAthenaCheatManager_ResetMaxMovingPetsOnServerToDefault_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetGlitterbeardTree()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetGlitterbeardTree");

	UAthenaCheatManager_ResetGlitterbeardTree_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetDemoSession
// (Final, Exec, Native, Public)
// Parameters:
// bool                           StartNewSession                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::ResetDemoSession(bool StartNewSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetDemoSession");

	UAthenaCheatManager_ResetDemoSession_Params params;
	params.StartNewSession = StartNewSession;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetAllOverrideCannonShotHitChance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAllOverrideCannonShotHitChance");

	UAthenaCheatManager_ResetAllOverrideCannonShotHitChance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetAllMechanisms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAllMechanisms");

	UAthenaCheatManager_ResetAllMechanisms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetAITeamAttitudes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAITeamAttitudes");

	UAthenaCheatManager_ResetAITeamAttitudes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetAIExclusiveAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAIExclusiveAbilities");

	UAthenaCheatManager_ResetAIExclusiveAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ResetAbilityAlwaysOn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ResetAbilityAlwaysOn");

	UAthenaCheatManager_ResetAbilityAlwaysOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RequestSmallPassiveAIShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestSmallPassiveAIShip");

	UAthenaCheatManager_RequestSmallPassiveAIShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RequestSmallAggressiveAIShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestSmallAggressiveAIShip");

	UAthenaCheatManager_RequestSmallAggressiveAIShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RequestMysteriousNotesForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestMysteriousNotesForPlayer");

	UAthenaCheatManager_RequestMysteriousNotesForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RequestLargePassiveAIShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestLargePassiveAIShip");

	UAthenaCheatManager_RequestLargePassiveAIShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RequestLargeAggressiveAIShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RequestLargeAggressiveAIShip");

	UAthenaCheatManager_RequestLargeAggressiveAIShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReplenishShipWithDebugSpawner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplenishShipWithDebugSpawner");

	UAthenaCheatManager_ReplenishShipWithDebugSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReplenishShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReplenishShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplenishShip");

	UAthenaCheatManager_ReplenishShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ShipActorIdConsoleString       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ReplaceShipWithSmallShip(const struct FString& ShipActorIdConsoleString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReplaceShipWithSmallShip");

	UAthenaCheatManager_ReplaceShipWithSmallShip_Params params;
	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RepairShipAndClearInternalWater()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RepairShipAndClearInternalWater");

	UAthenaCheatManager_RepairShipAndClearInternalWater_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RepairAndClearInternalWaterOnAllShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RepairAndClearInternalWaterOnAllShips");

	UAthenaCheatManager_RepairAndClearInternalWaterOnAllShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RenameTreasure
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InVendorName                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::RenameTreasure(const struct FString& InVendorName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RenameTreasure");

	UAthenaCheatManager_RenameTreasure_Params params;
	params.InVendorName = InVendorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemovePetsFromAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemovePetsFromAllPlayers");

	UAthenaCheatManager_RemovePetsFromAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemovePetFromPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemovePetFromPlayer");

	UAthenaCheatManager_RemovePetFromPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemoveLostShipmentsDebugging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveLostShipmentsDebugging");

	UAthenaCheatManager_RemoveLostShipmentsDebugging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot
// (Final, Exec, Native, Public)
// Parameters:
// int                            SlotIndex                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::RemoveItemInSlot(int SlotIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveItemInSlot");

	UAthenaCheatManager_RemoveItemInSlot_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemoveDebugPetSpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveDebugPetSpawners");

	UAthenaCheatManager_RemoveDebugPetSpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemoveDebugHealthStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveDebugHealthStage");

	UAthenaCheatManager_RemoveDebugHealthStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveAllFog
// (Final, Exec, Native, Public)
void UAthenaCheatManager::RemoveAllFog()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveAllFog");

	UAthenaCheatManager_RemoveAllFog_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ContextName                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::RemoveAISpawnContext(const struct FString& ContextName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RemoveAISpawnContext");

	UAthenaCheatManager_RemoveAISpawnContext_Params params;
	params.ContextName = ContextName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed
// (Final, Exec, Native, Public)
// Parameters:
// int                            Seed                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::RebuildPirateFromSeed(int Seed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.RebuildPirateFromSeed");

	UAthenaCheatManager_RebuildPirateFromSeed_Params params;
	params.Seed = Seed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ReallyScrambleMyGamertag()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ReallyScrambleMyGamertag");

	UAthenaCheatManager_ReallyScrambleMyGamertag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PushShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          FwdSpdInMetersPerSecond        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::PushShip(float FwdSpdInMetersPerSecond)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PushShip");

	UAthenaCheatManager_PushShip_Params params;
	params.FwdSpdInMetersPerSecond = FwdSpdInMetersPerSecond;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PullLatestEmblemProgress()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PullLatestEmblemProgress");

	UAthenaCheatManager_PullLatestEmblemProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ProceedToNextContestState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ProceedToNextContestState");

	UAthenaCheatManager_ProceedToNextContestState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PrintTime
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PrintTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintTime");

	UAthenaCheatManager_PrintTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PrintNPCs
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PrintNPCs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintNPCs");

	UAthenaCheatManager_PrintNPCs_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PrintAllNetworkActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAllNetworkActors");

	UAthenaCheatManager_PrintAllNetworkActors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawners
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PrintAISpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAISpawners");

	UAthenaCheatManager_PrintAISpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PrintAISpawnContexts()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PrintAISpawnContexts");

	UAthenaCheatManager_PrintAISpawnContexts_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PlayWorldSequence
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InReference                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::PlayWorldSequence(const struct FString& InReference)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayWorldSequence");

	UAthenaCheatManager_PlayWorldSequence_Params params;
	params.InReference = InReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PlayLocalSequences
// (Final, Exec, Native, Public)
void UAthenaCheatManager::PlayLocalSequences()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayLocalSequences");

	UAthenaCheatManager_PlayLocalSequences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   Name                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::PlayerAnimationOverride(const struct FName& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.PlayerAnimationOverride");

	UAthenaCheatManager_PlayerAnimationOverride_Params params;
	params.Name = Name;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InShipActorIdConsoleString     (Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            InCataloguePartIndex           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InCataloguePartCustomisationIndex (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::OverrideShipPartFromCatalogue(const struct FString& InShipActorIdConsoleString, int InCataloguePartIndex, int InCataloguePartCustomisationIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OverrideShipPartFromCatalogue");

	UAthenaCheatManager_OverrideShipPartFromCatalogue_Params params;
	params.InShipActorIdConsoleString = InShipActorIdConsoleString;
	params.InCataloguePartIndex = InCataloguePartIndex;
	params.InCataloguePartCustomisationIndex = InCataloguePartCustomisationIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor
// (Final, Exec, Native, Public)
void UAthenaCheatManager::OpenSkeletonFortDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.OpenSkeletonFortDoor");

	UAthenaCheatManager_OpenSkeletonFortDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::MoveStormToPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToPlayer");

	UAthenaCheatManager_MoveStormToPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MoveStormToLocation
// (Final, Exec, Native, Public)
// Parameters:
// float                          LocationX                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LocationY                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::MoveStormToLocation(float LocationX, float LocationY)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToLocation");

	UAthenaCheatManager_MoveStormToLocation_Params params;
	params.LocationX = LocationX;
	params.LocationY = LocationY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MoveStormToIsland
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 IslandNameString               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::MoveStormToIsland(const struct FString& IslandNameString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MoveStormToIsland");

	UAthenaCheatManager_MoveStormToIsland_Params params;
	params.IslandNameString = IslandNameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest
// (Final, Exec, Native, Public)
void UAthenaCheatManager::MessageBoxOnGraphicsThreadTest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MessageBoxOnGraphicsThreadTest");

	UAthenaCheatManager_MessageBoxOnGraphicsThreadTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead
// (Final, Exec, Native, Public)
void UAthenaCheatManager::MakeSharksBrainDead()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MakeSharksBrainDead");

	UAthenaCheatManager_MakeSharksBrainDead_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner
// (Final, Exec, Native, Public)
void UAthenaCheatManager::MakeDebugPetSpawner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.MakeDebugPetSpawner");

	UAthenaCheatManager_MakeDebugPetSpawner_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LogShipHierarchy
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LogShipHierarchy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogShipHierarchy");

	UAthenaCheatManager_LogShipHierarchy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LogServerShipHierarchy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogServerShipHierarchy");

	UAthenaCheatManager_LogServerShipHierarchy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LogAITeamAttitudes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LogAITeamAttitudes");

	UAthenaCheatManager_LogAITeamAttitudes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 RouteReferencePath             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForMyCrew(const struct FString& RouteReferencePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForMyCrew");

	UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForMyCrew_Params params;
	params.RouteReferencePath = RouteReferencePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew
// (Final, Exec, Native, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FGuid                   CrewId                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// struct FString                 RouteReferencePath             (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::LockTradeRouteSelectionToSpecificRouteForCrew(const struct FGuid& CrewId, const struct FString& RouteReferencePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LockTradeRouteSelectionToSpecificRouteForCrew");

	UAthenaCheatManager_LockTradeRouteSelectionToSpecificRouteForCrew_Params params;
	params.CrewId = CrewId;
	params.RouteReferencePath = RouteReferencePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LocallyUnBreakLeg()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LocallyUnBreakLeg");

	UAthenaCheatManager_LocallyUnBreakLeg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LocallyDisableTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LocallyDisableTutorial");

	UAthenaCheatManager_LocallyDisableTutorial_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LightLocalBraziers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::LightLocalBraziers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LightLocalBraziers");

	UAthenaCheatManager_LightLocalBraziers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius
// (Final, Exec, Native, Public)
// Parameters:
// float                          Radius                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::LightBraziersInRadius(float Radius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LightBraziersInRadius");

	UAthenaCheatManager_LightBraziersInRadius_Params params;
	params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LeaveAlliance
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::LeaveAlliance(const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LeaveAlliance");

	UAthenaCheatManager_LeaveAlliance_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.LaunchPlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Velocity                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Angle                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::LaunchPlayer(float Velocity, float Angle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.LaunchPlayer");

	UAthenaCheatManager_LaunchPlayer_Params params;
	params.Velocity = Velocity;
	params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenSetTentaclesToOneHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenSetTentaclesToOneHealth");

	UAthenaCheatManager_KrakenSetTentaclesToOneHealth_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleThrowPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleThrowPlayer");

	UAthenaCheatManager_KrakenAnimatedTentacleThrowPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::KrakenAnimatedTentacleTakeDamage(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleTakeDamage");

	UAthenaCheatManager_KrakenAnimatedTentacleTakeDamage_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleSwallowPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSwallowPlayer");

	UAthenaCheatManager_KrakenAnimatedTentacleSwallowPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleSuckPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleSuckPlayer");

	UAthenaCheatManager_KrakenAnimatedTentacleSuckPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentaclePowerSlamPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentaclePowerSlamPlayer");

	UAthenaCheatManager_KrakenAnimatedTentaclePowerSlamPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleKill()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleKill");

	UAthenaCheatManager_KrakenAnimatedTentacleKill_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleIngestPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleIngestPlayer");

	UAthenaCheatManager_KrakenAnimatedTentacleIngestPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleDropPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDropPlayer");

	UAthenaCheatManager_KrakenAnimatedTentacleDropPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleDespawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDespawn");

	UAthenaCheatManager_KrakenAnimatedTentacleDespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KrakenAnimatedTentacleDefeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleDefeat");

	UAthenaCheatManager_KrakenAnimatedTentacleDefeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 HoldState                      (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::KrakenAnimatedTentacleChangePlayerHoldState(const struct FString& HoldState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KrakenAnimatedTentacleChangePlayerHoldState");

	UAthenaCheatManager_KrakenAnimatedTentacleChangePlayerHoldState_Params params;
	params.HoldState = HoldState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KindleClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::KindleClosestShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KindleClosestShip");

	UAthenaCheatManager_KindleClosestShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KindleAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::KindleAllShipFires()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KindleAllShipFires");

	UAthenaCheatManager_KindleAllShipFires_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillPlayer");

	UAthenaCheatManager_KillPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillCrew
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::KillCrew(const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillCrew");

	UAthenaCheatManager_KillCrew_Params params;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllSkeletons
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllSkeletons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllSkeletons");

	UAthenaCheatManager_KillAllSkeletons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllPlayers");

	UAthenaCheatManager_KillAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllOtherPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayers");

	UAthenaCheatManager_KillAllOtherPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllOtherPlayerCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllOtherPlayerCharacters");

	UAthenaCheatManager_KillAllOtherPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllDebugAISpawners()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllDebugAISpawners");

	UAthenaCheatManager_KillAllDebugAISpawners_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllCrews
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllCrews()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllCrews");

	UAthenaCheatManager_KillAllCrews_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAI");

	UAthenaCheatManager_KillAllAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllAggressiveGhostShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShips");

	UAthenaCheatManager_KillAllAggressiveGhostShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters
// (Final, Exec, Native, Public)
void UAthenaCheatManager::KillAllAggressiveGhostShipEncounters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.KillAllAggressiveGhostShipEncounters");

	UAthenaCheatManager_KillAllAggressiveGhostShipEncounters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.JoinAlliance
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 OfferingCrew                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 AcceptingCrew                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::JoinAlliance(const struct FString& OfferingCrew, const struct FString& AcceptingCrew)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.JoinAlliance");

	UAthenaCheatManager_JoinAlliance_Params params;
	params.OfferingCrew = OfferingCrew;
	params.AcceptingCrew = AcceptingCrew;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IPGOverride
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   BodyShape                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::IPGOverride(const struct FName& BodyShape, float Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGOverride");

	UAthenaCheatManager_IPGOverride_Params params;
	params.BodyShape = BodyShape;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 path                           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::IPGLoadWithoutClothing(const struct FString& ActorIdString, const struct FString& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoadWithoutClothing");

	UAthenaCheatManager_IPGLoadWithoutClothing_Params params;
	params.ActorIdString = ActorIdString;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 path                           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::IPGLoadWithClothing(const struct FString& ActorIdString, const struct FString& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoadWithClothing");

	UAthenaCheatManager_IPGLoadWithClothing_Params params;
	params.ActorIdString = ActorIdString;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IPGLoad
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 path                           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::IPGLoad(const struct FString& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IPGLoad");

	UAthenaCheatManager_IPGLoad_Params params;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.InvincibleEverything
// (Final, Exec, Native, Public)
void UAthenaCheatManager::InvincibleEverything()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InvincibleEverything");

	UAthenaCheatManager_InvincibleEverything_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::InterruptSicknessOnPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InterruptSicknessOnPlayer");

	UAthenaCheatManager_InterruptSicknessOnPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::InfiniteGunAmmo(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.InfiniteGunAmmo");

	UAthenaCheatManager_InfiniteGunAmmo_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IncrementTime
// (Final, Exec, Native, Public)
// Parameters:
// int                            Hours                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Minutes                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::IncrementTime(int Hours, int Minutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementTime");

	UAthenaCheatManager_IncrementTime_Params params;
	params.Hours = Hours;
	params.Minutes = Minutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage
// (Final, Exec, Native, Public)
void UAthenaCheatManager::IncrementDebugHealthStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncrementDebugHealthStage");

	UAthenaCheatManager_IncrementDebugHealthStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount
// (Final, Exec, Native, Public)
// Parameters:
// int                            Amount                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::IncreaseEmissaryCount(int Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IncreaseEmissaryCount");

	UAthenaCheatManager_IncreaseEmissaryCount_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::IgniteShipAtPlayerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteShipAtPlayerLocation");

	UAthenaCheatManager_IgniteShipAtPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::IgniteLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteLocalPlayer");

	UAthenaCheatManager_IgniteLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IgniteClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::IgniteClosestShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteClosestShip");

	UAthenaCheatManager_IgniteClosestShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::IgniteAllShipFires()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.IgniteAllShipFires");

	UAthenaCheatManager_IgniteAllShipFires_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HideTaleDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HideTaleDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideTaleDebug");

	UAthenaCheatManager_HideTaleDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HideEmissaryVoteIndicators()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideEmissaryVoteIndicators");

	UAthenaCheatManager_HideEmissaryVoteIndicators_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HideAllRomeBeacons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HideAllRomeBeacons");

	UAthenaCheatManager_HideAllRomeBeacons_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthSet
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthSet(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthSet");

	UAthenaCheatManager_HealthSet_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthReset
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HealthReset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthReset");

	UAthenaCheatManager_HealthReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HealthRegenResetToEmpty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthRegenResetToEmpty");

	UAthenaCheatManager_HealthRegenResetToEmpty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthRegenAdd
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthRegenAdd(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthRegenAdd");

	UAthenaCheatManager_HealthRegenAdd_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason
// (Final, Exec, Native, Public)
void UAthenaCheatManager::HealthContinuousStopWithTestReason()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithTestReason");

	UAthenaCheatManager_HealthContinuousStopWithTestReason_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthContinuousStopWithReason(const struct FString& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStopWithReason");

	UAthenaCheatManager_HealthContinuousStopWithReason_Params params;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthContinuousStartWithTestReason(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithTestReason");

	UAthenaCheatManager_HealthContinuousStartWithTestReason_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason
// (Final, Exec, Native, Public)
// Parameters:
// float                          Value                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Reason                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthContinuousStartWithReason(float Value, const struct FString& Reason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthContinuousStartWithReason");

	UAthenaCheatManager_HealthContinuousStartWithReason_Params params;
	params.Value = Value;
	params.Reason = Reason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.HealthAdjust
// (Final, Exec, Native, Public)
// Parameters:
// float                          Amount                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::HealthAdjust(float Amount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.HealthAdjust");

	UAthenaCheatManager_HealthAdjust_Params params;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.God
// (Exec, Native, Public)
void UAthenaCheatManager::God()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.God");

	UAthenaCheatManager_God_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceStopAllPetsDanger()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStopAllPetsDanger");

	UAthenaCheatManager_ForceStopAllPetsDanger_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ResponseType                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceStartAllPetsDangerWithChangingThreatLocation(const struct FString& ResponseType, float UpdateThreatLocationTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDangerWithChangingThreatLocation");

	UAthenaCheatManager_ForceStartAllPetsDangerWithChangingThreatLocation_Params params;
	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ResponseType                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceStartAllPetsDanger(const struct FString& ResponseType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceStartAllPetsDanger");

	UAthenaCheatManager_ForceStartAllPetsDanger_Params params;
	params.ResponseType = ResponseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceSkipTallTaleSteps_WaitAndCutscenes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceSkipTallTaleSteps_WaitAndCutscenes");

	UAthenaCheatManager_ForceSkipTallTaleSteps_WaitAndCutscenes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceRequestCampaignsFromServices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceRequestCampaignsFromServices");

	UAthenaCheatManager_ForceRequestCampaignsFromServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForcePetHangout
// (Final, Exec, Native, Public)
// Parameters:
// struct FName                   HangoutName                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PositionIndex                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForcePetHangout(const struct FName& HangoutName, int PositionIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForcePetHangout");

	UAthenaCheatManager_ForcePetHangout_Params params;
	params.HangoutName = HangoutName;
	params.PositionIndex = PositionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceOpenShop
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceOpenShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceOpenShop");

	UAthenaCheatManager_ForceOpenShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove
// (Final, Exec, Native, Public)
// Parameters:
// bool                           FastMove                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           KeepCurrentLocation            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::ForceNPCOnSurfaceToMove(bool FastMove, bool KeepCurrentLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceToMove");

	UAthenaCheatManager_ForceNPCOnSurfaceToMove_Params params;
	params.FastMove = FastMove;
	params.KeepCurrentLocation = KeepCurrentLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation
// (Final, Exec, Native, Public)
// Parameters:
// int                            LoctationIndex                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            LoctationPointIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceNPCOnSurfaceLocation(int LoctationIndex, int LoctationPointIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnSurfaceLocation");

	UAthenaCheatManager_ForceNPCOnSurfaceLocation_Params params;
	params.LoctationIndex = LoctationIndex;
	params.LoctationPointIndex = LoctationPointIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger
// (Final, Exec, Native, Public)
// Parameters:
// bool                           IsCurrentlyInDanger            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::ForceNPCOnShipIsCurrentlyInDanger(bool IsCurrentlyInDanger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceNPCOnShipIsCurrentlyInDanger");

	UAthenaCheatManager_ForceNPCOnShipIsCurrentlyInDanger_Params params;
	params.IsCurrentlyInDanger = IsCurrentlyInDanger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceMigrationServiceHeartBeat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceMigrationServiceHeartBeat");

	UAthenaCheatManager_ForceMigrationServiceHeartBeat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 DisplayName                    (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 AudioDescription               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceEmoteWithDescription(const struct FName& EmoteIdentifier, const struct FString& DisplayName, const struct FString& AudioDescription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmoteWithDescription");

	UAthenaCheatManager_ForceEmoteWithDescription_Params params;
	params.EmoteIdentifier = EmoteIdentifier;
	params.DisplayName = DisplayName;
	params.AudioDescription = AudioDescription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceEmote
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FName                   EmoteIdentifier                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceEmote(const struct FName& EmoteIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceEmote");

	UAthenaCheatManager_ForceEmote_Params params;
	params.EmoteIdentifier = EmoteIdentifier;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceCloseShop
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceCloseShop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceCloseShop");

	UAthenaCheatManager_ForceCloseShop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ResponseType                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          UpdateThreatLocationTime       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation(const struct FString& ResponseType, float UpdateThreatLocationTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation");

	UAthenaCheatManager_ForceAllPetsDangerWithNoiseEventWithChangingThreatLocation_Params params;
	params.ResponseType = ResponseType;
	params.UpdateThreatLocationTime = UpdateThreatLocationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ResponseType                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ForceAllPetsDangerWithNoiseEvent(const struct FString& ResponseType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAllPetsDangerWithNoiseEvent");

	UAthenaCheatManager_ForceAllPetsDangerWithNoiseEvent_Params params;
	params.ResponseType = ResponseType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceAggressiveGhostShipStartSinkingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartSinkingAnimation");

	UAthenaCheatManager_ForceAggressiveGhostShipStartSinkingAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceAggressiveGhostShipStartDisappearAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartDisappearAnimation");

	UAthenaCheatManager_ForceAggressiveGhostShipStartDisappearAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceAggressiveGhostShipStartAppearAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipStartAppearAnimation");

	UAthenaCheatManager_ForceAggressiveGhostShipStartAppearAnimation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ForceAggressiveGhostShipPortalJump()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ForceAggressiveGhostShipPortalJump");

	UAthenaCheatManager_ForceAggressiveGhostShipPortalJump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.Fly
// (Exec, Native, Public)
void UAthenaCheatManager::Fly()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.Fly");

	UAthenaCheatManager_Fly_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex
// (Final, Exec, Native, Public)
// Parameters:
// float                          NormalisedWaterAmount          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            KeelOverConfigIndex            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::FloodShipWithKeelOverIndex(float NormalisedWaterAmount, int KeelOverConfigIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShipWithKeelOverIndex");

	UAthenaCheatManager_FloodShipWithKeelOverIndex_Params params;
	params.NormalisedWaterAmount = NormalisedWaterAmount;
	params.KeelOverConfigIndex = KeelOverConfigIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FloodShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          NormalisedWaterAmount          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::FloodShip(float NormalisedWaterAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FloodShip");

	UAthenaCheatManager_FloodShip_Params params;
	params.NormalisedWaterAmount = NormalisedWaterAmount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InRewardsLevel                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InMultipleRewards              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::FireSeasonRewardEarnedMessage(int InNumSeason, int InRewardsLevel, bool InMultipleRewards)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonRewardEarnedMessage");

	UAthenaCheatManager_FireSeasonRewardEarnedMessage_Params params;
	params.InNumSeason = InNumSeason;
	params.InRewardsLevel = InRewardsLevel;
	params.InMultipleRewards = InMultipleRewards;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InPreviousProgress             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InCurrentProgress              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InCompletionTreshold           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InGoalType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 InGoalCategory                 (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::FireSeasonGoalProgressionMessage(int InNumSeason, int InPreviousProgress, int InCurrentProgress, int InCompletionTreshold, int InGoalType, const struct FString& InGoalCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalProgressionMessage");

	UAthenaCheatManager_FireSeasonGoalProgressionMessage_Params params;
	params.InNumSeason = InNumSeason;
	params.InPreviousProgress = InPreviousProgress;
	params.InCurrentProgress = InCurrentProgress;
	params.InCompletionTreshold = InCompletionTreshold;
	params.InGoalType = InGoalType;
	params.InGoalCategory = InGoalCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InGoalType                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 InGoalCategory                 (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::FireSeasonGoalCompletionMessage(int InNumSeason, int InGoalType, const struct FString& InGoalCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireSeasonGoalCompletionMessage");

	UAthenaCheatManager_FireSeasonGoalCompletionMessage_Params params;
	params.InNumSeason = InNumSeason;
	params.InGoalType = InGoalType;
	params.InGoalCategory = InGoalCategory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumSeason                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InLevel                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InTimeSpentInLevel             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InTier                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            InTimeSpentInTier              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           InTierCompleted                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InSeasonCompleted              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::FireLevelCompletionMessage(int InNumSeason, int InLevel, int InTimeSpentInLevel, int InTier, int InTimeSpentInTier, bool InTierCompleted, bool InSeasonCompleted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireLevelCompletionMessage");

	UAthenaCheatManager_FireLevelCompletionMessage_Params params;
	params.InNumSeason = InNumSeason;
	params.InLevel = InLevel;
	params.InTimeSpentInLevel = InTimeSpentInLevel;
	params.InTier = InTier;
	params.InTimeSpentInTier = InTimeSpentInTier;
	params.InTierCompleted = InTierCompleted;
	params.InSeasonCompleted = InSeasonCompleted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat
// (Final, Exec, Native, Public)
void UAthenaCheatManager::FireCreatorCrewSignedUpStat()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewSignedUpStat");

	UAthenaCheatManager_FireCreatorCrewSignedUpStat_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumMinutes                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::FireCreatorCrewMinutesViewedStat(int InNumMinutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesViewedStat");

	UAthenaCheatManager_FireCreatorCrewMinutesViewedStat_Params params;
	params.InNumMinutes = InNumMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumMinutes                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::FireCreatorCrewMinutesStreamedStat(int InNumMinutes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewMinutesStreamedStat");

	UAthenaCheatManager_FireCreatorCrewMinutesStreamedStat_Params params;
	params.InNumMinutes = InNumMinutes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat
// (Final, Exec, Native, Public)
// Parameters:
// int                            InNumViewers                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::FireCreatorCrewCurrentViewersStat(int InNumViewers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FireCreatorCrewCurrentViewersStat");

	UAthenaCheatManager_FireCreatorCrewCurrentViewersStat_Params params;
	params.InNumViewers = InNumViewers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FindText
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Namespace                      (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Key                            (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::FindText(const struct FString& Namespace, const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FindText");

	UAthenaCheatManager_FindText_Params params;
	params.Namespace = Namespace;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests
// (Final, Exec, Native, Public)
void UAthenaCheatManager::FakeMigrateBountyQuests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.FakeMigrateBountyQuests");

	UAthenaCheatManager_FakeMigrateBountyQuests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EquipPirateTitle
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 PirateTitleType                (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::EquipPirateTitle(const struct FString& PirateTitleType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipPirateTitle");

	UAthenaCheatManager_EquipPirateTitle_Params params;
	params.PirateTitleType = PirateTitleType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EquipCompassInLoadout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EquipCompassInLoadout");

	UAthenaCheatManager_EquipCompassInLoadout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EndDemoSession
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EndDemoSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EndDemoSession");

	UAthenaCheatManager_EndDemoSession_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::EnableVoiceChatMeteringForOutgoingSignals(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForOutgoingSignals");

	UAthenaCheatManager_EnableVoiceChatMeteringForOutgoingSignals_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::EnableVoiceChatMeteringForIncomingSignals(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableVoiceChatMeteringForIncomingSignals");

	UAthenaCheatManager_EnableVoiceChatMeteringForIncomingSignals_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableStormEffects
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  LockReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::EnableStormEffects(unsigned char LockReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableStormEffects");

	UAthenaCheatManager_EnableStormEffects_Params params;
	params.LockReason = LockReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay
// (Final, Exec, Native, Public)
// Parameters:
// int                            TrueFalse                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay(int TrueFalse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay");

	UAthenaCheatManager_EnableSelectShipwreckLocationFromValidCandidatesDebugDisplay_Params params;
	params.TrueFalse = TrueFalse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableNTP
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::EnableNTP(bool Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableNTP");

	UAthenaCheatManager_EnableNTP_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::EnableMermaidSpawning(int Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidSpawning");

	UAthenaCheatManager_EnableMermaidSpawning_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::EnableMermaidDeletion(int Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableMermaidDeletion");

	UAthenaCheatManager_EnableMermaidDeletion_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::EnableHeadphoneMixing(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableHeadphoneMixing");

	UAthenaCheatManager_EnableHeadphoneMixing_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EnableEmergentSirenSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableEmergentSirenSpawning");

	UAthenaCheatManager_EnableEmergentSirenSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EnableEmergentSharkSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableEmergentSharkSpawning");

	UAthenaCheatManager_EnableEmergentSharkSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EnableConsoleLogging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableConsoleLogging");

	UAthenaCheatManager_EnableConsoleLogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera
// (Final, Exec, Native, Protected)
void UAthenaCheatManager::EnableCinematicCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableCinematicCamera");

	UAthenaCheatManager_EnableCinematicCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::EnableBeaconOnAllMermaids(int Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableBeaconOnAllMermaids");

	UAthenaCheatManager_EnableBeaconOnAllMermaids_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EnableAllEmergentWaterSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableAllEmergentWaterSpawning");

	UAthenaCheatManager_EnableAllEmergentWaterSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour
// (Final, Exec, Native, Public)
void UAthenaCheatManager::EnableAIBehaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.EnableAIBehaviour");

	UAthenaCheatManager_EnableAIBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DrawVideprinter
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Id                             (Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Active                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::DrawVideprinter(const struct FString& Id, bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawVideprinter");

	UAthenaCheatManager_DrawVideprinter_Params params;
	params.Id = Id;
	params.Active = Active;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DrawTreasureDebug(int Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTreasureDebug");

	UAthenaCheatManager_DrawTreasureDebug_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::DrawTemporaryLandmarkDebug(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawTemporaryLandmarkDebug");

	UAthenaCheatManager_DrawTemporaryLandmarkDebug_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged
// (Final, Exec, Native, Public)
// Parameters:
// float                          Range                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DrawNearbyAISpawnPointsRanged(float Range)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPointsRanged");

	UAthenaCheatManager_DrawNearbyAISpawnPointsRanged_Params params;
	params.Range = Range;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DrawNearbyAISpawnPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DrawNearbyAISpawnPoints");

	UAthenaCheatManager_DrawNearbyAISpawnPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DownPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DownPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownPlayer");

	UAthenaCheatManager_DownPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DownAllPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DownAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllPlayers");

	UAthenaCheatManager_DownAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DownAllOtherPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayers");

	UAthenaCheatManager_DownAllOtherPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DownAllOtherPlayerCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DownAllOtherPlayerCharacters");

	UAthenaCheatManager_DownAllOtherPlayerCharacters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DouseClosestShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::DouseClosestShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DouseClosestShip");

	UAthenaCheatManager_DouseClosestShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DouseAllShipFires
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::DouseAllShipFires()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DouseAllShipFires");

	UAthenaCheatManager_DouseAllShipFires_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DiveShipByActorId
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ShipActorIdString              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DiveShipByActorId(const struct FString& ShipActorIdString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DiveShipByActorId");

	UAthenaCheatManager_DiveShipByActorId_Params params;
	params.ShipActorIdString = ShipActorIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DisplaySpireLocationsDebug(int Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplaySpireLocationsDebug");

	UAthenaCheatManager_DisplaySpireLocationsDebug_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 StatName                       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DisplaySingleEmblemProgress(const struct FString& StatName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplaySingleEmblemProgress");

	UAthenaCheatManager_DisplaySingleEmblemProgress_Params params;
	params.StatName = StatName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayServersideHitsAtPlayerPosWithDefaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPosWithDefaults");

	UAthenaCheatManager_DisplayServersideHitsAtPlayerPosWithDefaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos
// (Final, Exec, Native, Public)
// Parameters:
// uint32_t                       NumSamplesPerDimension         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DistanceBetweenSamples         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          TestHeight                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DisplayServersideHitsAtPlayerPos(uint32_t NumSamplesPerDimension, float DistanceBetweenSamples, float TestHeight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServersideHitsAtPlayerPos");

	UAthenaCheatManager_DisplayServersideHitsAtPlayerPos_Params params;
	params.NumSamplesPerDimension = NumSamplesPerDimension;
	params.DistanceBetweenSamples = DistanceBetweenSamples;
	params.TestHeight = TestHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayServerFPS
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayServerFPS()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayServerFPS");

	UAthenaCheatManager_DisplayServerFPS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::DisplayNonVagueNonUniqueLandmarksForIsland(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayNonVagueNonUniqueLandmarksForIsland");

	UAthenaCheatManager_DisplayNonVagueNonUniqueLandmarksForIsland_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLoadingScreenTeleport()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenTeleport");

	UAthenaCheatManager_DisplayLoadingScreenTeleport_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLoadingScreenBoot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenBoot");

	UAthenaCheatManager_DisplayLoadingScreenBoot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLoadingScreenArena()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenArena");

	UAthenaCheatManager_DisplayLoadingScreenArena_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLoadingScreenAdventure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLoadingScreenAdventure");

	UAthenaCheatManager_DisplayLoadingScreenAdventure_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLandmarkValidTreasureLocationsForPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkValidTreasureLocationsForPlayer");

	UAthenaCheatManager_DisplayLandmarkValidTreasureLocationsForPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLandmarkRegions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkRegions");

	UAthenaCheatManager_DisplayLandmarkRegions_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisplayLandmarkNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayLandmarkNames");

	UAthenaCheatManager_DisplayLandmarkNames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DisplayFallDamageDebug(int Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayFallDamageDebug");

	UAthenaCheatManager_DisplayFallDamageDebug_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Flag                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::DisplayDrunkenness(bool Flag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisplayDrunkenness");

	UAthenaCheatManager_DisplayDrunkenness_Params params;
	params.Flag = Flag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DismissProjectileAimAdjustmentsMessages
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DismissProjectileAimAdjustmentsMessages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DismissProjectileAimAdjustmentsMessages");

	UAthenaCheatManager_DismissProjectileAimAdjustmentsMessages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DismissAllPickupPoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DismissAllPickupPoints");

	UAthenaCheatManager_DismissAllPickupPoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableStormEffects
// (Final, Exec, Native, Public)
// Parameters:
// unsigned char                  LockReason                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DisableStormEffects(unsigned char LockReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableStormEffects");

	UAthenaCheatManager_DisableStormEffects_Params params;
	params.LockReason = LockReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisableEmergentSirenSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableEmergentSirenSpawning");

	UAthenaCheatManager_DisableEmergentSirenSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisableEmergentSharkSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableEmergentSharkSpawning");

	UAthenaCheatManager_DisableEmergentSharkSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisableConsoleLogging()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableConsoleLogging");

	UAthenaCheatManager_DisableConsoleLogging_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera
// (Final, Exec, Native, Protected)
void UAthenaCheatManager::DisableCinematicCamera()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableCinematicCamera");

	UAthenaCheatManager_DisableCinematicCamera_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisableAllEmergentWaterSpawning()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAllEmergentWaterSpawning");

	UAthenaCheatManager_DisableAllEmergentWaterSpawning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DisableAIBehaviour()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAIBehaviour");

	UAthenaCheatManager_DisableAIBehaviour_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DisableAIAbilities
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::DisableAIAbilities()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DisableAIAbilities");

	UAthenaCheatManager_DisableAIAbilities_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DioramaStartNearest
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 Spawner                        (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DioramaDesc                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DioramaStartNearest(const struct FString& Spawner, const struct FString& DioramaDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaStartNearest");

	UAthenaCheatManager_DioramaStartNearest_Params params;
	params.Spawner = Spawner;
	params.DioramaDesc = DioramaDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DioramaStart
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorName                      (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 Spawner                        (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 DioramaDesc                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DioramaStart(const struct FString& ActorName, const struct FString& Spawner, const struct FString& DioramaDesc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaStart");

	UAthenaCheatManager_DioramaStart_Params params;
	params.ActorName = ActorName;
	params.Spawner = Spawner;
	params.DioramaDesc = DioramaDesc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DioramaKillAllDebug()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DioramaKillAllDebug");

	UAthenaCheatManager_DioramaKillAllDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyShip
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ShipActorIdConsoleString       (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DestroyShip(const struct FString& ShipActorIdConsoleString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyShip");

	UAthenaCheatManager_DestroyShip_Params params;
	params.ShipActorIdConsoleString = ShipActorIdConsoleString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DestroyNearestDebugReapersChestMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyNearestDebugReapersChestMarker");

	UAthenaCheatManager_DestroyNearestDebugReapersChestMarker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyMyShip
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::DestroyMyShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyMyShip");

	UAthenaCheatManager_DestroyMyShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyKraken
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DestroyKraken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyKraken");

	UAthenaCheatManager_DestroyKraken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DestroyAllTreasureChests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTreasureChests");

	UAthenaCheatManager_DestroyAllTreasureChests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DestroyAllTinySharks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllTinySharks");

	UAthenaCheatManager_DestroyAllTinySharks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DestroyAllSirenStatues()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllSirenStatues");

	UAthenaCheatManager_DestroyAllSirenStatues_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DestroyAllShips
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::DestroyAllShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DestroyAllShips");

	UAthenaCheatManager_DestroyAllShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AITypeString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
// int                            NumToDespawn                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DespawnNumberOfAI(const struct FString& AITypeString, int NumToDespawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnNumberOfAI");

	UAthenaCheatManager_DespawnNumberOfAI_Params params;
	params.AITypeString = AITypeString;
	params.NumToDespawn = NumToDespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DespawnFirstAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DespawnFirstAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnFirstAI");

	UAthenaCheatManager_DespawnFirstAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DespawnAllAggressiveGhostShips()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnAllAggressiveGhostShips");

	UAthenaCheatManager_DespawnAllAggressiveGhostShips_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DespawnAI
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 AITypeString                   (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::DespawnAI(const struct FString& AITypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DespawnAI");

	UAthenaCheatManager_DespawnAI_Params params;
	params.AITypeString = AITypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DeleteVoyageHistory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteVoyageHistory");

	UAthenaCheatManager_DeleteVoyageHistory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DeleteAllMermaids()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeleteAllMermaids");

	UAthenaCheatManager_DeleteAllMermaids_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DecrementDebugHealthStage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DecrementDebugHealthStage");

	UAthenaCheatManager_DecrementDebugHealthStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DebugIslandDelta
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DebugIslandDelta()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DebugIslandDelta");

	UAthenaCheatManager_DebugIslandDelta_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void UAthenaCheatManager::DeactivateSkellyFort(const struct FString& FortName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateSkellyFort");

	UAthenaCheatManager_DeactivateSkellyFort_Params params;
	params.FortName = FortName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DeactivateEmissaryFlagCompany()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateEmissaryFlagCompany");

	UAthenaCheatManager_DeactivateEmissaryFlagCompany_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect
// (Final, Exec, Native, Public)
void UAthenaCheatManager::DeactivateDeathEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DeactivateDeathEffect");

	UAthenaCheatManager_DeactivateDeathEffect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DamageShipFromRemoteActor(const struct FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShipFromRemoteActor");

	UAthenaCheatManager_DamageShipFromRemoteActor_Params params;
	params.ActorIdString = ActorIdString;
	params.Strength = Strength;
	params.CameraLocationX = CameraLocationX;
	params.CameraLocationY = CameraLocationY;
	params.CameraLocationZ = CameraLocationZ;
	params.CameraForwardDirectionX = CameraForwardDirectionX;
	params.CameraForwardDirectionY = CameraForwardDirectionY;
	params.CameraForwardDirectionZ = CameraForwardDirectionZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DamageShip
// (Final, Exec, Native, Public)
// Parameters:
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DamageShip(float Strength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamageShip");

	UAthenaCheatManager_DamageShip_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationX                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationY                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraLocationZ                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionX        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionY        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          CameraForwardDirectionZ        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DamagePlayerFromRemoteActor(const struct FString& ActorIdString, float Strength, float CameraLocationX, float CameraLocationY, float CameraLocationZ, float CameraForwardDirectionX, float CameraForwardDirectionY, float CameraForwardDirectionZ)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayerFromRemoteActor");

	UAthenaCheatManager_DamagePlayerFromRemoteActor_Params params;
	params.ActorIdString = ActorIdString;
	params.Strength = Strength;
	params.CameraLocationX = CameraLocationX;
	params.CameraLocationY = CameraLocationY;
	params.CameraLocationZ = CameraLocationZ;
	params.CameraForwardDirectionX = CameraForwardDirectionX;
	params.CameraForwardDirectionY = CameraForwardDirectionY;
	params.CameraForwardDirectionZ = CameraForwardDirectionZ;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.DamagePlayer
// (Final, Exec, Native, Public)
// Parameters:
// float                          Strength                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::DamagePlayer(float Strength)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.DamagePlayer");

	UAthenaCheatManager_DamagePlayer_Params params;
	params.Strength = Strength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CureAllAilings
// (Final, Exec, Native, Public, BlueprintCallable)
void UAthenaCheatManager::CureAllAilings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CureAllAilings");

	UAthenaCheatManager_CureAllAilings_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CreateDebugReapersChestMarkerAtPlayerLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugReapersChestMarkerAtPlayerLocation");

	UAthenaCheatManager_CreateDebugReapersChestMarkerAtPlayerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SpawnerAssetName               (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 LocationActorName              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::CreateDebugAISpawnerAt(const struct FString& SpawnerAssetName, const struct FString& LocationActorName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawnerAt");

	UAthenaCheatManager_CreateDebugAISpawnerAt_Params params;
	params.SpawnerAssetName = SpawnerAssetName;
	params.LocationActorName = LocationActorName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 SpawnerAssetName               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::CreateDebugAISpawner(const struct FString& SpawnerAssetName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CreateDebugAISpawner");

	UAthenaCheatManager_CreateDebugAISpawner_Params params;
	params.SpawnerAssetName = SpawnerAssetName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CoordinatedKrakenToggleAI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenToggleAI");

	UAthenaCheatManager_CoordinatedKrakenToggleAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActionName                     (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::CoordinatedKrakenRequestAction(const struct FString& ActionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenRequestAction");

	UAthenaCheatManager_CoordinatedKrakenRequestAction_Params params;
	params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging
// (Final, Exec, Native, Public)
// Parameters:
// int                            Enable                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::CoordinatedKrakenEnableDebugging(int Enable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CoordinatedKrakenEnableDebugging");

	UAthenaCheatManager_CoordinatedKrakenEnableDebugging_Params params;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ContextualPromptCountersToggleDebugDraw()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ContextualPromptCountersToggleDebugDraw");

	UAthenaCheatManager_ContextualPromptCountersToggleDebugDraw_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CompleteVoyage
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CompleteVoyage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteVoyage");

	UAthenaCheatManager_CompleteVoyage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CompleteAllActivePuzzleVaults()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteAllActivePuzzleVaults");

	UAthenaCheatManager_CompleteAllActivePuzzleVaults_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CompleteActiveQuests()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CompleteActiveQuests");

	UAthenaCheatManager_CompleteActiveQuests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CloseSkeletonFortDoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseSkeletonFortDoor");

	UAthenaCheatManager_CloseSkeletonFortDoor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CloseLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CloseLoadingScreen");

	UAthenaCheatManager_CloseLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearWorldSequences
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearWorldSequences()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearWorldSequences");

	UAthenaCheatManager_ClearWorldSequences_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearVoiceChatMeters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearVoiceChatMeters");

	UAthenaCheatManager_ClearVoiceChatMeters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearSlowMotionOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearSlowMotionOverride");

	UAthenaCheatManager_ClearSlowMotionOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearGrogSecondary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearGrogSecondary");

	UAthenaCheatManager_ClearGrogSecondary_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearGlitterbeardRequiredPlayersOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearGlitterbeardRequiredPlayersOverride");

	UAthenaCheatManager_ClearGlitterbeardRequiredPlayersOverride_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearDebugStormLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearDebugStormLocation");

	UAthenaCheatManager_ClearDebugStormLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearAxisBinding
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 InBindingName                  (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ClearAxisBinding(const struct FString& InBindingName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearAxisBinding");

	UAthenaCheatManager_ClearAxisBinding_Params params;
	params.InBindingName = InBindingName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ClearAIAbilityTimeMultipliers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ClearAIAbilityTimeMultipliers");

	UAthenaCheatManager_ClearAIAbilityTimeMultipliers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CheckLandmarkValidTreasureLocationsAtPlayerPos()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkValidTreasureLocationsAtPlayerPos");

	UAthenaCheatManager_CheckLandmarkValidTreasureLocationsAtPlayerPos_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CheckLandmarkRelativeToIslandCalculation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CheckLandmarkRelativeToIslandCalculation");

	UAthenaCheatManager_CheckLandmarkRelativeToIslandCalculation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CapsizeShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CapsizeShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CapsizeShip");

	UAthenaCheatManager_CapsizeShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CancelVoyage
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CancelVoyage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelVoyage");

	UAthenaCheatManager_CancelVoyage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CancelTale
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CancelTale()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelTale");

	UAthenaCheatManager_CancelTale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CancelEmergentVoyages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelEmergentVoyages");

	UAthenaCheatManager_CancelEmergentVoyages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CancelAllCrewVoyages()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelAllCrewVoyages");

	UAthenaCheatManager_CancelAllCrewVoyages_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters
// (Final, Exec, Native, Public)
void UAthenaCheatManager::CancelActiveAIShipEncounters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.CancelActiveAIShipEncounters");

	UAthenaCheatManager_CancelActiveAIShipEncounters_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable
// (Final, Exec, Native, Public)
void UAthenaCheatManager::BuryNearestBuriable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BuryNearestBuriable");

	UAthenaCheatManager_BuryNearestBuriable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.BuryItem
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 NameOfItemToBury               (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::BuryItem(const struct FString& NameOfItemToBury)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BuryItem");

	UAthenaCheatManager_BuryItem_Params params;
	params.NameOfItemToBury = NameOfItemToBury;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.BreakLeg
// (Final, Exec, Native, Public)
void UAthenaCheatManager::BreakLeg()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BreakLeg");

	UAthenaCheatManager_BreakLeg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::BlockMigrationForPlayer(bool Enabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.BlockMigrationForPlayer");

	UAthenaCheatManager_BlockMigrationForPlayer_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams
// (Final, Exec, Native, Public)
// Parameters:
// float                          InitialDamage                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamagePerSecond                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DamageOverTimeDuration         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ApplyVenomWithParams(float InitialDamage, float DamagePerSecond, float DamageOverTimeDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyVenomWithParams");

	UAthenaCheatManager_ApplyVenomWithParams_Params params;
	params.InitialDamage = InitialDamage;
	params.DamagePerSecond = DamagePerSecond;
	params.DamageOverTimeDuration = DamageOverTimeDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyVenom
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ApplyVenom()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyVenom");

	UAthenaCheatManager_ApplyVenom_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 StatusIdentifier               (Parm, ZeroConstructor, HasGetValueTypeHash)
// float                          Duration                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ApplyStatusToPlayer(const struct FString& StatusIdentifier, float Duration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyStatusToPlayer");

	UAthenaCheatManager_ApplyStatusToPlayer_Params params;
	params.StatusIdentifier = StatusIdentifier;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones
// (Final, Exec, Native, Public)
// Parameters:
// float                          Damage                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::ApplyDamageToAllDamageZones(float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyDamageToAllDamageZones");

	UAthenaCheatManager_ApplyDamageToAllDamageZones_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CannonballTypeString           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ApplyCursedCannonballStatusToShip(const struct FString& CannonballTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToShip");

	UAthenaCheatManager_ApplyCursedCannonballStatusToShip_Params params;
	params.CannonballTypeString = CannonballTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CannonballTypeString           (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ApplyCursedCannonballStatusToPlayer(const struct FString& CannonballTypeString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ApplyCursedCannonballStatusToPlayer");

	UAthenaCheatManager_ApplyCursedCannonballStatusToPlayer_Params params;
	params.CannonballTypeString = CannonballTypeString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems
// (Final, Exec, Native, Public, BlueprintCallable)
// Parameters:
// bool                           CanTeleport                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UAthenaCheatManager::AllowTeleportWithItems(bool CanTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllowTeleportWithItems");

	UAthenaCheatManager_AllowTeleportWithItems_Params params;
	params.CanTeleport = CanTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 TunnelDescAssetPath            (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::AllocatePortalToTunnelOfTheDamned(const struct FString& TunnelDescAssetPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllocatePortalToTunnelOfTheDamned");

	UAthenaCheatManager_AllocatePortalToTunnelOfTheDamned_Params params;
	params.TunnelDescAssetPath = TunnelDescAssetPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AllJoinAlliance
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AllJoinAlliance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AllJoinAlliance");

	UAthenaCheatManager_AllJoinAlliance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AIPlayerShip
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AIPlayerShip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AIPlayerShip");

	UAthenaCheatManager_AIPlayerShip_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AggressiveGhostShipRebuildSpline()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AggressiveGhostShipRebuildSpline");

	UAthenaCheatManager_AggressiveGhostShipRebuildSpline_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AdjustGhostShader
// (Final, Exec, Native, Public)
// Parameters:
// bool                           Enabled                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                          InStartingAmount               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InTargetAmount                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InVengeanceStartingAmount      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InVengeanceTargetAmount        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InDelayBeforeStart             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          InBlendDuration                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::AdjustGhostShader(bool Enabled, float InStartingAmount, float InTargetAmount, float InVengeanceStartingAmount, float InVengeanceTargetAmount, float InDelayBeforeStart, float InBlendDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AdjustGhostShader");

	UAthenaCheatManager_AdjustGhostShader_Params params;
	params.Enabled = Enabled;
	params.InStartingAmount = InStartingAmount;
	params.InTargetAmount = InTargetAmount;
	params.InVengeanceStartingAmount = InVengeanceStartingAmount;
	params.InVengeanceTargetAmount = InVengeanceTargetAmount;
	params.InDelayBeforeStart = InDelayBeforeStart;
	params.InBlendDuration = InBlendDuration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation");

	UAthenaCheatManager_AddTradeRouteNPCHintDialogClueMarkToMapAtCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation");

	UAthenaCheatManager_AddTradeRouteMessageInABottleClueMarkToMapAtCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AddTradeRouteClueMarkToMapAtCurrentLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTradeRouteClueMarkToMapAtCurrentLocation");

	UAthenaCheatManager_AddTradeRouteClueMarkToMapAtCurrentLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddTornMapPiece
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AddTornMapPiece()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddTornMapPiece");

	UAthenaCheatManager_AddTornMapPiece_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddShipToCrew
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddShipToCrew(const struct FString& ActorIdString, const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddShipToCrew");

	UAthenaCheatManager_AddShipToCrew_Params params;
	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers
// (Final, Exec, Native, Public)
void UAthenaCheatManager::AddRandomPetForAllPlayers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddRandomPetForAllPlayers");

	UAthenaCheatManager_AddRandomPetForAllPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ActorIdString                  (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CrewId                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddPlayerToCrew(const struct FString& ActorIdString, const struct FString& CrewId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPlayerToCrew");

	UAthenaCheatManager_AddPlayerToCrew_Params params;
	params.ActorIdString = ActorIdString;
	params.CrewId = CrewId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddPetForPlayer
// (Final, Exec, Native, Public)
// Parameters:
// int                            PetTypeIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PetPartIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddPetForPlayer(int PetTypeIndex, int PetPartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPetForPlayer");

	UAthenaCheatManager_AddPetForPlayer_Params params;
	params.PetTypeIndex = PetTypeIndex;
	params.PetPartIndex = PetPartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers
// (Final, Exec, Native, Public)
// Parameters:
// int                            PetTypeIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            PetPartIndex                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddPetForAllPlayers(int PetTypeIndex, int PetPartIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddPetForAllPlayers");

	UAthenaCheatManager_AddPetForAllPlayers_Params params;
	params.PetTypeIndex = PetTypeIndex;
	params.PetPartIndex = PetPartIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddMysteriousNote
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 NoteType                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteTitle                      (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteBody                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 CompletionStrings              (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddMysteriousNote(const struct FString& NoteType, const struct FString& NoteTitle, const struct FString& NoteBody, const struct FString& CompletionStrings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddMysteriousNote");

	UAthenaCheatManager_AddMysteriousNote_Params params;
	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddDrunkenness
// (Final, Exec, Native, Public)
// Parameters:
// int                            DrunkennessType                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DrunkennessChange              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddDrunkenness(int DrunkennessType, float DrunkennessChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddDrunkenness");

	UAthenaCheatManager_AddDrunkenness_Params params;
	params.DrunkennessType = DrunkennessType;
	params.DrunkennessChange = DrunkennessChange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.AddAISpawnContext
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 ContextName                    (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::AddAISpawnContext(const struct FString& ContextName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.AddAISpawnContext");

	UAthenaCheatManager_AddAISpawnContext_Params params;
	params.ContextName = ContextName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort
// (Final, Exec, Native, Public, HasOutParms)
// Parameters:
// struct FString                 FortEventName                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
// struct FString                 FortName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
void UAthenaCheatManager::ActivateSkellyFort(const struct FString& FortEventName, const struct FString& FortName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateSkellyFort");

	UAthenaCheatManager_ActivateSkellyFort_Params params;
	params.FortEventName = FortEventName;
	params.FortName = FortName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany
// (Final, Exec, Native, Public)
// Parameters:
// struct FString                 CompanyId                      (Parm, ZeroConstructor, HasGetValueTypeHash)
void UAthenaCheatManager::ActivateEmissaryFlagCompany(const struct FString& CompanyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateEmissaryFlagCompany");

	UAthenaCheatManager_ActivateEmissaryFlagCompany_Params params;
	params.CompanyId = CompanyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService
// (Final, Exec, Native, Public)
void UAthenaCheatManager::ActivateDebugTeleportationDestinationService()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaCheat.AthenaCheatManager.ActivateDebugTeleportationDestinationService");

	UAthenaCheatManager_ActivateDebugTeleportationDestinationService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UAthenaCheatManager::AfterRead()
{
	UCheatManager::AfterRead();

	READ_PTR_FULL(CinematicCameraController, ACinematicCameraController);
	READ_PTR_FULL(CinematicCameraControllerClass, UClass);
	READ_PTR_FULL(DebugSchedulerSettings, UGameEventSchedulerSettingsAsset);
	READ_PTR_FULL(ServerPerformanceReplicator, AServerPerformanceReplicator);
}

void UAthenaCheatManager::BeforeDelete()
{
	UCheatManager::BeforeDelete();

	DELE_PTR_FULL(CinematicCameraController);
	DELE_PTR_FULL(CinematicCameraControllerClass);
	DELE_PTR_FULL(DebugSchedulerSettings);
	DELE_PTR_FULL(ServerPerformanceReplicator);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

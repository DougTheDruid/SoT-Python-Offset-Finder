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

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
struct ATestLevelScriptActor_YieldToServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
struct ATestLevelScriptActor_YieldToOriginalServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
struct ATestLevelScriptActor_YieldToDynamicServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                ServerIndex;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
struct ATestLevelScriptActor_YieldToClient_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                ClientId;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
struct ATestLevelScriptActor_WaitForOtherServers_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                NumberOfServers;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
struct ATestLevelScriptActor_WaitForClients_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                NumberOfClients;                                           // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
struct ATestLevelScriptActor_TestTriggerServerMigration_Params
{
	TArray<class AActor*>                              ActorGroup;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TargetServerIndex;                                         // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
struct ATestLevelScriptActor_TestCloseConnection_Params
{
	int                                                ConnectionIdx;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
struct ATestLevelScriptActor_SyncClientServer_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                NumClients;                                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RegisterPawnsForMPTesting;                                 // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ClearPawnInputBindings;                                    // 0x0025(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
};

// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActorClass;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     SpawnLocation;                                             // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpawnRotation;                                             // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class AActor*                                      ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
{
	int                                                TestValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
{
	class AActor*                                      TargetActor;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
struct ATestLevelScriptActor_PostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
struct ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params
{
	int                                                TestValue;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
struct ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APlayerController*>                   Players;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumPlayers;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APlayerController*>                   Players;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Actors;                                                    // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
struct ATestLevelScriptActor_GetServerIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
{
	int                                                TargetServerIndex;                                         // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
struct ATestLevelScriptActor_GetPlayerIndexFromClientId_Params
{
	int                                                ClientId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
struct ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
struct ATestLevelScriptActor_GetNumAutomationClients_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
struct ATestLevelScriptActor_GetClientPawn_Params
{
	int                                                ClientId;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitScreenIndex;                                          // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class APawn*                                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientId
struct ATestLevelScriptActor_GetClientId_Params
{
	bool                                               ErrorOnFailure;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
struct ATestLevelScriptActor_DoServerPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
struct ATestLevelScriptActor_ClearPawnInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
struct ATestLevelScriptActor_AddServerOnNewMap_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MapPath;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServer
struct ATestLevelScriptActor_AddServer_Params
{
	struct FString                                     Name;                                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddClient
struct ATestLevelScriptActor_AddClient_Params
{
	int                                                Port;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
{
	class UObject*                                     ContextObject;                                             // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
{
	struct FString                                     Message;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0010(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	class ACameraActor*                                Camera;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NameOverride;                                              // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              DelayBeforeScreenshotSeconds;                              // 0x0038(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	struct FString                                     Name;                                                      // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
{
	struct FString                                     StepName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
struct UAutomationBlueprintFunctionLibrary_StepFinished_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
struct UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params
{
	bool                                               TimeoutIsFatal;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
struct UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LevelName;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameMode;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Absolute;                                                  // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
struct UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled
struct UAutomationBlueprintFunctionLibrary_IsFeatureToggleEnabled_Params
{
	struct FName                                       FeatureToggleName;                                         // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
struct UAutomationBlueprintFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
struct UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
struct UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params
{
	bool                                               ErrorOnFailure;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATestLevelScriptActor*                       ReturnValue;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
{
	class APlayerState*                                State;                                                     // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
{
	bool                                               DumpMemReport;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params
{
	int                                                FrameDelay;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                NumFrames;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Description;                                               // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0008(0x0018)  (Parm)
	int                                                NumFrames;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
struct UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params
{
	bool                                               FullPurge;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
struct UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params
{
	bool                                               EnableBlock;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
{
	struct FString                                     FolderName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               DumpMemReport;                                             // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PreventGarbageCollection;                                  // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
{
	int                                                Actual;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Expected;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
{
	float                                              Actual;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Expected;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
{
	struct FDateTime                                   Actual;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   Expected;                                                  // 0x0010(0x0008)  (Parm, ZeroConstructor)
	struct FString                                     What;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
{
	bool                                               Condition;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NotExpected;                                               // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  NotExpected;                                               // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
{
	struct FString                                     Actual;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NotExpected;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    NotExpected;                                               // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
{
	bool                                               Condition;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Message;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
{
	struct FString                                     ErrorMessage;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
{
	struct FVector2D                                   Actual;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Expected;                                                  // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Expected;                                                  // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  Expected;                                                  // 0x0030(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0070(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
{
	struct FString                                     Actual;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Expected;                                                  // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0030(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Expected;                                                  // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0028(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
{
	float                                              Actual;                                                    // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Expected;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
{
	struct FString                                     ErrorMessage;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
struct UAutomationLatentActionCallback_LatentCallback_Params
{
	int                                                Linkage;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestablePlayerControllerComponent.YieldToServer
struct UTestablePlayerControllerComponent_YieldToServer_Params
{
};

// Function StudiosAutomation.TestablePlayerControllerComponent.PerformPostTestCleanup
struct UTestablePlayerControllerComponent_PerformPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestablePlayerControllerComponent.DisconnectClientFromTest
struct UTestablePlayerControllerComponent_DisconnectClientFromTest_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

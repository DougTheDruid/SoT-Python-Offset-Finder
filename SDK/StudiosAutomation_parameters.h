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

// Function StudiosAutomation.TestablePlayerController.YieldToServer
struct ATestablePlayerController_YieldToServer_Params
{
};

// Function StudiosAutomation.TestablePlayerController.PerformPostTestCleanup
struct ATestablePlayerController_PerformPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestablePlayerController.DisconnectClientFromTest
struct ATestablePlayerController_DisconnectClientFromTest_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToServer
struct ATestLevelScriptActor_YieldToServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToOriginalServer
struct ATestLevelScriptActor_YieldToOriginalServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToDynamicServer
struct ATestLevelScriptActor_YieldToDynamicServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                ServerIndex;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.YieldToClient
struct ATestLevelScriptActor_YieldToClient_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                ClientId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForPossessionAcknowledgement
struct ATestLevelScriptActor_WaitForPossessionAcknowledgement_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForOtherServers
struct ATestLevelScriptActor_WaitForOtherServers_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                NumberOfServers;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.WaitForClients
struct ATestLevelScriptActor_WaitForClients_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                NumberOfClients;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.TestTriggerServerMigration
struct ATestLevelScriptActor_TestTriggerServerMigration_Params
{
	TArray<class AActor*>                              ActorGroup;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                TargetServerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.TestCloseConnection
struct ATestLevelScriptActor_TestCloseConnection_Params
{
	int                                                ConnectionIdx;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.SyncClientServer
struct ATestLevelScriptActor_SyncClientServer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                NumClients;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RegisterPawnsForMPTesting;                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	bool                                               ClearPawnInputBindings;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
};

// Function StudiosAutomation.TestLevelScriptActor.SpawnActorForMPTesting
struct ATestLevelScriptActor_SpawnActorForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ActorClass;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                     SpawnLocation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    SpawnRotation;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.SendServerMigrationTestValueInt32
struct ATestLevelScriptActor_SendServerMigrationTestValueInt32_Params
{
	int                                                TestValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterPawnsForMPTesting
struct ATestLevelScriptActor_RegisterPawnsForMPTesting_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTestingRecursively
struct ATestLevelScriptActor_RegisterActorForMPTestingRecursively_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.RegisterActorForMPTesting
struct ATestLevelScriptActor_RegisterActorForMPTesting_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.PostTestCleanup
struct ATestLevelScriptActor_PostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.OnServerMigrationTestValueInt32Received
struct ATestLevelScriptActor_OnServerMigrationTestValueInt32Received_Params
{
	int                                                TestValue;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationStarted
struct ATestLevelScriptActor_OnOutgoingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APlayerController*>                   Players;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationCompleted
struct ATestLevelScriptActor_OnOutgoingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnOutgoingServerMigrationAborted
struct ATestLevelScriptActor_OnOutgoingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationStarted
struct ATestLevelScriptActor_OnIncomingServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                NumPlayers;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationCompleted
struct ATestLevelScriptActor_OnIncomingServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class APlayerController*>                   Players;                                                   // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              Actors;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function StudiosAutomation.TestLevelScriptActor.OnIncomingServerMigrationAborted
struct ATestLevelScriptActor_OnIncomingServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationStarted
struct ATestLevelScriptActor_OnClientServerMigrationStarted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationCompleted
struct ATestLevelScriptActor_OnClientServerMigrationCompleted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.OnClientServerMigrationAborted
struct ATestLevelScriptActor_OnClientServerMigrationAborted_Params
{
	struct FGuid                                       MigrationId;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.TestLevelScriptActor.GetServerIndex
struct ATestLevelScriptActor_GetServerIndex_Params
{
	class UObject*                                     WorldContextObject;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetRemoteServerMigrationURL
struct ATestLevelScriptActor_GetRemoteServerMigrationURL_Params
{
	int                                                TargetServerIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetPlayerIndexFromClientId
struct ATestLevelScriptActor_GetPlayerIndexFromClientId_Params
{
	int                                                ClientId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumClientsForMultiplayerTest
struct ATestLevelScriptActor_GetNumClientsForMultiplayerTest_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetNumAutomationClients
struct ATestLevelScriptActor_GetNumAutomationClients_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientPawn
struct ATestLevelScriptActor_GetClientPawn_Params
{
	int                                                ClientId;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SplitScreenIndex;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class APawn*                                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.GetClientId
struct ATestLevelScriptActor_GetClientId_Params
{
	bool                                               ErrorOnFailure;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.DoServerPostTestCleanup
struct ATestLevelScriptActor_DoServerPostTestCleanup_Params
{
};

// Function StudiosAutomation.TestLevelScriptActor.ClearPawnInputBindings
struct ATestLevelScriptActor_ClearPawnInputBindings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServerOnNewMap
struct ATestLevelScriptActor_AddServerOnNewMap_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     MapPath;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddServer
struct ATestLevelScriptActor_AddServer_Params
{
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.TestLevelScriptActor.AddClient
struct ATestLevelScriptActor_AddClient_Params
{
	int                                                Port;                                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFinished
struct UAutomationBlueprintFunctionLibrary_TestFinished_Params
{
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TestFailed
struct UAutomationBlueprintFunctionLibrary_TestFailed_Params
{
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshotAtCamera
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshotAtCamera_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	class ACameraActor*                                Camera;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     NameOverride;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              DelayBeforeScreenshotSeconds;                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.TakeAutomationScreenshot
struct UAutomationBlueprintFunctionLibrary_TakeAutomationScreenshot_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	struct FString                                     Name;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepStarted
struct UAutomationBlueprintFunctionLibrary_StepStarted_Params
{
	struct FString                                     StepName;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.StepFinished
struct UAutomationBlueprintFunctionLibrary_StepFinished_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.SetTestTimeoutAsFatal
struct UAutomationBlueprintFunctionLibrary_SetTestTimeoutAsFatal_Params
{
	bool                                               TimeoutIsFatal;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.PreventGarbageCollection
struct UAutomationBlueprintFunctionLibrary_PreventGarbageCollection_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.OpenLevelWithGameMode
struct UAutomationBlueprintFunctionLibrary_OpenLevelWithGameMode_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       LevelName;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      GameMode;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Absolute;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.LogPlatformMemoryStats
struct UAutomationBlueprintFunctionLibrary_LogPlatformMemoryStats_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsTravelFinished
struct UAutomationBlueprintFunctionLibrary_IsTravelFinished_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsFeatureToggleEnabled
struct UAutomationBlueprintFunctionLibrary_IsFeatureToggleEnabled_Params
{
	struct FName                                       FeatureToggleName;                                         // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.IsEditor
struct UAutomationBlueprintFunctionLibrary_IsEditor_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.HasPerformanceDataBeenCaptured
struct UAutomationBlueprintFunctionLibrary_HasPerformanceDataBeenCaptured_Params
{
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetTestLevelScriptActor
struct UAutomationBlueprintFunctionLibrary_GetTestLevelScriptActor_Params
{
	bool                                               ErrorOnFailure;                                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATestLevelScriptActor*                       ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetPlayerId
struct UAutomationBlueprintFunctionLibrary_GetPlayerId_Params
{
	class APlayerState*                                State;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetLevelUrl
struct UAutomationBlueprintFunctionLibrary_GetLevelUrl_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.GetCurrentMapTestName
struct UAutomationBlueprintFunctionLibrary_GetCurrentMapTestName_Params
{
	struct FString                                     ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.EndPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_EndPerformanceCapture_Params
{
	bool                                               DumpMemReport;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReportDelayed
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReportDelayed_Params
{
	int                                                FrameDelay;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DumpFullMemReport
struct UAutomationBlueprintFunctionLibrary_DumpFullMemReport_Params
{
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFramesWithDesc
struct UAutomationBlueprintFunctionLibrary_DelayForFramesWithDesc_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                NumFrames;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Description;                                               // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.DelayForFrames
struct UAutomationBlueprintFunctionLibrary_DelayForFrames_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	int                                                NumFrames;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.CollectGarbageNow
struct UAutomationBlueprintFunctionLibrary_CollectGarbageNow_Params
{
	bool                                               FullPurge;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BlockAsyncLoading
struct UAutomationBlueprintFunctionLibrary_BlockAsyncLoading_Params
{
	bool                                               EnableBlock;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.BeginPerformanceCapture
struct UAutomationBlueprintFunctionLibrary_BeginPerformanceCapture_Params
{
	struct FString                                     FolderName;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               DumpMemReport;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PreventGarbageCollection;                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Int
struct UAutomationBlueprintFunctionLibrary_AssertValue_Int_Params
{
	int                                                Actual;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Expected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_Float
struct UAutomationBlueprintFunctionLibrary_AssertValue_Float_Params
{
	float                                              Actual;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Expected;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertValue_DateTime
struct UAutomationBlueprintFunctionLibrary_AssertValue_DateTime_Params
{
	struct FDateTime                                   Actual;                                                    // (Parm, ZeroConstructor)
	TEnumAsByte<StudiosAutomation_EComparisonMethod>   ShouldBe;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   Expected;                                                  // (Parm, ZeroConstructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertTrue
struct UAutomationBlueprintFunctionLibrary_AssertTrue_Params
{
	bool                                               Condition;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  NotExpected;                                               // (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_String_Params
{
	struct FString                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertNotEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertNotEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    NotExpected;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsValid
struct UAutomationBlueprintFunctionLibrary_AssertIsValid_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertIsNotValid
struct UAutomationBlueprintFunctionLibrary_AssertIsNotValid_Params
{
	class UObject*                                     Object;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertFalse
struct UAutomationBlueprintFunctionLibrary_AssertFalse_Params
{
	bool                                               Condition;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     Message;                                                   // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertErrorOccurred
struct UAutomationBlueprintFunctionLibrary_AssertErrorOccurred_Params
{
	struct FString                                     ErrorMessage;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector2D
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector2D_Params
{
	struct FVector2D                                   Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                                   Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Vector
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Vector_Params
{
	struct FVector                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Transform
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Transform_Params
{
	struct FTransform                                  Actual;                                                    // (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FTransform                                  Expected;                                                  // (ConstParm, Parm, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_String
struct UAutomationBlueprintFunctionLibrary_AssertEqual_String_Params
{
	struct FString                                     Actual;                                                    // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Expected;                                                  // (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Rotator
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Rotator_Params
{
	struct FRotator                                    Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AssertEqual_Float
struct UAutomationBlueprintFunctionLibrary_AssertEqual_Float_Params
{
	float                                              Actual;                                                    // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Expected;                                                  // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     What;                                                      // (Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                              Tolerance;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     ContextObject;                                             // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationBlueprintFunctionLibrary.AddExpectedError
struct UAutomationBlueprintFunctionLibrary_AddExpectedError_Params
{
	struct FString                                     ErrorMessage;                                              // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function StudiosAutomation.AutomationLatentActionCallback.LatentCallback
struct UAutomationLatentActionCallback_LatentCallback_Params
{
	int                                                Linkage;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
struct UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NewOwner;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
struct UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params
{
	class APlayerController*                           PlayerController;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OffsetFromDriverTime;                                      // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
struct UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
struct UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
struct UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params
{
	int                                                ClientConnectionIdx;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                             TargetComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params
{
	class AActor*                                      TargetActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
struct UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      NetworkClusterOwner;                                       // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      LevelOwner;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
struct UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Level;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
struct UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params
{
	int                                                ClientConnectionIdx;                                       // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                             TargetComponent;                                           // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
struct UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
struct UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params
{
	class UActorComponent*                             TargetComponent;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                           PlayerController;                                          // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
struct UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
struct UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
struct UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
struct UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLatentActionInfo                           LatentInfo;                                                // (Parm)
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params
{
	TArray<class AActor*>                              ActorGroup;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<unsigned char>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FVector                                     Offset;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<class AActor*>                              ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
struct UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<unsigned char>                              Buffer;                                                    // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class AActor*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FServerSettings                             Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
struct UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FClientSettings                             Settings;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
struct UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params
{
	class UObject*                                     WorldContextObject;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PacketLag;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PacketLagVariance;                                         // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PacketLoss;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
struct UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
struct UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     IdentificationName;                                        // (Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
struct UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bDropUnreliableRPCsWhilePaused;                            // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
struct UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params
{
	class AActor*                                      TargetActor;                                               // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params
{
	class AActor*                                      TargetActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
struct UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params
{
	class AActor*                                      TargetActor;                                               // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

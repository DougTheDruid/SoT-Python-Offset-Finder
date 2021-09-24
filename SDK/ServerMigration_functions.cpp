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

void FServerSettings::AfterRead()
{
}

void FServerSettings::BeforeDelete()
{
}

void FClientSettings::AfterRead()
{
}

void FClientSettings::BeforeDelete()
{
}

void FServerMigrationCustomMigrationSerialisationStruct::AfterRead()
{
}

void FServerMigrationCustomMigrationSerialisationStruct::BeforeDelete()
{
}

void FServerMigrationSerialisationDetailsTestsUStruct::AfterRead()
{
}

void FServerMigrationSerialisationDetailsTestsUStruct::BeforeDelete()
{
}

void UMigrationControlChannel::AfterRead()
{
	UChannel::AfterRead();

}

void UMigrationControlChannel::BeforeDelete()
{
	UChannel::BeforeDelete();

}

void AMigrationRelevancyClusterActor::AfterRead()
{
	AActor::AfterRead();

}

void AMigrationRelevancyClusterActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

// Function:
//		Offset -> 0x0313E270
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      NewOwner                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_SwitchNetworkClusterForActor(class AActor* TargetActor, class AActor* NewOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SwitchNetworkClusterForActor");

	UNetworkTestingBlueprintFunctionLibrary_SwitchNetworkClusterForActor_Params params;
	params.TargetActor = TargetActor;
	params.NewOwner = NewOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DEE0
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OffsetFromDriverTime                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_SetConnectionLastReceiveTime(class APlayerController* PlayerController, float OffsetFromDriverTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.SetConnectionLastReceiveTime");

	UNetworkTestingBlueprintFunctionLibrary_SetConnectionLastReceiveTime_Params params;
	params.PlayerController = PlayerController;
	params.OffsetFromDriverTime = OffsetFromDriverTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DE00
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ResumePropertyTracking(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ResumePropertyTracking");

	UNetworkTestingBlueprintFunctionLibrary_ResumePropertyTracking_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DC00
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_PausePropertyTrackingOnNextSend(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.PausePropertyTrackingOnNextSend");

	UNetworkTestingBlueprintFunctionLibrary_PausePropertyTrackingOnNextSend_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DB40
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ClientConnectionIdx                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UActorComponent*                             TargetComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsComponentNetDormant(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsComponentNetDormant");

	UNetworkTestingBlueprintFunctionLibrary_IsComponentNetDormant_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313DA80
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetRelevantFor(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetRelevantFor");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetRelevantFor_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313DA00
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorNetDormant(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorNetDormant");

	UNetworkTestingBlueprintFunctionLibrary_IsActorNetDormant_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D980
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkClusterGlobal(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkClusterGlobal");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkClusterGlobal_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D8C0
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster
//		Flags  -> (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      NetworkClusterOwner                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInNetworkCluster(class AActor* TargetActor, class AActor* NetworkClusterOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInNetworkCluster");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.NetworkClusterOwner = NetworkClusterOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D800
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      LevelOwner                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkClusterOnOwner(class AActor* TargetActor, class AActor* LevelOwner)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkClusterOnOwner");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkClusterOnOwner_Params params;
	params.TargetActor = TargetActor;
	params.LevelOwner = LevelOwner;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D740
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_IsActorInLevelNetworkCluster(class AActor* TargetActor, const struct FName& Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.IsActorInLevelNetworkCluster");

	UNetworkTestingBlueprintFunctionLibrary_IsActorInLevelNetworkCluster_Params params;
	params.TargetActor = TargetActor;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D680
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ClientConnectionIdx                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UActorComponent*                             TargetComponent                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_HasComponentReplicator(int ClientConnectionIdx, class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.HasComponentReplicator");

	UNetworkTestingBlueprintFunctionLibrary_HasComponentReplicator_Params params;
	params.ClientConnectionIdx = ClientConnectionIdx;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D580
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UNetworkTestingBlueprintFunctionLibrary::STATIC_GetReliableBufferBunchCount(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.GetReliableBufferBunchCount");

	UNetworkTestingBlueprintFunctionLibrary_GetReliableBufferBunchCount_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D500
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UActorComponent*                             TargetComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UNetworkTestingBlueprintFunctionLibrary::STATIC_FlushComponentNetDormancy(class UActorComponent* TargetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.FlushComponentNetDormancy");

	UNetworkTestingBlueprintFunctionLibrary_FlushComponentNetDormancy_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D350
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimerForPlayer(class AActor* TargetActor, class APlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimerForPlayer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimerForPlayer_Params params;
	params.TargetActor = TargetActor;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313D2E0
//		Name   -> Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UNetworkTestingBlueprintFunctionLibrary::STATIC_ClearRecentRelevanceTimer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.NetworkTestingBlueprintFunctionLibrary.ClearRecentRelevanceTimer");

	UNetworkTestingBlueprintFunctionLibrary_ClearRecentRelevanceTimer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UNetworkTestingBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UNetworkTestingBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0313ED30
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitWhileMigrationInProgress(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitWhileMigrationInProgress");

	UServerMigrationBlueprintFunctionLibrary_WaitWhileMigrationInProgress_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313EC10
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForPendingNetTraffic(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForPendingNetTraffic");

	UServerMigrationBlueprintFunctionLibrary_WaitForPendingNetTraffic_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313EB30
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForMigrationCompletedEvent(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForMigrationCompletedEvent");

	UServerMigrationBlueprintFunctionLibrary_WaitForMigrationCompletedEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313EA10
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm)
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_WaitForClientsToHaveActorChannel(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.WaitForClientsToHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_WaitForClientsToHaveActorChannel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LatentInfo = LatentInfo;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313E930
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorToBuffer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorToBuffer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E830
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class AActor*>                              ActorGroup                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<unsigned char>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<unsigned char> UServerMigrationBlueprintFunctionLibrary::STATIC_TestSerialiseActorGroupToBuffer(TArray<class AActor*> ActorGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestSerialiseActorGroupToBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestSerialiseActorGroupToBuffer_Params params;
	params.ActorGroup = ActorGroup;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E6E0
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     Offset                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E550
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		struct FVector                                     Offset                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupWithOffsetFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer, const struct FVector& Offset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupWithOffsetFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupWithOffsetFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E410
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		TArray<class AActor*>                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm)
TArray<class AActor*> UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorGroupFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorGroupFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorGroupFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E320
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<unsigned char>                              Buffer                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		class AActor*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* UServerMigrationBlueprintFunctionLibrary::STATIC_TestDeserialiseActorFromBuffer(class UObject* WorldContextObject, TArray<unsigned char> Buffer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.TestDeserialiseActorFromBuffer");

	UServerMigrationBlueprintFunctionLibrary_TestDeserialiseActorFromBuffer_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313E1A0
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FServerSettings                             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestServerSettings(class UObject* WorldContextObject, const struct FServerSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestServerSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestServerSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313E0D0
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FClientSettings                             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetServerMigrationTestClientSettings(class UObject* WorldContextObject, const struct FClientSettings& Settings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetServerMigrationTestClientSettings");

	UServerMigrationBlueprintFunctionLibrary_SetServerMigrationTestClientSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DFA0
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PacketLag                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PacketLagVariance                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                PacketLoss                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_SetPacketSimulationSettings(class UObject* WorldContextObject, int PacketLag, int PacketLagVariance, int PacketLoss)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.SetPacketSimulationSettings");

	UServerMigrationBlueprintFunctionLibrary_SetPacketSimulationSettings_Params params;
	params.WorldContextObject = WorldContextObject;
	params.PacketLag = PacketLag;
	params.PacketLagVariance = PacketLagVariance;
	params.PacketLoss = PacketLoss;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DE70
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_ResumeReplication(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ResumeReplication");

	UServerMigrationBlueprintFunctionLibrary_ResumeReplication_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DD30
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     IdentificationName                                         (Parm, ZeroConstructor, HasGetValueTypeHash)
void UServerMigrationBlueprintFunctionLibrary::STATIC_RegisterPersistentDynamicActor(class AActor* TargetActor, const struct FString& IdentificationName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.RegisterPersistentDynamicActor");

	UServerMigrationBlueprintFunctionLibrary_RegisterPersistentDynamicActor_Params params;
	params.TargetActor = TargetActor;
	params.IdentificationName = IdentificationName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313DC70
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bDropUnreliableRPCsWhilePaused                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UServerMigrationBlueprintFunctionLibrary::STATIC_PauseReplication(class AActor* TargetActor, bool bDropUnreliableRPCsWhilePaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.PauseReplication");

	UServerMigrationBlueprintFunctionLibrary_PauseReplication_Params params;
	params.TargetActor = TargetActor;
	params.bDropUnreliableRPCsWhilePaused = bDropUnreliableRPCsWhilePaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0313D600
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_HasActorChannelFromServer(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.HasActorChannelFromServer");

	UServerMigrationBlueprintFunctionLibrary_HasActorChannelFromServer_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D480
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveDormantActor(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveDormantActor");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveDormantActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0313D400
//		Name   -> Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class AActor*                                      TargetActor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UServerMigrationBlueprintFunctionLibrary::STATIC_ClientsHaveActorChannel(class AActor* TargetActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ServerMigration.ServerMigrationBlueprintFunctionLibrary.ClientsHaveActorChannel");

	UServerMigrationBlueprintFunctionLibrary_ClientsHaveActorChannel_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UServerMigrationBlueprintFunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UServerMigrationBlueprintFunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UServerMigrationSerialisationDetailsTestsActorRef::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ActorReferenceWithMigrationMarkup, AActor);
}

void UServerMigrationSerialisationDetailsTestsActorRef::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ActorReferenceWithMigrationMarkup);
}

void AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(PrimitiveComponent, UPrimitiveComponent);
}

void AServerMigrationSerialisationDetailsTestsActorThatMovesOnBeginPlay::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(PrimitiveComponent);
}

void AServerMigrationSerialisationDetailsTestsActorWithChild::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ChildActorComponent, UChildActorComponent);
}

void AServerMigrationSerialisationDetailsTestsActorWithChild::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ChildActorComponent);
}

void AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SubObject, UServerMigrationSerialisationDetailsTestsMigratableComponent);
	READ_PTR_FULL(ActorComponent, UServerMigrationSerialisationDetailsTestsMigratableComponent);
	READ_PTR_FULL(Subobject2, UServerMigrationSerialisationDetailsTestsMigratableComponent);
}

void AServerMigrationSerialisationDetailsTestsActorWithDynamicComponent::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SubObject);
	DELE_PTR_FULL(ActorComponent);
	DELE_PTR_FULL(Subobject2);
}

void AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr::AfterRead()
{
	AActor::AfterRead();

}

void AServerMigrationSerialisationDetailsTestsActorWithNetActorPtr::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId::AfterRead()
{
	AActor::AfterRead();

}

void AServerMigrationSerialisationDetailsTestsActorWithUniqueNetId::BeforeDelete()
{
	AActor::BeforeDelete();

}

void UServerMigrationSerialisationDetailsTestsMigratableComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UServerMigrationSerialisationDetailsTestsMigratableComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void AServerMigrationSerialisationDetailsTestsMigratableComponentActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ComponentWithMigrationMarkup, UServerMigrationSerialisationDetailsTestsMigratableComponent);
}

void AServerMigrationSerialisationDetailsTestsMigratableComponentActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ComponentWithMigrationMarkup);
}

void AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ComponentWithMigrationMarkup, UServerMigrationSerialisationDetailsTestsMigratableComponent);
}

void AServerMigrationSerialisationDetailsTestsMigratableDefaultComponentActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ComponentWithMigrationMarkup);
}

void AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor::AfterRead()
{
	AActor::AfterRead();

}

void AServerMigrationSerialisationDetailsTestsMigrationActorCallsOrderingTestActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault::AfterRead()
{
	AActor::AfterRead();

}

void AServerMigrationSerialisationDetailsTestsMigrationActorWithRootComponentSimulatePhysicsEnabledByDefault::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Component, UChildActorComponent);
}

void AServerMigrationSerialisationDetailsTestsMigrationChildActorLinkedActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Component);
}

void AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor::AfterRead()
{
	AActor::AfterRead();

}

void AServerMigrationSerialisationDetailsTestsMigrationCustomSerialiseActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(DependentActor, AActor);
}

void AServerMigrationSerialisationDetailsTestsMigrationGetLinkedActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(DependentActor);
}

void AServerMigrationSerialisationDetailsTestsMigrationReferenceActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ActorReferenceWithMigrationMarkup, AActor);
}

void AServerMigrationSerialisationDetailsTestsMigrationReferenceActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ActorReferenceWithMigrationMarkup);
}

void UServerMigrationSerialisationDetailsTestsPropertyMarkup::AfterRead()
{
	UObject::AfterRead();

}

void UServerMigrationSerialisationDetailsTestsPropertyMarkup::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UServerMigrationSerialisationDetailsTestsTArrayProperty::AfterRead()
{
	UObject::AfterRead();

}

void UServerMigrationSerialisationDetailsTestsTArrayProperty::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UServerMigrationSerialisationDetailsTestsUStructProperty::AfterRead()
{
	UObject::AfterRead();

}

void UServerMigrationSerialisationDetailsTestsUStructProperty::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UServerMigrationSettings::AfterRead()
{
	UObject::AfterRead();

}

void UServerMigrationSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ATestActorWithUObjectProperty::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ObjectProperty, UObject);
}

void ATestActorWithUObjectProperty::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ObjectProperty);
}

void UTestUObjectWithObjectProperty::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(ObjectProperty, UObject);
}

void UTestUObjectWithObjectProperty::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(ObjectProperty);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

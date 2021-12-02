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

void FActionStateChangeRequestId::AfterRead()
{
}

void FActionStateChangeRequestId::BeforeDelete()
{
}

void FSerialisedActionStateInfo::AfterRead()
{
}

void FSerialisedActionStateInfo::BeforeDelete()
{
}

void FSerialisedActionStateMessage::AfterRead()
{
}

void FSerialisedActionStateMessage::BeforeDelete()
{
}

void FSerialisedConstructionInfoStore::AfterRead()
{
}

void FSerialisedConstructionInfoStore::BeforeDelete()
{
}

void FResetStateMachineRpc::AfterRead()
{
}

void FResetStateMachineRpc::BeforeDelete()
{
}

void FActionStateSerialisableData::AfterRead()
{
	READ_PTR_FULL(Id, UClass);
	READ_PTR_FULL(Type, UScriptStruct);
}

void FActionStateSerialisableData::BeforeDelete()
{
	DELE_PTR_FULL(Id);
	DELE_PTR_FULL(Type);
}

void FTestActionStateSerialisableData::AfterRead()
{
	FActionStateSerialisableData::AfterRead();

}

void FTestActionStateSerialisableData::BeforeDelete()
{
	FActionStateSerialisableData::BeforeDelete();

}

void FActionStatePriorityRelationship::AfterRead()
{
	READ_PTR_FULL(State, UClass);
}

void FActionStatePriorityRelationship::BeforeDelete()
{
	DELE_PTR_FULL(State);
}

void FActionStatePriorityList::AfterRead()
{
	READ_PTR_FULL(State, UClass);
}

void FActionStatePriorityList::BeforeDelete()
{
	DELE_PTR_FULL(State);
}

void FActionStatePriorityTable::AfterRead()
{
}

void FActionStatePriorityTable::BeforeDelete()
{
}

void FActionStateConstructionInfo::AfterRead()
{
	READ_PTR_FULL(Id, UClass);
	READ_PTR_FULL(Type, UScriptStruct);
}

void FActionStateConstructionInfo::BeforeDelete()
{
	DELE_PTR_FULL(Id);
	DELE_PTR_FULL(Type);
}

void FInnerTestStruct::AfterRead()
{
}

void FInnerTestStruct::BeforeDelete()
{
}

void FTestActionStateConstructionInfo::AfterRead()
{
	FActionStateConstructionInfo::AfterRead();

}

void FTestActionStateConstructionInfo::BeforeDelete()
{
	FActionStateConstructionInfo::BeforeDelete();

}

void FTestActionStateConstructionInfoWithInner::AfterRead()
{
	FActionStateConstructionInfo::AfterRead();

}

void FTestActionStateConstructionInfoWithInner::BeforeDelete()
{
	FActionStateConstructionInfo::BeforeDelete();

}

void FActorActionStateConstructionInfo::AfterRead()
{
	FActionStateConstructionInfo::AfterRead();

}

void FActorActionStateConstructionInfo::BeforeDelete()
{
	FActionStateConstructionInfo::BeforeDelete();

}

void FActionStateMessage::AfterRead()
{
	READ_PTR_FULL(Type, UScriptStruct);
}

void FActionStateMessage::BeforeDelete()
{
	DELE_PTR_FULL(Type);
}

void FInnerWithObjTestStruct::AfterRead()
{
	READ_PTR_FULL(ObjPointer, UObject);
}

void FInnerWithObjTestStruct::BeforeDelete()
{
	DELE_PTR_FULL(ObjPointer);
}

void FTestActionStateConstructionInfoWithObjPointers::AfterRead()
{
	FActionStateConstructionInfo::AfterRead();

	READ_PTR_FULL(ObjPointer, UObject);
}

void FTestActionStateConstructionInfoWithObjPointers::BeforeDelete()
{
	FActionStateConstructionInfo::BeforeDelete();

	DELE_PTR_FULL(ObjPointer);
}

void FEventWaitingToSpawnActionStateEndedClient::AfterRead()
{
}

void FEventWaitingToSpawnActionStateEndedClient::BeforeDelete()
{
}

void FEventWaitingToSpawnActionStateStartedClient::AfterRead()
{
}

void FEventWaitingToSpawnActionStateStartedClient::BeforeDelete()
{
}

void FEventFirstPersonAnimaticActionStateEndedClient::AfterRead()
{
}

void FEventFirstPersonAnimaticActionStateEndedClient::BeforeDelete()
{
}

void FNullActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

}

void FNullActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

}

void FTestActionStateMessage2::AfterRead()
{
	FActionStateMessage::AfterRead();

}

void FTestActionStateMessage2::BeforeDelete()
{
	FActionStateMessage::BeforeDelete();

}

void FTestActionStateMessage::AfterRead()
{
	FActionStateMessage::AfterRead();

}

void FTestActionStateMessage::BeforeDelete()
{
	FActionStateMessage::BeforeDelete();

}

void FTestActorActionStateConstructionInfo::AfterRead()
{
	FActorActionStateConstructionInfo::AfterRead();

}

void FTestActorActionStateConstructionInfo::BeforeDelete()
{
	FActorActionStateConstructionInfo::BeforeDelete();

}

void UActionStateId::AfterRead()
{
	UObject::AfterRead();

}

void UActionStateId::BeforeDelete()
{
	UObject::BeforeDelete();

}

void AActionStateCreatorDefinition::AfterRead()
{
	AActor::AfterRead();

}

void AActionStateCreatorDefinition::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ATestActionStateCreatorDefinition::AfterRead()
{
	AActionStateCreatorDefinition::AfterRead();

}

void ATestActionStateCreatorDefinition::BeforeDelete()
{
	AActionStateCreatorDefinition::BeforeDelete();

}

void UCustomClientValidityActionState2Id::AfterRead()
{
	UActionStateId::AfterRead();

}

void UCustomClientValidityActionState2Id::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UCustomClientValidityActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UCustomClientValidityActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UNullActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UNullActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UTestActionStateId::AfterRead()
{
	UActionStateId::AfterRead();

}

void UTestActionStateId::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

void UTestActionStateId2::AfterRead()
{
	UActionStateId::AfterRead();

}

void UTestActionStateId2::BeforeDelete()
{
	UActionStateId::BeforeDelete();

}

// Function:
//		Offset -> 0x031697A0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
//		struct FSerialisedActionStateMessage               InSerialisedPreviousStateMessage                           (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Server_RequestActionWithMessageForCurrentState(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, const struct FSerialisedActionStateMessage& InSerialisedPreviousStateMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState");

	UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params params {};
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.InSerialisedPreviousStateMessage = InSerialisedPreviousStateMessage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x031695D0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
//		TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActionStateMachineComponent::Server_RequestAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo, TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction");

	UActionStateMachineComponent_Server_RequestAction_Params params {};
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;
	params.ClientPredicted = ClientPredicted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x031691A0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UActionStateMachineComponent::PostNetInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.PostNetInit");

	UActionStateMachineComponent_PostNetInit_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03169180
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
//		Flags  -> (Final, Native, Protected)
void UActionStateMachineComponent::OnNetOwnershipChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged");

	UActionStateMachineComponent_OnNetOwnershipChanged_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03169080
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateSerialisationStateInfo              (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushSerialisableData(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateSerialisationStateInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData");

	UActionStateMachineComponent_Multicast_PushSerialisableData_Params params {};
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateSerialisationStateInfo = InSerialisedActionStateSerialisationStateInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03168F80
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushActionFromRequest(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest");

	UActionStateMachineComponent_Multicast_PushActionFromRequest_Params params {};
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03168E80
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
//		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Multicast_PushAction(const struct FActionStateChangeRequestId& InEpochId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction");

	UActionStateMachineComponent_Multicast_PushAction_Params params {};
	params.InEpochId = InEpochId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03168530
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.End
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UActionStateMachineComponent::End()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.End");

	UActionStateMachineComponent_End_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03167E90
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FResetStateMachineRpc                       Rpc                                                        (ConstParm, Parm)
void UActionStateMachineComponent::Client_ResetStateMachine(const struct FResetStateMachineRpc& Rpc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine");

	UActionStateMachineComponent_Client_ResetStateMachine_Params params {};
	params.Rpc = Rpc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03167D30
//		Name   -> Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FActionStateChangeRequestId                 InEpochId                                                  (ConstParm, Parm)
//		struct FActionStateChangeRequestId                 InRequestId                                                (ConstParm, Parm)
//		struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo                    (ConstParm, Parm, ReferenceParm)
void UActionStateMachineComponent::Client_CorrectAction(const struct FActionStateChangeRequestId& InEpochId, const struct FActionStateChangeRequestId& InRequestId, const struct FSerialisedActionStateInfo& InSerialisedActionStateConstructionInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction");

	UActionStateMachineComponent_Client_CorrectAction_Params params {};
	params.InEpochId = InEpochId;
	params.InRequestId = InRequestId;
	params.InSerialisedActionStateConstructionInfo = InSerialisedActionStateConstructionInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UActionStateMachineComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UActionStateMachineComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UCustomClientValidityCheckCallback::AfterRead()
{
	UObject::AfterRead();

}

void UCustomClientValidityCheckCallback::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function:
//		Offset -> 0x03169C40
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPassesExceptForId(class UActionStateMachineComponent* InComponent, class UClass* StateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params params {};
	params.InComponent = InComponent;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03169BC0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysPasses(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params params {};
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03169B40
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateValidatorThatAlwaysFails(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails");

	UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params params {};
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03169AC0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactoryChangeToNullOnUpdate(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate");

	UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params params {};
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03169A40
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetTestStateFactory(class UActionStateMachineComponent* InComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params params {};
	params.InComponent = InComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03169980
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCustomClientValidityCheckCallback*          InCallback                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_SetCustomClientValidationTestStateFactory(class UActionStateMachineComponent* InComponent, class UCustomClientValidityCheckCallback* InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory");

	UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params params {};
	params.InComponent = InComponent;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x031694A0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ClientStateId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UClass*                                      ServerStateId                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestUnpredictedTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* ClientStateId, class UClass* ServerStateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.ClientStateId = ClientStateId;
	params.ServerStateId = ServerStateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x031693B0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestTestActionStateWithIdOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack");

	UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x031692F0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_RequestNullActionStateOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack");

	UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x031691C0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                DataValue                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UActionStateMachineComponentTestFunctions::STATIC_PushTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId, int DataValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;
	params.DataValue = DataValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03168CE0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      StateId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_IsActionStateTypeActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, class UClass* StateId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack");

	UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;
	params.StateId = StateId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168AC0
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* UActionStateMachineComponentTestFunctions::STATIC_GetTypeOfActionStateActiveOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack");

	UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168730
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UActionStateMachineComponent*                InComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTestActionStateSerialisableData            Data                                                       (Parm, OutParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UActionStateMachineComponentTestFunctions::STATIC_GetTestActionStateSerialisableDataOnTrack(class UActionStateMachineComponent* InComponent, TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId, struct FTestActionStateSerialisableData* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack");

	UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params params {};
	params.InComponent = InComponent;
	params.TrackId = TrackId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168050
//		Name   -> Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UCustomClientValidityCheckCallback*          ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCustomClientValidityCheckCallback* UActionStateMachineComponentTestFunctions::STATIC_CreateCustomClientValidityCheckCallback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback");

	UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UActionStateMachineComponentTestFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UActionStateMachineComponentTestFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

void UActionStateMachineInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UActionStateMachineInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UActionStatePriorityTableData::AfterRead()
{
	UDataAsset::AfterRead();

}

void UActionStatePriorityTableData::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

// Function:
//		Offset -> 0x03168550
//		Name   -> Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FActionStatePriorityTable                   PriorityTable                                              (Parm, OutParm, ReferenceParm)
//		class UClass*                                      InStateA                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UClass*                                      InStateB                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		TEnumAsByte<ActionStateMachine_EActionStatePriority> ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<ActionStateMachine_EActionStatePriority> UActionStatePriorityTableUtility::STATIC_GetPriority(struct FActionStatePriorityTable* PriorityTable, class UClass* InStateA, class UClass* InStateB)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority");

	UActionStatePriorityTableUtility_GetPriority_Params params {};
	params.InStateA = InStateA;
	params.InStateB = InStateB;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PriorityTable != nullptr)
		*PriorityTable = params.PriorityTable;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168080
//		Name   -> Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		class UActionStatePriorityTableData*               Data                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FActionStatePriorityTable                   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FActionStatePriorityTable UActionStatePriorityTableUtility::STATIC_CreatePriorityTable(class UActionStatePriorityTableData* Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable");

	UActionStatePriorityTableUtility_CreatePriorityTable_Params params {};
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UActionStatePriorityTableUtility::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UActionStatePriorityTableUtility::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x03168DD0
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_IsValid(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid");

	USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params params {};
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168C30
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params params {};
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168B80
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool USerialisedActionStateConstructionInfoTestFunctions::STATIC_HasTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params params {};
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168970
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FTestActionStateConstructionInfoWithInner   ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTestActionStateConstructionInfoWithInner USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfoWithInner(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params params {};
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168880
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FSerialisedActionStateInfo                  TestStruct                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FTestActionStateConstructionInfo            ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTestActionStateConstructionInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_GetTestConstructionInfo(const struct FSerialisedActionStateInfo& TestStruct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params params {};
	params.TestStruct = TestStruct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168430
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                IntProp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSerialisedActionStateInfo                  ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestSerialisableData(class UClass* Id, int IntProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params params {};
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168290
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		float                                              FloatProp                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               BoolProp                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FString                                     StringProp                                                 (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FSerialisedActionStateInfo                  ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfoWithInner(class UClass* Id, float FloatProp, bool BoolProp, const struct FString& StringProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params params {};
	params.Id = Id;
	params.FloatProp = FloatProp;
	params.BoolProp = BoolProp;
	params.StringProp = StringProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03168190
//		Name   -> Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      Id                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		int                                                IntProp                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FSerialisedActionStateInfo                  ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSerialisedActionStateInfo USerialisedActionStateConstructionInfoTestFunctions::STATIC_CreateTestConstructionInfo(class UClass* Id, int IntProp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo");

	USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params params {};
	params.Id = Id;
	params.IntProp = IntProp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void USerialisedActionStateConstructionInfoTestFunctions::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void USerialisedActionStateConstructionInfoTestFunctions::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

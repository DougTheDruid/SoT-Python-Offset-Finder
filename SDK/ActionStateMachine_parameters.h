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

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestActionWithMessageForCurrentState
struct UActionStateMachineComponent_Server_RequestActionWithMessageForCurrentState_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FActionStateChangeRequestId                 InRequestId;                                               // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                   // (ConstParm, Parm, ReferenceParm)
	struct FSerialisedActionStateMessage               InSerialisedPreviousStateMessage;                          // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Server_RequestAction
struct UActionStateMachineComponent_Server_RequestAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FActionStateChangeRequestId                 InRequestId;                                               // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                   // (ConstParm, Parm, ReferenceParm)
	TEnumAsByte<ActionStateMachine_EActionPredictionType> ClientPredicted;                                           // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionStateMachine.ActionStateMachineComponent.PostNetInit
struct UActionStateMachineComponent_PostNetInit_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.OnNetOwnershipChanged
struct UActionStateMachineComponent_OnNetOwnershipChanged_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushSerialisableData
struct UActionStateMachineComponent_Multicast_PushSerialisableData_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateSerialisationStateInfo;             // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushActionFromRequest
struct UActionStateMachineComponent_Multicast_PushActionFromRequest_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                   // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Multicast_PushAction
struct UActionStateMachineComponent_Multicast_PushAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                   // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponent.End
struct UActionStateMachineComponent_End_Params
{
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_ResetStateMachine
struct UActionStateMachineComponent_Client_ResetStateMachine_Params
{
	struct FResetStateMachineRpc                       Rpc;                                                       // (ConstParm, Parm)
};

// Function ActionStateMachine.ActionStateMachineComponent.Client_CorrectAction
struct UActionStateMachineComponent_Client_CorrectAction_Params
{
	struct FActionStateChangeRequestId                 InEpochId;                                                 // (ConstParm, Parm)
	struct FActionStateChangeRequestId                 InRequestId;                                               // (ConstParm, Parm)
	struct FSerialisedActionStateInfo                  InSerialisedActionStateConstructionInfo;                   // (ConstParm, Parm, ReferenceParm)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPassesExceptForId
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPassesExceptForId_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StateId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysPasses
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysPasses_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateValidatorThatAlwaysFails
struct UActionStateMachineComponentTestFunctions_SetTestStateValidatorThatAlwaysFails_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactoryChangeToNullOnUpdate
struct UActionStateMachineComponentTestFunctions_SetTestStateFactoryChangeToNullOnUpdate_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetTestStateFactory_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.SetCustomClientValidationTestStateFactory
struct UActionStateMachineComponentTestFunctions_SetCustomClientValidationTestStateFactory_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomClientValidityCheckCallback*          InCallback;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestUnpredictedTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestUnpredictedTestActionStateWithIdOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ClientStateId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      ServerStateId;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestTestActionStateWithIdOnTrack
struct UActionStateMachineComponentTestFunctions_RequestTestActionStateWithIdOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StateId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.RequestNullActionStateOnTrack
struct UActionStateMachineComponentTestFunctions_RequestNullActionStateOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.PushTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_PushTestActionStateSerialisableDataOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StateId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                DataValue;                                                 // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.IsActionStateTypeActiveOnTrack
struct UActionStateMachineComponentTestFunctions_IsActionStateTypeActiveOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      StateId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTypeOfActionStateActiveOnTrack
struct UActionStateMachineComponentTestFunctions_GetTypeOfActionStateActiveOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.GetTestActionStateSerialisableDataOnTrack
struct UActionStateMachineComponentTestFunctions_GetTestActionStateSerialisableDataOnTrack_Params
{
	class UActionStateMachineComponent*                InComponent;                                               // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStateMachineTrackId> TrackId;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTestActionStateSerialisableData            Data;                                                      // (Parm, OutParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.ActionStateMachineComponentTestFunctions.CreateCustomClientValidityCheckCallback
struct UActionStateMachineComponentTestFunctions_CreateCustomClientValidityCheckCallback_Params
{
	class UCustomClientValidityCheckCallback*          ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.GetPriority
struct UActionStatePriorityTableUtility_GetPriority_Params
{
	struct FActionStatePriorityTable                   PriorityTable;                                             // (Parm, OutParm, ReferenceParm)
	class UClass*                                      InStateA;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      InStateB;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStatePriority> ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ActionStateMachine.ActionStatePriorityTableUtility.CreatePriorityTable
struct UActionStatePriorityTableUtility_CreatePriorityTable_Params
{
	class UActionStatePriorityTableData*               Data;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActionStatePriorityTable                   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.IsValid
struct USerialisedActionStateConstructionInfoTestFunctions_IsValid_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfoWithInner_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.HasTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_HasTestConstructionInfo_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfoWithInner_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTestActionStateConstructionInfoWithInner   ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.GetTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_GetTestConstructionInfo_Params
{
	struct FSerialisedActionStateInfo                  TestStruct;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FTestActionStateConstructionInfo            ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestSerialisableData
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestSerialisableData_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                IntProp;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSerialisedActionStateInfo                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfoWithInner
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfoWithInner_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FloatProp;                                                 // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BoolProp;                                                  // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     StringProp;                                                // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSerialisedActionStateInfo                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function ActionStateMachine.SerialisedActionStateConstructionInfoTestFunctions.CreateTestConstructionInfo
struct USerialisedActionStateConstructionInfoTestFunctions_CreateTestConstructionInfo_Params
{
	class UClass*                                      Id;                                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int                                                IntProp;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSerialisedActionStateInfo                  ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
// Enums
//---------------------------------------------------------------------------

// Enum ActionStateMachine.EActionStateMachineTrackId
enum class ActionStateMachine_EActionStateMachineTrackId : uint8_t
{
	EActionStateMachineTrackId__Locomotion = 0,
	EActionStateMachineTrackId__Overlay = 1,
	EActionStateMachineTrackId__ItemUse = 2,
	EActionStateMachineTrackId__ForcedMovement = 3,
	EActionStateMachineTrackId__Migration = 4,
	EActionStateMachineTrackId__Count = 5,
	EActionStateMachineTrackId__Invalid = 6,
	EActionStateMachineTrackId__EActionStateMachineTrackId_MAX = 7,

};

// Enum ActionStateMachine.EActionPredictionType
enum class ActionStateMachine_EActionPredictionType : uint8_t
{
	EActionPredictionType__Predicted = 0,
	EActionPredictionType__NotPredicted = 1,
	EActionPredictionType__EActionPredictionType_MAX = 2,

};

// Enum ActionStateMachine.EActionStatePriority
enum class ActionStateMachine_EActionStatePriority : uint8_t
{
	EActionStatePriority__Overrides = 0,
	EActionStatePriority__Overriden = 1,
	EActionStatePriority__EActionStatePriority_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ActionStateMachine.ActionStateChangeRequestId
// 0x0001
struct FActionStateChangeRequestId
{
	unsigned char                                      Raw;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.SerialisedActionStateInfo
// 0x0040
struct FSerialisedActionStateInfo
{
	unsigned char                                      UnknownData_I1FX[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.SerialisedActionStateMessage
// 0x0018
struct FSerialisedActionStateMessage
{
	unsigned char                                      UnknownData_SSEX[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.SerialisedConstructionInfoStore
// 0x0140
struct FSerialisedConstructionInfoStore
{
	struct FSerialisedActionStateInfo                  SerialisedConstructionInfo[0x5];                           // 0x0000(0x0140)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ResetStateMachineRpc
// 0x0150
struct FResetStateMachineRpc
{
	struct FActionStateChangeRequestId                 LatestEpochIds[0x5];                                       // 0x0000(0x0005)
	struct FActionStateChangeRequestId                 LatestRequestIds[0x5];                                     // 0x0005(0x0005)
	unsigned char                                      UnknownData_9ZRO[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSerialisedConstructionInfoStore            PerTrackConstructionInfoStore;                             // 0x0010(0x0140)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStateSerialisableData
// 0x0030
struct FActionStateSerialisableData
{
	unsigned char                                      UnknownData_VG22[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Id;                                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UScriptStruct*                               Type;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4FC0[0x18];                                    // 0x0018(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateSerialisableData
// 0x0008 (0x0038 - 0x0030)
struct FTestActionStateSerialisableData : public FActionStateSerialisableData
{
	int                                                IntProp;                                                   // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CXZK[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
// 0x0010
struct FActionStatePriorityRelationship
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<ActionStateMachine_EActionStatePriority> Priority;                                                  // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7MYN[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStatePriorityList
// 0x0018
struct FActionStatePriorityList
{
	class UClass*                                      State;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FActionStatePriorityRelationship>    Entries;                                                   // 0x0008(0x0010) (Edit, ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStatePriorityTable
// 0x00A0
struct FActionStatePriorityTable
{
	unsigned char                                      UnknownData_HKO3[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStateConstructionInfo
// 0x0028
struct FActionStateConstructionInfo
{
	class UClass*                                      Id;                                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UScriptStruct*                               Type;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_38JK[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.InnerTestStruct
// 0x0018
struct FInnerTestStruct
{
	bool                                               BoolProp;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1GS3[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     StringProp;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FTestActionStateConstructionInfo : public FActionStateConstructionInfo
{
	int                                                IntProp;                                                   // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RFU[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithInner : public FActionStateConstructionInfo
{
	float                                              FloatProp;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_O0KH[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FInnerTestStruct                            InnerStruct;                                               // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
// 0x0008 (0x0030 - 0x0028)
struct FActorActionStateConstructionInfo : public FActionStateConstructionInfo
{
	TWeakObjectPtr<class AActor>                       ActorOwner;                                                // 0x0028(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.ActionStateMessage
// 0x0010
struct FActionStateMessage
{
	unsigned char                                      UnknownData_5F5J[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScriptStruct*                               Type;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.InnerWithObjTestStruct
// 0x0008
struct FInnerWithObjTestStruct
{
	class UObject*                                     ObjPointer;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithObjPointers
// 0x0020 (0x0048 - 0x0028)
struct FTestActionStateConstructionInfoWithObjPointers : public FActionStateConstructionInfo
{
	class UObject*                                     ObjPointer;                                                // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInnerWithObjTestStruct                     Inner;                                                     // 0x0030(0x0008)
	TArray<class UObject*>                             Array;                                                     // 0x0038(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateEndedClient
// 0x0001
struct FEventWaitingToSpawnActionStateEndedClient
{
	unsigned char                                      UnknownData_SPZD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateStartedClient
// 0x0001
struct FEventWaitingToSpawnActionStateStartedClient
{
	unsigned char                                      UnknownData_QKRN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.EventFirstPersonAnimaticActionStateEndedClient
// 0x0001
struct FEventFirstPersonAnimaticActionStateEndedClient
{
	unsigned char                                      UnknownData_4WDT[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
// 0x0000 (0x0030 - 0x0030)
struct FNullActionStateConstructionInfo : public FActorActionStateConstructionInfo
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateMessage2
// 0x0000 (0x0010 - 0x0010)
struct FTestActionStateMessage2 : public FActionStateMessage
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActionStateMessage
// 0x0008 (0x0018 - 0x0010)
struct FTestActionStateMessage : public FActionStateMessage
{
	int                                                TestProperty;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9TC4[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
// 0x0008 (0x0038 - 0x0030)
struct FTestActorActionStateConstructionInfo : public FActorActionStateConstructionInfo
{
	int                                                IntProp;                                                   // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SQL9[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

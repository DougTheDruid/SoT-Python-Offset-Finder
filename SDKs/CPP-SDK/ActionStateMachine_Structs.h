#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x10
struct ActionStatePriorityRelationship
{
public:
	class UClass*                                                State;                                             // 0x0(0x8)
	char                                                         Priority;                                          // 0x8(0x1)
};


// Size 0x30
struct ActionStateSerialisableData
{
public:
	class UClass*                                                Id;                                                // 0x8(0x8)
	class ScriptStruct*                                          Type;                                              // 0x10(0x8)
};


// Size 0x18
struct TestActionStateMessage
{
public:
	int                                                          TestProperty;                                      // 0x10(0x4)
};


// Size 0x1
struct ActionStateChangeRequestId
{
public:
	char                                                         Raw;                                               // 0x0(0x1)
};


// Size 0x40
struct ActorActionStateConstructionInfo
{
public:
	class Actor*                                                 ActorOwner;                                        // 0x38(0x8)
};


// Size 0x18
struct InnerTestStruct
{
public:
	bool                                                         BoolProp;                                          // 0x0(0x1)
	struct FString                                               StringProp;                                        // 0x8(0x10)
};


// Size 0x38
struct TestActionStateSerialisableData
{
public:
	int                                                          IntProp;                                           // 0x30(0x4)
};


// Size 0x140
struct SerialisedConstructionInfoStore
{
public:
	struct SerialisedActionStateInfo                             SerialisedConstructionInfo;                        // 0x0(0x40)
};


// Size 0x38
struct ActionStateConstructionInfo
{
public:
	class UClass*                                                Id;                                                // 0x0(0x8)
	class UClass*                                                PreviousStateToTransitionBackToId;                 // 0x8(0x8)
	bool                                                         ShouldTransitionBackToPreviousState;               // 0x10(0x1)
	bool                                                         IsTransitionState;                                 // 0x11(0x1)
	class ScriptStruct*                                          Type;                                              // 0x18(0x8)
};


// Size 0x40
struct TestActionStateConstructionInfo
{
public:
	int                                                          IntProp;                                           // 0x38(0x4)
};


// Size 0x48
struct TestActorActionStateConstructionInfo
{
public:
	int                                                          IntProp;                                           // 0x40(0x4)
};


// Size 0x8
struct InnerWithObjTestStruct
{
public:
	class Object*                                                ObjPointer;                                        // 0x0(0x8)
};


// Size 0x10
struct ActionStateMessage
{
public:
	class ScriptStruct*                                          Type;                                              // 0x8(0x8)
};


// Size 0x150
struct ResetStateMachineRpc
{
public:
	struct ActionStateChangeRequestId                            LatestEpochIds;                                    // 0x0(0x1)
	struct ActionStateChangeRequestId                            LatestRequestIds;                                  // 0x5(0x1)
	struct SerialisedConstructionInfoStore                       PerTrackConstructionInfoStore;                     // 0x10(0x140)
};


// Size 0x58
struct TestActionStateConstructionInfoWithObjPointers
{
public:
	class Object*                                                ObjPointer;                                        // 0x38(0x8)
	struct InnerWithObjTestStruct                                Inner;                                             // 0x40(0x8)
	TArray<class Object*>                                        Array;                                             // 0x48(0x10)
};


// Size 0x58
struct TestActionStateConstructionInfoWithInner
{
public:
	float                                                        FloatProp;                                         // 0x38(0x4)
	struct InnerTestStruct                                       InnerStruct;                                       // 0x40(0x18)
};


// Size 0x18
struct ActionStatePriorityList
{
public:
	class UClass*                                                State;                                             // 0x0(0x8)
	TArray<struct ActionStatePriorityRelationship>               Entries;                                           // 0x8(0x10)
};



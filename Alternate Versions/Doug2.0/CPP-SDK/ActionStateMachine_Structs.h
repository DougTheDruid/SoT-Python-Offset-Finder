namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class ActorActionStateConstructionInfo: public None
{
public:
};


// Size 0x28
class ActionStateConstructionInfo: public None
{
public:
	class                                              Id                                                 // 0x0(0x8)
	Class ScriptStruct*                                Type                                               // 0x8(0x8)
};


// Size 0x30
class ActionStateSerialisableData: public None
{
public:
	class                                              Id                                                 // 0x8(0x8)
	Class ScriptStruct*                                Type                                               // 0x10(0x8)
};


// Size 0x10
class ActionStateMessage: public None
{
public:
	Class ScriptStruct*                                Type                                               // 0x8(0x8)
};


// Size 0x1
class ActionStateChangeRequestId: public None
{
public:
	byte                                               Raw                                                // 0x0(0x1)
};


// Size 0x40
class SerialisedActionStateInfo: public None
{
public:
};


// Size 0x18
class SerialisedActionStateMessage: public None
{
public:
};


// Size 0x140
class SerialisedConstructionInfoStore: public None
{
public:
	Struct SerialisedActionStateInfo                   SerialisedConstructionInfo                         // 0x0(0x40)
};


// Size 0x150
class ResetStateMachineRpc: public None
{
public:
	Struct ActionStateChangeRequestId                  LatestEpochIds                                     // 0x0(0x1)
	Struct ActionStateChangeRequestId                  LatestRequestIds                                   // 0x5(0x1)
	Struct SerialisedConstructionInfoStore             PerTrackConstructionInfoStore                      // 0x10(0x140)
};


// Size 0x38
class TestActionStateSerialisableData: public None
{
public:
	int                                                IntProp                                            // 0x30(0x4)
};


// Size 0x18
class ActionStatePriorityList: public None
{
public:
	class                                              State                                              // 0x0(0x8)
	TArray<Struct ActionStatePriorityRelationship>     Entries                                            // 0x8(0x10)
};


// Size 0x10
class ActionStatePriorityRelationship: public None
{
public:
	class                                              State                                              // 0x0(0x8)
	byte                                               Priority                                           // 0x8(0x1)
};


// Size 0xa0
class ActionStatePriorityTable: public None
{
public:
};


// Size 0x48
class TestActionStateConstructionInfoWithObjPointers: public None
{
public:
	Class Object*                                      ObjPointer                                         // 0x28(0x8)
	Struct InnerWithObjTestStruct                      Inner                                              // 0x30(0x8)
	TArray<class Array*>                               Array                                              // 0x38(0x10)
};


// Size 0x8
class InnerWithObjTestStruct: public None
{
public:
	Class Object*                                      ObjPointer                                         // 0x0(0x8)
};


// Size 0x48
class TestActionStateConstructionInfoWithInner: public None
{
public:
	float                                              FloatProp                                          // 0x28(0x4)
	Struct InnerTestStruct                             InnerStruct                                        // 0x30(0x18)
};


// Size 0x18
class InnerTestStruct: public None
{
public:
	bool                                               BoolProp                                           // 0x0(0x1)
	Struct FString                                     StringProp                                         // 0x8(0x10)
};


// Size 0x30
class TestActionStateConstructionInfo: public None
{
public:
	int                                                IntProp                                            // 0x28(0x4)
};


// Size 0x1
class EventWaitingToSpawnActionStateEndedClient: public None
{
public:
};


// Size 0x1
class EventWaitingToSpawnActionStateStartedClient: public None
{
public:
};


// Size 0x1
class EventFirstPersonAnimaticActionStateEndedClient: public None
{
public:
};


// Size 0x30
class NullActionStateConstructionInfo: public None
{
public:
};


// Size 0x10
class TestActionStateMessage2: public None
{
public:
};


// Size 0x18
class TestActionStateMessage: public None
{
public:
	int                                                TestProperty                                       // 0x10(0x4)
};


// Size 0x38
class TestActorActionStateConstructionInfo: public None
{
public:
	int                                                IntProp                                            // 0x30(0x4)
};


}
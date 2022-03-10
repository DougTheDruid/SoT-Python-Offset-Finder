namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class ActionStateId: public Object
{
public:
};


// Size 0x0
class ActionStateCreatorDefinition: public Actor
{
public:
};


// Size 0x18
class TestActionStateCreatorDefinition: public ActionStateCreatorDefinition
{
public:
};


// Size 0x0
class CustomClientValidityActionState2Id: public ActionStateId
{
public:
};


// Size 0x0
class CustomClientValidityActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class NullActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class TestActionStateId: public ActionStateId
{
public:
};


// Size 0x0
class TestActionStateId2: public ActionStateId
{
public:
};


// Size 0x790
class ActionStateMachineComponent: public ActorComponent
{
public:
};


// Size 0x8
class CustomClientValidityCheckCallback: public Object
{
public:
	bool                                               ShouldPassClientValidation                         // 0x28(0x1)
};


// Size 0x0
class ActionStateMachineComponentTestFunctions: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class ActionStateMachineInterface: public Interface
{
public:
};


// Size 0x20
class ActionStatePriorityTableData: public DataAsset
{
public:
	TArray<Struct CreatePriorityTable>                 StateDefaultValue                                  // 0x28(0x10)
	TArray<Struct StateDefaultValue>                   PriorityTableEntry                                 // 0x38(0x10)
};


// Size 0x0
class ActionStatePriorityTableUtility: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0
class SerialisedActionStateConstructionInfoTestFunctions: public BlueprintFunctionLibrary
{
public:
};


}
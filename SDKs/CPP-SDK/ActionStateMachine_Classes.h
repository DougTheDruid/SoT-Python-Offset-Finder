// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActionStateId: public Object
{
public:
};


// Size 0x0 (Full Size[0x3c8] - InheritedSize[0x3c8]
class ActionStateCreatorDefinition: public Actor
{
public:
};


// Size 0x18 (Full Size[0x3e0] - InheritedSize[0x3c8]
class TestActionStateCreatorDefinition: public ActionStateCreatorDefinition
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomClientValidityActionState2Id: public ActionStateId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomClientValidityActionStateId: public ActionStateId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class NullActionStateId: public ActionStateId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TestActionStateId: public ActionStateId
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TestActionStateId2: public ActionStateId
{
public:
};


// Size 0x790 (Full Size[0x858] - InheritedSize[0xc8]
class ActionStateMachineComponent: public ActorComponent
{
public:
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class CustomClientValidityCheckCallback: public Object
{
public:
	bool                                                         ShouldPassClientValidation;                        // 0x28(0x1)
	char                                                         pad0x9_81C0C[0x9];                                 // 0x27(0x9)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActionStateMachineComponentTestFunctions: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActionStateMachineInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class ActionStatePriorityTableData: public DataAsset
{
public:
	TArray<Struct ActionStatePriorityRelationship>               StateDefaultValue;                                 // 0x28(0x10)
	TArray<Struct ActionStatePriorityList>                       PriorityTableEntry;                                // 0x38(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActionStatePriorityTableUtility: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SerialisedActionStateConstructionInfoTestFunctions: public BlueprintFunctionLibrary
{
public:
};


}
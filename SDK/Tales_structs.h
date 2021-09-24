#pragma once

// Name: SoT, Version: 2.3.0


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

// Enum Tales.ETaleQuestStepBeginMode
enum class Tales_ETaleQuestStepBeginMode : uint8_t
{
	ETaleQuestStepBeginMode__Cold  = 0,
	ETaleQuestStepBeginMode__Warm  = 1,
	ETaleQuestStepBeginMode__ETaleQuestStepBeginMode_MAX = 2,

};

// Enum Tales.ETaleQuestStepState
enum class Tales_ETaleQuestStepState : uint8_t
{
	ETaleQuestStepState__Inactive  = 0,
	ETaleQuestStepState__Active    = 1,
	ETaleQuestStepState__PendingCompletion = 2,
	ETaleQuestStepState__Completed = 3,
	ETaleQuestStepState__ETaleQuestStepState_MAX = 4,

};

// Enum Tales.ELostShipmentsIslandTypes
enum class Tales_ELostShipmentsIslandTypes : uint8_t
{
	ELostShipmentsIslandTypes__Feature = 0,
	ELostShipmentsIslandTypes__Resource = 1,
	ELostShipmentsIslandTypes__Seapost = 2,
	ELostShipmentsIslandTypes__Outpost = 3,
	ELostShipmentsIslandTypes__Fort = 4,
	ELostShipmentsIslandTypes__ELostShipmentsIslandTypes_MAX = 5,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tales.QuestVariableAny
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableAny : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableBountyTargetArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableBountyTargetArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestDeliverableItem
// 0x0040
struct FTaleQuestDeliverableItem
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_TJAR[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Icon;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableMerchantItemArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItemArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableMerchantItem
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableMerchantItem : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.IslandTypeWeights
// 0x0014
struct FIslandTypeWeights
{
	float                                              FeatureIslandWeight;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ResourceIslandWeight;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutpostIslandWeight;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SeapostIslandWeight;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FortIslandWeight;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.SplineFootprintPathTool
// 0x0001
struct FSplineFootprintPathTool
{
	unsigned char                                      UnknownData_M2MD[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestCargoRunContractItem
// 0x0018
struct FTaleQuestCargoRunContractItem
{
	class UClass*                                      ItemToCollect;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HDA1[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestDeliveryRequest
// 0x0038
struct FTaleQuestDeliveryRequest
{
	int                                                Id;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J0WZ[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMerchantContractItemDesc                   Item;                                                      // 0x0008(0x0028) (Edit, BlueprintVisible)
	int                                                NumToDeliver;                                              // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumToAllocate;                                             // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TrackedActorData
// 0x0010
struct FTrackedActorData
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1YCA[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.CriticalActorDelegateData
// 0x0048
struct FCriticalActorDelegateData
{
	class AActor*                                      CriticalActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FailureMessage;                                            // 0x0008(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_IJQA[0x20];                                    // 0x0008(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	unsigned char                                      UnknownData_A0IP[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.PhasedActor
// 0x0020
struct FPhasedActor
{
	class AActor*                                      MapActor;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8EAC[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.PhasedItem
// 0x0028
struct FPhasedItem
{
	class AItemProxy*                                  ItemProxy;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AItemInfo*                                   ItemInfo;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Tracked;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_E9TZ[0x17];                                    // 0x0011(0x0017) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.SnapshottedActorData
// 0x0060
struct FSnapshottedActorData
{
	unsigned char                                      Instagator[0x10];                                          // 0x0000(0x0010) UNKNOWN PROPERTY: InterfaceProperty Tales.SnapshottedActorData.Instagator
	struct FGuid                                       SnapshotID;                                                // 0x0010(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActorWasCritical;                                          // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ActorWasTracked;                                           // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9J6X[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       FailureMessage;                                            // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_LW20[0x20];                                    // 0x0022(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.MigrationActionPair
// 0x0010
struct FMigrationActionPair
{
	struct FTaleResourceHandle                         AllocatedResourceHandle;                                   // 0x0000(0x0008)
	class UTaleMigrationAction*                        MigrationAction;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableSetEQSTaleContextValue
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableSetEQSTaleContextValue : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableLinkEQSContext
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableLinkEQSContext : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableItemDescType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescType : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableItemInfo
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemInfo : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariablePrioritisedPrompt
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePrioritisedPrompt : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleActorSpawnParameters
// 0x0003
struct FTaleActorSpawnParameters
{
	bool                                               Tracked;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               GatherForMigration;                                        // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DeferredSpawning;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.StepBountyTargetDesc
// 0x0040
struct FStepBountyTargetDesc
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_OV26[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Portrait;                                                  // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestDesc
// 0x0058 (0x0080 - 0x0028)
struct FTaleQuestDesc : public FQuestDesc
{
	class UTaleQuestStepDesc*                          Root;                                                      // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Definition;                                                // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TaleFailMessage;                                           // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_DK9O[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       TaleFailBannerTag;                                         // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldFireStartTallTaleTrackedObjective;                   // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Development;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8AS7[0x6];                                     // 0x007A(0x0006) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestToggledDefinition
// 0x0010
struct FTaleQuestToggledDefinition
{
	struct FName                                       FeatureToggle;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Definition;                                                // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.CriticalActorWrapper
// 0x0040
struct FCriticalActorWrapper
{
	class AActor*                                      CriticalActor;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9Y7Z[0x38];                                    // 0x0008(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableActorArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableObjectArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableObjectArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableClassArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableClassArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.ParticpantToolGroup
// 0x0020
struct FParticpantToolGroup
{
	unsigned char                                      UnknownData_YTH4[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableRotator
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableRotator : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableActorAssetType
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorAssetType : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableTaleResourceHandle
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTaleResourceHandle : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.ActorSpawnedAutomationEvent
// 0x0008
struct FActorSpawnedAutomationEvent
{
	TWeakObjectPtr<class AActor>                       Actor;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.EventSpawnedTallTaleQuestItem
// 0x0001
struct FEventSpawnedTallTaleQuestItem
{
	unsigned char                                      UnknownData_ZKWR[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestSelectorServiceSeedSetTelemetryEvent
// 0x0004
struct FTaleQuestSelectorServiceSeedSetTelemetryEvent
{
	int                                                Seed;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.StepMerchantItemDesc
// 0x0040
struct FStepMerchantItemDesc
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible)
	unsigned char                                      UnknownData_Y4C5[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	class UTexture*                                    Icon;                                                      // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableActorAssetTypeArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableActorAssetTypeArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableItemDescTypeArray
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableItemDescTypeArray : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariablePageLayout
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariablePageLayout : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.QuestVariableTexture
// 0x0000 (0x0010 - 0x0010)
struct FQuestVariableTexture : public FQuestVariable
{

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Tales.TaleQuestContextInvalidTelemetryEvent
// 0x0010
struct FTaleQuestContextInvalidTelemetryEvent
{
	struct FName                                       StepType;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Tale;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

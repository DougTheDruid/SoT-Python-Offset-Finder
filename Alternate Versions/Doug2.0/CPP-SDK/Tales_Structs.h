namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x38
class TaleQuestDeliveryRequest: public None
{
public:
	int                                                Id                                                 // 0x0(0x4)
	Struct MerchantContractItemDesc                    Item                                               // 0x8(0x28)
	int                                                NumToDeliver                                       // 0x30(0x4)
	int                                                NumToAllocate                                      // 0x34(0x4)
};


// Size 0x3
class TaleActorSpawnParameters: public None
{
public:
	bool                                               Tracked                                            // 0x0(0x1)
	bool                                               GatherForMigration                                 // 0x1(0x1)
	bool                                               DeferredSpawning                                   // 0x2(0x1)
};


// Size 0x14
class IslandTypeWeights: public None
{
public:
	float                                              FeatureIslandWeight                                // 0x0(0x4)
	float                                              ResourceIslandWeight                               // 0x4(0x4)
	float                                              OutpostIslandWeight                                // 0x8(0x4)
	float                                              SeapostIslandWeight                                // 0xc(0x4)
	float                                              FortIslandWeight                                   // 0x10(0x4)
};


// Size 0x20
class QuestVariableAny: public None
{
public:
};


// Size 0x1
class SplineFootprintPathTool: public None
{
public:
};


// Size 0x18
class TaleQuestCargoRunContractItem: public None
{
public:
	class                                              ItemToCollect                                      // 0x0(0x8)
};


// Size 0x80
class TaleQuestDesc: public None
{
public:
	Class TaleQuestStepDesc*                           Root                                               // 0x28(0x8)
	Class Object*                                      Definition                                         // 0x30(0x8)
	Struct FText                                       TaleFailMessage                                    // 0x38(0x38)
	struct FName                                       TaleFailBannerTag                                  // 0x70(0x8)
	bool                                               ShouldFireStartTallTaleTrackedObjective            // 0x78(0x1)
	bool                                               Development                                        // 0x79(0x1)
};


// Size 0x10
class TaleQuestToggledDefinition: public None
{
public:
	struct FName                                       FeatureToggle                                      // 0x0(0x8)
	class                                              Definition                                         // 0x8(0x8)
};


// Size 0x10
class TrackedActorData: public None
{
public:
	Class Actor*                                       Actor                                              // 0x0(0x8)
};


// Size 0x60
class SnapshottedActorData: public None
{
public:
	Struct Guid                                        SnapshotID                                         // 0x10(0x10)
	bool                                               ActorWasCritical                                   // 0x20(0x1)
	bool                                               ActorWasTracked                                    // 0x21(0x1)
	Struct FText                                       FailureMessage                                     // 0x28(0x38)
};


// Size 0x48
class CriticalActorDelegateData: public None
{
public:
	Class Actor*                                       CriticalActor                                      // 0x0(0x8)
	Struct FText                                       FailureMessage                                     // 0x8(0x38)
};


// Size 0x40
class CriticalActorWrapper: public None
{
public:
	Class Actor*                                       CriticalActor                                      // 0x0(0x8)
};


// Size 0x28
class PhasedItem: public None
{
public:
	Class ItemProxy*                                   ItemProxy                                          // 0x0(0x8)
	Class ItemInfo*                                    ItemInfo                                           // 0x8(0x8)
	bool                                               Tracked                                            // 0x10(0x1)
};


// Size 0x20
class PhasedActor: public None
{
public:
	Class Actor*                                       MapActor                                           // 0x0(0x8)
	Class Actor*                                       Actor                                              // 0x8(0x8)
};


// Size 0x20
class QuestVariableCollection: public None
{
public:
};


// Size 0x20
class QuestVariableArray: public None
{
public:
};


// Size 0x20
class QuestVariableActorArray: public None
{
public:
};


// Size 0x20
class QuestVariableObjectArray: public None
{
public:
};


// Size 0x20
class QuestVariableClassArray: public None
{
public:
};


// Size 0x20
class QuestVariableSetEQSTaleContextValue: public None
{
public:
};


// Size 0x20
class QuestVariableLinkEQSContext: public None
{
public:
};


// Size 0x20
class ParticpantToolGroup: public None
{
public:
};


// Size 0x10
class MigrationActionPair: public None
{
public:
	Struct TaleResourceHandle                          AllocatedResourceHandle                            // 0x0(0x8)
	Class TaleMigrationAction*                         MigrationAction                                    // 0x8(0x8)
};


// Size 0x20
class QuestVariableRotator: public None
{
public:
};


// Size 0x20
class QuestVariableActorAssetType: public None
{
public:
};


// Size 0x20
class QuestVariableItemDescType: public None
{
public:
};


// Size 0x20
class QuestVariableItemInfo: public None
{
public:
};


// Size 0x20
class QuestVariablePrioritisedPrompt: public None
{
public:
};


// Size 0x20
class QuestVariableTaleResourceHandle: public None
{
public:
};


// Size 0x8
class ActorSpawnedAutomationEvent: public None
{
public:
};


// Size 0x1
class EventSpawnedTallTaleQuestItem: public None
{
public:
};


// Size 0x4
class TaleQuestSelectorServiceSeedSetTelemetryEvent: public None
{
public:
	int                                                Seed                                               // 0x0(0x4)
};


// Size 0x18
class PlaySequencerAutomationEvent: public None
{
public:
};


// Size 0x1
class EventModalInteractionStateChanged: public None
{
public:
	bool                                               IsInteractionBlocked                               // 0x0(0x1)
};


// Size 0x20
class ToggleModalInteractionNetworkEvent: public None
{
public:
	Class Actor*                                       TargetActor                                        // 0x10(0x8)
	bool                                               InteractionBlocked                                 // 0x18(0x1)
};


// Size 0x20
class QuestVariableMerchantItemArray: public None
{
public:
};


// Size 0x20
class QuestVariableMerchantItem: public None
{
public:
};


// Size 0x40
class StepMerchantItemDesc: public None
{
public:
	Struct FText                                       Name                                               // 0x0(0x38)
	Class Texture*                                     Icon                                               // 0x38(0x8)
};


// Size 0x20
class QuestVariableActorAssetTypeArray: public None
{
public:
};


// Size 0x20
class QuestVariableItemDescTypeArray: public None
{
public:
};


// Size 0x20
class QuestVariablePageLayout: public None
{
public:
};


// Size 0x20
class QuestVariableTexture: public None
{
public:
};


// Size 0x10
class TaleQuestContextInvalidTelemetryEvent: public None
{
public:
	struct FName                                       StepType                                           // 0x0(0x8)
	struct FName                                       Tale                                               // 0x8(0x8)
};


// Size 0x40
class TaleQuestDeliverableItem: public None
{
public:
	Struct FText                                       Name                                               // 0x0(0x38)
	Class Texture*                                     Icon                                               // 0x38(0x8)
};


// Size 0x20
class QuestVariableBountyTargetArray: public None
{
public:
};


// Size 0x40
class StepBountyTargetDesc: public None
{
public:
	Struct FText                                       Name                                               // 0x0(0x38)
	Class Texture*                                     Portrait                                           // 0x38(0x8)
};


}
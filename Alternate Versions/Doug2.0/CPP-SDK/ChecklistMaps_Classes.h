namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x8
class ChecklistActionData: public Object
{
public:
	int                                                NumRequiredActions                                 // 0x28(0x4)
	byte                                               ActionType                                         // 0x2c(0x1)
};


// Size 0x20
class DeliverBootyChecklistActionData: public ChecklistActionData
{
public:
	TArray<AssetClass TargetAIClasses>                 TargetBootyTypes                                   // 0x30(0x10)
	TArray<Class TargetBootyTypes>                     TargetCompanies                                    // 0x40(0x10)
};


// Size 0x10
class KillActorChecklistActionData: public ChecklistActionData
{
public:
	TArray<Class EventsSource>                         TargetAIClasses                                    // 0x30(0x10)
};


// Size 0x8
class NamedChecklistEventActionData: public ChecklistActionData
{
public:
	struct FName                                       Event                                              // 0x30(0x8)
};


// Size 0x10
class NPCInteractionChecklistActionData: public ChecklistActionData
{
public:
	TArray<Struct ChecklistItems>                      TargetNPCIds                                       // 0x30(0x10)
};


// Size 0x10
class ChecklistItemsDataAsset: public DataAsset
{
public:
	TArray<Struct Afternote>                           ChecklistItems                                     // 0x28(0x10)
};


// Size 0x160
class ChecklistMap: public TreasureMap
{
public:
	int                                                CanvasWidth                                        // 0x7e0(0x4)
	int                                                CanvasHeight                                       // 0x7e4(0x4)
	Class Font*                                        Font                                               // 0x7e8(0x8)
	float                                              FontScale                                          // 0x7f0(0x4)
	float                                              FontLineSpacingScale                               // 0x7f4(0x4)
	Class ChecklistMapLayout*                          ChecklistMapLayout                                 // 0x800(0x8)
	Struct ChecklistMapContents                        Contents                                           // 0x808(0xe8)
};


// Size 0x0
class ChecklistMapCollectionInterface: public Interface
{
public:
};


// Size 0x78
class ChecklistMapCompletionComponent: public ActorComponent
{
public:
	Class ChecklistActionData*                         ActionData                                         // 0xc8(0x8)
};


// Size 0x20
class ChecklistMapSettings: public DeveloperSettings
{
public:
	Struct StringAssetReference                        ChecklistMapItemDescClass                          // 0x38(0x10)
	TArray<Struct FName>                               ChecklistEvents                                    // 0x48(0x10)
};


}
// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x128 (Full Size[0x1f0] - InheritedSize[0xc8]
class EnchantedCompassProximityAnnouncementComponent: public ActorComponent
{
public:
	Class WwiseEvent*                                            StartAnnouncingEvent;                              // 0xc8(0x8)
	Class WwiseEvent*                                            StopAnnouncingEvent;                               // 0xd0(0x8)
	float                                                        MaxFrequencyDistanceSquared;                       // 0xd8(0x4)
	char                                                         pad0x4_ZWF9F[0x4];                                 // 0xdc(0x4)
	bool                                                         IsSettingEnabled;                                  // 0x120(0x1)
	char                                                         pad0xd1_2TOG2[0xd1];                               // 0x11f(0xd1)
};


// Size 0x30 (Full Size[0x8b0] - InheritedSize[0x880]
class MultiTargetEnchantedCompass: public Compass
{
public:
	TArray<Struct Vector>                                        Locations;                                         // 0x878(0x10)
	TArray<Struct Guid>                                          LocationIds;                                       // 0x888(0x10)
	Class InventoryItemComponent*                                InventoryItem;                                     // 0x898(0x8)
	Class EnchantedCompassProximityAnnouncementComponent*        ProximityAnnouncementComponent;                    // 0x8a0(0x8)
	char                                                         pad0x18_OMENY[0x18];                               // 0x8a6(0x18)
};


// Size 0x0 (Full Size[0x8b0] - InheritedSize[0x8b0]
class PrototypeMultiTargetEnchantedCompass: public MultiTargetEnchantedCompass
{
public:
};


// Size 0x8 (Full Size[0xa0] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassAddTrackedLocationStep: public TaleQuestStep
{
public:
	Class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                              // 0x98(0x8)
};


// Size 0x60 (Full Size[0xe0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassAddTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableVector                                   Location;                                          // 0x80(0x30)
	Struct QuestVariableGuid                                     TargetID;                                          // 0xb0(0x30)
};


// Size 0x10 (Full Size[0xa8] - InheritedSize[0x98]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStep: public TaleQuestStep
{
public:
};


// Size 0x30 (Full Size[0xb0] - InheritedSize[0x80]
class TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc: public TaleQuestStepDesc
{
public:
	Struct QuestVariableGuid                                     TargetID;                                          // 0x80(0x30)
};


// Size 0x20 (Full Size[0x190] - InheritedSize[0x170]
class TaleQuestMultiTargetCompassService: public TaleQuestToolService
{
public:
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class TaleQuestMultiTargetCompassServiceDesc: public TaleQuestToolServiceDesc
{
public:
	class                                                        CompassDesc;                                       // 0x30(0x8)
};


// Size 0x60 (Full Size[0xf8] - InheritedSize[0x98]
class TaleQuestSetCompassTargetToTargetStep: public TaleQuestStep
{
public:
};


// Size 0x8 (Full Size[0x88] - InheritedSize[0x80]
class TaleQuestSetCompassTargetBaseStepDesc: public TaleQuestStepDesc
{
public:
	byte                                                         TargetUpdateReason;                                // 0x80(0x1)
	char                                                         pad0x9_98ZCP[0x9];                                 // 0x7f(0x9)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToActorStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableActor                                    TargetActor;                                       // 0x88(0x30)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class TaleQuestSetCompassTargetToPointStepDesc: public TaleQuestSetCompassTargetBaseStepDesc
{
public:
	Struct QuestVariableOrientedPoint                            TargetPoint;                                       // 0x88(0x30)
};


}
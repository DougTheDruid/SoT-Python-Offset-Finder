// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class ModalInteraction: public Actor
{
public:
	char                                                         pad0x10_EMEQX[0x10];                               // 0x3c8(0x10)
};


// Size 0x70 (Full Size[0x138] - InheritedSize[0xc8]
class InteractableComponent: public ActorComponent
{
public:
	char                                                         pad0x8_L74HC[0x8];                                 // 0xc8(0x8)
	struct FName                                                 FeatureFlag;                                       // 0xd0(0x8)
	struct Vector                                                BoxExtent;                                         // 0xd8(0xc)
	struct Vector                                                BoxOrigin;                                         // 0xe4(0xc)
	struct Rotator                                               BoxRotation;                                       // 0xf0(0xc)
	bool                                                         MayBeGrouped;                                      // 0xfc(0x1)
	bool                                                         ProxyForActorInteraction;                          // 0xfc(0x1)
	bool                                                         RequiresFacingFront;                               // 0xfc(0x1)
	bool                                                         RequiresNotAirborne;                               // 0xfc(0x1)
	bool                                                         RequiresNotSwimming;                               // 0xfc(0x1)
	char                                                         pad0x3_CEZAX[0x3];                                 // 0xfd(0x3)
	float                                                        InteractionRadius;                                 // 0x100(0x4)
	char                                                         pad0x4_JHZJ4[0x4];                                 // 0x104(0x4)
	TArray<class InteractionPrerequisiteBase*>                   InteractionPrerequisites;                          // 0x108(0x10)
	class InteractableArea*                                      InteractableArea;                                  // 0x118(0x8)
	byte                                                         CurrentInteractionState;                           // 0x120(0x1)
	char                                                         pad0x17_K5UKP[0x17];                               // 0x121(0x17)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionValidatorSetterInterface: public Interface
{
public:
};


// Size 0xd0 (Full Size[0x6c0] - InheritedSize[0x5f0]
class CharacterInteractionComponent: public BoxComponent
{
public:
	class InteractableArea*                                      CurrentOptimalInteractable;                        // 0x5f0(0x8)
	char                                                         pad0xc8_LB908[0xc8];                               // 0x5f8(0xc8)
};


// Size 0x0 (Full Size[0xc8] - InheritedSize[0xc8]
class GroupedInteractableAreaComponent: public ActorComponent
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class InteractableArea: public Object
{
public:
	struct BoxSphereBounds                                       Bounds;                                            // 0x28(0x1c)
	struct FName                                                 Name;                                              // 0x44(0x8)
	char                                                         pad0x4_6WCZG[0x4];                                 // 0x4c(0x4)
	class Object*                                                Interactable;                                      // 0x50(0x8)
	class Actor*                                                 Parent;                                            // 0x58(0x8)
	char                                                         pad0x10_GOUQ3[0x10];                               // 0x60(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableBlueprintFunctionLibrary: public BlueprintFunctionLibrary
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableIdentifierInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractableServiceInterface: public Interface
{
public:
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class InteractableService: public Object
{
public:
	char                                                         pad0x10_SDMZT[0x10];                               // 0x28(0x10)
	TArray<class InteractableArea*>                              InteractableAreas;                                 // 0x38(0x10)
	char                                                         pad0x28_F89MX[0x28];                               // 0x48(0x28)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionPreventionInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class InteractionPreventionComponent: public ActorComponent
{
public:
	char                                                         pad0x8_N98VE[0x8];                                 // 0xc8(0x8)
	TArray<class Actor*>                                         ActorsToPreventInteractingWith;                    // 0xd0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractionValidatorOwnerInterface: public Interface
{
public:
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class InteractorInterface: public Interface
{
public:
};


// Size 0x8 (Full Size[0xd0] - InheritedSize[0xc8]
class InteractorComponent: public ActorComponent
{
public:
	char                                                         pad0x8_TEHJP[0x8];                                 // 0xc8(0x8)
};


// Size 0xb0 (Full Size[0x690] - InheritedSize[0x5e0]
class MockActorWithCharacterInteractionComponent: public Character
{
public:
	char                                                         pad0x8_NDZDI[0x8];                                 // 0x5e0(0x8)
	class CharacterInteractionComponent*                         CharacterInteractionComponent;                     // 0x5e8(0x8)
	char                                                         pad0xa0_QSML3[0xa0];                               // 0x5f0(0xa0)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class MockInteractableService: public Object
{
public:
	char                                                         pad0x18_597TR[0x18];                               // 0x28(0x18)
};


// Size 0x30 (Full Size[0x3f8] - InheritedSize[0x3c8]
class MockInteractorActor: public Actor
{
public:
	char                                                         pad0x8_TOZIO[0x8];                                 // 0x3c8(0x8)
	class Object*                                                FocusedInteractable;                               // 0x3d0(0x8)
	class Object*                                                InteractedObject;                                  // 0x3d8(0x8)
	class UClass*                                                InteractNotificationType;                          // 0x3e0(0x8)
	TArray<class Class*>                                         ValidInteractNotificationIds;                      // 0x3e8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerInteractionTrackerInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class PlayerInteractionTrackerComponent: public ActorComponent
{
public:
	char                                                         pad0x8_RDUDU[0x8];                                 // 0xc8(0x8)
	TArray<struct UniqueNetIdRepl>                               InteractedPlayers;                                 // 0xd0(0x10)
	char                                                         pad0x10_XY3ZB[0x10];                               // 0xe0(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class SelfInteractionInterface: public Interface
{
public:
};


}
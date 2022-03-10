namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x20
class BP_ProxyIngestible_C: public StaticMeshFloatingItemProxy
{
public:
	Class ConfigurableBuryableItemComponent*           ConfigurableBuryableItem                           // 0x790(0x8)
	Class TrackedOwnerComponent*                       TrackedOwner                                       // 0x798(0x8)
	Class MaterialManipulationComponent*               MaterialManipulation                               // 0x7a0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7a8(0x8)
};


// Size 0x8
class BP_ProxyIngestible_Retractable_C: public BP_ProxyIngestible_C
{
public:
	Class RetractableItemProxyComponent*               RetractableItemProxy                               // 0x7b0(0x8)
};


}
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0
class BP_FireworkCrate_Animals_Desc_C: public BootyItemDesc
{
public:
};


// Size 0x10
class BP_FireworkCrate_Animals_ItemInfo_C: public AlwaysCashInItemInfo
{
public:
	Class SpecificItemsCrateFillerComponent*           SpecificItemsCrateFiller                           // 0x708(0x8)
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x710(0x8)
};


// Size 0x18
class BP_FireworkCrate_Animals_Proxy_C: public StaticMerchantCrateItemProxy
{
public:
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7d8(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x7e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7e8(0x8)
};


// Size 0x38
class BP_FireworkCrate_Animals_C: public StaticMerchantCrate
{
public:
	Class MaterialManipulationComponent*               MaterialManipulation                               // 0x7e0(0x8)
	Class BoxComponent*                                HitVolume                                          // 0x7e8(0x8)
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7f0(0x8)
	Class PickupableComponent*                         Pickupable                                         // 0x7f8(0x8)
	Class UsableWieldableComponent*                    UsableWieldable                                    // 0x800(0x8)
	Class WieldableInteractableComponent*              WieldableInteractable                              // 0x808(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x810(0x8)
};


}
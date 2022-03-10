namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x30
class BP_MerchantCrate_AnyItemCrate_Wieldable_C: public StaticStorageCrateWieldable
{
public:
	Class BoxComponent*                                HitVolume                                          // 0x790(0x8)
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x798(0x8)
	Class PickupableComponent*                         Pickupable                                         // 0x7a0(0x8)
	Class UsableWieldableComponent*                    UsableWieldable                                    // 0x7a8(0x8)
	Class WieldableInteractableComponent*              WieldableInteractable                              // 0x7b0(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x7b8(0x8)
};


// Size 0x18
class BP_MerchantCrate_AnyItemCrate_Proxy_C: public StorageCrateItemProxy
{
public:
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x798(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x7a0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7a8(0x8)
};


// Size 0x18
class BP_MerchantCrate_BananaCrateProxy_C: public StaticMerchantCrateItemProxy
{
public:
	BlueprintGeneratedClass BP_MerchantCrate_BananaCrate_StorageContainerComponent_C* BP_MerchantCrate_BananaCrate_StorageContainerComponent // 0x7d8(0x8)
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7e8(0x8)
};


// Size 0x38
class BP_MerchantCrate_BananaCrate_C: public StaticMerchantCrate
{
public:
	Class MaterialManipulationComponent*               MaterialManipulation                               // 0x7e0(0x8)
	BlueprintGeneratedClass BP_MerchantCrate_BananaCrate_StorageContainerComponent_C* BP_MerchantCrate_BananaCrate_StorageContainerComponent // 0x7e8(0x8)
	Class BoxComponent*                                HitVolume                                          // 0x7f0(0x8)
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7f8(0x8)
	Class PickupableComponent*                         Pickupable                                         // 0x800(0x8)
	Class UsableWieldableComponent*                    UsableWieldable                                    // 0x808(0x8)
	Class WieldableInteractableComponent*              WieldableInteractable                              // 0x810(0x8)
};


// Size 0x0
class BP_MerchantCrate_BananaCrate_StorageContainerComponent_C: public StorageContainerComponent
{
public:
};


// Size 0x18
class BP_MerchantCrate_WoodCrateProxy_C: public StaticMerchantCrateItemProxy
{
public:
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7d8(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x7e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7e8(0x8)
};


// Size 0x38
class BP_MerchantCrate_WoodCrate_C: public StaticMerchantCrate
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


// Size 0x18
class BP_MerchantCrate_CannonballCrateProxy_C: public StaticMerchantCrateItemProxy
{
public:
	Class AddOpenContainerActionRuleComponent*         AddOpenContainerActionRule                         // 0x7d8(0x8)
	Class StorageContainerComponent*                   StorageContainer                                   // 0x7e0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7e8(0x8)
};


// Size 0x38
class BP_MerchantCrate_CannonballCrate_C: public StaticMerchantCrate
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
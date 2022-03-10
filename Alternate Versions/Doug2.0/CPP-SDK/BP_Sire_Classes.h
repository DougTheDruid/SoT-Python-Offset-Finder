namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class BP_SirenTrident_Wieldable_C: public DoubleActionItemWithAmmo
{
public:
	Class AimSensitivityComponent*                     AimSensitivity                                     // 0x970(0x8)
	Class AmmoEffectsComponent*                        AmmoEffects                                        // 0x978(0x8)
	Class StaticStashedMeshMemoryConstraintComponent*  StaticStashedMeshMemoryConstraint                  // 0x980(0x8)
	Class AmmoTransferComponent*                       AmmoTransfer                                       // 0x988(0x8)
	Class ItemActionComponent*                         AimDownSightAction                                 // 0x990(0x8)
	Class SirenTridentShotActionComponent*             SirenTridentShotAction                             // 0x998(0x8)
	Class LaunchableAttachPointComponent*              LaunchableAttachPoint                              // 0x9a0(0x8)
	Class PostProcessComponent*                        PostProcess                                        // 0x9a8(0x8)
};


// Size 0x8
class BP_SirenTrident_ItemInfo_C: public NonStorableItemInfo
{
public:
	Class SceneComponent*                              DefaultSceneRoot                                   // 0x500(0x8)
};


// Size 0x34
class BP_SirenTrident_Proxy_C: public StaticSimpleBootyItemProxy
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x7b8(0x8)
	Class GlintComponent*                              Glint                                              // 0x7c0(0x8)
	Class AmmoEffectsComponent*                        AmmoEffects                                        // 0x7c8(0x8)
	Class AmmoTransferComponent*                       AmmoTransfer                                       // 0x7d0(0x8)
	Class InteractableComponent*                       Interactable                                       // 0x7d8(0x8)
	Struct Vector                                      LocalInteractionOffset                             // 0x7e0(0xc)
};


// Size 0x0
class BP_SirenTrident_ItemDesc_C: public ItemWithoutIconsDesc
{
public:
};


}
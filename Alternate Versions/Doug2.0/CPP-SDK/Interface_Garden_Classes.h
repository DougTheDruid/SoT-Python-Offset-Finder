// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x1
class Interface_Garden_C: public ThirdPersonMesh
{
public:
	Class PrimitiveComponent*                                    ThirdPersonMesh;                                   // 0x430(0x8)
	Class ActionRulesComponent*                                  ActionRulesComponent;                              // 0x438(0x8)
	class                                                        AnimationKey;                                      // 0x440(0x8)
	Struct ObjectMessagingDispatcher                             MessagingDispatcher;                               // 0x448(0xa0)
	Struct Transform                                             AnimationOffset;                                   // 0x4f0(0x30)
	Class WwiseEvent*                                            EquipSfx;                                          // 0x520(0x8)
	Class WwiseEvent*                                            UnequipSfx;                                        // 0x528(0x8)
	Class WwiseEvent*                                            WielderLandedJumpSfx;                              // 0x530(0x8)
	Class WwiseEvent*                                            WielderFootstepLayerOneshot;                       // 0x538(0x8)
	struct FName                                                 PlayerWalkSpeedRtpc;                               // 0x540(0x8)
	Class WwiseEvent*                                            FirstTimeEquipSfx;                                 // 0x548(0x8)
	bool                                                         ForceUnequipSfx;                                   // 0x550(0x1)
	byte                                                         ItemSize;                                          // 0x551(0x1)
	Struct DetailAppearenceDesc                                  DetailAppearence;                                  // 0x558(0x30)
	bool                                                         PropagateVisibilityToChildren;                     // 0x588(0x1)
	struct FName                                                 AINoiseTag;                                        // 0x58c(0x8)
	TArray<Struct FName>                                         ThirdPersonExtraMeshNames;                         // 0x598(0x10)
	TArray<Struct FName>                                         StashedExtraMeshNames;                             // 0x5a8(0x10)
	Class MeshComponent*                                         StashedMeshComponent;                              // 0x5b8(0x8)
	struct FName                                                 StashedMeshAttachSocket;                           // 0x5c0(0x8)
	struct FName                                                 ServerWieldAttachSocket;                           // 0x5c8(0x8)
	Class PhrasesRadialDataAsset*                                Phrases;                                           // 0x5d0(0x8)
	Class Object*                                                CachedFirstPersonProxyMesh;                        // 0x5d8(0x8)
	Class Object*                                                CachedThirdPersonProxyMesh;                        // 0x5e0(0x8)
	class                                                        ItemCategory;                                      // 0x710(0x8)
	Class ItemInfo*                                              ItemInfo;                                          // 0x718(0x8)
	Class InterpolatingItem*                                     InterpolatingItem;                                 // 0x720(0x8)
	Class WieldableItemVfxComponent*                             WieldableItemVfxComponent;                         // 0x748(0x8)
	TArray<class ThirdPersonExtraMeshes*>                        ThirdPersonExtraMeshes;                            // 0x750(0x10)
	TArray<class StashedExtraMeshes*>                            StashedExtraMeshes;                                // 0x760(0x10)
	bool                                                         OfferingEnabled;                                   // 0x789(0x1)
};


}
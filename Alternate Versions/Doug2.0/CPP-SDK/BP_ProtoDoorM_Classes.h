namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x41
class BP_ProtoDoorMechanism_GalleonSide_C: public DoorMechanism
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x580(0x8)
	Class ArrowComponent*                              OpenJumpToLocation                                 // 0x588(0x8)
	Class ArrowComponent*                              ClosedJumpToLocation                               // 0x590(0x8)
	Class ArrowComponent*                              OpenKnockbackDirection                             // 0x598(0x8)
	Class ArrowComponent*                              ClosedKnockbackDirection                           // 0x5a0(0x8)
	Class ChildActorComponent*                         InteractionPoint                                   // 0x5a8(0x8)
	Class BoxComponent*                                OpenVolume                                         // 0x5b0(0x8)
	Class BoxComponent*                                ClosedVolume                                       // 0x5b8(0x8)
	bool                                               EnableJumpToLocation                               // 0x5c0(0x1)
};


// Size 0x41
class BP_ProtoDoorMechanism_GalleonFront_C: public DoorMechanism
{
public:
	Struct PointerToUberGraphFrame                     UberGraphFrame                                     // 0x580(0x8)
	Class ArrowComponent*                              OpenJumpToLocation                                 // 0x588(0x8)
	Class ArrowComponent*                              ClosedJumpToLocation                               // 0x590(0x8)
	Class ArrowComponent*                              OpenKnockbackDirection                             // 0x598(0x8)
	Class ArrowComponent*                              ClosedKnockbackDirection                           // 0x5a0(0x8)
	Class ChildActorComponent*                         InteractionPoint                                   // 0x5a8(0x8)
	Class BoxComponent*                                OpenVolume                                         // 0x5b0(0x8)
	Class BoxComponent*                                ClosedVolume                                       // 0x5b8(0x8)
	bool                                               EnableJumpToLocation                               // 0x5c0(0x1)
};


}
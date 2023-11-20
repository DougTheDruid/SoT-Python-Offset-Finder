// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class DrawDebugServiceInterface: public Interface
{
public:
};


// Size 0xf8 (Full Size[0x4c0] - InheritedSize[0x3c8]
class DrawDebugService: public Actor
{
public:
	char                                                         pad0x8_WW9G7[0x8];                                 // 0x3c8(0x8)
	TArray<struct DrawDebugItemMessage>                          MessagesReplicated;                                // 0x3d0(0x10)
	TArray<struct DrawDebugItemSphere>                           SpheresReplicated;                                 // 0x3e0(0x10)
	TArray<struct DrawDebugItemBox>                              BoxesReplicated;                                   // 0x3f0(0x10)
	TArray<struct DrawDebugItemCapsule>                          CapsulesReplicated;                                // 0x400(0x10)
	TArray<struct DrawDebugItemLine>                             LinesReplicated;                                   // 0x410(0x10)
	TArray<struct DrawDebugItemSector>                           SectorsReplicated;                                 // 0x420(0x10)
	TArray<struct DrawDebugItemString>                           StringsReplicated;                                 // 0x430(0x10)
	bool                                                         IsDrawDebugActive;                                 // 0x440(0x1)
	char                                                         pad0x7f_SZGD1[0x7f];                               // 0x441(0x7f)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class ShippingDebugActorSphereCollection: public Actor
{
public:
	TArray<struct SphereData>                                    SphereList;                                        // 0x3c8(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class TickableDebugDrawingServiceInterface: public Interface
{
public:
};


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class Videprinter: public Actor
{
public:
	TArray<Str OutputRingBuffer>                                 OutputRingBuffer;                                  // 0x3c8(0x10)
	int                                                          AddAt;                                             // 0x3d8(0x4)
	struct FName                                                 Id;                                                // 0x3dc(0x8)
	char                                                         pad0xc_WQJVP[0xc];                                 // 0x3e4(0xc)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class VideprinterServiceInterface: public Interface
{
public:
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class VideprinterService: public Object
{
public:
	char                                                         pad0x8_TTGCE[0x8];                                 // 0x28(0x8)
	TArray<class Videprinter*>                                   Videprinters;                                      // 0x30(0x10)
};


}
#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "AthenaDebug_Structs.h"


// Size 0x28 (Full Size[0x3f0] - InheritedSize[0x3c8]
class Videprinter: public Actor
{
public:
	TArray<String>                                               OutputRingBuffer;                                  // 0x3c8(0x10)
	int                                                          AddAt;                                             // 0x3d8(0x4)
	struct FName                                                 Id;                                                // 0x3dc(0x8)
};


// Size 0x18 (Full Size[0x40] - InheritedSize[0x28]
class VideprinterService: public Object
{
public:
	TArray<class Videprinter*>                                   Videprinters;                                      // 0x30(0x10)
};


// Size 0x10 (Full Size[0x3d8] - InheritedSize[0x3c8]
class ShippingDebugActorSphereCollection: public Actor
{
public:
	TArray<struct SphereData>                                    SphereList;                                        // 0x3c8(0x10)
};


// Size 0x118 (Full Size[0x4e0] - InheritedSize[0x3c8]
class DrawDebugService: public Actor
{
public:
	TArray<struct DrawDebugItemMessage>                          MessagesReplicated;                                // 0x3d0(0x10)
	TArray<struct DrawDebugItemSphere>                           SpheresReplicated;                                 // 0x3e0(0x10)
	TArray<struct DrawDebugItemCircle>                           CirclesReplicated;                                 // 0x3f0(0x10)
	TArray<struct DrawDebugItemBox>                              BoxesReplicated;                                   // 0x400(0x10)
	TArray<struct DrawDebugItemCapsule>                          CapsulesReplicated;                                // 0x410(0x10)
	TArray<struct DrawDebugItemLine>                             LinesReplicated;                                   // 0x420(0x10)
	TArray<struct DrawDebugItemSector>                           SectorsReplicated;                                 // 0x430(0x10)
	TArray<struct DrawDebugItemString>                           StringsReplicated;                                 // 0x440(0x10)
	bool                                                         IsDrawDebugActive;                                 // 0x450(0x1)
};



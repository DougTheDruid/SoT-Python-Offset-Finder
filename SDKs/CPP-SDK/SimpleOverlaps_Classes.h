#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "SimpleOverlaps_Structs.h"


// Size 0xd8 (Full Size[0x4a0] - InheritedSize[0x3c8]
class SimpleOverlapZone: public Actor
{
public:
	multicastinlinedelegate                                      Blueprint_OnStartOverlap;                          // 0x470(0x10)
	multicastinlinedelegate                                      Blueprint_OnStopOverlap;                           // 0x480(0x10)
	class BoxComponent*                                          CollisionMesh;                                     // 0x490(0x8)
	bool                                                         StartActive;                                       // 0x498(0x1)
};



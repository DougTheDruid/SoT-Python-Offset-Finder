#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ActorOfInterestFramework_Structs.h"


// Size 0x20 (Full Size[0xe8] - InheritedSize[0xc8]
class ActorOfInterestComponent: public ActorComponent
{
public:
	class UClass*                                                ActorOfInterestId;                                 // 0xc8(0x8)
};


// Size 0x100 (Full Size[0x4c8] - InheritedSize[0x3c8]
class ActorOfInterestService: public Actor
{
public:
	map                                                          ActorsOfInterest;                                  // 0x3d8(0x50)
	struct ObjectMessagingDispatcher                             EventDispatcher;                                   // 0x428(0xa0)
};



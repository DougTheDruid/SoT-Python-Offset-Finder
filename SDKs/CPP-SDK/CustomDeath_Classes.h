#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "CustomDeath_Structs.h"


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomDeathInterface: public Interface
{
public:
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class CustomDeathService: public Actor
{
public:
	char                                                         pad0x38_TJV2K[0x38];                               // 0x3c8(0x38)
	TArray<class PlayerStart*>                                   CustomPlayerStarts;                                // 0x400(0x10)
	char                                                         pad0x50_BXQCR[0x50];                               // 0x410(0x50)
};



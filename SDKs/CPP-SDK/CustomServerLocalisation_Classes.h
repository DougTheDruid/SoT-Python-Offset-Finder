#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "CustomServerLocalisation_Structs.h"


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class CustomServerLocalisationService: public Actor
{
public:
	char                                                         pad0x8_539RN[0x8];                                 // 0x3c8(0x8)
	TArray<struct CustomServerLocalisationData>                  LocalisationData;                                  // 0x3d0(0x10)
	char                                                         pad0x80_KOQUH[0x80];                               // 0x3e0(0x80)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class CustomServerLocalisationInterface: public Interface
{
public:
};



#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ConditionalFramework_Structs.h"


// Size 0x20 (Full Size[0x48] - InheritedSize[0x28]
class ConditionRootAsset: public DataAsset
{
public:
	struct ConditionInstance                                     ConditionRoot;                                     // 0x28(0x20)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ActorSpecifierInterface: public Interface
{
public:
};


// Size 0x10 (Full Size[0xd8] - InheritedSize[0xc8]
class ActorSpecifierComponent: public ActorComponent
{
public:
	char                                                         pad0x8_DEC8X[0x8];                                 // 0xc8(0x8)
	class Actor*                                                 SpecifiedActor;                                    // 0xd0(0x8)
};



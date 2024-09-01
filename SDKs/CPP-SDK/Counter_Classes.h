#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "Counter_Structs.h"


// Size 0x28 (Full Size[0xf0] - InheritedSize[0xc8]
class CountMaterialDisplayComponent: public ActorComponent
{
public:
	struct FName                                                 ScalarParameterNameToOverride;                     // 0xc8(0x8)
	class UClass*                                                CountType;                                         // 0xd0(0x8)
	float                                                        MaximumCountForDynamicMaterialParameterAlphaValue; // 0xd8(0x4)
	TArray<class MaterialInstanceDynamic*>                       OverridenMaterials;                                // 0xe0(0x10)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class CountType: public Object
{
public:
	struct FName                                                 UniqueTextIdentifier;                              // 0x28(0x8)
};


// Size 0x18 (Full Size[0xe0] - InheritedSize[0xc8]
class CountHolderComponent: public ActorComponent
{
public:
	TArray<struct CountHolder>                                   CountHolders;                                      // 0xd0(0x10)
};


// Size 0x10 (Full Size[0x40] - InheritedSize[0x30]
class IsCountAmountMetStatCondition: public TargetedStatCondition
{
public:
	int                                                          CountAmount;                                       // 0x30(0x4)
	class UClass*                                                CountType;                                         // 0x38(0x8)
};



#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "ChecklistMaps_Structs.h"


// Size 0x150 (Full Size[0x980] - InheritedSize[0x830]
class ChecklistMap: public TreasureMap
{
public:
	int                                                          CanvasWidth;                                       // 0x828(0x4)
	int                                                          CanvasHeight;                                      // 0x82c(0x4)
	class Font*                                                  Font;                                              // 0x830(0x8)
	float                                                        FontScale;                                         // 0x838(0x4)
	float                                                        FontLineSpacingScale;                              // 0x83c(0x4)
	char                                                         pad0x8_HQC9B[0x8];                                 // 0x840(0x8)
	class ChecklistMapLayout*                                    ChecklistMapLayout;                                // 0x848(0x8)
	struct ChecklistMapContents                                  Contents;                                          // 0x850(0xe8)
	char                                                         pad0x48_50K9B[0x48];                               // 0x938(0x48)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class ChecklistMapCollectionInterface: public Interface
{
public:
};


// Size 0x20 (Full Size[0x58] - InheritedSize[0x38]
class ChecklistMapSettings: public DeveloperSettings
{
public:
	struct StringAssetReference                                  ChecklistMapItemDescClass;                         // 0x38(0x10)
	TArray<struct Name>                                          ChecklistEvents;                                   // 0x48(0x10)
};


// Size 0x88 (Full Size[0x150] - InheritedSize[0xc8]
class ChecklistMapCompletionComponent: public ActorComponent
{
public:
	class ChecklistActionData*                                   ActionData;                                        // 0xc8(0x8)
	char                                                         pad0x80_XKXPL[0x80];                               // 0xd0(0x80)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ChecklistActionData: public Object
{
public:
	int                                                          NumRequiredActions;                                // 0x28(0x4)
	char                                                         ActionType;                                        // 0x2c(0x1)
	char                                                         pad0x3_WDXEX[0x3];                                 // 0x2d(0x3)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class ChecklistItemsDataAsset: public DataAsset
{
public:
	TArray<struct ChecklistItem>                                 ChecklistItems;                                    // 0x28(0x10)
};


// Size 0x8 (Full Size[0x38] - InheritedSize[0x30]
class NamedChecklistEventActionData: public ChecklistActionData
{
public:
	struct FName                                                 Event;                                             // 0x30(0x8)
};


// Size 0x10 (Full Size[0x40] - InheritedSize[0x30]
class KillActorChecklistActionData: public ChecklistActionData
{
public:
	TArray<class Class*>                                         TargetAIClasses;                                   // 0x30(0x10)
};


// Size 0x10 (Full Size[0x40] - InheritedSize[0x30]
class NPCInteractionChecklistActionData: public ChecklistActionData
{
public:
	TArray<struct Guid>                                          TargetNPCIds;                                      // 0x30(0x10)
};


// Size 0x20 (Full Size[0x50] - InheritedSize[0x30]
class DeliverBootyChecklistActionData: public ChecklistActionData
{
public:
	TArray<Class>                                                TargetBootyTypes;                                  // 0x30(0x10)
	TArray<class Class*>                                         TargetCompanies;                                   // 0x40(0x10)
};



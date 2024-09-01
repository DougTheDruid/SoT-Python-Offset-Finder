#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "GameplayTags_Structs.h"


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_NoTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	struct GameplayTagContainer                                  Tags;                                              // 0x28(0x28)
};


// Size 0x70 (Full Size[0x98] - InheritedSize[0x28]
class EditableGameplayTagQuery: public Object
{
public:
	struct FString                                               UserDescription;                                   // 0x28(0x10)
	class EditableGameplayTagQueryExpression*                    RootExpression;                                    // 0x48(0x8)
	struct GameplayTagQuery                                      TagQueryExportText_Helper;                         // 0x50(0x48)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_AnyExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class EditableGameplayTagQueryExpression*>            Expressions;                                       // 0x28(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_AnyTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	struct GameplayTagContainer                                  Tags;                                              // 0x28(0x28)
};


// Size 0x148 (Full Size[0x170] - InheritedSize[0x28]
class GameplayTagsManager: public Object
{
public:
	TArray<class DataTable*>                                     GameplayTagTables;                                 // 0x140(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_AllTagsMatch: public EditableGameplayTagQueryExpression
{
public:
	struct GameplayTagContainer                                  Tags;                                              // 0x28(0x28)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class GameplayTagsSettings: public Object
{
public:
	TArray<String>                                               GameplayTags;                                      // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_NoExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class EditableGameplayTagQueryExpression*>            Expressions;                                       // 0x28(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class EditableGameplayTagQueryExpression_AllExprMatch: public EditableGameplayTagQueryExpression
{
public:
	TArray<class EditableGameplayTagQueryExpression*>            Expressions;                                       // 0x28(0x10)
};



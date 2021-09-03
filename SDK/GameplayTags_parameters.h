#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
struct UGameplayTagAssetInterface_HasMatchingGameplayTag_Params
{
	struct FGameplayTag                                TagToCheck;                                                // (Parm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
struct UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
struct UGameplayTagAssetInterface_GetOwnedGameplayTags_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (Parm, OutParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
struct UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params
{
	struct FGameplayTag                                Value;                                                     // (Parm)
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
struct UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params
{
	struct FGameplayTagQuery                           TagQuery;                                                  // (Parm)
	struct FGameplayTagQuery                           ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
struct UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params
{
	struct FGameplayTagContainer                       OtherContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
struct UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
struct UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params
{
	struct FGameplayTag                                TagOne;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTag                                TagTwo;                                                    // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagOneMatchType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagTwoMatchType;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
struct UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params
{
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    ContainerTagsMatchType;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagMatchType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
struct UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagQuery                           TagQuery;                                                  // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
struct UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       OtherContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	bool                                               bCountEmptyAsMatch;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
struct UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params
{
	struct FGameplayTagContainer                       TagContainer;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    ContainerTagsMatchType;                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                                Tag;                                                       // (ConstParm, Parm, OutParm, ReferenceParm)
	TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagMatchType;                                              // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
struct UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params
{
	struct FGameplayTagContainer                       InTagContainer;                                            // (ConstParm, Parm, OutParm, ReferenceParm)
	struct FGameplayTagContainer                       InOutTagContainer;                                         // (Parm, OutParm, ReferenceParm)
	bool                                               ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function GameplayTags.GameplayTagsManager.RequestGameplayTag
struct UGameplayTagsManager_RequestGameplayTag_Params
{
	struct FName                                       TagName;                                                   // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ErrorIfNotFound;                                           // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FGameplayTag                                ReturnValue;                                               // (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

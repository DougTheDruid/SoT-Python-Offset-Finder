// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

void FGameplayTag::AfterRead()
{
}

void FGameplayTag::BeforeDelete()
{
}

void FGameplayTagQuery::AfterRead()
{
}

void FGameplayTagQuery::BeforeDelete()
{
}

void FGameplayTagContainer::AfterRead()
{
}

void FGameplayTagContainer::BeforeDelete()
{
}

void FGameplayTagNode::AfterRead()
{
}

void FGameplayTagNode::BeforeDelete()
{
}

void FGameplayTagTableRow::AfterRead()
{
	FTableRowBase::AfterRead();

}

void FGameplayTagTableRow::BeforeDelete()
{
	FTableRowBase::BeforeDelete();

}

void UEditableGameplayTagQuery::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(RootExpression, UEditableGameplayTagQueryExpression);
}

void UEditableGameplayTagQuery::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(RootExpression);
}

void UEditableGameplayTagQueryExpression::AfterRead()
{
	UObject::AfterRead();

}

void UEditableGameplayTagQueryExpression::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AnyTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AnyTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AllTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AllTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_NoTagsMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_NoTagsMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AnyExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AnyExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_AllExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_AllExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

void UEditableGameplayTagQueryExpression_NoExprMatch::AfterRead()
{
	UEditableGameplayTagQueryExpression::AfterRead();

}

void UEditableGameplayTagQueryExpression_NoExprMatch::BeforeDelete()
{
	UEditableGameplayTagQueryExpression::BeforeDelete();

}

// Function:
//		Offset -> 0x0205CF50
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTag                                TagToCheck                                                 (Parm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayTagAssetInterface::HasMatchingGameplayTag(const struct FGameplayTag& TagToCheck)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasMatchingGameplayTag");

	UGameplayTagAssetInterface_HasMatchingGameplayTag_Params params;
	params.TagToCheck = TagToCheck;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205CE10
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAnyMatchingGameplayTags");

	UGameplayTagAssetInterface_HasAnyMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205CB40
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer, bool bCountEmptyAsMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.HasAllMatchingGameplayTags");

	UGameplayTagAssetInterface_HasAllMatchingGameplayTags_Params params;
	params.TagContainer = TagContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205CA70
//		Name   -> Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (Parm, OutParm)
void UGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer* TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagAssetInterface.GetOwnedGameplayTags");

	UGameplayTagAssetInterface_GetOwnedGameplayTags_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TagContainer != nullptr)
		*TagContainer = params.TagContainer;

}


void UGameplayTagAssetInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UGameplayTagAssetInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x0205D150
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                Value                                                      (Parm)
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayTag UBlueprintGameplayTagLibrary::STATIC_MakeLiteralGameplayTag(const struct FGameplayTag& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeLiteralGameplayTag");

	UBlueprintGameplayTagLibrary_MakeLiteralGameplayTag_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205CFE0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagQuery                           TagQuery                                                   (Parm)
//		struct FGameplayTagQuery                           ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayTagQuery UBlueprintGameplayTagLibrary::STATIC_MakeGameplayTagQuery(const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.MakeGameplayTagQuery");

	UBlueprintGameplayTagLibrary_MakeGameplayTagQuery_Params params;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205CC80
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_HasAllMatchingGameplayTags(const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.HasAllMatchingGameplayTags");

	UBlueprintGameplayTagLibrary_HasAllMatchingGameplayTags_Params params;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C9A0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UBlueprintGameplayTagLibrary::STATIC_GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.GetNumGameplayTagsInContainer");

	UBlueprintGameplayTagLibrary_GetNumGameplayTagsInContainer_Params params;
	params.TagContainer = TagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205BFE0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTag                                TagOne                                                     (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayTag                                TagTwo                                                     (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagOneMatchType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagTwoMatchType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoGameplayTagsMatch(const struct FGameplayTag& TagOne, const struct FGameplayTag& TagTwo, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagOneMatchType, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagTwoMatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoGameplayTagsMatch");

	UBlueprintGameplayTagLibrary_DoGameplayTagsMatch_Params params;
	params.TagOne = TagOne;
	params.TagTwo = TagTwo;
	params.TagOneMatchType = TagOneMatchType;
	params.TagTwoMatchType = TagTwoMatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C830
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    ContainerTagsMatchType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagMatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoesTagAssetInterfaceHaveTag(TEnumAsByte<GameplayTags_EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagMatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesTagAssetInterfaceHaveTag");

	UBlueprintGameplayTagLibrary_DoesTagAssetInterfaceHaveTag_Params params;
	params.ContainerTagsMatchType = ContainerTagsMatchType;
	params.Tag = Tag;
	params.TagMatchType = TagMatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C6A0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayTagQuery                           TagQuery                                                   (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchTagQuery");

	UBlueprintGameplayTagLibrary_DoesContainerMatchTagQuery_Params params;
	params.TagContainer = TagContainer;
	params.TagQuery = TagQuery;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C4E0
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchAnyTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAnyTagsInContainer");

	UBlueprintGameplayTagLibrary_DoesContainerMatchAnyTagsInContainer_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C320
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayTagContainer                       OtherContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               bCountEmptyAsMatch                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerMatchAllTagsInContainer(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, bool bCountEmptyAsMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerMatchAllTagsInContainer");

	UBlueprintGameplayTagLibrary_DoesContainerMatchAllTagsInContainer_Params params;
	params.TagContainer = TagContainer;
	params.OtherContainer = OtherContainer;
	params.bCountEmptyAsMatch = bCountEmptyAsMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205C170
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       TagContainer                                               (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    ContainerTagsMatchType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FGameplayTag                                Tag                                                        (ConstParm, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<GameplayTags_EGameplayTagMatchType>    TagMatchType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_DoesContainerHaveTag(const struct FGameplayTagContainer& TagContainer, TEnumAsByte<GameplayTags_EGameplayTagMatchType> ContainerTagsMatchType, const struct FGameplayTag& Tag, TEnumAsByte<GameplayTags_EGameplayTagMatchType> TagMatchType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.DoesContainerHaveTag");

	UBlueprintGameplayTagLibrary_DoesContainerHaveTag_Params params;
	params.TagContainer = TagContainer;
	params.ContainerTagsMatchType = ContainerTagsMatchType;
	params.Tag = Tag;
	params.TagMatchType = TagMatchType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0205BE70
//		Name   -> Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGameplayTagContainer                       InTagContainer                                             (ConstParm, Parm, OutParm, ReferenceParm)
//		struct FGameplayTagContainer                       InOutTagContainer                                          (Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBlueprintGameplayTagLibrary::STATIC_AppendGameplayTagContainers(const struct FGameplayTagContainer& InTagContainer, struct FGameplayTagContainer* InOutTagContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.BlueprintGameplayTagLibrary.AppendGameplayTagContainers");

	UBlueprintGameplayTagLibrary_AppendGameplayTagContainers_Params params;
	params.InTagContainer = InTagContainer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutTagContainer != nullptr)
		*InOutTagContainer = params.InOutTagContainer;


	return params.ReturnValue;
}


void UBlueprintGameplayTagLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UBlueprintGameplayTagLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x0205D1E0
//		Name   -> Function GameplayTags.GameplayTagsManager.RequestGameplayTag
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       TagName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ErrorIfNotFound                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FGameplayTag                                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FGameplayTag UGameplayTagsManager::RequestGameplayTag(const struct FName& TagName, bool ErrorIfNotFound)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function GameplayTags.GameplayTagsManager.RequestGameplayTag");

	UGameplayTagsManager_RequestGameplayTag_Params params;
	params.TagName = TagName;
	params.ErrorIfNotFound = ErrorIfNotFound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UGameplayTagsManager::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTagsManager::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGameplayTagsSettings::AfterRead()
{
	UObject::AfterRead();

}

void UGameplayTagsSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

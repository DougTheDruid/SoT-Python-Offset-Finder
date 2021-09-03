// Name: SoT, Version: 2.2.1.1

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

void FLinkEndpointId::AfterRead()
{
}

void FLinkEndpointId::BeforeDelete()
{
}

// Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay
// (Final, Native, Public)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UEndPlayHandler::OnEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.EndPlayHandler.OnEndPlay");

	UEndPlayHandler_OnEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UEndPlayHandler::AfterRead()
{
	UObject::AfterRead();

}

void UEndPlayHandler::BeforeDelete()
{
	UObject::BeforeDelete();

}

// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULinkEndpointIdUtilities::STATIC_IsValid(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsValid");

	ULinkEndpointIdUtilities_IsValid_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULinkEndpointIdUtilities::STATIC_IsPathed(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.IsPathed");

	ULinkEndpointIdUtilities_IsPathed_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 String                         (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinkEndpointId         ReturnValue                    (Parm, OutParm, ReturnParm)
struct FLinkEndpointId ULinkEndpointIdUtilities::STATIC_CreateEndpointId(const struct FString& String)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CreateEndpointId");

	ULinkEndpointIdUtilities_CreateEndpointId_Params params;
	params.String = String;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
struct FString ULinkEndpointIdUtilities::STATIC_Conv_LinkEndpointIdToString(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.Conv_LinkEndpointIdToString");

	ULinkEndpointIdUtilities_Conv_LinkEndpointIdToString_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLinkEndpointId         Root                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         path                           (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         ReturnValue                    (Parm, OutParm, ReturnParm)
struct FLinkEndpointId ULinkEndpointIdUtilities::STATIC_CombineEndpointIds(const struct FLinkEndpointId& Root, const struct FLinkEndpointId& path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointIdUtilities.CombineEndpointIds");

	ULinkEndpointIdUtilities_CombineEndpointIds_Params params;
	params.Root = Root;
	params.path = path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULinkEndpointIdUtilities::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void ULinkEndpointIdUtilities::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULinkEndpointInterface::ReceiveLink(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.ReceiveLink");

	ULinkEndpointInterface_ReceiveLink_Params params;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
void ULinkEndpointInterface::LoseLink(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkEndpointInterface.LoseLink");

	ULinkEndpointInterface_LoseLink_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ULinkEndpointInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULinkEndpointInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function AthenaObjectLinkage.LinkerComponent.UnregisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         TargetID                       (ConstParm, Parm, OutParm, ReferenceParm)
void ULinkerComponent::UnregisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterLink");

	ULinkerComponent_UnregisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
void ULinkerComponent::UnregisterEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.UnregisterEndpoint");

	ULinkerComponent_UnregisterEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerComponent.SetParent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULinkerComponent::SetParent(class AActor* Parent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.SetParent");

	ULinkerComponent_SetParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerComponent.RegisterLink
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         SourceId                       (ConstParm, Parm, OutParm, ReferenceParm)
// struct FLinkEndpointId         TargetID                       (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<AthenaObjectLinkage_EAddLinkResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaObjectLinkage_EAddLinkResult> ULinkerComponent::RegisterLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterLink");

	ULinkerComponent_RegisterLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Source                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TEnumAsByte<AthenaObjectLinkage_EAddEndpointResult> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
TEnumAsByte<AthenaObjectLinkage_EAddEndpointResult> ULinkerComponent::RegisterEndpoint(const struct FLinkEndpointId& Id, class AActor* Source)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.RegisterEndpoint");

	ULinkerComponent_RegisterEndpoint_Params params;
	params.Id = Id;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
void ULinkerComponent::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointRemovedFromChild");

	ULinkerComponent_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULinkerComponent::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.OnEndpointAddedToChild");

	ULinkerComponent_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinkEndpointId         Id                             (ConstParm, Parm, OutParm, ReferenceParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ULinkerComponent::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.LookupEndpoint");

	ULinkerComponent_LookupEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ULinkerComponent::GetNumSetLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumSetLinks");

	ULinkerComponent_GetNumSetLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ULinkerComponent::GetNumRegisteredLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredLinks");

	ULinkerComponent_GetNumRegisteredLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ULinkerComponent::GetNumRegisteredEndpoints()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumRegisteredEndpoints");

	ULinkerComponent_GetNumRegisteredEndpoints_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int ULinkerComponent::GetNumPendingLinks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerComponent.GetNumPendingLinks");

	ULinkerComponent_GetNumPendingLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULinkerComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void ULinkerComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function AthenaObjectLinkage.LinkerInterface.SetParent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Parent                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULinkerInterface::SetParent(class AActor* Parent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.SetParent");

	ULinkerInterface_SetParent_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerInterface.RemoveLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         SourceId                       (Parm)
// struct FLinkEndpointId         TargetID                       (Parm)
void ULinkerInterface::RemoveLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveLink");

	ULinkerInterface_RemoveLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
void ULinkerInterface::RemoveEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.RemoveEndpoint");

	ULinkerInterface_RemoveEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinkEndpointId         Id                             (Parm)
void ULinkerInterface::OnEndpointRemovedFromChild(class AActor* Child, const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointRemovedFromChild");

	ULinkerInterface_OnEndpointRemovedFromChild_Params params;
	params.Child = Child;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Child                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ULinkerInterface::OnEndpointAddedToChild(class AActor* Child, const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.OnEndpointAddedToChild");

	ULinkerInterface_OnEndpointAddedToChild_Params params;
	params.Child = Child;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class AActor* ULinkerInterface::LookupEndpoint(const struct FLinkEndpointId& Id)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.LookupEndpoint");

	ULinkerInterface_LookupEndpoint_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddLink
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         SourceId                       (Parm)
// struct FLinkEndpointId         TargetID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULinkerInterface::AddLink(const struct FLinkEndpointId& SourceId, const struct FLinkEndpointId& TargetID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddLink");

	ULinkerInterface_AddLink_Params params;
	params.SourceId = SourceId;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function AthenaObjectLinkage.LinkerInterface.AddEndpoint
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinkEndpointId         Id                             (Parm)
// class AActor*                  Instance                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ULinkerInterface::AddEndpoint(const struct FLinkEndpointId& Id, class AActor* Instance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaObjectLinkage.LinkerInterface.AddEndpoint");

	ULinkerInterface_AddEndpoint_Params params;
	params.Id = Id;
	params.Instance = Instance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void ULinkerInterface::AfterRead()
{
	UInterface::AfterRead();

}

void ULinkerInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

void FContextualTutorialPromptDesc::AfterRead()
{
	READ_PTR_FULL(PromptActorClass, UClass);
	READ_PTR_FULL(AccessKey, UClass);
}

void FContextualTutorialPromptDesc::BeforeDelete()
{
	DELE_PTR_FULL(PromptActorClass);
	DELE_PTR_FULL(AccessKey);
}

void FBeachNPCSpawnFlowNetworkEvent::AfterRead()
{
	FNetworkEventStruct::AfterRead();

}

void FBeachNPCSpawnFlowNetworkEvent::BeforeDelete()
{
	FNetworkEventStruct::BeforeDelete();

}

void FTutorialStepEndedTelemetryEvent::AfterRead()
{
}

void FTutorialStepEndedTelemetryEvent::BeforeDelete()
{
}

void FTutorialShowTutorialLegendaryTavernStrangerEvent::AfterRead()
{
}

void FTutorialShowTutorialLegendaryTavernStrangerEvent::BeforeDelete()
{
}

// Function:
//		Offset -> 0x03C3F160
//		Name   -> Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FText                                       VoyageName                                                 (ConstParm, Parm, OutParm, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCompanyTutorialVoyageProgress::IsSameVoyage(const struct FText& VoyageName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.IsSameVoyage");

	UCompanyTutorialVoyageProgress_IsSameVoyage_Params params;
	params.VoyageName = VoyageName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03C3EF00
//		Name   -> Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      VoyageProposalDescClass                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UClass*                                      TaleRankDescClass                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UCompanyTutorialVoyageProgress::AssignVoyage(class UClass* VoyageProposalDescClass, class UClass* TaleRankDescClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyTutorialVoyageProgress.AssignVoyage");

	UCompanyTutorialVoyageProgress_AssignVoyage_Params params;
	params.VoyageProposalDescClass = VoyageProposalDescClass;
	params.TaleRankDescClass = TaleRankDescClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCompanyTutorialVoyageProgress::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AssignedVoyageProposalDescClass, UClass);
	READ_PTR_FULL(AssignedTaleRankDescClass, UClass);
}

void UCompanyTutorialVoyageProgress::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AssignedVoyageProposalDescClass);
	DELE_PTR_FULL(AssignedTaleRankDescClass);
}

void UContextualTutorialComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UContextualTutorialComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UOnboardingStatusInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UOnboardingStatusInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function:
//		Offset -> 0x01637030
//		Name   -> Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer
//		Flags  -> (Event, Public, BlueprintEvent)
void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnServer");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient
//		Flags  -> (Event, Public, BlueprintEvent)
void UTutorial2019Component::ReceiveTutorial2019BeginPlayOnClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ReceiveTutorial2019BeginPlayOnClient");

	UTutorial2019Component_ReceiveTutorial2019BeginPlayOnClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C3F220
//		Name   -> Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer
//		Flags  -> (Final, Native, Private)
// Parameters:
//		bool                                               OldIsEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTutorial2019Component::OnRep_IsEnabledByServer(bool OldIsEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.OnRep_IsEnabledByServer");

	UTutorial2019Component_OnRep_IsEnabledByServer_Params params;
	params.OldIsEnabled = OldIsEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint
//		Flags  -> (Event, Public, BlueprintEvent)
void UTutorial2019Component::ForceDisableComponent_Blueprint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.ForceDisableComponent_Blueprint");

	UTutorial2019Component_ForceDisableComponent_Blueprint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03C3EFC0
//		Name   -> Function Tutorial.Tutorial2019Component.BeginOnServer
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UTutorial2019Component::BeginOnServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019Component.BeginOnServer");

	UTutorial2019Component_BeginOnServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTutorial2019Component::AfterRead()
{
	UActorComponent::AfterRead();

}

void UTutorial2019Component::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

void UTutorial2019ContextualDelegatingComponent::AfterRead()
{
	UTutorial2019Component::AfterRead();

	READ_PTR_FULL(ContextualTutorialComponent, UContextualTutorialComponent);
}

void UTutorial2019ContextualDelegatingComponent::BeforeDelete()
{
	UTutorial2019Component::BeforeDelete();

	DELE_PTR_FULL(ContextualTutorialComponent);
}

// Function:
//		Offset -> 0x03C3F090
//		Name   -> Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      CharacterToTeleport                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTeleportLocation                           ReturnValue                                                (Parm, OutParm, ReturnParm, ContainsInstancedReference)
struct FTeleportLocation UTutorial2019FunctionLibrary::STATIC_GetNearestOnboardingSpawnPoint(class AActor* CharacterToTeleport)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial2019FunctionLibrary.GetNearestOnboardingSpawnPoint");

	UTutorial2019FunctionLibrary_GetNearestOnboardingSpawnPoint_Params params;
	params.CharacterToTeleport = CharacterToTeleport;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UTutorial2019FunctionLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTutorial2019FunctionLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x03C3EFE0
//		Name   -> Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      AccessKey                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTutorialHelpersBlueprintLibrary::STATIC_FirePromptCompleted(class UClass* AccessKey, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialHelpersBlueprintLibrary.FirePromptCompleted");

	UTutorialHelpersBlueprintLibrary_FirePromptCompleted_Params params;
	params.AccessKey = AccessKey;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTutorialHelpersBlueprintLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UTutorialHelpersBlueprintLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

// Function:
//		Offset -> 0x03C3F2B0
//		Name   -> Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass
//		Flags  -> (Final, Native, Private)
void UTutorialManager::OnRep_SelectedTutorialClass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.TutorialManager.OnRep_SelectedTutorialClass");

	UTutorialManager_OnRep_SelectedTutorialClass_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UTutorialManager::AfterRead()
{
	UActorComponent::AfterRead();

	READ_PTR_FULL(CompanyOnboardingStarterClass, UClass);
	READ_PTR_FULL(MaidenVoyageStarterClass, UClass);
	READ_PTR_FULL(BeachNPCSpawnFlowStarterClass, UClass);
	READ_PTR_FULL(SelectedTutorialClass, UClass);
	READ_PTR_FULL(SelectedTutorial, UTutorialStarter);
}

void UTutorialManager::BeforeDelete()
{
	UActorComponent::BeforeDelete();

	DELE_PTR_FULL(CompanyOnboardingStarterClass);
	DELE_PTR_FULL(MaidenVoyageStarterClass);
	DELE_PTR_FULL(BeachNPCSpawnFlowStarterClass);
	DELE_PTR_FULL(SelectedTutorialClass);
	DELE_PTR_FULL(SelectedTutorial);
}

void UTutorialStarter::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(AthenaPlayerController, AAthenaPlayerController);
}

void UTutorialStarter::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(AthenaPlayerController);
}

void UBeachNPCSpawnFlowStarter::AfterRead()
{
	UTutorialStarter::AfterRead();

}

void UBeachNPCSpawnFlowStarter::BeforeDelete()
{
	UTutorialStarter::BeforeDelete();

}

// Function:
//		Offset -> 0x03C3F130
//		Name   -> Function Tutorial.CompanyOnboardingStarter.HasPrerequisites
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCompanyOnboardingStarter::HasPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Tutorial.CompanyOnboardingStarter.HasPrerequisites");

	UCompanyOnboardingStarter_HasPrerequisites_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UCompanyOnboardingStarter::AfterRead()
{
	UTutorialStarter::AfterRead();

}

void UCompanyOnboardingStarter::BeforeDelete()
{
	UTutorialStarter::BeforeDelete();

}

void UMaidenVoyageStarter::AfterRead()
{
	UTutorialStarter::AfterRead();

}

void UMaidenVoyageStarter::BeforeDelete()
{
	UTutorialStarter::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

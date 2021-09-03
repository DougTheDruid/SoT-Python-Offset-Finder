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

void FMysteriousNotesCompletionEventsModel::AfterRead()
{
}

void FMysteriousNotesCompletionEventsModel::BeforeDelete()
{
}

void FWieldableMysteriousNoteLayoutItem::AfterRead()
{
	READ_PTR_FULL(Font, UFont);
}

void FWieldableMysteriousNoteLayoutItem::BeforeDelete()
{
	DELE_PTR_FULL(Font);
}

void FMysteriousNoteInfo::AfterRead()
{
}

void FMysteriousNoteInfo::BeforeDelete()
{
}

void FClientNoteData::AfterRead()
{
}

void FClientNoteData::BeforeDelete()
{
}

void FMysteriousNotesCompletionEventsModelEntry::AfterRead()
{
}

void FMysteriousNotesCompletionEventsModelEntry::BeforeDelete()
{
}

void FEventListenForCinematicEndEvent::AfterRead()
{
}

void FEventListenForCinematicEndEvent::BeforeDelete()
{
}

void FEventTriggerMysteriousNotesPopup::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventTriggerMysteriousNotesPopup::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventMarkNoteDeleted::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventMarkNoteDeleted::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventNoteClientCompletionStep::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventNoteClientCompletionStep::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventNoteCompletionStep::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventNoteCompletionStep::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventNotesUpdated::AfterRead()
{
}

void FEventNotesUpdated::BeforeDelete()
{
}

void FEventMarkNoteRead::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventMarkNoteRead::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventOnlineAthenaPlayerControllerUnpossessed::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventOnlineAthenaPlayerControllerUnpossessed::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventPlayerControllerPossessed::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FEventPlayerControllerPossessed::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FEventMysteriousNoteContentUpdated::AfterRead()
{
}

void FEventMysteriousNoteContentUpdated::BeforeDelete()
{
}

void FEventMysteriousNoteSettingsLoaded::AfterRead()
{
}

void FEventMysteriousNoteSettingsLoaded::BeforeDelete()
{
}

void FEventMysteriousNoteRemoved::AfterRead()
{
}

void FEventMysteriousNoteRemoved::BeforeDelete()
{
}

void FMysteriousNoteTheme::AfterRead()
{
}

void FMysteriousNoteTheme::BeforeDelete()
{
}

void FNoteCompletionEntry::AfterRead()
{
}

void FNoteCompletionEntry::BeforeDelete()
{
}

void FActiveNoteData::AfterRead()
{
}

void FActiveNoteData::BeforeDelete()
{
}

void FMysteriousNoteRequest::AfterRead()
{
	READ_PTR_FULL(PlayerController, APlayerController);
}

void FMysteriousNoteRequest::BeforeDelete()
{
	DELE_PTR_FULL(PlayerController);
}

void FPlayerMysteriousNoteItem::AfterRead()
{
}

void FPlayerMysteriousNoteItem::BeforeDelete()
{
}

void FPlayerSentNotesTelemetryEvent::AfterRead()
{
}

void FPlayerSentNotesTelemetryEvent::BeforeDelete()
{
}

void FPlayerNoteStateChangeTelemetryEvent::AfterRead()
{
}

void FPlayerNoteStateChangeTelemetryEvent::BeforeDelete()
{
}

void UHasPlayerMysteriousNotesRadialContext::AfterRead()
{
	URadialContextBase::AfterRead();

}

void UHasPlayerMysteriousNotesRadialContext::BeforeDelete()
{
	URadialContextBase::BeforeDelete();

}

void UMysteriousNoteDesc::AfterRead()
{
	UItemDesc::AfterRead();

}

void UMysteriousNoteDesc::BeforeDelete()
{
	UItemDesc::BeforeDelete();

}

void UMysteriousNotesCompletionEventsModelDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

}

void UMysteriousNotesCompletionEventsModelDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UMysteriousNoteSettings::AfterRead()
{
	UObject::AfterRead();

}

void UMysteriousNoteSettings::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UMysteriousNotesServiceInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UMysteriousNotesServiceInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

void UWieldableMysteriousNoteLayout::AfterRead()
{
	UDataAsset::AfterRead();

}

void UWieldableMysteriousNoteLayout::BeforeDelete()
{
	UDataAsset::BeforeDelete();

}

void UWieldableMysteriousNoteDataAsset::AfterRead()
{
	UDataAsset::AfterRead();

	READ_PTR_FULL(WieldableNoteDesc, UClass);
	READ_PTR_FULL(NoteLayout, UWieldableMysteriousNoteLayout);
}

void UWieldableMysteriousNoteDataAsset::BeforeDelete()
{
	UDataAsset::BeforeDelete();

	DELE_PTR_FULL(WieldableNoteDesc);
	DELE_PTR_FULL(NoteLayout);
}

void AMysteriousNotesService::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(CachedNoteSettings, UMysteriousNoteSettings);
	READ_PTR_FULL(WieldableNoteDataAsset, UWieldableMysteriousNoteDataAsset);
	READ_PTR_FULL(CompletionEventsModelData, UMysteriousNotesCompletionEventsModelDataAsset);
}

void AMysteriousNotesService::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(CachedNoteSettings);
	DELE_PTR_FULL(WieldableNoteDataAsset);
	DELE_PTR_FULL(CompletionEventsModelData);
}

void UPlayerMysteriousNoteInterface::AfterRead()
{
	UInterface::AfterRead();

}

void UPlayerMysteriousNoteInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// bool                           InCinematicSkipped             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::TriggerNotesReceivedPopup(bool InCinematicSkipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup");

	UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params params;
	params.InCinematicSkipped = InCinematicSkipped;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
// (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FName                   InCompletionID                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UPlayerMysteriousNoteComponent::Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived");

	UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params params;
	params.InPlayerController = InPlayerController;
	params.InCompletionID = InCompletionID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead");

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
// (Net, NetReliable, Native, Event, Protected, NetServer, HasDefaults, NetValidate)
// Parameters:
// class APlayerController*       InPlayerController             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                   NoteId                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
void UPlayerMysteriousNoteComponent::Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted");

	UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params params;
	params.InPlayerController = InPlayerController;
	params.NoteId = NoteId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
// (Final, RequiredAPI, Native, Private)
void UPlayerMysteriousNoteComponent::OnRep_NoteData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData");

	UPlayerMysteriousNoteComponent_OnRep_NoteData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
// (Final, RequiredAPI, Native, Private)
void UPlayerMysteriousNoteComponent::OnRep_BeenPossessed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed");

	UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
// (RequiredAPI, Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 NoteType                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteTitle                      (Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FString                 NoteBody                       (Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FString>         CompletionStrings              (ConstParm, Parm, ZeroConstructor, ReferenceParm)
void UPlayerMysteriousNoteComponent::AddFakeNote(const struct FString& NoteType, const struct FString& NoteTitle, const struct FString& NoteBody, TArray<struct FString> CompletionStrings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote");

	UPlayerMysteriousNoteComponent_AddFakeNote_Params params;
	params.NoteType = NoteType;
	params.NoteTitle = NoteTitle;
	params.NoteBody = NoteBody;
	params.CompletionStrings = CompletionStrings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UPlayerMysteriousNoteComponent::AfterRead()
{
	UActorComponent::AfterRead();

}

void UPlayerMysteriousNoteComponent::BeforeDelete()
{
	UActorComponent::BeforeDelete();

}

// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
// (Final, Native, Private)
// Parameters:
// class UCanvas*                 Canvas                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Width                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Height                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AWieldableMysteriousNote::OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate");

	AWieldableMysteriousNote_OnTextCanvasUpdate_Params params;
	params.Canvas = Canvas;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
// (Final, RequiredAPI, Native, Private)
void AWieldableMysteriousNote::OnRep_NoteLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout");

	AWieldableMysteriousNote_OnRep_NoteLayout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AWieldableMysteriousNote::AfterRead()
{
	ASkeletalMeshWieldableItem::AfterRead();

	READ_PTR_FULL(RenderTarget, UMaybeCompressedCanvasRenderTarget2D);
	READ_PTR_FULL(NoteLayout, UWieldableMysteriousNoteLayout);
	READ_PTR_FULL(NamedNotificationInputComponent, UNamedNotificationInputComponent);
	READ_PTR_FULL(UsableWieldableComponent, UUsableWieldableComponent);
	READ_PTR_FULL(InventoryItemComponent, UInventoryItemComponent);
}

void AWieldableMysteriousNote::BeforeDelete()
{
	ASkeletalMeshWieldableItem::BeforeDelete();

	DELE_PTR_FULL(RenderTarget);
	DELE_PTR_FULL(NoteLayout);
	DELE_PTR_FULL(NamedNotificationInputComponent);
	DELE_PTR_FULL(UsableWieldableComponent);
	DELE_PTR_FULL(InventoryItemComponent);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

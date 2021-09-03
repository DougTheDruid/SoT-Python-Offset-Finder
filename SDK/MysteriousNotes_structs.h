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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModel
// 0x0008
struct FMysteriousNotesCompletionEventsModel
{
	struct FName                                       CompletionIdent;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.WieldableMysteriousNoteLayoutItem
// 0x00A0
struct FWieldableMysteriousNoteLayoutItem
{
	struct FString                                     Theme;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UFont*                                       Font;                                                      // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTreasureMapWidgetStreamedTexture           Image;                                                     // 0x0018(0x0030) (Edit, DisableEditOnInstance)
	struct FStringAssetReference                       RadialIcon;                                                // 0x0048(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteTitleWidgetText;                                       // 0x0058(0x0020) (Edit, DisableEditOnInstance)
	struct FTreasureMapWidgetText                      NoteBodyWidgetText;                                        // 0x0078(0x0020) (Edit, DisableEditOnInstance)
	float                                              NoteWidth;                                                 // 0x0098(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3CEM[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.MysteriousNoteInfo
// 0x0014
struct FMysteriousNoteInfo
{
	struct FGuid                                       NoteId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NoteRead;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ShowNoteAnimation;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_51G5[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.ClientNoteData
// 0x0018
struct FClientNoteData
{
	bool                                               NotifyArrival;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6VJP[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMysteriousNoteInfo>                 PendingNotes;                                              // 0x0008(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.MysteriousNotesCompletionEventsModelEntry
// 0x0008
struct FMysteriousNotesCompletionEventsModelEntry
{
	struct FName                                       CompletionIdent;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventListenForCinematicEndEvent
// 0x0001
struct FEventListenForCinematicEndEvent
{
	unsigned char                                      UnknownData_OXK6[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventTriggerMysteriousNotesPopup
// 0x0010
struct FEventTriggerMysteriousNotesPopup
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CinematicSkipped;                                          // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VEWV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventMarkNoteDeleted
// 0x0018
struct FEventMarkNoteDeleted
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       NoteId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventNoteClientCompletionStep
// 0x0010
struct FEventNoteClientCompletionStep
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompletionStepID;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventNoteCompletionStep
// 0x0010
struct FEventNoteCompletionStep
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       CompletionStepID;                                          // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventNotesUpdated
// 0x0001
struct FEventNotesUpdated
{
	unsigned char                                      UnknownData_ZTIA[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventMarkNoteRead
// 0x0018
struct FEventMarkNoteRead
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       NoteId;                                                    // 0x0008(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventOnlineAthenaPlayerControllerUnpossessed
// 0x0008
struct FEventOnlineAthenaPlayerControllerUnpossessed
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventPlayerControllerPossessed
// 0x0008
struct FEventPlayerControllerPossessed
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventMysteriousNoteContentUpdated
// 0x0010
struct FEventMysteriousNoteContentUpdated
{
	unsigned char                                      UnknownData_894R[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventMysteriousNoteSettingsLoaded
// 0x0001
struct FEventMysteriousNoteSettingsLoaded
{
	unsigned char                                      UnknownData_O9CN[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.EventMysteriousNoteRemoved
// 0x0010
struct FEventMysteriousNoteRemoved
{
	unsigned char                                      UnknownData_R5OD[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.MysteriousNoteTheme
// 0x0010
struct FMysteriousNoteTheme
{
	struct FString                                     NoteType;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.NoteCompletionEntry
// 0x0020
struct FNoteCompletionEntry
{
	struct FGuid                                       NoteId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FString>                             CompletionEventIds;                                        // 0x0010(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.ActiveNoteData
// 0x0030
struct FActiveNoteData
{
	TArray<struct FNotesRemoteServiceNoteModel>        NotesRemoteServiceNoteModels;                              // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FNoteCompletionEntry>                PendingCompletionEntries;                                  // 0x0010(0x0010) (ZeroConstructor)
	TArray<struct FGuid>                               PendingDetailRequestIDs;                                   // 0x0020(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.MysteriousNoteRequest
// 0x0080
struct FMysteriousNoteRequest
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPirateIdentity                             PirateIdentity;                                            // 0x0008(0x0078)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.PlayerMysteriousNoteItem
// 0x0048
struct FPlayerMysteriousNoteItem
{
	struct FGuid                                       OriginalNoteID;                                            // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     LocalisedTitle;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     LocalisedBody;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NoteType;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KUJA[0x8];                                     // 0x0040(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.PlayerSentNotesTelemetryEvent
// 0x0004
struct FPlayerSentNotesTelemetryEvent
{
	int                                                NoteCount;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MysteriousNotes.PlayerNoteStateChangeTelemetryEvent
// 0x0020
struct FPlayerNoteStateChangeTelemetryEvent
{
	struct FGuid                                       NoteId;                                                    // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FString                                     NoteState;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

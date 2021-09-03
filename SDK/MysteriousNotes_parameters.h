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

// Function MysteriousNotes.PlayerMysteriousNoteComponent.TriggerNotesReceivedPopup
struct UPlayerMysteriousNoteComponent_TriggerNotesReceivedPopup_Params
{
	bool                                               InCinematicSkipped;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_NoteCompletionStepReceived
struct UPlayerMysteriousNoteComponent_Server_NoteCompletionStepReceived_Params
{
	class APlayerController*                           InPlayerController;                                        // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       InCompletionID;                                            // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsRead
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsRead_Params
{
	class APlayerController*                           InPlayerController;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       NoteId;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.Server_MarkNoteAsDeleted
struct UPlayerMysteriousNoteComponent_Server_MarkNoteAsDeleted_Params
{
	class APlayerController*                           InPlayerController;                                        // (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       NoteId;                                                    // (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_NoteData
struct UPlayerMysteriousNoteComponent_OnRep_NoteData_Params
{
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.OnRep_BeenPossessed
struct UPlayerMysteriousNoteComponent_OnRep_BeenPossessed_Params
{
};

// Function MysteriousNotes.PlayerMysteriousNoteComponent.AddFakeNote
struct UPlayerMysteriousNoteComponent_AddFakeNote_Params
{
	struct FString                                     NoteType;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NoteTitle;                                                 // (Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NoteBody;                                                  // (Parm, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             CompletionStrings;                                         // (ConstParm, Parm, ZeroConstructor, ReferenceParm)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnTextCanvasUpdate
struct AWieldableMysteriousNote_OnTextCanvasUpdate_Params
{
	class UCanvas*                                     Canvas;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Width;                                                     // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MysteriousNotes.WieldableMysteriousNote.OnRep_NoteLayout
struct AWieldableMysteriousNote_OnRep_NoteLayout_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Name: SoT, Version: 2.3.0


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

// ScriptStruct CustomMysteriousNotes.CustomPlayerNoteList
// 0x0010
struct FCustomPlayerNoteList
{
	TArray<struct FNotesRemoteServiceNoteDetailModel>  Notes;                                                     // 0x0000(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomMysteriousNotes.DestroyMysteriousNoteData
// 0x0014
struct FDestroyMysteriousNoteData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                       NoteGUID;                                                  // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct CustomMysteriousNotes.CreateMysteriousNoteData
// 0x0038
struct FCreateMysteriousNoteData
{
	int                                                PlayerNetGUID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4A80[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     NoteType;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NoteTitle;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     NoteBody;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

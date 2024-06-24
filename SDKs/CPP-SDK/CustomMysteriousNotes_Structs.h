#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

// Size 0x14
struct DestroyMysteriousNoteGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	struct Guid                                                  NoteGUID;                                          // 0x4(0x10)
};


// Size 0x10
struct CustomPlayerNoteList
{
public:
	TArray<struct NotesRemoteServiceNoteDetailModel>             Notes;                                             // 0x0(0x10)
};


// Size 0x40
struct CreateMysteriousNoteGameServerRequestModel
{
public:
	int                                                          PlayerNetGUID;                                     // 0x0(0x4)
	struct FString                                               NoteType;                                          // 0x8(0x10)
	struct FString                                               NoteTitle;                                         // 0x18(0x10)
	struct FString                                               NoteBody;                                          // 0x28(0x10)
	bool                                                         AvailableInSaferSeas;                              // 0x38(0x1)
};


// Size 0x14
struct CreateMysteriousNoteGameServerResponseModel
{
public:
	bool                                                         Success;                                           // 0x0(0x1)
	struct Guid                                                  NoteId;                                            // 0x4(0x10)
};



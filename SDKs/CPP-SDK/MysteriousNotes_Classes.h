#pragma once

// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid

#include "MysteriousNotes_Structs.h"


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WieldableMysteriousNoteDataAsset: public DataAsset
{
public:
	class UClass*                                                WieldableNoteDesc;                                 // 0x28(0x8)
	class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x30(0x8)
};


// Size 0x1a0 (Full Size[0x268] - InheritedSize[0xc8]
class PlayerMysteriousNoteComponent: public ActorComponent
{
public:
	bool                                                         CinematicPlayed;                                   // 0xd0(0x1)
	struct ClientNoteData                                        NoteData;                                          // 0x1c0(0x18)
	bool                                                         BeenPossessed;                                     // 0x1d8(0x1)
};


// Size 0x160 (Full Size[0x188] - InheritedSize[0x28]
class WieldableMysteriousNoteLayout: public DataAsset
{
public:
	struct FText                                                 DefaultTitle;                                      // 0x28(0x38)
	struct FText                                                 DefaultBody;                                       // 0x60(0x38)
	struct WieldableMysteriousNoteLayoutItem                     DefaultNoteLayoutItem;                             // 0x98(0xe0)
	TArray<struct WieldableMysteriousNoteLayoutItem>             NoteLayoutItems;                                   // 0x178(0x10)
};


// Size 0x98 (Full Size[0x460] - InheritedSize[0x3c8]
class MysteriousNotesService: public Actor
{
public:
	class MysteriousNoteSettings*                                CachedNoteSettings;                                // 0x3f0(0x8)
	class WieldableMysteriousNoteDataAsset*                      WieldableNoteDataAsset;                            // 0x3f8(0x8)
	class MysteriousNotesCompletionEventsModelDataAsset*         CompletionEventsModelData;                         // 0x400(0x8)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class MysteriousNoteSettings: public Object
{
public:
	int                                                          LookAheadInMinutes;                                // 0x28(0x4)
	float                                                        RequestTimeout;                                    // 0x2c(0x4)
	struct StringAssetReference                                  MysteriousNotesCompletionStringsAsset;             // 0x30(0x10)
	struct StringAssetReference                                  WieldableNoteDataAsset;                            // 0x40(0x10)
	struct StringAssetReference                                  Image;                                             // 0x50(0x10)
	struct StringAssetReference                                  NotificationBackground;                            // 0x60(0x10)
};


// Size 0x1a0 (Full Size[0x990] - InheritedSize[0x7f0]
class WieldableMysteriousNote: public SkeletalMeshWieldableItem
{
public:
	class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x7f8(0x8)
	int                                                          CanvasWidth;                                       // 0x800(0x4)
	int                                                          CanvasHeight;                                      // 0x804(0x4)
	float                                                        FontScale;                                         // 0x808(0x4)
	class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x868(0x8)
	class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x870(0x8)
	class InventoryItemComponent*                                InventoryItemComponent;                            // 0x878(0x8)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MysteriousNotesCompletionEventsModelDataAsset: public DataAsset
{
public:
	TArray<struct MysteriousNotesCompletionEventsModel>          MysteriousNoteCompletionEvents;                    // 0x28(0x10)
};



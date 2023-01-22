// Generated by DougTheDruid#2784 on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class HasPlayerMysteriousNotesRadialContext: public RadialContextBase
{
public:
};


// Size 0x30 (Full Size[0x2d0] - InheritedSize[0x2a0]
class LookingAtMysteriousNoteInputComponent: public LookingAtWieldableInputComponent
{
public:
};


// Size 0x0 (Full Size[0x120] - InheritedSize[0x120]
class MysteriousNoteDesc: public ItemDesc
{
public:
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class MysteriousNotesCompletionEventsModelDataAsset: public DataAsset
{
public:
	TArray<Struct MysteriousNotesCompletionEventsModel>          MysteriousNoteCompletionEvents;                    // 0x28(0x10)
};


// Size 0x48 (Full Size[0x70] - InheritedSize[0x28]
class MysteriousNoteSettings: public Object
{
public:
	int                                                          LookAheadInMinutes;                                // 0x28(0x4)
	float                                                        RequestTimeout;                                    // 0x2c(0x4)
	Struct StringAssetReference                                  MysteriousNotesCompletionStringsAsset;             // 0x30(0x10)
	Struct StringAssetReference                                  WieldableNoteDataAsset;                            // 0x40(0x10)
	Struct StringAssetReference                                  Image;                                             // 0x50(0x10)
	Struct StringAssetReference                                  NotificationBackground;                            // 0x60(0x10)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class MysteriousNotesServiceInterface: public Interface
{
public:
};


// Size 0x150 (Full Size[0x178] - InheritedSize[0x28]
class WieldableMysteriousNoteLayout: public DataAsset
{
public:
	Struct FText                                                 DefaultTitle;                                      // 0x28(0x38)
	Struct FText                                                 DefaultBody;                                       // 0x60(0x38)
	Struct WieldableMysteriousNoteLayoutItem                     DefaultNoteLayoutItem;                             // 0x98(0xd0)
	TArray<Struct WieldableMysteriousNoteLayoutItem>             NoteLayoutItems;                                   // 0x168(0x10)
};


// Size 0x10 (Full Size[0x38] - InheritedSize[0x28]
class WieldableMysteriousNoteDataAsset: public DataAsset
{
public:
	class                                                        WieldableNoteDesc;                                 // 0x28(0x8)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x30(0x8)
};


// Size 0xc8 (Full Size[0x490] - InheritedSize[0x3c8]
class MysteriousNotesService: public Actor
{
public:
	char                                                         pad0x28_2RGBD[0x28];                               // 0x3c8(0x28)
	Class MysteriousNoteSettings*                                CachedNoteSettings;                                // 0x3f0(0x8)
	Class WieldableMysteriousNoteDataAsset*                      WieldableNoteDataAsset;                            // 0x3f8(0x8)
	Class MysteriousNotesCompletionEventsModelDataAsset*         CompletionEventsModelData;                         // 0x400(0x8)
	char                                                         pad0x98_S2RVZ[0x98];                               // 0x406(0x98)
};


// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class PlayerMysteriousNoteInterface: public Interface
{
public:
};


// Size 0x190 (Full Size[0x258] - InheritedSize[0xc8]
class PlayerMysteriousNoteComponent: public ActorComponent
{
public:
	char                                                         pad0x8_ZKF2A[0x8];                                 // 0xc8(0x8)
	bool                                                         CinematicPlayed;                                   // 0xd0(0x1)
	char                                                         pad0xef_1VLP8[0xef];                               // 0xd1(0xef)
	Struct ClientNoteData                                        NoteData;                                          // 0x1c0(0x18)
	bool                                                         BeenPossessed;                                     // 0x1d8(0x1)
	char                                                         pad0x81_XMJZF[0x81];                               // 0x1d7(0x81)
};


// Size 0x1a0 (Full Size[0x940] - InheritedSize[0x7a0]
class WieldableMysteriousNote: public SkeletalMeshWieldableItem
{
public:
	char                                                         pad0x10_LH4JO[0x10];                               // 0x7a0(0x10)
	Class MaybeCompressedCanvasRenderTarget2D*                   RenderTarget;                                      // 0x7b0(0x8)
	int                                                          CanvasWidth;                                       // 0x7b8(0x4)
	int                                                          CanvasHeight;                                      // 0x7bc(0x4)
	float                                                        FontScale;                                         // 0x7c0(0x4)
	char                                                         pad0x5c_GBUA7[0x5c];                               // 0x7c4(0x5c)
	Class WieldableMysteriousNoteLayout*                         NoteLayout;                                        // 0x820(0x8)
	Class UsableWieldableComponent*                              UsableWieldableComponent;                          // 0x828(0x8)
	Class InventoryItemComponent*                                InventoryItemComponent;                            // 0x830(0x8)
	char                                                         pad0x118_K5FN0[0x118];                             // 0x836(0x118)
};


}
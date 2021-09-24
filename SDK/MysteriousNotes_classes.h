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
// Classes
//---------------------------------------------------------------------------

// Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHasPlayerMysteriousNotesRadialContext : public URadialContextBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.HasPlayerMysteriousNotesRadialContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.MysteriousNoteDesc
// 0x0000 (FullSize[0x0130] - InheritedSize[0x0130])
class UMysteriousNoteDesc : public UItemDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNoteDesc");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMysteriousNotesCompletionEventsModelDataAsset : public UDataAsset
{
public:
	TArray<struct FMysteriousNotesCompletionEventsModel> MysteriousNoteCompletionEvents;                            // 0x0028(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesCompletionEventsModelDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.MysteriousNoteSettings
// 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
class UMysteriousNoteSettings : public UObject
{
public:
	int                                                LookAheadInMinutes;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RequestTimeout;                                            // 0x002C(0x0004) (Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       MysteriousNotesCompletionStringsAsset;                     // 0x0030(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       WieldableNoteDataAsset;                                    // 0x0040(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       Image;                                                     // 0x0050(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)
	struct FStringAssetReference                       NotificationBackground;                                    // 0x0060(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNoteSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.MysteriousNotesServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMysteriousNotesServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.WieldableMysteriousNoteLayout
// 0x0120 (FullSize[0x0148] - InheritedSize[0x0028])
class UWieldableMysteriousNoteLayout : public UDataAsset
{
public:
	struct FText                                       DefaultTitle;                                              // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_XDYZ[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       DefaultBody;                                               // 0x0060(0x0018) ELEMENT_SIZE_MISMATCH (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData_ATTY[0x20];                                    // 0x0060(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FWieldableMysteriousNoteLayoutItem          DefaultNoteLayoutItem;                                     // 0x0098(0x00A0) (Edit, DisableEditOnInstance)
	TArray<struct FWieldableMysteriousNoteLayoutItem>  NoteLayoutItems;                                           // 0x0138(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNoteLayout");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.WieldableMysteriousNoteDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UWieldableMysteriousNoteDataAsset : public UDataAsset
{
public:
	class UClass*                                      WieldableNoteDesc;                                         // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNoteDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.MysteriousNotesService
// 0x00C8 (FullSize[0x0498] - InheritedSize[0x03D0])
class AMysteriousNotesService : public AActor
{
public:
	unsigned char                                      UnknownData_31IU[0x28];                                    // 0x03D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMysteriousNoteSettings*                     CachedNoteSettings;                                        // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWieldableMysteriousNoteDataAsset*           WieldableNoteDataAsset;                                    // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UMysteriousNotesCompletionEventsModelDataAsset* CompletionEventsModelData;                                 // 0x0408(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_7TAE[0x88];                                    // 0x0410(0x0088) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.MysteriousNotesService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.PlayerMysteriousNoteInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayerMysteriousNoteInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.PlayerMysteriousNoteInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.PlayerMysteriousNoteComponent
// 0x0170 (FullSize[0x0238] - InheritedSize[0x00C8])
class UPlayerMysteriousNoteComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_490L[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FClientNoteData                             NoteData;                                                  // 0x00D0(0x0018) (Net, RepNotify, Protected)
	bool                                               BeenPossessed;                                             // 0x00E8(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected)
	bool                                               CinematicPlayed;                                           // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected)
	unsigned char                                      UnknownData_FBQY[0x14E];                                   // 0x00EA(0x014E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.PlayerMysteriousNoteComponent");
		return ptr;
	}



	void TriggerNotesReceivedPopup(bool InCinematicSkipped);
	void Server_NoteCompletionStepReceived(class APlayerController* InPlayerController, const struct FName& InCompletionID);
	void Server_MarkNoteAsRead(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void Server_MarkNoteAsDeleted(class APlayerController* InPlayerController, const struct FGuid& NoteId);
	void OnRep_NoteData();
	void OnRep_BeenPossessed();
	void CustomServerUpdateDetailNotes(TArray<struct FNotesRemoteServiceNoteDetailModel> InNotes);
	void AddFakeNote(const struct FString& NoteType, const struct FString& NoteTitle, const struct FString& NoteBody, TArray<struct FString> CompletionStrings);
	void AfterRead();
	void BeforeDelete();

};

// Class MysteriousNotes.WieldableMysteriousNote
// 0x01B0 (FullSize[0x0920] - InheritedSize[0x0770])
class AWieldableMysteriousNote : public ASkeletalMeshWieldableItem
{
public:
	unsigned char                                      UnknownData_AQ59[0x10];                                    // 0x0770(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaybeCompressedCanvasRenderTarget2D*        RenderTarget;                                              // 0x0780(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	class UWieldableMysteriousNoteLayout*              NoteLayout;                                                // 0x0788(0x0008) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                CanvasWidth;                                               // 0x0790(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	int                                                CanvasHeight;                                              // 0x0794(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              FontScale;                                                 // 0x0798(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ME37[0x54];                                    // 0x079C(0x0054) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNamedNotificationInputComponent*            NamedNotificationInputComponent;                           // 0x07F0(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUsableWieldableComponent*                   UsableWieldableComponent;                                  // 0x07F8(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryItemComponent*                     InventoryItemComponent;                                    // 0x0800(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9NS7[0x118];                                   // 0x0808(0x0118) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MysteriousNotes.WieldableMysteriousNote");
		return ptr;
	}



	void OnTextCanvasUpdate(class UCanvas* Canvas, int Width, int Height);
	void OnRep_NoteLayout();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

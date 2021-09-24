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

// ScriptStruct DebugMenu.DebugMenuDataAssetEntry
// 0x0038
struct FDebugMenuDataAssetEntry
{
	struct FString                                     MenuPath;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	bool                                               CloseMenuWhenExecuted;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AvailableInShippingBuilds;                                 // 0x0031(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AddToCommonlyUsedMenu;                                     // 0x0032(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_CVAN[0x5];                                     // 0x0033(0x0005) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DebugMenu.DebugMenuButtonShortcut
// 0x0040
struct FDebugMenuButtonShortcut
{
	struct FString                                     DisplayName;                                               // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0010(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FKey>                                Buttons;                                                   // 0x0020(0x0010) (Edit, ZeroConstructor)
	float                                              RequiredHoldTime;                                          // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AvailableInShippingBuilds;                                 // 0x0034(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MCY3[0xB];                                     // 0x0035(0x000B) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DebugMenu.DebugMenuUserItem
// 0x0020
struct FDebugMenuUserItem
{
	struct FString                                     path;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Command;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DebugMenu.DebugErrorHappeningEvent
// 0x0001
struct FDebugErrorHappeningEvent
{
	unsigned char                                      UnknownData_BHA7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct DebugMenu.DebugMenuOptionExecutedEvent
// 0x0020
struct FDebugMenuOptionExecutedEvent
{
	struct FString                                     DebugMenuItemName;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ConsoleCommand;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x40
class DebugMenuButtonShortcut: public None
{
public:
	Struct FString                                     DisplayName                                        // 0x0(0x10)
	Struct FString                                     ConsoleCommand                                     // 0x10(0x10)
	TArray<Struct ConsoleCommand>                      Buttons                                            // 0x20(0x10)
	float                                              RequiredHoldTime                                   // 0x30(0x4)
	bool                                               AvailableInShippingBuilds                          // 0x34(0x1)
};


// Size 0x38
class DebugMenuDataAssetEntry: public None
{
public:
	Struct FString                                     MenuPath                                           // 0x0(0x10)
	Struct FString                                     DisplayName                                        // 0x10(0x10)
	Struct FString                                     ConsoleCommand                                     // 0x20(0x10)
	bool                                               CloseMenuWhenExecuted                              // 0x30(0x1)
	bool                                               AvailableInShippingBuilds                          // 0x31(0x1)
	bool                                               AddToCommonlyUsedMenu                              // 0x32(0x1)
};


// Size 0x20
class DebugMenuUserItem: public None
{
public:
	Struct FString                                     path                                               // 0x0(0x10)
	Struct FString                                     Command                                            // 0x10(0x10)
};


// Size 0x1
class DebugErrorHappeningEvent: public None
{
public:
};


// Size 0x20
class DebugMenuOptionExecutedEvent: public None
{
public:
	Struct FString                                     DebugMenuItemName                                  // 0x0(0x10)
	Struct FString                                     ConsoleCommand                                     // 0x10(0x10)
};


}
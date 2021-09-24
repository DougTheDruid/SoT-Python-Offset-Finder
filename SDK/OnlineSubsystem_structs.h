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
// Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystem.EOnlineStatsSuccess
enum class OnlineSubsystem_EOnlineStatsSuccess : uint8_t
{
	EOnlineStatsSuccess__Success   = 0,
	EOnlineStatsSuccess__UnknownError = 1,
	EOnlineStatsSuccess__InvalidStatId = 2,
	EOnlineStatsSuccess__InvalidArgument = 3,
	EOnlineStatsSuccess__InvalidUser = 4,
	EOnlineStatsSuccess__EOnlineStatsSuccess_MAX = 5,

};

// Enum OnlineSubsystem.EInAppPurchaseState
enum class OnlineSubsystem_EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Success   = 0,
	EInAppPurchaseState__Failed    = 1,
	EInAppPurchaseState__Cancelled = 2,
	EInAppPurchaseState__Invalid   = 3,
	EInAppPurchaseState__NotAllowed = 4,
	EInAppPurchaseState__Restored  = 5,
	EInAppPurchaseState__Unknown   = 6,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 7,

};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class OnlineSubsystem_EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10,

};

// Enum OnlineSubsystem.EPlatformId
enum class OnlineSubsystem_EPlatformId : uint8_t
{
	EPlatformId__Unknown           = 0,
	EPlatformId__XboxLive          = 1,
	EPlatformId__Steam             = 2,
	EPlatformId__EPlatformId_MAX   = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0010
struct FNamedInterface
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     InterfaceObject;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0018
struct FNamedInterfaceDef
{
	struct FName                                       InterfaceName;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     InterfaceClassName;                                        // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x00A0
struct FInAppPurchaseProductInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     TransactionIdentifier;                                     // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayName;                                               // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayDescription;                                        // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayPrice;                                              // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrencyCode;                                              // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrencySymbol;                                            // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DecimalSeparator;                                          // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     GroupingSeparator;                                         // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReceiptData;                                               // 0x0090(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0020
struct FInAppPurchaseRestoreInfo
{
	struct FString                                     Identifier;                                                // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ReceiptData;                                               // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.AchievementUpdatedEvent
// 0x0038
struct FAchievementUpdatedEvent
{
	struct FString                                     AchievementId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	uint32_t                                           Progress;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Successful;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_SRG9[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Reason;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Platform;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.OnlineStoreCatalogItem
// 0x0090
struct FOnlineStoreCatalogItem
{
	struct FString                                     ProductId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Title;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Description;                                               // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FormattedPrice;                                            // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     FormattedBasePrice;                                        // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	bool                                               IsOnSale;                                                  // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_O4IZ[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   SaleEndDate;                                               // 0x0058(0x0008) (ZeroConstructor)
	struct FString                                     ImageUri;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     CurrencyCode;                                              // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FString>                             MetaTags;                                                  // 0x0080(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0018
struct FInAppPurchaseProductRequest
{
	struct FString                                     ProductIdentifier;                                         // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bIsConsumable;                                             // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XYYF[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

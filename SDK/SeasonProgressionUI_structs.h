#pragma once

// Name: SoT, Version: 2.4.0


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

// Enum SeasonProgressionUI.EMoreButtonSource
enum class SeasonProgressionUI_EMoreButtonSource : uint8_t
{
	EMoreButtonSource__Popup       = 0,
	EMoreButtonSource__TextNotification = 1,
	EMoreButtonSource__EMoreButtonSource_MAX = 2,

};

// Enum SeasonProgressionUI.ENavigationAction
enum class SeasonProgressionUI_ENavigationAction : uint8_t
{
	ENavigationAction__ShowDeed    = 0,
	ENavigationAction__ShowTrial   = 1,
	ENavigationAction__ShowReward  = 2,
	ENavigationAction__ShowProgress = 3,
	ENavigationAction__None        = 4,
	ENavigationAction__ENavigationAction_MAX = 5,

};

// Enum SeasonProgressionUI.ESeasonStyleModifiers
enum class SeasonProgressionUI_ESeasonStyleModifiers : uint8_t
{
	ESeasonStyleModifiers__Owned   = 0,
	ESeasonStyleModifiers__SeasonMark = 1,
	ESeasonStyleModifiers__PirateLegend = 2,
	ESeasonStyleModifiers__ESeasonStyleModifiers_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SeasonProgressionUI.SeasonGoalPopupAsset
// 0x0080
struct FSeasonGoalPopupAsset
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       GlowIcon;                                                  // 0x0008(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                      // 0x0018(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       ChatIcon;                                                  // 0x0028(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ToastSfxEventName;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastEventName;                                            // 0x0048(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastSwitchName;                                           // 0x0058(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastSwitchValue;                                          // 0x0068(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              ToastHoldDuration;                                         // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_114C[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonIconPopupAsset
// 0x0068
struct FSeasonIconPopupAsset
{
	struct FStringAssetReference                       GlowIcon;                                                  // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                      // 0x0010(0x0010) (Edit, ZeroConstructor)
	struct FString                                     ToastSfxEventName;                                         // 0x0020(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastEventName;                                            // 0x0030(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastSwitchName;                                           // 0x0040(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     ToastSwitchValue;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	float                                              ToastHoldDuration;                                         // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9RNA[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUIEventTypeTelemetryFragment
// 0x0018
struct FSeasonProgressionUIEventTypeTelemetryFragment
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	int                                                NumReceivedEvents;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_A8T3[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragment
// 0x0018
struct FSeasonProgressionUITelemetryFragment
{
	TArray<struct FSeasonProgressionUIEventTypeTelemetryFragment> ReceivedEventsData;                                        // 0x0000(0x0010) (ZeroConstructor)
	int                                                TotalNumReceivedEvents;                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LGS9[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.NavigationDesc
// 0x0014
struct FNavigationDesc
{
	TEnumAsByte<SeasonProgressionUI_ENavigationAction> Action;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZC1Q[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       Id;                                                        // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.EnableMoreButtonEvent
// 0x0018
struct FEnableMoreButtonEvent
{
	TEnumAsByte<SeasonProgressionUI_EMoreButtonSource> MoreButtonSource;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_BRDQ[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FNavigationDesc                             Navigation;                                                // 0x0004(0x0014)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonNotificationContent
// 0x0068
struct FSeasonNotificationContent
{
	struct FStringAssetReference                       GlowIcon;                                                  // 0x0000(0x0010) (ZeroConstructor)
	struct FStringAssetReference                       Icon;                                                      // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     SfxEventName;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     EventName;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SwitchName;                                                // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     SwitchValue;                                               // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	float                                              ToastHoldDuration;                                         // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FAZM[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.DeedProgressDesc
// 0x0080
struct FDeedProgressDesc
{
	struct FString                                     Description;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Icon;                                                      // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FNavigationDesc                             NavigationDesc;                                            // 0x0020(0x0014)
	int                                                ProgressValue;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Threshold;                                                 // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_AG3O[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGenericPopupAudioDescriptor                Audio;                                                     // 0x0040(0x0040)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotification
// 0x0060
struct FSeasonsChatNotification
{
	struct FString                                     IconUrl;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Message;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGenericPopupAudioDescriptor                Audio;                                                     // 0x0020(0x0040)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonsDataRefreshEvent
// 0x0001
struct FSeasonsDataRefreshEvent
{
	unsigned char                                      UnknownData_WEFB[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.OpenSeasonsMenuEvent
// 0x0014
struct FOpenSeasonsMenuEvent
{
	TEnumAsByte<SeasonProgressionUI_ENavigationAction> NavigationAction;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_M0D8[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       Id;                                                        // 0x0004(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.DisableMoreButtonEvent
// 0x0001
struct FDisableMoreButtonEvent
{
	TEnumAsByte<SeasonProgressionUI_EMoreButtonSource> MoreButtonSource;                                          // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.ShowDeedProgressEvent
// 0x0080
struct FShowDeedProgressEvent
{
	struct FDeedProgressDesc                           DeedProgressDesc;                                          // 0x0000(0x0080)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonsChatNotificationEvent
// 0x0060
struct FSeasonsChatNotificationEvent
{
	struct FSeasonsChatNotification                    SeasonsChatNotification;                                   // 0x0000(0x0060)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonProgressionUITelemetryFragmentInput
// 0x0008
struct FSeasonProgressionUITelemetryFragmentInput : public FTelemetryFragmentInput
{
	TWeakObjectPtr<class APlayerController>            PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct SeasonProgressionUI.SeasonsPopupEvent
// 0x00A0
struct FSeasonsPopupEvent
{
	TArray<struct FText>                               Text;                                                      // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FString>                             Images;                                                    // 0x0010(0x0010) (ZeroConstructor)
	struct FString                                     Background;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGenericPopupAudioDescriptor                Audio;                                                     // 0x0030(0x0040)
	TArray<TEnumAsByte<SeasonProgressionUI_ESeasonStyleModifiers>> StyleModifiers;                                            // 0x0070(0x0010) (ZeroConstructor)
	int                                                Rank;                                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNavigationDesc                             NavigationDesc;                                            // 0x0084(0x0014)
	float                                              HoldDuration;                                              // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FZ8T[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

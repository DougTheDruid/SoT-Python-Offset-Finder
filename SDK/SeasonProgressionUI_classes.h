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

// Class SeasonProgressionUI.SeasonPopupAsset
// 0x0278 (FullSize[0x02A0] - InheritedSize[0x0028])
class USeasonPopupAsset : public UDataAsset
{
public:
	struct FName                                       ThemeId;                                                   // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSeasonIconPopupAsset>               TierInfos;                                                 // 0x0030(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               TrialInfos;                                                // 0x0040(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               DeedInfos;                                                 // 0x0050(0x0010) (Edit, ZeroConstructor)
	TArray<struct FSeasonGoalPopupAsset>               RenownActionInfos;                                         // 0x0060(0x0010) (Edit, ZeroConstructor)
	struct FSeasonIconPopupAsset                       SeasonInfo;                                                // 0x0070(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       LevelIncreaseInfo;                                         // 0x00D8(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       RewardInfo;                                                // 0x0140(0x0068) (Edit)
	struct FSeasonIconPopupAsset                       MultipleRewardsInfo;                                       // 0x01A8(0x0068) (Edit)
	struct FStringAssetReference                       BackgroundImage;                                           // 0x0210(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DefaultToastSfxEventName;                                  // 0x0220(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultToastEventName;                                     // 0x0230(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultToastSwitchName;                                    // 0x0240(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultToastSwitchValue;                                   // 0x0250(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultChatSfxEventName;                                   // 0x0260(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultChatEventName;                                      // 0x0270(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultChatSwitchName;                                     // 0x0280(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DefaultChatSwitchValue;                                    // 0x0290(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonPopupAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonPopupListAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USeasonPopupListAsset : public UDataAsset
{
public:
	TArray<class USeasonPopupAsset*>                   SeasonPopups;                                              // 0x0028(0x0010) (Edit, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonPopupListAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUIInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeasonProgressionUIInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeasonProgressionUITelemetryInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUITelemetryInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUIComponent
// 0x0100 (FullSize[0x01C8] - InheritedSize[0x00C8])
class USeasonProgressionUIComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_DTFW[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USeasonProgressionUIInputBinder*             InputBinder;                                               // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USeasonProgressionUICompositeInputHandler*   InputHandler;                                              // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEnableMoreButtonEvent>              DetailsNavigationDesc;                                     // 0x00E8(0x0010) (ZeroConstructor)
	struct FSeasonProgressionUITelemetryFragment       NextReceivedEventsTelemetryData;                           // 0x00F8(0x0018)
	unsigned char                                      UnknownData_79OO[0xB8];                                    // 0x0110(0x00B8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIComponent");
		return ptr;
	}



	void OnHUDDestroyed();
	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUICompositeInputHandler
// 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
class USeasonProgressionUICompositeInputHandler : public UCompositeInputHandler
{
public:
	unsigned char                                      UnknownData_8OGX[0x20];                                    // 0x00D8(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUICompositeInputHandler");
		return ptr;
	}



	TEnumAsByte<AthenaInput_EInputHandlerResult> OnMenuButtonPressed();
	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUIInputBinder
// 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
class USeasonProgressionUIInputBinder : public UInputBinder
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIInputBinder");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUIServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USeasonProgressionUIServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUIService
// 0x01C0 (FullSize[0x0590] - InheritedSize[0x03D0])
class ASeasonProgressionUIService : public AActor
{
public:
	unsigned char                                      UnknownData_SWN8[0x30];                                    // 0x03D0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USeasonPopupListAsset*                       SeasonPopupListAsset;                                      // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_981O[0x188];                                   // 0x0408(0x0188) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUIService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SeasonProgressionUI.SeasonProgressionUISettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class USeasonProgressionUISettings : public UObject
{
public:
	struct FStringAssetReference                       SeasonPopupListAsset;                                      // 0x0028(0x0010) (Edit, ZeroConstructor, Config, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SeasonProgressionUI.SeasonProgressionUISettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

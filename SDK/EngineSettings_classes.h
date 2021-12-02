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
// Classes
//---------------------------------------------------------------------------

// Class EngineSettings.ConsoleSettings
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UConsoleSettings : public UObject
{
public:
	int                                                MaxScrollbackSize;                                         // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2WWN[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FAutoCompleteCommand>                ManualAutoCompleteList;                                    // 0x0030(0x0010) (Edit, ZeroConstructor, Config)
	TArray<struct FString>                             AutoCompleteMapPaths;                                      // 0x0040(0x0010) (Edit, ZeroConstructor, Config)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.ConsoleSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.GameMapsSettings
// 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
class UGameMapsSettings : public UObject
{
public:
	struct FString                                     EditorStartupMap;                                          // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     LocalMapOptions;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash)
	struct FString                                     TransitionMap;                                             // 0x0048(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bUseSplitscreen;                                           // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	TEnumAsByte<EngineSettings_ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;                                // 0x0059(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<EngineSettings_EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;                              // 0x005A(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_09TP[0x5];                                     // 0x005B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringClassReference                       GameInstanceClass;                                         // 0x0060(0x0010) (Edit, ZeroConstructor, Config, NoClear)
	struct FString                                     GameDefaultMap;                                            // 0x0070(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     ServerDefaultMap;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash)
	struct FStringClassReference                       GlobalDefaultGameMode;                                     // 0x0090(0x0010) (Edit, ZeroConstructor, Config, NoClear)
	struct FStringClassReference                       GlobalDefaultServerGameMode;                               // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, AdvancedDisplay)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameMapsSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.GameNetworkManagerSettings
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UGameNetworkManagerSettings : public UObject
{
public:
	int                                                MinDynamicBandwidth;                                       // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxDynamicBandwidth;                                       // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalNetBandwidth;                                         // 0x0030(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                BadPingThreshold;                                          // 0x0034(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bIsStandbyCheckingEnabled : 1;                             // 0x0038(0x0001) BIT_FIELD (Edit, Config, NoDestructor)
	unsigned char                                      UnknownData_74YT[0x3];                                     // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              StandbyRxCheatTime;                                        // 0x003C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              StandbyTxCheatTime;                                        // 0x0040(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentMissingForRxStandby;                                // 0x0044(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentMissingForTxStandby;                                // 0x0048(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PercentForBadPing;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              JoinInProgressStandbyWaitTime;                             // 0x0050(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5SMF[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameNetworkManagerSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.GameSessionSettings
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UGameSessionSettings : public UObject
{
public:
	int                                                MaxSpectators;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayers;                                                // 0x002C(0x0004) (Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      bRequiresPushToTalk : 1;                                   // 0x0030(0x0001) BIT_FIELD (Edit, Config, GlobalConfig, NoDestructor)
	unsigned char                                      UnknownData_QUT1[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GameSessionSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.GeneralEngineSettings
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGeneralEngineSettings : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GeneralEngineSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.GeneralProjectSettings
// 0x00E8 (FullSize[0x0110] - InheritedSize[0x0028])
class UGeneralProjectSettings : public UObject
{
public:
	struct FString                                     CompanyName;                                               // 0x0028(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     CompanyDistinguishedName;                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     CopyrightNotice;                                           // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     Description;                                               // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     Homepage;                                                  // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     LicensingTerms;                                            // 0x0078(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     PrivacyPolicy;                                             // 0x0088(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FGuid                                       ProjectID;                                                 // 0x0098(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	struct FString                                     ProjectName;                                               // 0x00A8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     ProjectVersion;                                            // 0x00B8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FString                                     SupportContact;                                            // 0x00C8(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash)
	struct FText                                       ProjectDisplayedTitle;                                     // 0x00D8(0x0018) ELEMENT_SIZE_MISMATCH (Edit, Config)
	unsigned char                                      UnknownData_P7ZW[0x20];                                    // 0x00D8(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.GeneralProjectSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class EngineSettings.HudSettings
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UHudSettings : public UObject
{
public:
	unsigned char                                      bShowHUD : 1;                                              // 0x0028(0x0001) BIT_FIELD (Edit, Config, NoDestructor)
	unsigned char                                      UnknownData_57OH[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               DebugDisplay;                                              // 0x0030(0x0010) (Edit, ZeroConstructor, Config, GlobalConfig)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EngineSettings.HudSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

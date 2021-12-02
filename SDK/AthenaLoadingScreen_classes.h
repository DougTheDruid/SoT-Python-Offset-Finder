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

// Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UAthenaLoadingScreenBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenBlueprintFunctionLibrary");
		return ptr;
	}



	bool STATIC_IsLoadingScreenVisible();
	bool STATIC_IsLoadingScreenRegistered();
	void AfterRead();
	void BeforeDelete();

};

// Class AthenaLoadingScreen.SlateLoadingScreenParams
// 0x01F0 (FullSize[0x0218] - InheritedSize[0x0028])
class USlateLoadingScreenParams : public UDataAsset
{
public:
	bool                                               DrawBackground;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DrawBackgroundImage;                                       // 0x0029(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DrawTips;                                                  // 0x002A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               DrawSpinner;                                               // 0x002B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              ViewportWidth;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ViewportHeight;                                            // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FooterHeight;                                              // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DrawSpinnerText;                                           // 0x0038(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S80L[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FStringAssetReference                       PlaceholderSpinnerTexture;                                 // 0x0040(0x0010) (Edit, ZeroConstructor)
	struct FLinearColor                                BackgroundColour;                                          // 0x0050(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSlateLoadingScreenImageParams              PrimaryImage;                                              // 0x0060(0x0020) (Edit)
	TArray<struct FSlateLoadingScreenImageParams>      CyclingImages;                                             // 0x0080(0x0010) (Edit, ZeroConstructor)
	int                                                MaxNumImagesPerLoad;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GM3M[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       SpinnerText;                                               // 0x0098(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_E3Q0[0x20];                                    // 0x0094(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FSlateColor                                 SpinnerTextColour;                                         // 0x00D0(0x0030) (Edit)
	struct FSlateFontInfo                              SpinnerTextFont;                                           // 0x0100(0x0040) (Edit)
	float                                              SpinnerSize;                                               // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                     SpinnerMargin;                                             // 0x0144(0x0010) (Edit)
	float                                              SpinnerPadding;                                            // 0x0154(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStringAssetReference                       SpinnerIcon;                                               // 0x0158(0x0010) (Edit, ZeroConstructor)
	struct FMargin                                     TipsMargin;                                                // 0x0168(0x0010) (Edit)
	float                                              TipWrapLength;                                             // 0x0178(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TipDisplayDuration;                                        // 0x017C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TipDurationBetweenTips;                                    // 0x0180(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumTipsPerImage;                                           // 0x0184(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              LoadingTipFont;                                            // 0x0188(0x0040) (Edit)
	float                                              LoadingTipFontLineHeightPercentage;                        // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UYZT[0x4];                                     // 0x01CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FText>                               LoadingScreenTips;                                         // 0x01D0(0x0010) (Edit, ZeroConstructor)
	struct FSlateColor                                 LoadingScreenTipColour;                                    // 0x01E0(0x0030) (Edit)
	bool                                               AllowSyncronousAssetLoad;                                  // 0x0210(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HDV5[0x7];                                     // 0x0211(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaLoadingScreen.SlateLoadingScreenParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaLoadingScreen.AthenaLoadingScreenParams
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UAthenaLoadingScreenParams : public UDeveloperSettings
{
public:
	struct FStringAssetReference                       BootLoadingScreen;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Config, Protected)
	struct FStringAssetReference                       TeleportLoadingScreen;                                     // 0x0048(0x0010) (Edit, ZeroConstructor, Config, Protected)
	struct FStringAssetReference                       AdventureLoadingScreens;                                   // 0x0058(0x0010) (Edit, ZeroConstructor, Config, Protected)
	struct FStringAssetReference                       ArenaLoadingScreens;                                       // 0x0068(0x0010) (Edit, ZeroConstructor, Config, Protected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaLoadingScreen.AthenaLoadingScreenParams");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class AthenaLoadingScreen.LoadingUtilities
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULoadingUtilities : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class AthenaLoadingScreen.LoadingUtilities");
		return ptr;
	}



	bool STATIC_IsStreaming(class UObject* WorldContextObject);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

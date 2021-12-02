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

// Class EditorStyle.EditorStyleSettings
// 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
class UEditorStyleSettings : public UObject
{
public:
	struct FLinearColor                                SelectionColor;                                            // 0x0028(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	struct FLinearColor                                PressedSelectionColor;                                     // 0x0038(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	struct FLinearColor                                InactiveSelectionColor;                                    // 0x0048(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	struct FLinearColor                                KeyboardFocusColor;                                        // 0x0058(0x0010) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay)
	TEnumAsByte<EditorStyle_EColorVisionDeficiency>    ColorVisionDeficiencyPreviewType;                          // 0x0068(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Y0CD[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      bUseSmallToolBarIcons : 1;                                 // 0x006C(0x0001) BIT_FIELD (Edit, Config, NoDestructor)
	unsigned char                                      bEnableWindowAnimations : 1;                               // 0x006C(0x0001) BIT_FIELD (Edit, Config, NoDestructor)
	unsigned char                                      bShowFriendlyNames : 1;                                    // 0x006C(0x0001) BIT_FIELD (Edit, Config, NoDestructor)
	unsigned char                                      bExpandConfigurationMenus : 1;                             // 0x006C(0x0001) BIT_FIELD (Edit, Config, NoDestructor, AdvancedDisplay)
	unsigned char                                      bShowProjectMenus : 1;                                     // 0x006C(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      bShowLaunchMenus : 1;                                      // 0x006C(0x0001) BIT_FIELD (Config, NoDestructor)
	unsigned char                                      UnknownData_4O5O[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<CoreUObject_ELogTimes>                 LogTimestampMode;                                          // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                               bOpenAssetEditorTabsInNewWindow;                           // 0x0071(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_I0TJ[0x1E];                                    // 0x0072(0x001E) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class EditorStyle.EditorStyleSettings");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

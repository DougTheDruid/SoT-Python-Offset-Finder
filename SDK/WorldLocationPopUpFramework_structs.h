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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct WorldLocationPopUpFramework.PlayerEnteredWorldLocationNotificationEvent
// 0x0028
struct FPlayerEnteredWorldLocationNotificationEvent
{
	class UPopUpAudioDesc*                             AudioOverride;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     IconPath;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     DisplayText;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

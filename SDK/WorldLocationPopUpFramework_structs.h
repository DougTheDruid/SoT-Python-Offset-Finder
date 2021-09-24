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

// ScriptStruct WorldLocationPopUpFramework.PlayerEnteredWorldLocationNotificationEvent
// 0x0040
struct FPlayerEnteredWorldLocationNotificationEvent
{
	struct FText                                       DisplayText;                                               // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_NOF5[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              DisplayDuration;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_K72R[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

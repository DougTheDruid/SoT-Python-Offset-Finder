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

// ScriptStruct ObjectMessaging.ObjectMessagingObjectScoper
// 0x0050
struct FObjectMessagingObjectScoper
{
	unsigned char                                      UnknownData_EEEQ[0x50];                                    // 0x0000(0x0050) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcherHandle
// 0x0008
struct FObjectMessagingDispatcherHandle
{
	unsigned char                                      UnknownData_IAQD[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ObjectMessaging.ObjectMessagingHandle
// 0x0048
struct FObjectMessagingHandle
{
	unsigned char                                      UnknownData_JYZN[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     EventType;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C8D5[0x38];                                    // 0x0010(0x0038) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ObjectMessaging.ObjectMessagingDispatcher
// 0x00A0
struct FObjectMessagingDispatcher
{
	unsigned char                                      UnknownData_R7KL[0xA0];                                    // 0x0000(0x00A0) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

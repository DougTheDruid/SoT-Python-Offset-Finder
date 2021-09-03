#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Enum JsonUtilities.EJsonTestEnum
enum class JsonUtilities_EJsonTestEnum : uint8_t
{
	EJsonTestEnum__Value0          = 0,
	EJsonTestEnum__Value1          = 1,
	EJsonTestEnum__EJsonTestEnum_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct JsonUtilities.JsonObjectWrapper
// 0x0018
struct FJsonObjectWrapper
{
	unsigned char                                      UnknownData_7U0H[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestTextObject
// 0x0070
struct FTestTextObject
{
	struct FText                                       TestText;                                                  // 0x0000(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_LTPF[0x20];                                    // 0x0000(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FText                                       TestTextExport;                                            // 0x0038(0x0018) ELEMENT_SIZE_MISMATCH
	unsigned char                                      UnknownData_XJHQ[0x20];                                    // 0x0038(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestFloatObject
// 0x0008
struct FTestFloatObject
{
	float                                              TestFloat1;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TestFloat2;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestEnumObject
// 0x0001
struct FTestEnumObject
{
	TEnumAsByte<JsonUtilities_EJsonTestEnum>           TestEnum;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestMessageTimespan
// 0x0008
struct FTestMessageTimespan
{
	struct FTimespan                                   Timespan;                                                  // 0x0000(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestMessageDateTime
// 0x0008
struct FTestMessageDateTime
{
	struct FDateTime                                   DateTime;                                                  // 0x0000(0x0008) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestSerializationObject
// 0x0028
struct FTestSerializationObject
{
	bool                                               TestBool;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_S2H7[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TestInt;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     TestString;                                                // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	struct FGuid                                       TestGuid;                                                  // 0x0018(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestSerializationNestedObject
// 0x0028
struct FTestSerializationNestedObject
{
	struct FTestSerializationObject                    NestedObject;                                              // 0x0000(0x0028)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestMessageUInt64
// 0x0008
struct FTestMessageUInt64
{
	uint64_t                                           TestInt;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestMessageInt64
// 0x0008
struct FTestMessageInt64
{
	int64_t                                            TestInt;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestUStructMapSerializationObject
// 0x0050
struct FTestUStructMapSerializationObject
{
	TMap<struct FString, struct FTestSerializationObject> StructMap;                                                 // 0x0000(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestInt32MapSerializationObject
// 0x0050
struct FTestInt32MapSerializationObject
{
	TMap<struct FString, int>                          Int32Map;                                                  // 0x0000(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestInvalidStringMapSerializationObject
// 0x0050
struct FTestInvalidStringMapSerializationObject
{
	TMap<int, struct FString>                          StringMap;                                                 // 0x0000(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct JsonUtilities.TestStringMapSerializationObject
// 0x0050
struct FTestStringMapSerializationObject
{
	TMap<struct FString, struct FString>               StringMap;                                                 // 0x0000(0x0050) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

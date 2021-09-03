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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Serialisation.SerialisedNestedStruct
// 0x0028
struct FSerialisedNestedStruct
{
	struct FString                                     String;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<int>                                        IntArray;                                                  // 0x0010(0x0010) (ZeroConstructor)
	int                                                Int;                                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Float;                                                     // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct Serialisation.SerialisedTestStruct
// 0x0060
struct FSerialisedTestStruct
{
	int                                                Int;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Float;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     String;                                                    // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash)
	TArray<int>                                        IntArray;                                                  // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FSerialisedNestedStruct>             StructArray;                                               // 0x0028(0x0010) (ZeroConstructor)
	struct FSerialisedNestedStruct                     NestedStruct;                                              // 0x0038(0x0028)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfigurationEntry
// 0x0028
struct FPoolableCollectionMapConfigurationEntry
{
	TAssetPtr<class UClass>                            Type;                                                      // 0x0000(0x001C) ELEMENT_SIZE_MISMATCH (Edit, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_G0E6[0x4];                                     // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	int                                                Size;                                                      // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E8A9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct ResourceContentionFramework.PoolableCollectionMapConfiguration
// 0x0018
struct FPoolableCollectionMapConfiguration
{
	TArray<struct FPoolableCollectionMapConfigurationEntry> Pools;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor)
	bool                                               PopulateJustInTime;                                        // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_G3N1[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

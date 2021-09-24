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

// Class SimpleOverlaps.SimpleOverlapCollectionKey
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USimpleOverlapCollectionKey : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapCollectionKey");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class SimpleOverlaps.SimpleOverlapComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class USimpleOverlapComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_5QR5[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class SimpleOverlaps.SimpleOverlapComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

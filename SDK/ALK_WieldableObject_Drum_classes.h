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

// BlueprintGeneratedClass ALK_WieldableObject_Drum.ALK_WieldableObject_Drum_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UALK_WieldableObject_Drum_C : public UWieldableItemAnimationStoreId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALK_WieldableObject_Drum.ALK_WieldableObject_Drum_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

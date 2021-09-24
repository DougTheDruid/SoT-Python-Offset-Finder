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

// BlueprintGeneratedClass ALK_FirstPerson_Male_Unfit.ALK_FirstPerson_Male_Unfit_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UALK_FirstPerson_Male_Unfit_C : public UAnimationDataStoreId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ALK_FirstPerson_Male_Unfit.ALK_FirstPerson_Male_Unfit_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

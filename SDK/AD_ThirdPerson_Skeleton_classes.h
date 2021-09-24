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

// BlueprintGeneratedClass AD_ThirdPerson_Skeleton.AD_ThirdPerson_Skeleton_C
// 0x0000 (FullSize[0x0750] - InheritedSize[0x0750])
class UAD_ThirdPerson_Skeleton_C : public UAD_ThirdPerson_PlayerPirate_Male_Default_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AD_ThirdPerson_Skeleton.AD_ThirdPerson_Skeleton_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

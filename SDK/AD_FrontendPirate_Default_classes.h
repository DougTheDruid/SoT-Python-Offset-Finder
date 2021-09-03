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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AD_FrontendPirate_Default.AD_FrontendPirate_Default_C
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UAD_FrontendPirate_Default_C : public UAnimationData
{
public:
	struct FADS_FrontendPiratePoses                    PiratePoses;                                               // 0x0028(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass AD_FrontendPirate_Default.AD_FrontendPirate_Default_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

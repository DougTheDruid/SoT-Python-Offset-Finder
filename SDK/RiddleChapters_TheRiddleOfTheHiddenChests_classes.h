#pragma once

// Name: SoT, Version: 2.4.0


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

// BlueprintGeneratedClass RiddleChapters_TheRiddleOfTheHiddenChests.RiddleChapters_TheRiddleOfTheHiddenChests_C
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class URiddleChapters_TheRiddleOfTheHiddenChests_C : public UVoyageProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RiddleChapters_TheRiddleOfTheHiddenChests.RiddleChapters_TheRiddleOfTheHiddenChests_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

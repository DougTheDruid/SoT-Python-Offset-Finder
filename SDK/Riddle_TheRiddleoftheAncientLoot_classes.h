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

// BlueprintGeneratedClass Riddle_TheRiddleoftheAncientLoot.Riddle_TheRiddleoftheAncientLoot_C
// 0x0000 (FullSize[0x0138] - InheritedSize[0x0138])
class URiddle_TheRiddleoftheAncientLoot_C : public UVoyageProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Riddle_TheRiddleoftheAncientLoot.Riddle_TheRiddleoftheAncientLoot_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

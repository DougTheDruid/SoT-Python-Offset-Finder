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

// BlueprintGeneratedClass Proposal_TheArtOfTheTrickster_Chapter2.Proposal_TheArtOfTheTrickster_Chapter2_C
// 0x0000 (FullSize[0x0140] - InheritedSize[0x0140])
class UProposal_TheArtOfTheTrickster_Chapter2_C : public UVoyageCheckpointProposalDesc
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Proposal_TheArtOfTheTrickster_Chapter2.Proposal_TheArtOfTheTrickster_Chapter2_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

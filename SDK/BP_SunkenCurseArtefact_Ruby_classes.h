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

// BlueprintGeneratedClass BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C
// 0x0010 (FullSize[0x0710] - InheritedSize[0x0700])
class ABP_SunkenCurseArtefact_Ruby_C : public ASunkenCurseArtefact
{
public:
	class USunkenCurseArtefactItemSpawnComponent*      SunkenCurseArtefactItemSpawn;                              // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshComponent*                        Glint;                                                     // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_SunkenCurseArtefact_Ruby.BP_SunkenCurseArtefact_Ruby_C");
		return ptr;
	}



	void UserConstructionScript();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

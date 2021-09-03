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

// BlueprintGeneratedClass NoIslandCannonsSpawnContext.NoIslandCannonsSpawnContext_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UNoIslandCannonsSpawnContext_C : public UAISpawnContextId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass NoIslandCannonsSpawnContext.NoIslandCannonsSpawnContext_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

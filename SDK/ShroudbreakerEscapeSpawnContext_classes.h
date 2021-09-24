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

// BlueprintGeneratedClass ShroudbreakerEscapeSpawnContext.ShroudbreakerEscapeSpawnContext_C
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UShroudbreakerEscapeSpawnContext_C : public UAISpawnContextId
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass ShroudbreakerEscapeSpawnContext.ShroudbreakerEscapeSpawnContext_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

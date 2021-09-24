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

// BlueprintGeneratedClass BP_BeachNPCSpawnFlowStarter.BP_BeachNPCSpawnFlowStarter_C
// 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
class UBP_BeachNPCSpawnFlowStarter_C : public UBeachNPCSpawnFlowStarter
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_BeachNPCSpawnFlowStarter.BP_BeachNPCSpawnFlowStarter_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

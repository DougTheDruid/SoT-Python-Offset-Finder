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

// BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Sea_rock.BP_MultiCrewSkeletonThrone_Sea_rock_C
// 0x0000 (FullSize[0x0448] - InheritedSize[0x0448])
class ABP_MultiCrewSkeletonThrone_Sea_rock_C : public ABP_MultiCrewSkeletonThrone_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_MultiCrewSkeletonThrone_Sea_rock.BP_MultiCrewSkeletonThrone_Sea_rock_C");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

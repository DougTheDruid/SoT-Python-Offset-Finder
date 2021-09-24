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

// BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C
// 0x0040 (FullSize[0x0758] - InheritedSize[0x0718])
class ABP_TheSunkenCrystal_DriveDownFloatingDebris_05_C : public ABuoyantStorageContainer
{
public:
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint5;                               // 0x0718(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint4;                               // 0x0720(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint3;                               // 0x0728(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint2;                               // 0x0730(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint1;                               // 0x0738(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UStaticMeshMemoryConstraintComponent*        StaticMeshMemoryConstraint;                                // 0x0740(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class USphereComponent*                            Sphere;                                                    // 0x0748(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)
	class UTelemetrySubjectComponent*                  TelemetrySubject;                                          // 0x0750(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_TheSunkenCrystal_DriveDownFloatingDebris_05.BP_TheSunkenCrystal_DriveDownFloatingDebris_05_C");
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

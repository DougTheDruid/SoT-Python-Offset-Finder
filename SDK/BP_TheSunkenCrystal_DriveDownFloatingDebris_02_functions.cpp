// Name: SoT, Version: 2.3.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_TheSunkenCrystal_DriveDownFloatingDebris_02.BP_TheSunkenCrystal_DriveDownFloatingDebris_02_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TheSunkenCrystal_DriveDownFloatingDebris_02_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TheSunkenCrystal_DriveDownFloatingDebris_02.BP_TheSunkenCrystal_DriveDownFloatingDebris_02_C.UserConstructionScript");

	ABP_TheSunkenCrystal_DriveDownFloatingDebris_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TheSunkenCrystal_DriveDownFloatingDebris_02_C::AfterRead()
{
	ABuoyantStorageContainer::AfterRead();

	READ_PTR_FULL(StaticMeshMemoryConstraint44, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint43, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint42, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint41, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint40, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint39, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint38, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint37, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint36, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint35, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint34, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint33, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint32, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint31, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint30, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint29, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint28, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint27, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint26, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint25, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint24, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint23, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint22, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint21, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint20, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint19, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint18, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint17, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint16, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint15, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint14, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint13, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint12, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint11, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint10, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint9, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint8, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint7, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint6, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint5, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint4, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint3, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint2, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint1, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(StaticMeshMemoryConstraint, UStaticMeshMemoryConstraintComponent);
	READ_PTR_FULL(Sphere, USphereComponent);
	READ_PTR_FULL(TelemetrySubject, UTelemetrySubjectComponent);
}

void ABP_TheSunkenCrystal_DriveDownFloatingDebris_02_C::BeforeDelete()
{
	ABuoyantStorageContainer::BeforeDelete();

	DELE_PTR_FULL(StaticMeshMemoryConstraint44);
	DELE_PTR_FULL(StaticMeshMemoryConstraint43);
	DELE_PTR_FULL(StaticMeshMemoryConstraint42);
	DELE_PTR_FULL(StaticMeshMemoryConstraint41);
	DELE_PTR_FULL(StaticMeshMemoryConstraint40);
	DELE_PTR_FULL(StaticMeshMemoryConstraint39);
	DELE_PTR_FULL(StaticMeshMemoryConstraint38);
	DELE_PTR_FULL(StaticMeshMemoryConstraint37);
	DELE_PTR_FULL(StaticMeshMemoryConstraint36);
	DELE_PTR_FULL(StaticMeshMemoryConstraint35);
	DELE_PTR_FULL(StaticMeshMemoryConstraint34);
	DELE_PTR_FULL(StaticMeshMemoryConstraint33);
	DELE_PTR_FULL(StaticMeshMemoryConstraint32);
	DELE_PTR_FULL(StaticMeshMemoryConstraint31);
	DELE_PTR_FULL(StaticMeshMemoryConstraint30);
	DELE_PTR_FULL(StaticMeshMemoryConstraint29);
	DELE_PTR_FULL(StaticMeshMemoryConstraint28);
	DELE_PTR_FULL(StaticMeshMemoryConstraint27);
	DELE_PTR_FULL(StaticMeshMemoryConstraint26);
	DELE_PTR_FULL(StaticMeshMemoryConstraint25);
	DELE_PTR_FULL(StaticMeshMemoryConstraint24);
	DELE_PTR_FULL(StaticMeshMemoryConstraint23);
	DELE_PTR_FULL(StaticMeshMemoryConstraint22);
	DELE_PTR_FULL(StaticMeshMemoryConstraint21);
	DELE_PTR_FULL(StaticMeshMemoryConstraint20);
	DELE_PTR_FULL(StaticMeshMemoryConstraint19);
	DELE_PTR_FULL(StaticMeshMemoryConstraint18);
	DELE_PTR_FULL(StaticMeshMemoryConstraint17);
	DELE_PTR_FULL(StaticMeshMemoryConstraint16);
	DELE_PTR_FULL(StaticMeshMemoryConstraint15);
	DELE_PTR_FULL(StaticMeshMemoryConstraint14);
	DELE_PTR_FULL(StaticMeshMemoryConstraint13);
	DELE_PTR_FULL(StaticMeshMemoryConstraint12);
	DELE_PTR_FULL(StaticMeshMemoryConstraint11);
	DELE_PTR_FULL(StaticMeshMemoryConstraint10);
	DELE_PTR_FULL(StaticMeshMemoryConstraint9);
	DELE_PTR_FULL(StaticMeshMemoryConstraint8);
	DELE_PTR_FULL(StaticMeshMemoryConstraint7);
	DELE_PTR_FULL(StaticMeshMemoryConstraint6);
	DELE_PTR_FULL(StaticMeshMemoryConstraint5);
	DELE_PTR_FULL(StaticMeshMemoryConstraint4);
	DELE_PTR_FULL(StaticMeshMemoryConstraint3);
	DELE_PTR_FULL(StaticMeshMemoryConstraint2);
	DELE_PTR_FULL(StaticMeshMemoryConstraint1);
	DELE_PTR_FULL(StaticMeshMemoryConstraint);
	DELE_PTR_FULL(Sphere);
	DELE_PTR_FULL(TelemetrySubject);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

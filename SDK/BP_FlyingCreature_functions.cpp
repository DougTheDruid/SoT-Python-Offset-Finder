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
//		Name   -> Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_FlyingCreature_C::CreateCreature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.CreateCreature");

	ABP_FlyingCreature_C_CreateCreature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_FlyingCreature_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_FlyingCreature.BP_FlyingCreature_C.UserConstructionScript");

	ABP_FlyingCreature_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_FlyingCreature_C::AfterRead()
{
	AFlyingCreature::AfterRead();

	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(StaticMeshComponent, UStaticMeshComponent);
	READ_PTR_FULL(currMaterial, UMaterialInstanceDynamic);
}

void ABP_FlyingCreature_C::BeforeDelete()
{
	AFlyingCreature::BeforeDelete();

	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(StaticMeshComponent);
	DELE_PTR_FULL(currMaterial);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

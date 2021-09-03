// Name: SoT, Version: 2.2.1.1

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

// Function BP_Figurehead.BP_Figurehead_C.GetVFXComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UParticleSystemComponent* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UParticleSystemComponent* ABP_Figurehead_C::GetVFXComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.GetVFXComponent");

	ABP_Figurehead_C_GetVFXComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Figurehead.BP_Figurehead_C.GetMeshComponent
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UStaticMeshComponent*    ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UStaticMeshComponent* ABP_Figurehead_C::GetMeshComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.GetMeshComponent");

	ABP_Figurehead_C_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Figurehead_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead.BP_Figurehead_C.UserConstructionScript");

	ABP_Figurehead_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Figurehead_C::AfterRead()
{
	AGenericPartWithVFX::AfterRead();

	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(Figurehead, UStaticMeshComponent);
}

void ABP_Figurehead_C::BeforeDelete()
{
	AGenericPartWithVFX::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(Figurehead);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

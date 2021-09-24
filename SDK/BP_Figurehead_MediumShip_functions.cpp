// Name: SoT, Version: 2.3.0.Brig

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
//		Name   -> Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetVFXComponent
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UParticleSystemComponent*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UParticleSystemComponent* ABP_Figurehead_MediumShip_C::GetVFXComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetVFXComponent");

	ABP_Figurehead_MediumShip_C_GetVFXComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetMeshComponent
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UStaticMeshComponent*                        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
class UStaticMeshComponent* ABP_Figurehead_MediumShip_C::GetMeshComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.GetMeshComponent");

	ABP_Figurehead_MediumShip_C_GetMeshComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Figurehead_MediumShip_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Figurehead_MediumShip.BP_Figurehead_MediumShip_C.UserConstructionScript");

	ABP_Figurehead_MediumShip_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Figurehead_MediumShip_C::AfterRead()
{
	AGenericPartWithVFX::AfterRead();

	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(Figurehead, UStaticMeshComponent);
}

void ABP_Figurehead_MediumShip_C::BeforeDelete()
{
	AGenericPartWithVFX::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(Figurehead);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

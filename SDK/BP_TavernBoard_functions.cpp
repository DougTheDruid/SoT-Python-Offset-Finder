// Name: SoT, Version: 2.4.0

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
//		Offset -> 0x016629C0
//		Name   -> Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TavernBoard_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TavernBoard.BP_TavernBoard_C.UserConstructionScript");

	ABP_TavernBoard_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_TavernBoard_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TavernBoard.BP_TavernBoard_C.ReceiveBeginPlay");

	ABP_TavernBoard_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TavernBoard_C::ExecuteUbergraph_BP_TavernBoard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TavernBoard.BP_TavernBoard_C.ExecuteUbergraph_BP_TavernBoard");

	ABP_TavernBoard_C_ExecuteUbergraph_BP_TavernBoard_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TavernBoard_C::AfterRead()
{
	ATavernBoard::AfterRead();

	READ_PTR_FULL(ParticleSystem2, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem1, UParticleSystemComponent);
	READ_PTR_FULL(ParticleSystem, UParticleSystemComponent);
	READ_PTR_FULL(PointLight1, UPointLightComponent);
	READ_PTR_FULL(PointLight, UPointLightComponent);
	READ_PTR_FULL(bld_jetty_support_b, UStaticMeshComponent);
	READ_PTR_FULL(gmp_messageboard_01_a, UStaticMeshComponent);
	READ_PTR_FULL(PlayerGeneratedMapsContainer, UPlayerGeneratedMapsContainerComponent);
}

void ABP_TavernBoard_C::BeforeDelete()
{
	ATavernBoard::BeforeDelete();

	DELE_PTR_FULL(ParticleSystem2);
	DELE_PTR_FULL(ParticleSystem1);
	DELE_PTR_FULL(ParticleSystem);
	DELE_PTR_FULL(PointLight1);
	DELE_PTR_FULL(PointLight);
	DELE_PTR_FULL(bld_jetty_support_b);
	DELE_PTR_FULL(gmp_messageboard_01_a);
	DELE_PTR_FULL(PlayerGeneratedMapsContainer);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_onboarding_intro_tavern_table_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_onboarding_intro_tavern_table.BP_onboarding_intro_tavern_table_C.UserConstructionScript");

	ABP_onboarding_intro_tavern_table_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_onboarding_intro_tavern_table_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Candle_VFX, UParticleSystemComponent);
	READ_PTR_FULL(Stool_3, UStaticMeshComponent);
	READ_PTR_FULL(OnboardingIntroLocation, UOnboardingIntroLocationComponent);
	READ_PTR_FULL(Stool_2, UStaticMeshComponent);
	READ_PTR_FULL(Stool_1, UStaticMeshComponent);
	READ_PTR_FULL(Table, UStaticMeshComponent);
	READ_PTR_FULL(Tankard_2, UStaticMeshComponent);
	READ_PTR_FULL(Plate_2, UStaticMeshComponent);
	READ_PTR_FULL(Candle_3, UStaticMeshComponent);
	READ_PTR_FULL(Candle_2, UStaticMeshComponent);
	READ_PTR_FULL(Tankard_1, UStaticMeshComponent);
	READ_PTR_FULL(Plate_1, UStaticMeshComponent);
	READ_PTR_FULL(Candle_1, UStaticMeshComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_onboarding_intro_tavern_table_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Candle_VFX);
	DELE_PTR_FULL(Stool_3);
	DELE_PTR_FULL(OnboardingIntroLocation);
	DELE_PTR_FULL(Stool_2);
	DELE_PTR_FULL(Stool_1);
	DELE_PTR_FULL(Table);
	DELE_PTR_FULL(Tankard_2);
	DELE_PTR_FULL(Plate_2);
	DELE_PTR_FULL(Candle_3);
	DELE_PTR_FULL(Candle_2);
	DELE_PTR_FULL(Tankard_1);
	DELE_PTR_FULL(Plate_1);
	DELE_PTR_FULL(Candle_1);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

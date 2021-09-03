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

// Function BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C.HasPrerequisites
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UBP_CompanyOnboardingStarter_C::HasPrerequisites()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CompanyOnboardingStarter.BP_CompanyOnboardingStarter_C.HasPrerequisites");

	UBP_CompanyOnboardingStarter_C_HasPrerequisites_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UBP_CompanyOnboardingStarter_C::AfterRead()
{
	UCompanyOnboardingStarter::AfterRead();

}

void UBP_CompanyOnboardingStarter_C::BeforeDelete()
{
	UCompanyOnboardingStarter::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

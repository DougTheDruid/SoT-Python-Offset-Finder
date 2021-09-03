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

// Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          StickInputX                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UBP_AxisControlInterface_C::StickInput(float StickInputX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_AxisControlInterface.BP_AxisControlInterface_C.StickInput");

	UBP_AxisControlInterface_C_StickInput_Params params;
	params.StickInputX = StickInputX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UBP_AxisControlInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UBP_AxisControlInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

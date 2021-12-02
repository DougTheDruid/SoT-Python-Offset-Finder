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
//		Name   -> Function Interface_Garden.Interface_Garden_C.Set Garden Parameters
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Int                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               Instances_Created                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInterface_Garden_C::Set_Garden_Parameters(float Radius, int Int, bool* Instances_Created)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Interface_Garden.Interface_Garden_C.Set Garden Parameters");

	UInterface_Garden_C_Set_Garden_Parameters_Params params {};
	params.Radius = Radius;
	params.Int = Int;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instances_Created != nullptr)
		*Instances_Created = params.Instances_Created;

}


void UInterface_Garden_C::AfterRead()
{
	UInterface::AfterRead();

}

void UInterface_Garden_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

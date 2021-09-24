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
//		Name   -> Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsFemale                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UPlayerGenderInterface_C::CheckIsFemale(bool* IsFemale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function PlayerGenderInterface.PlayerGenderInterface_C.CheckIsFemale");

	UPlayerGenderInterface_C_CheckIsFemale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsFemale != nullptr)
		*IsFemale = params.IsFemale;

}


void UPlayerGenderInterface_C::AfterRead()
{
	UInterface::AfterRead();

}

void UPlayerGenderInterface_C::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails.BP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C.UserConstructionScript");

	ABP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C::AfterRead()
{
	ABP_Shopkeeper_C::AfterRead();

}

void ABP_Campaign005_CursedSails_ShopkeeperTony_PreCursedSails_C::BeforeDelete()
{
	ABP_Shopkeeper_C::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

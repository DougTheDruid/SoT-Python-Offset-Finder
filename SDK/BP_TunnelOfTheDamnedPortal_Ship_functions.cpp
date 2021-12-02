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
//		Name   -> Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortal_Ship_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.UserConstructionScript");

	ABP_TunnelOfTheDamnedPortal_Ship_C_UserConstructionScript_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_TunnelOfTheDamnedPortal_Ship_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ReceiveBeginPlay");

	ABP_TunnelOfTheDamnedPortal_Ship_C_ReceiveBeginPlay_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016629C0
//		Name   -> Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_TunnelOfTheDamnedPortal_Ship_C::ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_TunnelOfTheDamnedPortal_Ship.BP_TunnelOfTheDamnedPortal_Ship_C.ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship");

	ABP_TunnelOfTheDamnedPortal_Ship_C_ExecuteUbergraph_BP_TunnelOfTheDamnedPortal_Ship_Params params {};
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_TunnelOfTheDamnedPortal_Ship_C::AfterRead()
{
	ATunnelOfTheDamnedPortal::AfterRead();

	READ_PTR_FULL(SynchedMusicZone, USynchedMusicZoneComponent);
}

void ABP_TunnelOfTheDamnedPortal_Ship_C::BeforeDelete()
{
	ATunnelOfTheDamnedPortal::BeforeDelete();

	DELE_PTR_FULL(SynchedMusicZone);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

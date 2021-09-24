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
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.PlayShowTokenAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Token                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::PlayShowTokenAnimation(class UPrimitiveComponent* Token)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.PlayShowTokenAnimation");

	ABP_VotableTaleProposal_Vertical_C_PlayShowTokenAnimation_Params params;
	params.Token = Token;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.Is Session Locked
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsLocked                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::Is_Session_Locked(bool* IsLocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.Is Session Locked");

	ABP_VotableTaleProposal_Vertical_C_Is_Session_Locked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsLocked != nullptr)
		*IsLocked = params.IsLocked;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_VotableTaleProposal_Vertical_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.UserConstructionScript");

	ABP_VotableTaleProposal_Vertical_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_VotableTaleProposal_Vertical_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ReceiveBeginPlay");

	ABP_VotableTaleProposal_Vertical_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteAdded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
void ABP_VotableTaleProposal_Vertical_C::OnVoteAdded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteAdded");

	ABP_VotableTaleProposal_Vertical_C_OnVoteAdded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteRemoved
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
void ABP_VotableTaleProposal_Vertical_C::OnVoteRemoved()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.OnVoteRemoved");

	ABP_VotableTaleProposal_Vertical_C_OnVoteRemoved_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ExecuteUbergraph_BP_VotableTaleProposal_Vertical
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_VotableTaleProposal_Vertical_C::ExecuteUbergraph_BP_VotableTaleProposal_Vertical(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_VotableTaleProposal_Vertical.BP_VotableTaleProposal_Vertical_C.ExecuteUbergraph_BP_VotableTaleProposal_Vertical");

	ABP_VotableTaleProposal_Vertical_C_ExecuteUbergraph_BP_VotableTaleProposal_Vertical_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_VotableTaleProposal_Vertical_C::AfterRead()
{
	AVotableObjectView::AfterRead();

	READ_PTR_FULL(Token_1, UStaticMeshComponent);
	READ_PTR_FULL(Token_4, UStaticMeshComponent);
	READ_PTR_FULL(Token_3, UStaticMeshComponent);
	READ_PTR_FULL(Token_2, UStaticMeshComponent);
	READ_PTR_FULL(Token_Asset, UStaticMesh);
	READ_PTR_FULL(Token_Material, UMaterialInterface);
}

void ABP_VotableTaleProposal_Vertical_C::BeforeDelete()
{
	AVotableObjectView::BeforeDelete();

	DELE_PTR_FULL(Token_1);
	DELE_PTR_FULL(Token_4);
	DELE_PTR_FULL(Token_3);
	DELE_PTR_FULL(Token_2);
	DELE_PTR_FULL(Token_Asset);
	DELE_PTR_FULL(Token_Material);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

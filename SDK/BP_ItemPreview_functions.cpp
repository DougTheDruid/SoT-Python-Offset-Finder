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
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemPreview_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript");

	ABP_ItemPreview_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemPreview_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay");

	ABP_ItemPreview_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_ItemPreview_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay");

	ABP_ItemPreview_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
//		Flags  -> ()
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_ItemPreview_C::ExecuteUbergraph_BP_ItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview");

	ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPiratePreviewShutdownEvent                 Data                                                       (Parm)
void ABP_ItemPreview_C::PreviewShutdown__DelegateSignature(const struct FPiratePreviewShutdownEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature");

	ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPiratePreviewReadyEvent                    Data                                                       (Parm)
void ABP_ItemPreview_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature");

	ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPiratePreviewBusyEvent                     Data                                                       (Parm)
void ABP_ItemPreview_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature");

	ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ItemPreview_C::AfterRead()
{
	AItemPreviewActor::AfterRead();

	READ_PTR_FULL(Camera_Dog, UArrowComponent);
	READ_PTR_FULL(Camera_Far, UArrowComponent);
	READ_PTR_FULL(Camera_Mid, UArrowComponent);
	READ_PTR_FULL(Camera_Near, UArrowComponent);
	READ_PTR_FULL(IconBillboard, UBillboardComponent);
	READ_PTR_FULL(Camera_Default, UArrowComponent);
	READ_PTR_FULL(ChildActor, UChildActorComponent);
	READ_PTR_FULL(HiddenDftMesh, USkeletalMeshComponent);
	READ_PTR_FULL(ItemMesh, USkeletalMeshComponent);
	READ_PTR_FULL(Camera, UCameraComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_ItemPreview_C::BeforeDelete()
{
	AItemPreviewActor::BeforeDelete();

	DELE_PTR_FULL(Camera_Dog);
	DELE_PTR_FULL(Camera_Far);
	DELE_PTR_FULL(Camera_Mid);
	DELE_PTR_FULL(Camera_Near);
	DELE_PTR_FULL(IconBillboard);
	DELE_PTR_FULL(Camera_Default);
	DELE_PTR_FULL(ChildActor);
	DELE_PTR_FULL(HiddenDftMesh);
	DELE_PTR_FULL(ItemMesh);
	DELE_PTR_FULL(Camera);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

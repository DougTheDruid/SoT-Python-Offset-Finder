#pragma once

// Name: SoT, Version: 2.2.1.1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BP_ItemPreview.BP_ItemPreview_C.UserConstructionScript
struct ABP_ItemPreview_C_UserConstructionScript_Params
{
};

// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveEndPlay
struct ABP_ItemPreview_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemPreview.BP_ItemPreview_C.ReceiveBeginPlay
struct ABP_ItemPreview_C_ReceiveBeginPlay_Params
{
};

// Function BP_ItemPreview.BP_ItemPreview_C.ExecuteUbergraph_BP_ItemPreview
struct ABP_ItemPreview_C_ExecuteUbergraph_BP_ItemPreview_Params
{
	int                                                EntryPoint;                                                // (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_ItemPreview.BP_ItemPreview_C.PreviewShutdown__DelegateSignature
struct ABP_ItemPreview_C_PreviewShutdown__DelegateSignature_Params
{
	struct FPiratePreviewShutdownEvent                 Data;                                                      // (Parm)
};

// Function BP_ItemPreview.BP_ItemPreview_C.PreviewReady__DelegateSignature
struct ABP_ItemPreview_C_PreviewReady__DelegateSignature_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                      // (Parm)
};

// Function BP_ItemPreview.BP_ItemPreview_C.PreviewBusy__DelegateSignature
struct ABP_ItemPreview_C_PreviewBusy__DelegateSignature_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                      // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

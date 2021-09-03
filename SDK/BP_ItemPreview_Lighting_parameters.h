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

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript
struct ABP_ItemPreview_Lighting_C_UserConstructionScript_Params
{
};

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature
struct ABP_ItemPreview_Lighting_C_PreviewReady__DelegateSignature_Params
{
	struct FPiratePreviewReadyEvent                    Data;                                                      // (Parm)
};

// Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature
struct ABP_ItemPreview_Lighting_C_PreviewBusy__DelegateSignature_Params
{
	struct FPiratePreviewBusyEvent                     Data;                                                      // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
//		Name   -> Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_ItemPreview_Lighting_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.UserConstructionScript");

	ABP_ItemPreview_Lighting_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPiratePreviewReadyEvent                    Data                                                       (Parm)
void ABP_ItemPreview_Lighting_C::PreviewReady__DelegateSignature(const struct FPiratePreviewReadyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewReady__DelegateSignature");

	ABP_ItemPreview_Lighting_C_PreviewReady__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPiratePreviewBusyEvent                     Data                                                       (Parm)
void ABP_ItemPreview_Lighting_C::PreviewBusy__DelegateSignature(const struct FPiratePreviewBusyEvent& Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_ItemPreview_Lighting.BP_ItemPreview_Lighting_C.PreviewBusy__DelegateSignature");

	ABP_ItemPreview_Lighting_C_PreviewBusy__DelegateSignature_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_ItemPreview_Lighting_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(ExponentialHeightFog, UExponentialHeightFogComponent);
	READ_PTR_FULL(SkyLight, USkyLightComponent);
	READ_PTR_FULL(SpotLight2, USpotLightComponent);
	READ_PTR_FULL(SpotLight1, USpotLightComponent);
	READ_PTR_FULL(SpotLight, USpotLightComponent);
	READ_PTR_FULL(PostProcess, UPostProcessComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
}

void ABP_ItemPreview_Lighting_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(ExponentialHeightFog);
	DELE_PTR_FULL(SkyLight);
	DELE_PTR_FULL(SpotLight2);
	DELE_PTR_FULL(SpotLight1);
	DELE_PTR_FULL(SpotLight);
	DELE_PTR_FULL(PostProcess);
	DELE_PTR_FULL(DefaultSceneRoot);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

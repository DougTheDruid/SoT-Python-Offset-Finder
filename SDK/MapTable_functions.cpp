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

// Function MapTable.MapTable_C.UpdateBlurEffect
// (Public, BlueprintCallable, BlueprintEvent)
void AMapTable_C::UpdateBlurEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.UpdateBlurEffect");

	AMapTable_C_UpdateBlurEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.GetClosestInteractionPoint
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 ReferencePosition              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
// float                          OutInteractionPointRadius      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector AMapTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.GetClosestInteractionPoint");

	AMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function MapTable.MapTable_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMapTable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.UserConstructionScript");

	AMapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
void AMapTable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ReceiveBeginPlay");

	AMapTable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.SetEffectActiveWhenClose
// (BlueprintCallable, BlueprintEvent)
void AMapTable_C::SetEffectActiveWhenClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.SetEffectActiveWhenClose");

	AMapTable_C_SetEffectActiveWhenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.OnMapActivate
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                           IsMapActive                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTextureRenderTarget2D*  Texture                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMapTable_C::OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapActivate");

	AMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.OnMapMove
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector2D               CentreLocation                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D               ZoomLevel                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMapTable_C::OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.OnMapMove");

	AMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MapTable.MapTable_C.ExecuteUbergraph_MapTable
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMapTable_C::ExecuteUbergraph_MapTable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MapTable.MapTable_C.ExecuteUbergraph_MapTable");

	AMapTable_C_ExecuteUbergraph_MapTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void AMapTable_C::AfterRead()
{
	AMapTable::AfterRead();

	READ_PTR_FULL(NavBlocker, UBoxComponent);
	READ_PTR_FULL(ControlPoint_6, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_5, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_4, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_3, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_2, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_1, UChildActorComponent);
	READ_PTR_FULL(TextureFeedback, UTextureFeedbackComponent);
	READ_PTR_FULL(Cube, UStaticMeshComponent);
	READ_PTR_FULL(Map, UStaticMeshComponent);
}

void AMapTable_C::BeforeDelete()
{
	AMapTable::BeforeDelete();

	DELE_PTR_FULL(NavBlocker);
	DELE_PTR_FULL(ControlPoint_6);
	DELE_PTR_FULL(ControlPoint_5);
	DELE_PTR_FULL(ControlPoint_4);
	DELE_PTR_FULL(ControlPoint_3);
	DELE_PTR_FULL(ControlPoint_2);
	DELE_PTR_FULL(ControlPoint_1);
	DELE_PTR_FULL(TextureFeedback);
	DELE_PTR_FULL(Cube);
	DELE_PTR_FULL(Map);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

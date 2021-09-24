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
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MediumMapTable_C::UpdateBlurEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.UpdateBlurEffect");

	ABP_MediumMapTable_C_UpdateBlurEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     ReferencePosition                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		float                                              OutInteractionPointRadius                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
struct FVector ABP_MediumMapTable_C::GetClosestInteractionPoint(const struct FVector& ReferencePosition, float* OutInteractionPointRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.GetClosestInteractionPoint");

	ABP_MediumMapTable_C_GetClosestInteractionPoint_Params params;
	params.ReferencePosition = ReferencePosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInteractionPointRadius != nullptr)
		*OutInteractionPointRadius = params.OutInteractionPointRadius;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_MediumMapTable_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.UserConstructionScript");

	ABP_MediumMapTable_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_MediumMapTable_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.ReceiveBeginPlay");

	ABP_MediumMapTable_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_MediumMapTable_C::SetEffectActiveWhenClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.SetEffectActiveWhenClose");

	ABP_MediumMapTable_C_SetEffectActiveWhenClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsMapActive                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTextureRenderTarget2D*                      Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumMapTable_C::OnMapActivate(bool IsMapActive, class UTextureRenderTarget2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapActivate");

	ABP_MediumMapTable_C_OnMapActivate_Params params;
	params.IsMapActive = IsMapActive;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   CentreLocation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector2D                                   ZoomLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumMapTable_C::OnMapMove(const struct FVector2D& CentreLocation, const struct FVector2D& ZoomLevel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.OnMapMove");

	ABP_MediumMapTable_C_OnMapMove_Params params;
	params.CentreLocation = CentreLocation;
	params.ZoomLevel = ZoomLevel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable
//		Flags  -> (HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_MediumMapTable_C::ExecuteUbergraph_BP_MediumMapTable(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_MediumMapTable.BP_MediumMapTable_C.ExecuteUbergraph_BP_MediumMapTable");

	ABP_MediumMapTable_C_ExecuteUbergraph_BP_MediumMapTable_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_MediumMapTable_C::AfterRead()
{
	AMapTable::AfterRead();

	READ_PTR_FULL(NavBlocker, UBoxComponent);
	READ_PTR_FULL(ControlPoint_4, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_3, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_2, UChildActorComponent);
	READ_PTR_FULL(ControlPoint_1, UChildActorComponent);
	READ_PTR_FULL(TextureFeedback, UTextureFeedbackComponent);
	READ_PTR_FULL(Cube, UStaticMeshComponent);
	READ_PTR_FULL(Map, UStaticMeshComponent);
}

void ABP_MediumMapTable_C::BeforeDelete()
{
	AMapTable::BeforeDelete();

	DELE_PTR_FULL(NavBlocker);
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

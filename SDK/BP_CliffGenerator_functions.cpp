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
//		Name   -> Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrentIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                NextIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     StartLocation                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     EndLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     StartTangent                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CliffGenerator_C::Draw_Debug_Numbers(int CurrentIndex, int NextIndex, const struct FVector& StartLocation, const struct FVector& EndLocation, const struct FVector& StartTangent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Draw_Debug_Numbers");

	ABP_CliffGenerator_C_Draw_Debug_Numbers_Params params;
	params.CurrentIndex = CurrentIndex;
	params.NextIndex = NextIndex;
	params.StartLocation = StartLocation;
	params.EndLocation = EndLocation;
	params.StartTangent = StartTangent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CliffGenerator_C::Deform_Terrain()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Deform_Terrain");

	ABP_CliffGenerator_C_Deform_Terrain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UStaticMesh*                                 ElementMesh                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_CliffGenerator_C::Build_Element(int Index, class UStaticMesh* ElementMesh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.Build_Element");

	ABP_CliffGenerator_C_Build_Element_Params params;
	params.Index = Index;
	params.ElementMesh = ElementMesh;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01637030
//		Name   -> Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_CliffGenerator_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_CliffGenerator.BP_CliffGenerator_C.UserConstructionScript");

	ABP_CliffGenerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ABP_CliffGenerator_C::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Base_Spline, USplineComponent);
	READ_PTR_FULL(DefaultSceneRoot, USceneComponent);
	READ_PTR_FULL(Source_Start_Actor, UStaticMesh);
	READ_PTR_FULL(Source_End_Actor, UStaticMesh);
	READ_PTR_FULL(GeneratedTopSpline, USplineComponent);
	READ_PTR_FULL(terrain_component, ALandscape);
}

void ABP_CliffGenerator_C::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Base_Spline);
	DELE_PTR_FULL(DefaultSceneRoot);
	DELE_PTR_FULL(Source_Start_Actor);
	DELE_PTR_FULL(Source_End_Actor);
	DELE_PTR_FULL(GeneratedTopSpline);
	DELE_PTR_FULL(terrain_component);
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

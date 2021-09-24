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

void FCustomMeshTriangle::AfterRead()
{
}

void FCustomMeshTriangle::BeforeDelete()
{
}

// Function:
//		Offset -> 0x044F9AF0
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UCustomMeshComponent::SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles");

	UCustomMeshComponent_SetCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x044F9AD0
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UCustomMeshComponent::ClearCustomMeshTriangles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles");

	UCustomMeshComponent_ClearCustomMeshTriangles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x044F9A20
//		Name   -> Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FCustomMeshTriangle>                 Triangles                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UCustomMeshComponent::AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles");

	UCustomMeshComponent_AddCustomMeshTriangles_Params params;
	params.Triangles = Triangles;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UCustomMeshComponent::AfterRead()
{
	UMeshComponent::AfterRead();

}

void UCustomMeshComponent::BeforeDelete()
{
	UMeshComponent::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

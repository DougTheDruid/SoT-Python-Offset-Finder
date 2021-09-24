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

void FRopeCatenaryLengthParams::AfterRead()
{
}

void FRopeCatenaryLengthParams::BeforeDelete()
{
}

void FRopeCatenarySlopeBlendParams::AfterRead()
{
}

void FRopeCatenarySlopeBlendParams::BeforeDelete()
{
}

void FRopeCatenarySwingParams::AfterRead()
{
}

void FRopeCatenarySwingParams::BeforeDelete()
{
}

void FRopeCatenaryDynamicsParams::AfterRead()
{
}

void FRopeCatenaryDynamicsParams::BeforeDelete()
{
}

void FRopeCatenaryShapeParams::AfterRead()
{
}

void FRopeCatenaryShapeParams::BeforeDelete()
{
}

void FInstancedRopeParams::AfterRead()
{
}

void FInstancedRopeParams::BeforeDelete()
{
}

void FRiggingSystemLine::AfterRead()
{
}

void FRiggingSystemLine::BeforeDelete()
{
}

void FRiggingSystemPulleyData::AfterRead()
{
}

void FRiggingSystemPulleyData::BeforeDelete()
{
}

void FRopeStyleParams::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMesh);
	READ_PTR_FULL(DiffuseTexture, UTexture2D);
	READ_PTR_FULL(NormalTexture, UTexture2D);
}

void FRopeStyleParams::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
	DELE_PTR_FULL(DiffuseTexture);
	DELE_PTR_FULL(NormalTexture);
}

void FPulleyVisualParams::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMesh);
}

void FPulleyVisualParams::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void FRopeVisualParams::AfterRead()
{
}

void FRopeVisualParams::BeforeDelete()
{
}

void FRiggingSystemPulleyAttachmentParams::AfterRead()
{
}

void FRiggingSystemPulleyAttachmentParams::BeforeDelete()
{
}

void FRiggingSystemPulleyParams::AfterRead()
{
}

void FRiggingSystemPulleyParams::BeforeDelete()
{
}

void FRiggingSystemLineParams::AfterRead()
{
}

void FRiggingSystemLineParams::BeforeDelete()
{
}

void FRiggingSystemLineGroup::AfterRead()
{
}

void FRiggingSystemLineGroup::BeforeDelete()
{
}

void FRopeCatenaryLengthPair::AfterRead()
{
}

void FRopeCatenaryLengthPair::BeforeDelete()
{
}

// Function:
//		Offset -> 0x038260E0
//		Name   -> Function AthenaRigging.InstancedRopeComponent.SetUnderwater
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Underwater                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UInstancedRopeComponent::SetUnderwater(bool Underwater)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetUnderwater");

	UInstancedRopeComponent_SetUnderwater_Params params;
	params.Underwater = Underwater;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03825FB0
//		Name   -> Function AthenaRigging.InstancedRopeComponent.SetRopes
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FInstancedRopeParams>                InRopes                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
void UInstancedRopeComponent::SetRopes(TArray<struct FInstancedRopeParams> InRopes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.InstancedRopeComponent.SetRopes");

	UInstancedRopeComponent_SetRopes_Params params;
	params.InRopes = InRopes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UInstancedRopeComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(StaticMesh, UStaticMesh);
}

void UInstancedRopeComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(StaticMesh);
}

void UMaterialExpressionRopeParameter::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionRopeParameter::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void ARiggingSystem::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(Root, USceneComponent);
	READ_PTR_FULL(InstancedRopes, UInstancedRopeComponent);
}

void ARiggingSystem::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(Root);
	DELE_PTR_FULL(InstancedRopes);
}

// Function:
//		Offset -> 0x03826060
//		Name   -> Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      InSocketSource                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URiggingSystemComponent::SetSocketLookupSource(class AActor* InSocketSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource");

	URiggingSystemComponent_SetSocketLookupSource_Params params;
	params.InSocketSource = InSocketSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03825D90
//		Name   -> Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FName                                       InLineGroupName                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InLineOffset                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int URiggingSystemComponent::ConvertLineToRopeIndex(const struct FName& InLineGroupName, int InLineOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex");

	URiggingSystemComponent_ConvertLineToRopeIndex_Params params;
	params.InLineGroupName = InLineGroupName;
	params.InLineOffset = InLineOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void URiggingSystemComponent::AfterRead()
{
	USceneComponent::AfterRead();

	READ_PTR_FULL(Impl, ARiggingSystem);
}

void URiggingSystemComponent::BeforeDelete()
{
	USceneComponent::BeforeDelete();

	DELE_PTR_FULL(Impl);
}

void URopeCatenaryRenderComponent::AfterRead()
{
	UCordRenderComponent::AfterRead();

}

void URopeCatenaryRenderComponent::BeforeDelete()
{
	UCordRenderComponent::BeforeDelete();

}

// Function:
//		Offset -> 0x03825F30
//		Name   -> Function AthenaRigging.RopeInterface.SetRopeUVOffset
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InUVOffset                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void URopeInterface::SetRopeUVOffset(float InUVOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeUVOffset");

	URopeInterface_SetRopeUVOffset_Params params;
	params.InUVOffset = InUVOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03825E50
//		Name   -> Function AthenaRigging.RopeInterface.SetRopeEndpoints
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InWorldSpaceStart                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     InWorldSpaceEnd                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void URopeInterface::SetRopeEndpoints(const struct FVector& InWorldSpaceStart, const struct FVector& InWorldSpaceEnd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AthenaRigging.RopeInterface.SetRopeEndpoints");

	URopeInterface_SetRopeEndpoints_Params params;
	params.InWorldSpaceStart = InWorldSpaceStart;
	params.InWorldSpaceEnd = InWorldSpaceEnd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void URopeInterface::AfterRead()
{
	UInterface::AfterRead();

}

void URopeInterface::BeforeDelete()
{
	UInterface::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

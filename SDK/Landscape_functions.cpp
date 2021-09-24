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

void FWeightmapLayerAllocationInfo::AfterRead()
{
	READ_PTR_FULL(LayerInfo, ULandscapeLayerInfoObject);
}

void FWeightmapLayerAllocationInfo::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfo);
}

void FGrassVariety::AfterRead()
{
	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void FGrassVariety::BeforeDelete()
{
	DELE_PTR_FULL(GrassMesh);
}

void FLandscapeSplineSegmentConnection::AfterRead()
{
	READ_PTR_FULL(ControlPoint, ULandscapeSplineControlPoint);
}

void FLandscapeSplineSegmentConnection::BeforeDelete()
{
	DELE_PTR_FULL(ControlPoint);
}

void FLandscapeSplineInterpPoint::AfterRead()
{
}

void FLandscapeSplineInterpPoint::BeforeDelete()
{
}

void FLandscapeSplineConnection::AfterRead()
{
	READ_PTR_FULL(Segment, ULandscapeSplineSegment);
}

void FLandscapeSplineConnection::BeforeDelete()
{
	DELE_PTR_FULL(Segment);
}

void FGrassInput::AfterRead()
{
	READ_PTR_FULL(GrassType, ULandscapeGrassType);
}

void FGrassInput::BeforeDelete()
{
	DELE_PTR_FULL(GrassType);
}

void FLayerBlendInput::AfterRead()
{
}

void FLayerBlendInput::BeforeDelete()
{
}

void FLandscapeInfoLayerSettings::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeInfoLayerSettings::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FGizmoSelectData::AfterRead()
{
}

void FGizmoSelectData::BeforeDelete()
{
}

void FLandscapeImportLayerInfo::AfterRead()
{
}

void FLandscapeImportLayerInfo::BeforeDelete()
{
}

void FLandscapeLayerStruct::AfterRead()
{
	READ_PTR_FULL(LayerInfoObj, ULandscapeLayerInfoObject);
}

void FLandscapeLayerStruct::BeforeDelete()
{
	DELE_PTR_FULL(LayerInfoObj);
}

void FLandscapeEditorLayerSettings::AfterRead()
{
}

void FLandscapeEditorLayerSettings::BeforeDelete()
{
}

void FLandscapeWeightmapUsage::AfterRead()
{
	READ_PTR_FULL(ChannelUsage[0x4], ULandscapeComponent);
}

void FLandscapeWeightmapUsage::BeforeDelete()
{
	DELE_PTR_FULL(ChannelUsage[0x4]);
}

void FLandscapeSplineMeshEntry::AfterRead()
{
	READ_PTR_FULL(Mesh, UStaticMesh);
}

void FLandscapeSplineMeshEntry::BeforeDelete()
{
	DELE_PTR_FULL(Mesh);
}

void FForeignWorldSplineData::AfterRead()
{
}

void FForeignWorldSplineData::BeforeDelete()
{
}

void FForeignSplineSegmentData::AfterRead()
{
}

void FForeignSplineSegmentData::BeforeDelete()
{
}

void FForeignControlPointData::AfterRead()
{
}

void FForeignControlPointData::BeforeDelete()
{
}

void UControlPointMeshComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void UControlPointMeshComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void ULandscapeInfo::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfo::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

	READ_PTR_FULL(OverrideMaterial, UMaterialInterface);
	READ_PTR_FULL(OverrideHoleMaterial, UMaterialInterface);
	READ_PTR_FULL(MaterialInstance, UMaterialInstanceConstant);
	READ_PTR_FULL(XYOffsetmapTexture, UTexture2D);
	READ_PTR_FULL(HeightmapTexture, UTexture2D);
	READ_PTR_FULL(GIBakedBaseColorTexture, UTexture2D);
	READ_PTR_FULL(MobileMaterialInterface, UMaterialInterface);
	READ_PTR_FULL(MobileWeightNormalmapTexture, UTexture2D);
}

void ULandscapeComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

	DELE_PTR_FULL(OverrideMaterial);
	DELE_PTR_FULL(OverrideHoleMaterial);
	DELE_PTR_FULL(MaterialInstance);
	DELE_PTR_FULL(XYOffsetmapTexture);
	DELE_PTR_FULL(HeightmapTexture);
	DELE_PTR_FULL(GIBakedBaseColorTexture);
	DELE_PTR_FULL(MobileMaterialInterface);
	DELE_PTR_FULL(MobileWeightNormalmapTexture);
}

void ALandscapeGizmoActor::AfterRead()
{
	AActor::AfterRead();

}

void ALandscapeGizmoActor::BeforeDelete()
{
	AActor::BeforeDelete();

}

void ALandscapeGizmoActiveActor::AfterRead()
{
	ALandscapeGizmoActor::AfterRead();

}

void ALandscapeGizmoActiveActor::BeforeDelete()
{
	ALandscapeGizmoActor::BeforeDelete();

}

void ULandscapeGizmoRenderComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeGizmoRenderComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeGrassType::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(GrassMesh, UStaticMesh);
}

void ULandscapeGrassType::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(GrassMesh);
}

void ULandscapeHeightfieldCollisionComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeHeightfieldCollisionComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeMeshCollisionComponent::AfterRead()
{
	ULandscapeHeightfieldCollisionComponent::AfterRead();

}

void ULandscapeMeshCollisionComponent::BeforeDelete()
{
	ULandscapeHeightfieldCollisionComponent::BeforeDelete();

}

void ULandscapeInfoMap::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeInfoMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeLayerInfoObject::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(PhysMaterial, UPhysicalMaterial);
}

void ULandscapeLayerInfoObject::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(PhysMaterial);
}

void ULandscapeMaterialInstanceConstant::AfterRead()
{
	UMaterialInstanceConstant::AfterRead();

}

void ULandscapeMaterialInstanceConstant::BeforeDelete()
{
	UMaterialInstanceConstant::BeforeDelete();

}

void ALandscapeMeshProxyActor::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(LandscapeMeshProxyComponent, ULandscapeMeshProxyComponent);
}

void ALandscapeMeshProxyActor::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(LandscapeMeshProxyComponent);
}

// Function:
//		Offset -> 0x01DEBEA0
//		Name   -> Function Landscape.LandscapeProxy.EditorApplySpline
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USplineComponent*                            InSplineComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StartWidth                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EndWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StartSideFalloff                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EndSideFalloff                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              StartRoll                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EndRoll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                NumSubdivisions                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bRaiseHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bLowerHeights                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ULandscapeLayerInfoObject*                   PaintLayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALandscapeProxy::EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	ALandscapeProxy_EditorApplySpline_Params params;
	params.InSplineComponent = InSplineComponent;
	params.StartWidth = StartWidth;
	params.EndWidth = EndWidth;
	params.StartSideFalloff = StartSideFalloff;
	params.EndSideFalloff = EndSideFalloff;
	params.StartRoll = StartRoll;
	params.EndRoll = EndRoll;
	params.NumSubdivisions = NumSubdivisions;
	params.bRaiseHeights = bRaiseHeights;
	params.bLowerHeights = bLowerHeights;
	params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x01DEBE20
//		Name   -> Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InLODDistanceFactor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	ALandscapeProxy_ChangeLODDistanceFactor_Params params;
	params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void ALandscapeProxy::AfterRead()
{
	AActor::AfterRead();

	READ_PTR_FULL(SplineComponent, ULandscapeSplinesComponent);
	READ_PTR_FULL(DefaultPhysMaterial, UPhysicalMaterial);
	READ_PTR_FULL(LandscapeMaterial, UMaterialInterface);
	READ_PTR_FULL(LandscapeHoleMaterial, UMaterialInterface);
}

void ALandscapeProxy::BeforeDelete()
{
	AActor::BeforeDelete();

	DELE_PTR_FULL(SplineComponent);
	DELE_PTR_FULL(DefaultPhysMaterial);
	DELE_PTR_FULL(LandscapeMaterial);
	DELE_PTR_FULL(LandscapeHoleMaterial);
}

void ULandscapeMeshProxyComponent::AfterRead()
{
	UStaticMeshComponent::AfterRead();

}

void ULandscapeMeshProxyComponent::BeforeDelete()
{
	UStaticMeshComponent::BeforeDelete();

}

void ALandscape::AfterRead()
{
	ALandscapeProxy::AfterRead();

}

void ALandscape::BeforeDelete()
{
	ALandscapeProxy::BeforeDelete();

}

void ULandscapeSplinesComponent::AfterRead()
{
	UPrimitiveComponent::AfterRead();

}

void ULandscapeSplinesComponent::BeforeDelete()
{
	UPrimitiveComponent::BeforeDelete();

}

void ULandscapeSplineSegment::AfterRead()
{
	UObject::AfterRead();

}

void ULandscapeSplineSegment::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULandscapeSplineControlPoint::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(LocalMeshComponent, UControlPointMeshComponent);
}

void ULandscapeSplineControlPoint::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(LocalMeshComponent);
}

void UMaterialExpressionLandscapeGrassOutput::AfterRead()
{
	UMaterialExpressionCustomOutput::AfterRead();

}

void UMaterialExpressionLandscapeGrassOutput::BeforeDelete()
{
	UMaterialExpressionCustomOutput::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerBlend::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerBlend::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerCoords::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerCoords::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSample::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSample::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerSwitch::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerSwitch::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeLayerWeight::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeLayerWeight::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

void UMaterialExpressionLandscapeVisibilityMask::AfterRead()
{
	UMaterialExpression::AfterRead();

}

void UMaterialExpressionLandscapeVisibilityMask::BeforeDelete()
{
	UMaterialExpression::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

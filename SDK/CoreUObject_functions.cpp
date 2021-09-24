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

void FGuid::AfterRead()
{
}

void FGuid::BeforeDelete()
{
}

void FVector::AfterRead()
{
}

void FVector::BeforeDelete()
{
}

void FVector4::AfterRead()
{
}

void FVector4::BeforeDelete()
{
}

void FVector2D::AfterRead()
{
}

void FVector2D::BeforeDelete()
{
}

void FTwoVectors::AfterRead()
{
}

void FTwoVectors::BeforeDelete()
{
}

void FPlane::AfterRead()
{
	FVector::AfterRead();

}

void FPlane::BeforeDelete()
{
	FVector::BeforeDelete();

}

void FRotator::AfterRead()
{
}

void FRotator::BeforeDelete()
{
}

void FQuat::AfterRead()
{
}

void FQuat::BeforeDelete()
{
}

void FPackedNormal::AfterRead()
{
}

void FPackedNormal::BeforeDelete()
{
}

void FIntPoint::AfterRead()
{
}

void FIntPoint::BeforeDelete()
{
}

void FIntVector::AfterRead()
{
}

void FIntVector::BeforeDelete()
{
}

void FColor::AfterRead()
{
}

void FColor::BeforeDelete()
{
}

void FLinearColor::AfterRead()
{
}

void FLinearColor::BeforeDelete()
{
}

void FBox::AfterRead()
{
}

void FBox::BeforeDelete()
{
}

void FBox2D::AfterRead()
{
}

void FBox2D::BeforeDelete()
{
}

void FBoxSphereBounds::AfterRead()
{
}

void FBoxSphereBounds::BeforeDelete()
{
}

void FOrientedBox::AfterRead()
{
}

void FOrientedBox::BeforeDelete()
{
}

void FMatrix::AfterRead()
{
}

void FMatrix::BeforeDelete()
{
}

void FInterpCurvePointFloat::AfterRead()
{
}

void FInterpCurvePointFloat::BeforeDelete()
{
}

void FInterpCurveFloat::AfterRead()
{
}

void FInterpCurveFloat::BeforeDelete()
{
}

void FInterpCurvePointVector2D::AfterRead()
{
}

void FInterpCurvePointVector2D::BeforeDelete()
{
}

void FInterpCurveVector2D::AfterRead()
{
}

void FInterpCurveVector2D::BeforeDelete()
{
}

void FInterpCurvePointVector::AfterRead()
{
}

void FInterpCurvePointVector::BeforeDelete()
{
}

void FInterpCurveVector::AfterRead()
{
}

void FInterpCurveVector::BeforeDelete()
{
}

void FInterpCurvePointQuat::AfterRead()
{
}

void FInterpCurvePointQuat::BeforeDelete()
{
}

void FInterpCurveQuat::AfterRead()
{
}

void FInterpCurveQuat::BeforeDelete()
{
}

void FInterpCurvePointTwoVectors::AfterRead()
{
}

void FInterpCurvePointTwoVectors::BeforeDelete()
{
}

void FInterpCurveTwoVectors::AfterRead()
{
}

void FInterpCurveTwoVectors::BeforeDelete()
{
}

void FInterpCurvePointLinearColor::AfterRead()
{
}

void FInterpCurvePointLinearColor::BeforeDelete()
{
}

void FInterpCurveLinearColor::AfterRead()
{
}

void FInterpCurveLinearColor::BeforeDelete()
{
}

void FTransform::AfterRead()
{
}

void FTransform::BeforeDelete()
{
}

void FRandomStream::AfterRead()
{
}

void FRandomStream::BeforeDelete()
{
}

void FDateTime::AfterRead()
{
}

void FDateTime::BeforeDelete()
{
}

void FTimespan::AfterRead()
{
}

void FTimespan::BeforeDelete()
{
}

void FStringAssetReference::AfterRead()
{
}

void FStringAssetReference::BeforeDelete()
{
}

void FStringClassReference::AfterRead()
{
	FStringAssetReference::AfterRead();

}

void FStringClassReference::BeforeDelete()
{
	FStringAssetReference::BeforeDelete();

}

void FFallbackStruct::AfterRead()
{
}

void FFallbackStruct::BeforeDelete()
{
}

void FFloatRangeBound::AfterRead()
{
}

void FFloatRangeBound::BeforeDelete()
{
}

void FFloatRange::AfterRead()
{
}

void FFloatRange::BeforeDelete()
{
}

void FInt32RangeBound::AfterRead()
{
}

void FInt32RangeBound::BeforeDelete()
{
}

void FInt32Range::AfterRead()
{
}

void FInt32Range::BeforeDelete()
{
}

void FFloatInterval::AfterRead()
{
}

void FFloatInterval::BeforeDelete()
{
}

void FInt32Interval::AfterRead()
{
}

void FInt32Interval::BeforeDelete()
{
}

std::string UObject::GetName() const
{
	std::string name(Name.GetName());
	if (Name.Number > 0)
	{
		name += '_' + std::to_string(Name.Number);
	}

	auto pos = name.rfind('/');
	if (pos == std::string::npos)
	{
		return name;
	}
	
	return name.substr(pos + 1);
}

std::string UObject::GetFullName() const
{
	std::string name;

	if (Class != nullptr)
	{
		std::string temp;
		for (auto p = Outer; p; p = p->Outer)
		{
			temp = p->GetName() + "." + temp;
		}

		name = Class->GetName();
		name += " ";
		name += temp;
		name += GetName();
	}

	return name;
}

bool UObject::IsA(UClass* cmp) const
{
	for (auto super = Class; super; super = static_cast<UClass*>(super->SuperField))
	{
		if (super == cmp)
		{
			return true;
		}
	}

	return false;
}

// Function:
//		Offset -> 0x01637030
//		Name   -> Function CoreUObject.Object.ExecuteUbergraph
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		int                                                EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UObject::ExecuteUbergraph(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function CoreUObject.Object.ExecuteUbergraph");

	UObject_ExecuteUbergraph_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


void UObject::AfterRead()
{
	READ_PTR_FULL(Class, UClass);
	READ_PTR_FULL(Outer, UObject);
}

void UObject::BeforeDelete()
{
	DELE_PTR_FULL(Class);
	DELE_PTR_FULL(Outer);
}

void UInterface::AfterRead()
{
	UObject::AfterRead();

}

void UInterface::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UGCObjectReferencer::AfterRead()
{
	UObject::AfterRead();

}

void UGCObjectReferencer::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UTextBuffer::AfterRead()
{
	UObject::AfterRead();

}

void UTextBuffer::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UField::AfterRead()
{
	UObject::AfterRead();

	READ_PTR_FULL(Next, UField);
}

void UField::BeforeDelete()
{
	UObject::BeforeDelete();

	DELE_PTR_FULL(Next);
}

void UStruct::AfterRead()
{
	UField::AfterRead();

	READ_PTR_FULL(SuperField, UStruct);
	READ_PTR_FULL(Children, UField);
}

void UStruct::BeforeDelete()
{
	UField::BeforeDelete();

	DELE_PTR_FULL(SuperField);
	DELE_PTR_FULL(Children);
}

void UScriptStruct::AfterRead()
{
	UStruct::AfterRead();

}

void UScriptStruct::BeforeDelete()
{
	UStruct::BeforeDelete();

}

void UPackage::AfterRead()
{
	UObject::AfterRead();

}

void UPackage::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UClass::AfterRead()
{
	UStruct::AfterRead();

}

void UClass::BeforeDelete()
{
	UStruct::BeforeDelete();

}

void UFunction::AfterRead()
{
	UStruct::AfterRead();

	READ_PTR_FULL(FirstPropertyToInit, UProperty);
	READ_PTR_FULL(EventGraphFunction, UFunction);
}

void UFunction::BeforeDelete()
{
	UStruct::BeforeDelete();

	DELE_PTR_FULL(FirstPropertyToInit);
	DELE_PTR_FULL(EventGraphFunction);
}

void UDelegateFunction::AfterRead()
{
	UFunction::AfterRead();

}

void UDelegateFunction::BeforeDelete()
{
	UFunction::BeforeDelete();

}

void USparseDelegateFunction::AfterRead()
{
	UDelegateFunction::AfterRead();

}

void USparseDelegateFunction::BeforeDelete()
{
	UDelegateFunction::BeforeDelete();

}

void UPackageMap::AfterRead()
{
	UObject::AfterRead();

}

void UPackageMap::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UEnum::AfterRead()
{
	UField::AfterRead();

}

void UEnum::BeforeDelete()
{
	UField::BeforeDelete();

}

void ULinkerPlaceholderClass::AfterRead()
{
	UClass::AfterRead();

}

void ULinkerPlaceholderClass::BeforeDelete()
{
	UClass::BeforeDelete();

}

void ULinkerPlaceholderExportObject::AfterRead()
{
	UObject::AfterRead();

}

void ULinkerPlaceholderExportObject::BeforeDelete()
{
	UObject::BeforeDelete();

}

void ULinkerPlaceholderFunction::AfterRead()
{
	UFunction::AfterRead();

}

void ULinkerPlaceholderFunction::BeforeDelete()
{
	UFunction::BeforeDelete();

}

void UMetaData::AfterRead()
{
	UObject::AfterRead();

}

void UMetaData::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UObjectRedirector::AfterRead()
{
	UObject::AfterRead();

}

void UObjectRedirector::BeforeDelete()
{
	UObject::BeforeDelete();

}

void UProperty::AfterRead()
{
	UField::AfterRead();

}

void UProperty::BeforeDelete()
{
	UField::BeforeDelete();

}

void UNumericProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UNumericProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UArrayProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UArrayProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UObjectPropertyBase::AfterRead()
{
	UProperty::AfterRead();

}

void UObjectPropertyBase::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UAssetObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void UAssetObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UAssetClassProperty::AfterRead()
{
	UAssetObjectProperty::AfterRead();

}

void UAssetClassProperty::BeforeDelete()
{
	UAssetObjectProperty::BeforeDelete();

}

void UBoolProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UBoolProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UByteProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UByteProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void UObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UClassProperty::AfterRead()
{
	UObjectProperty::AfterRead();

}

void UClassProperty::BeforeDelete()
{
	UObjectProperty::BeforeDelete();

}

void UDelegateProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UDelegateProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UDoubleProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UDoubleProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UFloatProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UFloatProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UIntProperty::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UIntProperty::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt16Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt16Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt64Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt64Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInt8Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UInt8Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UInterfaceProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UInterfaceProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void ULazyObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void ULazyObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UMapProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UMapProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UMulticastDelegateProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UMulticastDelegateProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UMulticastInlineDelegateProperty::AfterRead()
{
	UMulticastDelegateProperty::AfterRead();

}

void UMulticastInlineDelegateProperty::BeforeDelete()
{
	UMulticastDelegateProperty::BeforeDelete();

}

void UNameProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UNameProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UStrProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UStrProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UStructProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UStructProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

void UUInt16Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt16Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UUInt32Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt32Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UUInt64Property::AfterRead()
{
	UNumericProperty::AfterRead();

}

void UUInt64Property::BeforeDelete()
{
	UNumericProperty::BeforeDelete();

}

void UWeakObjectProperty::AfterRead()
{
	UObjectPropertyBase::AfterRead();

}

void UWeakObjectProperty::BeforeDelete()
{
	UObjectPropertyBase::BeforeDelete();

}

void UTextProperty::AfterRead()
{
	UProperty::AfterRead();

}

void UTextProperty::BeforeDelete()
{
	UProperty::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

void FJsonObjectWrapper::AfterRead()
{
}

void FJsonObjectWrapper::BeforeDelete()
{
}

void FTestTextObject::AfterRead()
{
}

void FTestTextObject::BeforeDelete()
{
}

void FTestFloatObject::AfterRead()
{
}

void FTestFloatObject::BeforeDelete()
{
}

void FTestEnumObject::AfterRead()
{
}

void FTestEnumObject::BeforeDelete()
{
}

void FTestMessageTimespan::AfterRead()
{
}

void FTestMessageTimespan::BeforeDelete()
{
}

void FTestMessageDateTime::AfterRead()
{
}

void FTestMessageDateTime::BeforeDelete()
{
}

void FTestSerializationObject::AfterRead()
{
}

void FTestSerializationObject::BeforeDelete()
{
}

void FTestSerializationNestedObject::AfterRead()
{
}

void FTestSerializationNestedObject::BeforeDelete()
{
}

void FTestMessageUInt64::AfterRead()
{
}

void FTestMessageUInt64::BeforeDelete()
{
}

void FTestMessageInt64::AfterRead()
{
}

void FTestMessageInt64::BeforeDelete()
{
}

void FTestUStructMapSerializationObject::AfterRead()
{
}

void FTestUStructMapSerializationObject::BeforeDelete()
{
}

void FTestInt32MapSerializationObject::AfterRead()
{
}

void FTestInt32MapSerializationObject::BeforeDelete()
{
}

void FTestInvalidStringMapSerializationObject::AfterRead()
{
}

void FTestInvalidStringMapSerializationObject::BeforeDelete()
{
}

void FTestStringMapSerializationObject::AfterRead()
{
}

void FTestStringMapSerializationObject::BeforeDelete()
{
}

// Function:
//		Offset -> 0x02178B00
//		Name   -> Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FGenericStruct                              Struct                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		struct FString                                     OutJsonString                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.UStructToJsonObjectString");

	UJsonUtilitiesBlueprintHelperLibrary_UStructToJsonObjectString_Params params;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutJsonString != nullptr)
		*OutJsonString = params.OutJsonString;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x021789B0
//		Name   -> Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     InJsonString                                               (Parm, ZeroConstructor, HasGetValueTypeHash)
//		struct FGenericStruct                              Struct                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UJsonUtilitiesBlueprintHelperLibrary::STATIC_JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function JsonUtilities.JsonUtilitiesBlueprintHelperLibrary.JsonObjectStringToUStruct");

	UJsonUtilitiesBlueprintHelperLibrary_JsonObjectStringToUStruct_Params params;
	params.InJsonString = InJsonString;
	params.Struct = Struct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


void UJsonUtilitiesBlueprintHelperLibrary::AfterRead()
{
	UBlueprintFunctionLibrary::AfterRead();

}

void UJsonUtilitiesBlueprintHelperLibrary::BeforeDelete()
{
	UBlueprintFunctionLibrary::BeforeDelete();

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

void FStructSerializerNumericTestStruct::AfterRead()
{
}

void FStructSerializerNumericTestStruct::BeforeDelete()
{
}

void FStructSerializerBooleanTestStruct::AfterRead()
{
}

void FStructSerializerBooleanTestStruct::BeforeDelete()
{
}

void FStructSerializerObjectTestStruct::AfterRead()
{
	READ_PTR_FULL(Class, UClass);
	READ_PTR_FULL(ObjectPtr, UObject);
}

void FStructSerializerObjectTestStruct::BeforeDelete()
{
	DELE_PTR_FULL(Class);
	DELE_PTR_FULL(ObjectPtr);
}

void FStructSerializerArrayTestStruct::AfterRead()
{
}

void FStructSerializerArrayTestStruct::BeforeDelete()
{
}

void FStructSerializerBuiltinTestStruct::AfterRead()
{
}

void FStructSerializerBuiltinTestStruct::BeforeDelete()
{
}

void FStructSerializerTestStruct::AfterRead()
{
}

void FStructSerializerTestStruct::BeforeDelete()
{
}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

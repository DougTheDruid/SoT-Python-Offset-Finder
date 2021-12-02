#pragma once

// Name: SoT, Version: 2.4.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UJsonUtilitiesBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class JsonUtilities.JsonUtilitiesBlueprintHelperLibrary");
		return ptr;
	}



	bool STATIC_UStructToJsonObjectString(const struct FGenericStruct& Struct, struct FString* OutJsonString);
	bool STATIC_JsonObjectStringToUStruct(const struct FString& InJsonString, const struct FGenericStruct& Struct);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

// Name: SoT, Version: 2.3.0


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

// Class MerchantContracts.MerchantContractsBlueprintLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMerchantContractsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsBlueprintLibrary");
		return ptr;
	}



	struct FText STATIC_GetDateFromTimeLimit(float TimeLimit);
	void AfterRead();
	void BeforeDelete();

};

// Class MerchantContracts.MerchantContractsServiceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UMerchantContractsServiceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsServiceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MerchantContracts.MerchantContractsService
// 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
class UMerchantContractsService : public UObject
{
public:
	unsigned char                                      UnknownData_PWYX[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMerchantContract>                   Contracts;                                                 // 0x0030(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_G3H2[0x18];                                    // 0x0040(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MerchantContracts.MerchantContractsService");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MerchantContracts.PlayerMerchantContractsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPlayerMerchantContractsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MerchantContracts.PlayerMerchantContractsInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class MerchantContracts.PlayerMerchantContractsComponent
// 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
class UPlayerMerchantContractsComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_VCEI[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FPlayerMerchantContract>             Contracts;                                                 // 0x00D0(0x0010) (Net, ZeroConstructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MerchantContracts.PlayerMerchantContractsComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

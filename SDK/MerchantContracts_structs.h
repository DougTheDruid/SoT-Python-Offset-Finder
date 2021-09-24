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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MerchantContracts.ItemAndReward
// 0x0010
struct FItemAndReward
{
	class UClass*                                      ItemDesc;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FRewardId                                   HandInOnTimeRewardId;                                      // 0x0008(0x0008) (Edit, BlueprintVisible)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MerchantContracts.MerchantContractItemDesc
// 0x0028
struct FMerchantContractItemDesc
{
	class UClass*                                      AllocatedCrate;                                            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FItemAndReward>                      ItemData;                                                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UClass*                                      FaunaSpecies;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      FaunaBreed;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MerchantContracts.MerchantContractDeliveryRequest
// 0x0040
struct FMerchantContractDeliveryRequest
{
	int                                                Id;                                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_D69Q[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FMerchantContractItemDesc                   ItemDesc;                                                  // 0x0008(0x0028)
	int                                                NumToAllocate;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumToCollect;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumToDeliver;                                              // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XNHA[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MerchantContracts.MerchantContract
// 0x00C0
struct FMerchantContract
{
	unsigned char                                      UnknownData_JDLY[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMerchantContractDeliveryRequest>    DeliveryRequests;                                          // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData_XEDZ[0x98];                                    // 0x0028(0x0098) MISSED OFFSET (PADDING)

	void AfterRead();
	void BeforeDelete();

};

// ScriptStruct MerchantContracts.PlayerMerchantContract
// 0x0028
struct FPlayerMerchantContract
{
	struct FGuid                                       Id;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       IslandName;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FMerchantContractDeliveryRequest>    Requests;                                                  // 0x0018(0x0010) (ZeroConstructor)

	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

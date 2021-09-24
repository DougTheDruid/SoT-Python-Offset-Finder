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

// Class Cleanliness.CleanlinessInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCleanlinessInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cleanliness.CleanlinessInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Cleanliness.CleanlinessTransferInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCleanlinessTransferInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cleanliness.CleanlinessTransferInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Cleanliness.CleanlinessComponent
// 0x0080 (FullSize[0x0148] - InheritedSize[0x00C8])
class UCleanlinessComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_KVD6[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 DirtinessStrengthToMaterialStrength;                       // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	struct FCleanlinessInfo                            CleanlinessInfo;                                           // 0x00E0(0x000C) (Net, Transient, RepNotify, Protected)
	float                                              DirtinessDecayRatePerSecond;                               // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	float                                              QuickCleanDirtynessDecayRatePerSecond;                     // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_ZZUL[0x54];                                    // 0x00F4(0x0054) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Cleanliness.CleanlinessComponent");
		return ptr;
	}



	void OnRep_CleanlinessInfo();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

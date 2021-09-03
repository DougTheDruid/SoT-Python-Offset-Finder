#pragma once

// Name: SoT, Version: 2.2.1.1


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

// Class KnockbackFramework.KnockbackInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UKnockbackInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class KnockbackFramework.KnockbackInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class KnockbackFramework.KnockbackColliderComponent
// 0x0088 (FullSize[0x0640] - InheritedSize[0x05B8])
class UKnockbackColliderComponent : public UBoxComponent
{
public:
	struct FCollisionProfileName                       SolidCollisionProfile;                                     // 0x05B8(0x0008) (Edit)
	struct FCollisionProfileName                       KnockbackTraceProfile;                                     // 0x05C0(0x0008) (Edit)
	TEnumAsByte<KnockbackFramework_EKnockbackType>     KnockbackType;                                             // 0x05C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T1TA[0x3];                                     // 0x05C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FKnockBackInfo                              KnockbackParams;                                           // 0x05CC(0x0050) (Edit)
	TWeakObjectPtr<class AActor>                       ActorToTarget;                                             // 0x061C(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
	unsigned char                                      UnknownData_Z15U[0x4];                                     // 0x0624(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      KnockbackDamageType;                                       // 0x0628(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              KnockbackInterval;                                         // 0x0630(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MYSG[0x4];                                     // 0x0634(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TEnumAsByte<KnockbackFramework_ESolidState>        SolidState;                                                // 0x0638(0x0001) (Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_21CA[0x7];                                     // 0x0639(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class KnockbackFramework.KnockbackColliderComponent");
		return ptr;
	}



	void OnRep_SolidState();
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

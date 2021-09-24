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

// Class ExplosionFramework.CreateActorInstanceOnExplodeComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UCreateActorInstanceOnExplodeComponent : public UActorComponent
{
public:
	class UClass*                                      ActorToInstance;                                           // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S03B[0x58];                                    // 0x00D0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ExplosionFramework.CreateActorInstanceOnExplodeComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ExplosionFramework.ExplosionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExplosionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ExplosionFramework.ExplosionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ExplosionFramework.ExplosionReceiverInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExplosionReceiverInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ExplosionFramework.ExplosionReceiverInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ExplosionFramework.ExplosiveComponentInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UExplosiveComponentInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ExplosionFramework.ExplosiveComponentInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ExplosionFramework.StatusResponseExplodeAfterTime
// 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
class UStatusResponseExplodeAfterTime : public UStatusResponse
{
public:
	float                                              MinTimeUntilExplosion;                                     // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxTimeUntilExplosion;                                     // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U0PL[0x8];                                     // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UWorld*                                      CachedWorld;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ExplosionFramework.StatusResponseExplodeAfterTime");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class ShipDamage.DamageablePartsInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDamageablePartsInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.DamageablePartsInterface");
		return ptr;
	}



	void UnregisterDamageablePart(class AActor* DamageableActor);
	void RegisterDamageablePart(class AActor* DamageableActor);
	TArray<class AActor*> GetDamageableParts();
	void AfterRead();
	void BeforeDelete();

};

// Class ShipDamage.HullDamageInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHullDamageInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.HullDamageInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ShipDamage.HullDamageProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UHullDamageProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.HullDamageProviderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ShipDamage.LandscapeDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULandscapeDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.LandscapeDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ShipDamage.ShipDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShipDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.ShipDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class ShipDamage.StrainDamagerType
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UStrainDamagerType : public UDamagerType
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class ShipDamage.StrainDamagerType");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

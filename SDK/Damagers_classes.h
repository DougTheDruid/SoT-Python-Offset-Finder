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

// Class Damagers.RadialDamagerComponent
// 0x0058 (FullSize[0x0120] - InheritedSize[0x00C8])
class URadialDamagerComponent : public UActorComponent
{
public:
	float                                              DamageIntervalSeconds;                                     // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamagePerSecondAtCentre;                                   // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamagePerSecondAtMaxRadius;                                // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageRadius;                                              // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CZ75[0x8];                                     // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DamagerType;                                               // 0x00E0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Athena_EHealthChangedReason>           HealthChangedReason;                                       // 0x00E8(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_E07H[0x3];                                     // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     LocalOffset;                                               // 0x00EC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BILT[0x28];                                    // 0x00F8(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Damagers.RadialDamagerComponent");
		return ptr;
	}



	void SetDamageRadius(float Radius);
	void EndDamage();
	void BeginDamage();
	void AfterRead();
	void BeforeDelete();

};

// Class Damagers.ShipDamagerComponent
// 0x0158 (FullSize[0x0220] - InheritedSize[0x00C8])
class UShipDamagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_5GK5[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPrimitiveComponent*                         Shape;                                                     // 0x00D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ShipHulls[0x10];                                           // 0x00D8(0x0010) UNKNOWN PROPERTY: ArrayProperty Damagers.ShipDamagerComponent.ShipHulls
	unsigned char                                      WatercraftHealthInterfaces[0x10];                          // 0x00E8(0x0010) UNKNOWN PROPERTY: ArrayProperty Damagers.ShipDamagerComponent.WatercraftHealthInterfaces
	struct FStrainDamage                               ShipStrainDamage;                                          // 0x00F8(0x0028) (Edit)
	struct FWeightedProbabilityRangeOfRanges           TimeBetweenWatercraftDamage;                               // 0x0120(0x0030) (Edit)
	float                                              WatercraftDamage;                                          // 0x0150(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StartDamagingOnBeginPlay;                                  // 0x0154(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2JRB[0xCB];                                    // 0x0155(0x00CB) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Damagers.ShipDamagerComponent");
		return ptr;
	}



	void SetShape(class UPrimitiveComponent* InShape);
	void EndDamage();
	void BeginDamage();
	void AfterRead();
	void BeforeDelete();

};

// Class Damagers.ShockwaveDamagerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShockwaveDamagerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Damagers.ShockwaveDamagerInterface");
		return ptr;
	}



	void StartShockwaveAtLocation(const struct FVector& StartLocation);
	void StartShockwave();
	void IgnoreGhostShip(class AAggressiveGhostShip* Ship);
	float GetShockwaveRadius();
	float GetShockwaveDuration();
	void AfterRead();
	void BeforeDelete();

};

// Class Damagers.ShockwaveDamagerComponent
// 0x0108 (FullSize[0x01D0] - InheritedSize[0x00C8])
class UShockwaveDamagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_A7SU[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ExpansionDuration;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              EndRadiusInMetres;                                         // 0x00D4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyImpulseToShips;                                       // 0x00D8(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_F4CU[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWeightedProbabilityRangeOfRanges           ForceToApplyToShip;                                        // 0x00E0(0x0030) (Edit, DisableEditOnInstance)
	bool                                               ApplyDamageToShips;                                        // 0x0110(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_07MD[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FShockwaveDamagerShipDamage>         ShipDamageLevels;                                          // 0x0118(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	class UClass*                                      DamagerType;                                               // 0x0128(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               ApplyImpulseToGhostShips;                                  // 0x0130(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WMH8[0x3];                                     // 0x0131(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              GhostShipImpulseDuration;                                  // 0x0134(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GhostShipImpulseMaxDeflectionAngle;                        // 0x0138(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DestroyHostileGhostShips;                                  // 0x013C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_36Y4[0x3];                                     // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              NearbyEncounterDistanceInMetres;                           // 0x0140(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TE5B[0x4];                                     // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnShockwaveStarted;                                        // 0x0148(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnShockwaveEnded;                                          // 0x0158(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<TWeakObjectPtr<class AShip>>                ProcessedShips;                                            // 0x0168(0x0010) (ZeroConstructor, Transient, UObjectWrapper)
	TArray<TWeakObjectPtr<class AAggressiveGhostShip>> ProcessedGhostShips;                                       // 0x0178(0x0010) (ZeroConstructor, Transient, UObjectWrapper)
	unsigned char                                      UnknownData_OI0B[0x48];                                    // 0x0188(0x0048) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Damagers.ShockwaveDamagerComponent");
		return ptr;
	}



	void Multi_StartShockwave(const struct FVector& InStartLocation);
	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

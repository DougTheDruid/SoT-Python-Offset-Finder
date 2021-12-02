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

// Class Tethering.CordRenderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UCordRenderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.CordRenderInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.CordRenderComponent
// 0x0038 (FullSize[0x0628] - InheritedSize[0x05F0])
class UCordRenderComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData_T421[0x8];                                     // 0x05F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInstanceDynamic*>            CordMaterials;                                             // 0x05F8(0x0010) (ZeroConstructor, Transient, Protected)
	float                                              ThicknessCm;                                               // 0x0608(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6S03[0x1C];                                    // 0x060C(0x001C) Fix Super Size


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.CordRenderComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.DynamicCordRenderComponent
// 0x0068 (FullSize[0x0690] - InheritedSize[0x0628])
class UDynamicCordRenderComponent : public UCordRenderComponent
{
public:
	unsigned char                                      UnknownData_ABIK[0x8];                                     // 0x0628(0x0008) Fix Super Size
	class USceneComponent*                             EndPointA;                                                 // 0x0630(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             EndPointB;                                                 // 0x0638(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U072[0x50];                                    // 0x0640(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.DynamicCordRenderComponent");
		return ptr;
	}



	void SetCordEndPointB(class USceneComponent* EndPointB);
	void SetCordEndPointA(class USceneComponent* EndPointA);
	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.HarpoonRenderComponent
// 0x0028 (FullSize[0x0650] - InheritedSize[0x0628])
class UHarpoonRenderComponent : public UCordRenderComponent
{
public:
	TArray<class UMaterialInstanceDynamic*>            HarpoonMaterials;                                          // 0x0628(0x0010) (ZeroConstructor, Transient)
	float                                              LaunchAnimationDurationSecs;                               // 0x0638(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HitAnimationDurationSecs;                                  // 0x063C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              QuickRetractAnimationSpeed;                                // 0x0640(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_4VV9[0xC];                                     // 0x0644(0x000C) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.HarpoonRenderComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherConstraintInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherConstraintInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherConstraintInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.DistanceJointComponent
// 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
class UDistanceJointComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_0TI5[0x70];                                    // 0x00C8(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MinDistance;                                               // 0x0138(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxDistance;                                               // 0x013C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpringStiffness;                                           // 0x0140(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpringDamping;                                             // 0x0144(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ApplyAsSpring;                                             // 0x0148(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceMinDistance;                                        // 0x0149(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnforceMaxDistance;                                        // 0x014A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_P5C3[0x5];                                     // 0x014B(0x0005) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.DistanceJointComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.ShouldTetherInWorldSpaceInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShouldTetherInWorldSpaceInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.ShouldTetherInWorldSpaceInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherQueriableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherQueriableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherQueriableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherCustomisationInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherCustomisationInterface : public UTetherQueriableInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherCustomisationInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTetherInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.Tether
// 0x0140 (FullSize[0x0510] - InheritedSize[0x03D0])
class ATether : public AActor
{
public:
	unsigned char                                      UnknownData_GDK3[0xF8];                                    // 0x03D0(0x00F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             TetherPositionAnchorComponent;                             // 0x04C8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            SourcePhysicsHandle;                                       // 0x04D0(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            TargetPhysicsHandle;                                       // 0x04D8(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDistanceJointComponent*                     JointComponent;                                            // 0x04E0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SourceActor;                                               // 0x04E8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      TargetActor;                                               // 0x04F0(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SlackCm;                                                   // 0x04F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxLengthWhenGrowing;                                      // 0x04FC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_JTOX[0x8];                                     // 0x0500(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               HasAttached;                                               // 0x0508(0x0001) (Net, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               HasSourceActor;                                            // 0x0509(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               HasTargetActor;                                            // 0x050A(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	bool                                               IsSlackEnabled;                                            // 0x050B(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	TEnumAsByte<Tethering_ETetherConstrainMode>        CurrentTetherMode;                                         // 0x050C(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OL1Y[0x3];                                     // 0x050D(0x0003) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.Tether");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherCustomisationComponent
// 0x0060 (FullSize[0x0128] - InheritedSize[0x00C8])
class UTetherCustomisationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_18JC[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USceneComponent*                             ComponentToTetherTo;                                       // 0x00D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_UPZZ[0x48];                                    // 0x00D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MassIntertiaScale;                                         // 0x0120(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CanBeTethered;                                             // 0x0124(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsMassInertiaScalingEnabled;                               // 0x0125(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7GEF[0x2];                                     // 0x0126(0x0002) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherCustomisationComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class Tethering.TetherInWorldSpaceComponent
// 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
class UTetherInWorldSpaceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_FHKH[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Tethering.TetherInWorldSpaceComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

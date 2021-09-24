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

// Class PhysicsHelpers.PostPhysicsTickerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UPostPhysicsTickerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PhysicsHelpers.PostPhysicsTickerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class PhysicsHelpers.MockPostPhysicsTickerComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UMockPostPhysicsTickerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_A14W[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class PhysicsHelpers.MockPostPhysicsTickerComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

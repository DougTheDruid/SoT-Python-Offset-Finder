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

// Class DeliverableFramework.DeliverableRequirementBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDeliverableRequirementBase : public UObject
{
public:
	unsigned char                                      UnknownData_JH5J[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableRedirectionInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableComponent
// 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
class UDeliverableComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_VBKU[0x10];                                    // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDeliverableRequirementsDataAsset*           DeliveryRequirementsAsset;                                 // 0x00D8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L4JK[0x8];                                     // 0x00E0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionComponent
// 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
class UDeliverableRedirectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_EOJ1[0x8];                                     // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UDeliverableRedirectionContextBase*          Context;                                                   // 0x00D0(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionComponent");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionContextBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableRedirectionContextBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionContextBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionNoContext
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableRedirectionNoContext : public UDeliverableRedirectionContextBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionNoContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionCompositeContext
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UDeliverableRedirectionCompositeContext : public UDeliverableRedirectionContextBase
{
public:
	TArray<class UDeliverableRedirectionContextBase*>  Contexts;                                                  // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)
	unsigned char                                      UnknownData_52HN[0x18];                                    // 0x0038(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionCompositeContext");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableRedirectionDestinationDescriptorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionContextHandlerBase
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UDeliverableRedirectionContextHandlerBase : public UObject
{
public:
	class UDeliverableRedirectionDestinationDescriptorBase* DestinationDescriptor;                                     // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionContextHandlerBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UDeliverableRedirectionLiteralDestinationDescriptor : public UDeliverableRedirectionDestinationDescriptorBase
{
public:
	struct FText                                       Destination;                                               // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH (Edit)
	unsigned char                                      UnknownData_VT7D[0x20];                                    // 0x0028(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableRequirementsDataAsset
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UDeliverableRequirementsDataAsset : public UDataAsset
{
public:
	TArray<class UDeliverableRequirementBase*>         Requirements;                                              // 0x0028(0x0010) (Edit, ExportObject, ZeroConstructor, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableRequirementsDataAsset");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class DeliverableFramework.DeliverableTooltipCustomizerInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UDeliverableTooltipCustomizerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class DeliverableFramework.DeliverableTooltipCustomizerInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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

// Class GameService.ServiceProviderGameState
// 0x0120 (FullSize[0x0548] - InheritedSize[0x0428])
class AServiceProviderGameState : public AGameState
{
public:
	unsigned char                                      UnknownData_Q3EB[0x120];                                   // 0x0428(0x0120) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameService.ServiceProviderGameState");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameService.GameServiceLifecycleInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameServiceLifecycleInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameService.GameServiceLifecycleInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class GameService.GameServiceMapFunctions
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameServiceMapFunctions : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameService.GameServiceMapFunctions");
		return ptr;
	}



	void STATIC_UnregisterService(struct FGameServiceMap* ServiceMap, class UObject* Service);
	void STATIC_RegisterService(struct FGameServiceMap* ServiceMap, class UObject* Service, class UClass* Class);
	class UObject* STATIC_GetService(struct FGameServiceMap* ServiceMap, class UClass* Class);
	int STATIC_GetNumServices(struct FGameServiceMap* ServiceMap);
	void AfterRead();
	void BeforeDelete();

};

// Class GameService.GameServiceProviderInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameServiceProviderInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameService.GameServiceProviderInterface");
		return ptr;
	}



	void UnregisterService(class UObject* Service);
	void RegisterService(class UObject* Service, class UClass* Class);
	class UObject* GetService(class UClass* Class);
	void AfterRead();
	void BeforeDelete();

};

// Class GameService.GameServiceTickInterface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UGameServiceTickInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GameService.GameServiceTickInterface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

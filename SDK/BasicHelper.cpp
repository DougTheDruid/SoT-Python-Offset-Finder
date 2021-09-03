// Name: SoT, Version: 2.2.1.1

#include "../SDK.h"
#include <iostream>
#include <sstream>



/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{


GNAME_TYPE* FName::GNames = nullptr;
TUObjectArray* UObject::GObjects = nullptr;

//---------------------------------------------------------------------------
#if defined(EXTERNAL_PROPS)
MemoryManager* Mem = new MemoryManager();
#else
bool InitSdk(const std::string& moduleName, const uintptr_t gObjectsOffset, const uintptr_t gNamesOffset)
{
	auto mBaseAddress = reinterpret_cast<uintptr_t>(GetModuleHandleA(moduleName.c_str()));

	if (mBaseAddress == 0x00)
		return false;
	
	UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(mBaseAddress + gObjectsOffset);
	FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(mBaseAddress + gNamesOffset);

	return true;
}
bool InitSdk()
{
	return InitSdk("SoTGame.exe", 0x6B8B058, 0x6B86DE0);
}
#endif
//---------------------------------------------------------------------------
#ifdef UE4
bool FWeakObjectPtr::IsValid() const
{
	if (ObjectSerialNumber == 0)
	{
		return false;
	}
	if (ObjectIndex < 0)
	{
		return false;
	}
	auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
	if (!ObjectItem)
	{
		return false;
	}
	if (!SerialNumbersMatch(ObjectItem))
	{
		return false;
	}
	return !(ObjectItem->IsUnreachable() || ObjectItem->IsPendingKill());
}
//---------------------------------------------------------------------------
UObject* FWeakObjectPtr::Get() const
{
	if (IsValid())
	{
		auto ObjectItem = UObject::GetGlobalObjects().GetItemByIndex(ObjectIndex);
		if (ObjectItem)
		{
			return ObjectItem->Object;
		}
	}
	return nullptr;
}
#endif
//---------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif


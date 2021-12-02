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

// Class CoreUObject.Object
// 0x0028
class UObject
{
public:
	static class TUObjectArray*                        GObjects;                                                  // 0x0000(0x0008)
	void*                                              VfTable;                                                   // 0x0000(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            Flags;                                                     // 0x0008(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                             // 0x000C(0x0004) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                     // 0x0010(0x0008) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                      // 0x0018(0x0008) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                     // 0x0020(0x0008) NOT AUTO-GENERATED PROPERTY


	static inline TUObjectArray& GetGlobalObjects()
	{
		return *GObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static T* FindObject()
	{
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	template<typename T>
	static std::vector<T*> FindObjects(const std::string& name)
	{
		std::vector<T*> ret;
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->GetFullName() == name)
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	template<typename T>
	static std::vector<T*> FindObjects()
	{
		std::vector<T*> ret;
		auto v = T::StaticClass();
		for (int i = 0; i < CG::UObject::GetGlobalObjects().Num(); ++i)
		{
			auto object = CG::UObject::GetGlobalObjects().GetByIndex(i);

			if (object == nullptr)
			{
				continue;
			}

			if (object->IsA(v))
			{
				ret.push_back(static_cast<T*>(object));
			}
		}
		return ret;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	inline void ProcessEvent(class UFunction* function, void* parms)
	{
		// return;
		GetVFunction<void(*)(UObject*, class UFunction*, void*)>(this, 59)(this, function, parms);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}



	void ExecuteUbergraph(int EntryPoint);
	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Interface
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UInterface : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.GCObjectReferencer
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UGCObjectReferencer : public UObject
{
public:
	unsigned char                                      UnknownData_VMPT[0x38];                                    // 0x0028(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.TextBuffer
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData_5BX9[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Field
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UField : public UObject
{
public:
	class UField*                                      Next;                                                      // 0x0028(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Struct
// 0x0058 (FullSize[0x0088] - InheritedSize[0x0030])
class UStruct : public UField
{
public:
	class UStruct*                                     SuperField;                                                // 0x0030(0x0008) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                  // 0x0038(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                              // 0x0040(0x0004) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                              // 0x0044(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_4OE0DA2A4D[0x40];                                      // 0x0048(0x0040) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ScriptStruct
// 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData_7QSZ[0x10];                                    // 0x0088(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Package
// 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData_GPIP[0x58];                                    // 0x0028(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Class
// 0x0138 (FullSize[0x01C0] - InheritedSize[0x0088])
class UClass : public UStruct
{
public:
	unsigned char                                      UnknownData_W0V3[0x138];                                   // 0x0088(0x0138) MISSED OFFSET (PADDING)


template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	inline UObject* CreateDefaultObject()
	{
		// return nullptr;
		return GetVFunction<UObject*(*)(UClass*)>(this, /*FUNC_INDEX*/)(this);
	}

	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Function
// 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                             // 0x0088(0x0004) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RepOffset;                                                 // 0x008C(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         NumParms;                                                  // 0x008E(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ParmsSize;                                                 // 0x0090(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         ReturnValueOffset;                                         // 0x0092(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCId;                                                     // 0x0094(0x0002) NOT AUTO-GENERATED PROPERTY
	uint16_t_t                                         RPCResponseId;                                             // 0x0096(0x0002) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                       // 0x0098(0x0008) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                        // 0x00A0(0x0008) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                      // 0x00A8(0x0004) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_SRY2SLBGID[0x04];                                      // 0x00AC(0x0004) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                      // 0x00B0(0x0008) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad_QNPPEY6QCI[0x8];                                       // 0x00B8(0x0008) NOT AUTO-GENERATED PROPERTY


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DelegateFunction
// 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
class UDelegateFunction : public UFunction
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.SparseDelegateFunction
// 0x0010 (FullSize[0x00C8] - InheritedSize[0x00B8])
class USparseDelegateFunction : public UDelegateFunction
{
public:
	unsigned char                                      UnknownData_2IMG[0x10];                                    // 0x00B8(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.PackageMap
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData_UXFQ[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Enum
// 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData_6SL6[0x28];                                    // 0x0030(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderClass
// 0x0150 (FullSize[0x0310] - InheritedSize[0x01C0])
class ULinkerPlaceholderClass : public UClass
{
public:
	unsigned char                                      UnknownData_VLN2[0x150];                                   // 0x01C0(0x0150) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
class ULinkerPlaceholderExportObject : public UObject
{
public:
	unsigned char                                      UnknownData_HE12[0x60];                                    // 0x0028(0x0060) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LinkerPlaceholderFunction
// 0x0150 (FullSize[0x0208] - InheritedSize[0x00B8])
class ULinkerPlaceholderFunction : public UFunction
{
public:
	unsigned char                                      UnknownData_3DCJ[0x150];                                   // 0x00B8(0x0150) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MetaData
// 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData_LLCI[0x50];                                    // 0x0028(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectRedirector
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData_5NWR[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Property
// 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData_LJOE[0x40];                                    // 0x0030(0x0040) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.NumericProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNumericProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ArrayProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_NMID[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectPropertyBase
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UObjectPropertyBase : public UProperty
{
public:
	unsigned char                                      UnknownData_VMUR[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.AssetObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UAssetObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.AssetObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.AssetClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UAssetClassProperty : public UAssetObjectProperty
{
public:
	unsigned char                                      UnknownData_IRFR[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.AssetClassProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.BoolProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_A342[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ByteProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UByteProperty : public UNumericProperty
{
public:
	unsigned char                                      UnknownData_4HRB[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.ClassProperty
// 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData_BBGC[0x8];                                     // 0x0078(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_A1TC[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.DoubleProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UDoubleProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.FloatProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UFloatProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.IntProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UIntProperty : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.Int8Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UInt8Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.InterfaceProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_N8I3[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.LazyObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class ULazyObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MapProperty
// 0x0038 (FullSize[0x00A8] - InheritedSize[0x0070])
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_PW7P[0x38];                                    // 0x0070(0x0038) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastDelegateProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UMulticastDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_T12R[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.NameProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UNameProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.StrProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UStrProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.StructProperty
// 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData_0XAO[0x8];                                     // 0x0070(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt16Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt16Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt32Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt32Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.UInt64Property
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UUInt64Property : public UNumericProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.WeakObjectProperty
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UWeakObjectProperty : public UObjectPropertyBase
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

// Class CoreUObject.TextProperty
// 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
class UTextProperty : public UProperty
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}



	void AfterRead();
	void BeforeDelete();

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

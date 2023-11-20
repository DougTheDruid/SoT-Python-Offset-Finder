// Generated by dougthedruid on Discord
// https://github.com/DougTheDruid
namespace DougsSDKDumper
{
//-----
// Classes
//-----

// Size 0x0 (Full Size[0x28] - InheritedSize[0x28]
class Interface: public Object
{
public:
};


// Size 0x38 (Full Size[0x60] - InheritedSize[0x28]
class GCObjectReferencer: public Object
{
public:
	char                                                         pad0x38_VFDES[0x38];                               // 0x28(0x38)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class TextBuffer: public Object
{
public:
	char                                                         pad0x28_K0KQ8[0x28];                               // 0x28(0x28)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class Field: public Object
{
public:
	char                                                         pad0x8_QEC3X[0x8];                                 // 0x28(0x8)
};


// Size 0x58 (Full Size[0x88] - InheritedSize[0x30]
class Struct: public Field
{
public:
	char                                                         pad0x58_ONDLN[0x58];                               // 0x30(0x58)
};


// Size 0x10 (Full Size[0x98] - InheritedSize[0x88]
class ScriptStruct: public Struct
{
public:
	char                                                         pad0x10_THWN7[0x10];                               // 0x88(0x10)
};


// Size 0x58 (Full Size[0x80] - InheritedSize[0x28]
class Package: public Object
{
public:
	char                                                         pad0x58_YHXTR[0x58];                               // 0x28(0x58)
};


// Size 0x138 (Full Size[0x1c0] - InheritedSize[0x88]
class Class: public Struct
{
public:
	char                                                         pad0x138_F1D29[0x138];                             // 0x88(0x138)
};


// Size 0x30 (Full Size[0xb8] - InheritedSize[0x88]
class Function: public Struct
{
public:
	char                                                         pad0x30_GENS2[0x30];                               // 0x88(0x30)
};


// Size 0x0 (Full Size[0xb8] - InheritedSize[0xb8]
class DelegateFunction: public Function
{
public:
};


// Size 0x10 (Full Size[0xc8] - InheritedSize[0xb8]
class SparseDelegateFunction: public DelegateFunction
{
public:
	char                                                         pad0x10_FHLW8[0x10];                               // 0xb8(0x10)
};


// Size 0x28 (Full Size[0x50] - InheritedSize[0x28]
class PackageMap: public Object
{
public:
	char                                                         pad0x28_8SQJG[0x28];                               // 0x28(0x28)
};


// Size 0x28 (Full Size[0x58] - InheritedSize[0x30]
class Enum: public Field
{
public:
	char                                                         pad0x28_0WTLD[0x28];                               // 0x30(0x28)
};


// Size 0x150 (Full Size[0x310] - InheritedSize[0x1c0]
class LinkerPlaceholderClass: public Class
{
public:
	char                                                         pad0x150_O7TLH[0x150];                             // 0x1c0(0x150)
};


// Size 0x60 (Full Size[0x88] - InheritedSize[0x28]
class LinkerPlaceholderExportObject: public Object
{
public:
	char                                                         pad0x60_WZRTK[0x60];                               // 0x28(0x60)
};


// Size 0x150 (Full Size[0x208] - InheritedSize[0xb8]
class LinkerPlaceholderFunction: public Function
{
public:
	char                                                         pad0x150_0UAL5[0x150];                             // 0xb8(0x150)
};


// Size 0x50 (Full Size[0x78] - InheritedSize[0x28]
class MetaData: public Object
{
public:
	char                                                         pad0x50_4WYXE[0x50];                               // 0x28(0x50)
};


// Size 0x8 (Full Size[0x30] - InheritedSize[0x28]
class ObjectRedirector: public Object
{
public:
	char                                                         pad0x8_RL9LK[0x8];                                 // 0x28(0x8)
};


// Size 0x40 (Full Size[0x70] - InheritedSize[0x30]
class Property: public Field
{
public:
	char                                                         pad0x40_CPT6H[0x40];                               // 0x30(0x40)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class NumericProperty: public Property
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ArrayProperty: public Property
{
public:
	char                                                         pad0x8_LIHOK[0x8];                                 // 0x70(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ObjectPropertyBase: public Property
{
public:
	char                                                         pad0x8_0VQXX[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class AssetObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class AssetClassProperty: public AssetObjectProperty
{
public:
	char                                                         pad0x8_DB5Q5[0x8];                                 // 0x78(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class BoolProperty: public Property
{
public:
	char                                                         pad0x8_VPME4[0x8];                                 // 0x70(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class ByteProperty: public NumericProperty
{
public:
	char                                                         pad0x8_OF8UJ[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class ObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x8 (Full Size[0x80] - InheritedSize[0x78]
class ClassProperty: public ObjectProperty
{
public:
	char                                                         pad0x8_NKXHO[0x8];                                 // 0x78(0x8)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class DelegateProperty: public Property
{
public:
	char                                                         pad0x8_TT3FN[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class DoubleProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class FloatProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class IntProperty: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int16Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int64Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class Int8Property: public NumericProperty
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class InterfaceProperty: public Property
{
public:
	char                                                         pad0x8_ACDDA[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class LazyObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x38 (Full Size[0xa8] - InheritedSize[0x70]
class MapProperty: public Property
{
public:
	char                                                         pad0x38_5TSLE[0x38];                               // 0x70(0x38)
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class MulticastDelegateProperty: public Property
{
public:
	char                                                         pad0x8_G3KOB[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class MulticastInlineDelegateProperty: public MulticastDelegateProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class NameProperty: public Property
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class StrProperty: public Property
{
public:
};


// Size 0x8 (Full Size[0x78] - InheritedSize[0x70]
class StructProperty: public Property
{
public:
	char                                                         pad0x8_529TT[0x8];                                 // 0x70(0x8)
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt16Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt32Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class UInt64Property: public NumericProperty
{
public:
};


// Size 0x0 (Full Size[0x78] - InheritedSize[0x78]
class WeakObjectProperty: public ObjectPropertyBase
{
public:
};


// Size 0x0 (Full Size[0x70] - InheritedSize[0x70]
class TextProperty: public Property
{
public:
};


// Size 0x0 (Full Size[0x0] - InheritedSize[0x0]
class Default__Class: public None
{
public:
};


}
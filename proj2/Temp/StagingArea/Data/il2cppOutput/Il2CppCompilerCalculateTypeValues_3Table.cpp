﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Type
struct Type_t;
// System.Resources.IResourceReader
struct IResourceReader_t3222588482;
// System.Resources.ResourceReader
struct ResourceReader_t2463923611;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument>
struct IList_1_t2039138515;
// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument>
struct IList_1_t635098144;
// System.IO.BinaryReader
struct BinaryReader_t2491843768;
// System.Runtime.Serialization.IFormatter
struct IFormatter_t936711909;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Resources.ResourceReader/ResourceInfo[]
struct ResourceInfoU5BU5D_t1013133725;
// System.Resources.ResourceReader/ResourceCacheItem[]
struct ResourceCacheItemU5BU5D_t2265014744;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Void
struct Void_t1841601450;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.Version
struct Version_t1755874712;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1766862959;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t1761494505;
// System.Security.Policy.Evidence
struct Evidence_t1407710183;
// System.Security.PermissionSet
struct PermissionSet_t1941658161;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t4090869089;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MemberFilter
struct MemberFilter_t3405857066;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t4270021860;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t152480188;
// System.Reflection.TypeFilter
struct TypeFilter_t2905709404;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.MonoProperty/GetterAdapter
struct GetterAdapter_t1423755509;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Delegate
struct Delegate_t3022476291;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t4238041457;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t775814140;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t867683112;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t4156028127;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t358971386;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ACTIVATIONARGUMENTS_T640021366_H
#define ACTIVATIONARGUMENTS_T640021366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Hosting.ActivationArguments
struct  ActivationArguments_t640021366  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATIONARGUMENTS_T640021366_H
#ifndef RESOURCEMANAGER_T264715885_H
#define RESOURCEMANAGER_T264715885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceManager
struct  ResourceManager_t264715885  : public RuntimeObject
{
public:
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_4;

public:
	inline static int32_t get_offset_of_resourceSetType_4() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885, ___resourceSetType_4)); }
	inline Type_t * get_resourceSetType_4() const { return ___resourceSetType_4; }
	inline Type_t ** get_address_of_resourceSetType_4() { return &___resourceSetType_4; }
	inline void set_resourceSetType_4(Type_t * value)
	{
		___resourceSetType_4 = value;
		Il2CppCodeGenWriteBarrier((&___resourceSetType_4), value);
	}
};

struct ResourceManager_t264715885_StaticFields
{
public:
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t909839986 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t909839986 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;

public:
	inline static int32_t get_offset_of_ResourceCache_0() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___ResourceCache_0)); }
	inline Hashtable_t909839986 * get_ResourceCache_0() const { return ___ResourceCache_0; }
	inline Hashtable_t909839986 ** get_address_of_ResourceCache_0() { return &___ResourceCache_0; }
	inline void set_ResourceCache_0(Hashtable_t909839986 * value)
	{
		___ResourceCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceCache_0), value);
	}

	inline static int32_t get_offset_of_NonExistent_1() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___NonExistent_1)); }
	inline Hashtable_t909839986 * get_NonExistent_1() const { return ___NonExistent_1; }
	inline Hashtable_t909839986 ** get_address_of_NonExistent_1() { return &___NonExistent_1; }
	inline void set_NonExistent_1(Hashtable_t909839986 * value)
	{
		___NonExistent_1 = value;
		Il2CppCodeGenWriteBarrier((&___NonExistent_1), value);
	}

	inline static int32_t get_offset_of_HeaderVersionNumber_2() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___HeaderVersionNumber_2)); }
	inline int32_t get_HeaderVersionNumber_2() const { return ___HeaderVersionNumber_2; }
	inline int32_t* get_address_of_HeaderVersionNumber_2() { return &___HeaderVersionNumber_2; }
	inline void set_HeaderVersionNumber_2(int32_t value)
	{
		___HeaderVersionNumber_2 = value;
	}

	inline static int32_t get_offset_of_MagicNumber_3() { return static_cast<int32_t>(offsetof(ResourceManager_t264715885_StaticFields, ___MagicNumber_3)); }
	inline int32_t get_MagicNumber_3() const { return ___MagicNumber_3; }
	inline int32_t* get_address_of_MagicNumber_3() { return &___MagicNumber_3; }
	inline void set_MagicNumber_3(int32_t value)
	{
		___MagicNumber_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEMANAGER_T264715885_H
#ifndef CRITICALFINALIZEROBJECT_T1920899984_H
#define CRITICALFINALIZEROBJECT_T1920899984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t1920899984  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T1920899984_H
#ifndef RESOURCESET_T1348327650_H
#define RESOURCESET_T1348327650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceSet
struct  ResourceSet_t1348327650  : public RuntimeObject
{
public:
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	RuntimeObject* ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t909839986 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_Reader_0() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Reader_0)); }
	inline RuntimeObject* get_Reader_0() const { return ___Reader_0; }
	inline RuntimeObject** get_address_of_Reader_0() { return &___Reader_0; }
	inline void set_Reader_0(RuntimeObject* value)
	{
		___Reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___Reader_0), value);
	}

	inline static int32_t get_offset_of_Table_1() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___Table_1)); }
	inline Hashtable_t909839986 * get_Table_1() const { return ___Table_1; }
	inline Hashtable_t909839986 ** get_address_of_Table_1() { return &___Table_1; }
	inline void set_Table_1(Hashtable_t909839986 * value)
	{
		___Table_1 = value;
		Il2CppCodeGenWriteBarrier((&___Table_1), value);
	}

	inline static int32_t get_offset_of_resources_read_2() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___resources_read_2)); }
	inline bool get_resources_read_2() const { return ___resources_read_2; }
	inline bool* get_address_of_resources_read_2() { return &___resources_read_2; }
	inline void set_resources_read_2(bool value)
	{
		___resources_read_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(ResourceSet_t1348327650, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCESET_T1348327650_H
#ifndef RESOURCEENUMERATOR_T2665690338_H
#define RESOURCEENUMERATOR_T2665690338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceEnumerator
struct  ResourceEnumerator_t2665690338  : public RuntimeObject
{
public:
	// System.Resources.ResourceReader System.Resources.ResourceReader/ResourceEnumerator::reader
	ResourceReader_t2463923611 * ___reader_0;
	// System.Int32 System.Resources.ResourceReader/ResourceEnumerator::index
	int32_t ___index_1;
	// System.Boolean System.Resources.ResourceReader/ResourceEnumerator::finished
	bool ___finished_2;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___reader_0)); }
	inline ResourceReader_t2463923611 * get_reader_0() const { return ___reader_0; }
	inline ResourceReader_t2463923611 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(ResourceReader_t2463923611 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_finished_2() { return static_cast<int32_t>(offsetof(ResourceEnumerator_t2665690338, ___finished_2)); }
	inline bool get_finished_2() const { return ___finished_2; }
	inline bool* get_address_of_finished_2() { return &___finished_2; }
	inline void set_finished_2(bool value)
	{
		___finished_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEENUMERATOR_T2665690338_H
#ifndef STRONGNAMEKEYPAIR_T4090869089_H
#define STRONGNAMEKEYPAIR_T4090869089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.StrongNameKeyPair
struct  StrongNameKeyPair_t4090869089  : public RuntimeObject
{
public:
	// System.Byte[] System.Reflection.StrongNameKeyPair::_publicKey
	ByteU5BU5D_t3397334013* ____publicKey_0;
	// System.String System.Reflection.StrongNameKeyPair::_keyPairContainer
	String_t* ____keyPairContainer_1;
	// System.Boolean System.Reflection.StrongNameKeyPair::_keyPairExported
	bool ____keyPairExported_2;
	// System.Byte[] System.Reflection.StrongNameKeyPair::_keyPairArray
	ByteU5BU5D_t3397334013* ____keyPairArray_3;

public:
	inline static int32_t get_offset_of__publicKey_0() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____publicKey_0)); }
	inline ByteU5BU5D_t3397334013* get__publicKey_0() const { return ____publicKey_0; }
	inline ByteU5BU5D_t3397334013** get_address_of__publicKey_0() { return &____publicKey_0; }
	inline void set__publicKey_0(ByteU5BU5D_t3397334013* value)
	{
		____publicKey_0 = value;
		Il2CppCodeGenWriteBarrier((&____publicKey_0), value);
	}

	inline static int32_t get_offset_of__keyPairContainer_1() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairContainer_1)); }
	inline String_t* get__keyPairContainer_1() const { return ____keyPairContainer_1; }
	inline String_t** get_address_of__keyPairContainer_1() { return &____keyPairContainer_1; }
	inline void set__keyPairContainer_1(String_t* value)
	{
		____keyPairContainer_1 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairContainer_1), value);
	}

	inline static int32_t get_offset_of__keyPairExported_2() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairExported_2)); }
	inline bool get__keyPairExported_2() const { return ____keyPairExported_2; }
	inline bool* get_address_of__keyPairExported_2() { return &____keyPairExported_2; }
	inline void set__keyPairExported_2(bool value)
	{
		____keyPairExported_2 = value;
	}

	inline static int32_t get_offset_of__keyPairArray_3() { return static_cast<int32_t>(offsetof(StrongNameKeyPair_t4090869089, ____keyPairArray_3)); }
	inline ByteU5BU5D_t3397334013* get__keyPairArray_3() const { return ____keyPairArray_3; }
	inline ByteU5BU5D_t3397334013** get_address_of__keyPairArray_3() { return &____keyPairArray_3; }
	inline void set__keyPairArray_3(ByteU5BU5D_t3397334013* value)
	{
		____keyPairArray_3 = value;
		Il2CppCodeGenWriteBarrier((&____keyPairArray_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEKEYPAIR_T4090869089_H
#ifndef CUSTOMATTRIBUTEDATA_T3093286891_H
#define CUSTOMATTRIBUTEDATA_T3093286891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeData
struct  CustomAttributeData_t3093286891  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo System.Reflection.CustomAttributeData::ctorInfo
	ConstructorInfo_t2851816542 * ___ctorInfo_0;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeTypedArgument> System.Reflection.CustomAttributeData::ctorArgs
	RuntimeObject* ___ctorArgs_1;
	// System.Collections.Generic.IList`1<System.Reflection.CustomAttributeNamedArgument> System.Reflection.CustomAttributeData::namedArgs
	RuntimeObject* ___namedArgs_2;

public:
	inline static int32_t get_offset_of_ctorInfo_0() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3093286891, ___ctorInfo_0)); }
	inline ConstructorInfo_t2851816542 * get_ctorInfo_0() const { return ___ctorInfo_0; }
	inline ConstructorInfo_t2851816542 ** get_address_of_ctorInfo_0() { return &___ctorInfo_0; }
	inline void set_ctorInfo_0(ConstructorInfo_t2851816542 * value)
	{
		___ctorInfo_0 = value;
		Il2CppCodeGenWriteBarrier((&___ctorInfo_0), value);
	}

	inline static int32_t get_offset_of_ctorArgs_1() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3093286891, ___ctorArgs_1)); }
	inline RuntimeObject* get_ctorArgs_1() const { return ___ctorArgs_1; }
	inline RuntimeObject** get_address_of_ctorArgs_1() { return &___ctorArgs_1; }
	inline void set_ctorArgs_1(RuntimeObject* value)
	{
		___ctorArgs_1 = value;
		Il2CppCodeGenWriteBarrier((&___ctorArgs_1), value);
	}

	inline static int32_t get_offset_of_namedArgs_2() { return static_cast<int32_t>(offsetof(CustomAttributeData_t3093286891, ___namedArgs_2)); }
	inline RuntimeObject* get_namedArgs_2() const { return ___namedArgs_2; }
	inline RuntimeObject** get_address_of_namedArgs_2() { return &___namedArgs_2; }
	inline void set_namedArgs_2(RuntimeObject* value)
	{
		___namedArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___namedArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMATTRIBUTEDATA_T3093286891_H
#ifndef ERRORWRAPPER_T2775489663_H
#define ERRORWRAPPER_T2775489663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ErrorWrapper
struct  ErrorWrapper_t2775489663  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.InteropServices.ErrorWrapper::errorCode
	int32_t ___errorCode_0;

public:
	inline static int32_t get_offset_of_errorCode_0() { return static_cast<int32_t>(offsetof(ErrorWrapper_t2775489663, ___errorCode_0)); }
	inline int32_t get_errorCode_0() const { return ___errorCode_0; }
	inline int32_t* get_address_of_errorCode_0() { return &___errorCode_0; }
	inline void set_errorCode_0(int32_t value)
	{
		___errorCode_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORWRAPPER_T2775489663_H
#ifndef MISSING_T1033855606_H
#define MISSING_T1033855606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t1033855606  : public RuntimeObject
{
public:

public:
};

struct Missing_t1033855606_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t1033855606 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t1033855606_StaticFields, ___Value_0)); }
	inline Missing_t1033855606 * get_Value_0() const { return ___Value_0; }
	inline Missing_t1033855606 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t1033855606 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T1033855606_H
#ifndef BINDER_T3404612058_H
#define BINDER_T3404612058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t3404612058  : public RuntimeObject
{
public:

public:
};

struct Binder_t3404612058_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t3404612058 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t3404612058_StaticFields, ___default_binder_0)); }
	inline Binder_t3404612058 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t3404612058 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t3404612058 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T3404612058_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef RESOLVEEVENTHOLDER_T1761494505_H
#define RESOLVEEVENTHOLDER_T1761494505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t1761494505  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTHOLDER_T1761494505_H
#ifndef RESOURCEREADER_T2463923611_H
#define RESOURCEREADER_T2463923611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader
struct  ResourceReader_t2463923611  : public RuntimeObject
{
public:
	// System.IO.BinaryReader System.Resources.ResourceReader::reader
	BinaryReader_t2491843768 * ___reader_0;
	// System.Object System.Resources.ResourceReader::readerLock
	RuntimeObject * ___readerLock_1;
	// System.Runtime.Serialization.IFormatter System.Resources.ResourceReader::formatter
	RuntimeObject* ___formatter_2;
	// System.Int32 System.Resources.ResourceReader::resourceCount
	int32_t ___resourceCount_3;
	// System.Int32 System.Resources.ResourceReader::typeCount
	int32_t ___typeCount_4;
	// System.String[] System.Resources.ResourceReader::typeNames
	StringU5BU5D_t1642385972* ___typeNames_5;
	// System.Int32[] System.Resources.ResourceReader::hashes
	Int32U5BU5D_t3030399641* ___hashes_6;
	// System.Resources.ResourceReader/ResourceInfo[] System.Resources.ResourceReader::infos
	ResourceInfoU5BU5D_t1013133725* ___infos_7;
	// System.Int32 System.Resources.ResourceReader::dataSectionOffset
	int32_t ___dataSectionOffset_8;
	// System.Int64 System.Resources.ResourceReader::nameSectionOffset
	int64_t ___nameSectionOffset_9;
	// System.Int32 System.Resources.ResourceReader::resource_ver
	int32_t ___resource_ver_10;
	// System.Resources.ResourceReader/ResourceCacheItem[] System.Resources.ResourceReader::cache
	ResourceCacheItemU5BU5D_t2265014744* ___cache_11;
	// System.Object System.Resources.ResourceReader::cache_lock
	RuntimeObject * ___cache_lock_12;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___reader_0)); }
	inline BinaryReader_t2491843768 * get_reader_0() const { return ___reader_0; }
	inline BinaryReader_t2491843768 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(BinaryReader_t2491843768 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier((&___reader_0), value);
	}

	inline static int32_t get_offset_of_readerLock_1() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___readerLock_1)); }
	inline RuntimeObject * get_readerLock_1() const { return ___readerLock_1; }
	inline RuntimeObject ** get_address_of_readerLock_1() { return &___readerLock_1; }
	inline void set_readerLock_1(RuntimeObject * value)
	{
		___readerLock_1 = value;
		Il2CppCodeGenWriteBarrier((&___readerLock_1), value);
	}

	inline static int32_t get_offset_of_formatter_2() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___formatter_2)); }
	inline RuntimeObject* get_formatter_2() const { return ___formatter_2; }
	inline RuntimeObject** get_address_of_formatter_2() { return &___formatter_2; }
	inline void set_formatter_2(RuntimeObject* value)
	{
		___formatter_2 = value;
		Il2CppCodeGenWriteBarrier((&___formatter_2), value);
	}

	inline static int32_t get_offset_of_resourceCount_3() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resourceCount_3)); }
	inline int32_t get_resourceCount_3() const { return ___resourceCount_3; }
	inline int32_t* get_address_of_resourceCount_3() { return &___resourceCount_3; }
	inline void set_resourceCount_3(int32_t value)
	{
		___resourceCount_3 = value;
	}

	inline static int32_t get_offset_of_typeCount_4() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeCount_4)); }
	inline int32_t get_typeCount_4() const { return ___typeCount_4; }
	inline int32_t* get_address_of_typeCount_4() { return &___typeCount_4; }
	inline void set_typeCount_4(int32_t value)
	{
		___typeCount_4 = value;
	}

	inline static int32_t get_offset_of_typeNames_5() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___typeNames_5)); }
	inline StringU5BU5D_t1642385972* get_typeNames_5() const { return ___typeNames_5; }
	inline StringU5BU5D_t1642385972** get_address_of_typeNames_5() { return &___typeNames_5; }
	inline void set_typeNames_5(StringU5BU5D_t1642385972* value)
	{
		___typeNames_5 = value;
		Il2CppCodeGenWriteBarrier((&___typeNames_5), value);
	}

	inline static int32_t get_offset_of_hashes_6() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___hashes_6)); }
	inline Int32U5BU5D_t3030399641* get_hashes_6() const { return ___hashes_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_hashes_6() { return &___hashes_6; }
	inline void set_hashes_6(Int32U5BU5D_t3030399641* value)
	{
		___hashes_6 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_6), value);
	}

	inline static int32_t get_offset_of_infos_7() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___infos_7)); }
	inline ResourceInfoU5BU5D_t1013133725* get_infos_7() const { return ___infos_7; }
	inline ResourceInfoU5BU5D_t1013133725** get_address_of_infos_7() { return &___infos_7; }
	inline void set_infos_7(ResourceInfoU5BU5D_t1013133725* value)
	{
		___infos_7 = value;
		Il2CppCodeGenWriteBarrier((&___infos_7), value);
	}

	inline static int32_t get_offset_of_dataSectionOffset_8() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___dataSectionOffset_8)); }
	inline int32_t get_dataSectionOffset_8() const { return ___dataSectionOffset_8; }
	inline int32_t* get_address_of_dataSectionOffset_8() { return &___dataSectionOffset_8; }
	inline void set_dataSectionOffset_8(int32_t value)
	{
		___dataSectionOffset_8 = value;
	}

	inline static int32_t get_offset_of_nameSectionOffset_9() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___nameSectionOffset_9)); }
	inline int64_t get_nameSectionOffset_9() const { return ___nameSectionOffset_9; }
	inline int64_t* get_address_of_nameSectionOffset_9() { return &___nameSectionOffset_9; }
	inline void set_nameSectionOffset_9(int64_t value)
	{
		___nameSectionOffset_9 = value;
	}

	inline static int32_t get_offset_of_resource_ver_10() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___resource_ver_10)); }
	inline int32_t get_resource_ver_10() const { return ___resource_ver_10; }
	inline int32_t* get_address_of_resource_ver_10() { return &___resource_ver_10; }
	inline void set_resource_ver_10(int32_t value)
	{
		___resource_ver_10 = value;
	}

	inline static int32_t get_offset_of_cache_11() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_11)); }
	inline ResourceCacheItemU5BU5D_t2265014744* get_cache_11() const { return ___cache_11; }
	inline ResourceCacheItemU5BU5D_t2265014744** get_address_of_cache_11() { return &___cache_11; }
	inline void set_cache_11(ResourceCacheItemU5BU5D_t2265014744* value)
	{
		___cache_11 = value;
		Il2CppCodeGenWriteBarrier((&___cache_11), value);
	}

	inline static int32_t get_offset_of_cache_lock_12() { return static_cast<int32_t>(offsetof(ResourceReader_t2463923611, ___cache_lock_12)); }
	inline RuntimeObject * get_cache_lock_12() const { return ___cache_lock_12; }
	inline RuntimeObject ** get_address_of_cache_lock_12() { return &___cache_lock_12; }
	inline void set_cache_lock_12(RuntimeObject * value)
	{
		___cache_lock_12 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOURCEREADER_T2463923611_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ISVOLATILE_T700755342_H
#define ISVOLATILE_T700755342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.IsVolatile
struct  IsVolatile_t700755342  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ISVOLATILE_T700755342_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef POINTER_T937075087_H
#define POINTER_T937075087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Pointer
struct  Pointer_t937075087  : public RuntimeObject
{
public:
	// System.Void* System.Reflection.Pointer::data
	void* ___data_0;
	// System.Type System.Reflection.Pointer::type
	Type_t * ___type_1;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(Pointer_t937075087, ___data_0)); }
	inline void* get_data_0() const { return ___data_0; }
	inline void** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(void* value)
	{
		___data_0 = value;
	}

	inline static int32_t get_offset_of_type_1() { return static_cast<int32_t>(offsetof(Pointer_t937075087, ___type_1)); }
	inline Type_t * get_type_1() const { return ___type_1; }
	inline Type_t ** get_address_of_type_1() { return &___type_1; }
	inline void set_type_1(Type_t * value)
	{
		___type_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINTER_T937075087_H
#ifndef TARGETINVOCATIONEXCEPTION_T4098620458_H
#define TARGETINVOCATIONEXCEPTION_T4098620458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetInvocationException
struct  TargetInvocationException_t4098620458  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETINVOCATIONEXCEPTION_T4098620458_H
#ifndef DISPIDATTRIBUTE_T607560947_H
#define DISPIDATTRIBUTE_T607560947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.DispIdAttribute
struct  DispIdAttribute_t607560947  : public Attribute_t542643598
{
public:
	// System.Int32 System.Runtime.InteropServices.DispIdAttribute::id
	int32_t ___id_0;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(DispIdAttribute_t607560947, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPIDATTRIBUTE_T607560947_H
#ifndef METHODBASE_T904190842_H
#define METHODBASE_T904190842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t904190842  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T904190842_H
#ifndef GCHANDLE_T3409268066_H
#define GCHANDLE_T3409268066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3409268066 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3409268066, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3409268066_H
#ifndef TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#define TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetParameterCountException
struct  TargetParameterCountException_t1554451430  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETPARAMETERCOUNTEXCEPTION_T1554451430_H
#ifndef RUNTIMERESOURCESET_T1442459318_H
#define RUNTIMERESOURCESET_T1442459318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.RuntimeResourceSet
struct  RuntimeResourceSet_t1442459318  : public ResourceSet_t1348327650
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMERESOURCESET_T1442459318_H
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
#ifndef PARAMETERMODIFIER_T1820634920_H
#define PARAMETERMODIFIER_T1820634920_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1820634920 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t3568034315* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1820634920, ____byref_0)); }
	inline BooleanU5BU5D_t3568034315* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t3568034315** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t3568034315* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1820634920_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1820634920_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1820634920_H
#ifndef COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#define COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t238494011  : public Attribute_t542643598
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::relax
	int32_t ___relax_0;

public:
	inline static int32_t get_offset_of_relax_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t238494011, ___relax_0)); }
	inline int32_t get_relax_0() const { return ___relax_0; }
	inline int32_t* get_address_of_relax_0() { return &___relax_0; }
	inline void set_relax_0(int32_t value)
	{
		___relax_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONSATTRIBUTE_T238494011_H
#ifndef TARGETEXCEPTION_T1572104820_H
#define TARGETEXCEPTION_T1572104820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TargetException
struct  TargetException_t1572104820  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TARGETEXCEPTION_T1572104820_H
#ifndef SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#define SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t2989984391  : public Attribute_t542643598
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t1755874712 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2989984391, ___ver_0)); }
	inline Version_t1755874712 * get_ver_0() const { return ___ver_0; }
	inline Version_t1755874712 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t1755874712 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier((&___ver_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SATELLITECONTRACTVERSIONATTRIBUTE_T2989984391_H
#ifndef COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#define COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
struct  ComDefaultInterfaceAttribute_t347642415  : public Attribute_t542643598
{
public:
	// System.Type System.Runtime.InteropServices.ComDefaultInterfaceAttribute::_type
	Type_t * ____type_0;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ComDefaultInterfaceAttribute_t347642415, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMDEFAULTINTERFACEATTRIBUTE_T347642415_H
#ifndef STRINGFREEZINGATTRIBUTE_T2691375565_H
#define STRINGFREEZINGATTRIBUTE_T2691375565_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.StringFreezingAttribute
struct  StringFreezingAttribute_t2691375565  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGFREEZINGATTRIBUTE_T2691375565_H
#ifndef ASSEMBLYFILEVERSIONATTRIBUTE_T2897687916_H
#define ASSEMBLYFILEVERSIONATTRIBUTE_T2897687916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyFileVersionAttribute
struct  AssemblyFileVersionAttribute_t2897687916  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyFileVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyFileVersionAttribute_t2897687916, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYFILEVERSIONATTRIBUTE_T2897687916_H
#ifndef ASSEMBLYDESCRIPTIONATTRIBUTE_T1018387888_H
#define ASSEMBLYDESCRIPTIONATTRIBUTE_T1018387888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDescriptionAttribute
struct  AssemblyDescriptionAttribute_t1018387888  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyDescriptionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDescriptionAttribute_t1018387888, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDESCRIPTIONATTRIBUTE_T1018387888_H
#ifndef ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037389657_H
#define ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037389657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyInformationalVersionAttribute
struct  AssemblyInformationalVersionAttribute_t3037389657  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyInformationalVersionAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyInformationalVersionAttribute_t3037389657, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYINFORMATIONALVERSIONATTRIBUTE_T3037389657_H
#ifndef RESOURCEINFO_T3933049236_H
#define RESOURCEINFO_T3933049236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceInfo
struct  ResourceInfo_t3933049236 
{
public:
	// System.Int64 System.Resources.ResourceReader/ResourceInfo::ValuePosition
	int64_t ___ValuePosition_0;
	// System.String System.Resources.ResourceReader/ResourceInfo::ResourceName
	String_t* ___ResourceName_1;
	// System.Int32 System.Resources.ResourceReader/ResourceInfo::TypeIndex
	int32_t ___TypeIndex_2;

public:
	inline static int32_t get_offset_of_ValuePosition_0() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___ValuePosition_0)); }
	inline int64_t get_ValuePosition_0() const { return ___ValuePosition_0; }
	inline int64_t* get_address_of_ValuePosition_0() { return &___ValuePosition_0; }
	inline void set_ValuePosition_0(int64_t value)
	{
		___ValuePosition_0 = value;
	}

	inline static int32_t get_offset_of_ResourceName_1() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___ResourceName_1)); }
	inline String_t* get_ResourceName_1() const { return ___ResourceName_1; }
	inline String_t** get_address_of_ResourceName_1() { return &___ResourceName_1; }
	inline void set_ResourceName_1(String_t* value)
	{
		___ResourceName_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_1), value);
	}

	inline static int32_t get_offset_of_TypeIndex_2() { return static_cast<int32_t>(offsetof(ResourceInfo_t3933049236, ___TypeIndex_2)); }
	inline int32_t get_TypeIndex_2() const { return ___TypeIndex_2; }
	inline int32_t* get_address_of_TypeIndex_2() { return &___TypeIndex_2; }
	inline void set_TypeIndex_2(int32_t value)
	{
		___TypeIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3933049236_marshaled_pinvoke
{
	int64_t ___ValuePosition_0;
	char* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceInfo
struct ResourceInfo_t3933049236_marshaled_com
{
	int64_t ___ValuePosition_0;
	Il2CppChar* ___ResourceName_1;
	int32_t ___TypeIndex_2;
};
#endif // RESOURCEINFO_T3933049236_H
#ifndef ASSEMBLYKEYFILEATTRIBUTE_T605245443_H
#define ASSEMBLYKEYFILEATTRIBUTE_T605245443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyKeyFileAttribute
struct  AssemblyKeyFileAttribute_t605245443  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyKeyFileAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyKeyFileAttribute_t605245443, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYKEYFILEATTRIBUTE_T605245443_H
#ifndef ASSEMBLYCOMPANYATTRIBUTE_T2851673381_H
#define ASSEMBLYCOMPANYATTRIBUTE_T2851673381_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCompanyAttribute
struct  AssemblyCompanyAttribute_t2851673381  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyCompanyAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCompanyAttribute_t2851673381, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOMPANYATTRIBUTE_T2851673381_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef ASSEMBLYCOPYRIGHTATTRIBUTE_T177123295_H
#define ASSEMBLYCOPYRIGHTATTRIBUTE_T177123295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyCopyrightAttribute
struct  AssemblyCopyrightAttribute_t177123295  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyCopyrightAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyCopyrightAttribute_t177123295, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYCOPYRIGHTATTRIBUTE_T177123295_H
#ifndef ASSEMBLYDELAYSIGNATTRIBUTE_T2705758496_H
#define ASSEMBLYDELAYSIGNATTRIBUTE_T2705758496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDelaySignAttribute
struct  AssemblyDelaySignAttribute_t2705758496  : public Attribute_t542643598
{
public:
	// System.Boolean System.Reflection.AssemblyDelaySignAttribute::delay
	bool ___delay_0;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(AssemblyDelaySignAttribute_t2705758496, ___delay_0)); }
	inline bool get_delay_0() const { return ___delay_0; }
	inline bool* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(bool value)
	{
		___delay_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDELAYSIGNATTRIBUTE_T2705758496_H
#ifndef ASSEMBLYDEFAULTALIASATTRIBUTE_T1774139159_H
#define ASSEMBLYDEFAULTALIASATTRIBUTE_T1774139159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyDefaultAliasAttribute
struct  AssemblyDefaultAliasAttribute_t1774139159  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyDefaultAliasAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyDefaultAliasAttribute_t1774139159, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYDEFAULTALIASATTRIBUTE_T1774139159_H
#ifndef ASSEMBLYPRODUCTATTRIBUTE_T1523443169_H
#define ASSEMBLYPRODUCTATTRIBUTE_T1523443169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyProductAttribute
struct  AssemblyProductAttribute_t1523443169  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyProductAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyProductAttribute_t1523443169, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYPRODUCTATTRIBUTE_T1523443169_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#define CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeTypedArgument
struct  CustomAttributeTypedArgument_t1498197914 
{
public:
	// System.Type System.Reflection.CustomAttributeTypedArgument::argumentType
	Type_t * ___argumentType_0;
	// System.Object System.Reflection.CustomAttributeTypedArgument::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_argumentType_0() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1498197914, ___argumentType_0)); }
	inline Type_t * get_argumentType_0() const { return ___argumentType_0; }
	inline Type_t ** get_address_of_argumentType_0() { return &___argumentType_0; }
	inline void set_argumentType_0(Type_t * value)
	{
		___argumentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___argumentType_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(CustomAttributeTypedArgument_t1498197914, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1498197914_marshaled_pinvoke
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeTypedArgument
struct CustomAttributeTypedArgument_t1498197914_marshaled_com
{
	Type_t * ___argumentType_0;
	Il2CppIUnknown* ___value_1;
};
#endif // CUSTOMATTRIBUTETYPEDARGUMENT_T1498197914_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1766862959 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1766862959 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1766862959 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1766862959 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef RESOURCECACHEITEM_T333236149_H
#define RESOURCECACHEITEM_T333236149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.ResourceReader/ResourceCacheItem
struct  ResourceCacheItem_t333236149 
{
public:
	// System.String System.Resources.ResourceReader/ResourceCacheItem::ResourceName
	String_t* ___ResourceName_0;
	// System.Object System.Resources.ResourceReader/ResourceCacheItem::ResourceValue
	RuntimeObject * ___ResourceValue_1;

public:
	inline static int32_t get_offset_of_ResourceName_0() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t333236149, ___ResourceName_0)); }
	inline String_t* get_ResourceName_0() const { return ___ResourceName_0; }
	inline String_t** get_address_of_ResourceName_0() { return &___ResourceName_0; }
	inline void set_ResourceName_0(String_t* value)
	{
		___ResourceName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceName_0), value);
	}

	inline static int32_t get_offset_of_ResourceValue_1() { return static_cast<int32_t>(offsetof(ResourceCacheItem_t333236149, ___ResourceValue_1)); }
	inline RuntimeObject * get_ResourceValue_1() const { return ___ResourceValue_1; }
	inline RuntimeObject ** get_address_of_ResourceValue_1() { return &___ResourceValue_1; }
	inline void set_ResourceValue_1(RuntimeObject * value)
	{
		___ResourceValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___ResourceValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t333236149_marshaled_pinvoke
{
	char* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
// Native definition for COM marshalling of System.Resources.ResourceReader/ResourceCacheItem
struct ResourceCacheItem_t333236149_marshaled_com
{
	Il2CppChar* ___ResourceName_0;
	Il2CppIUnknown* ___ResourceValue_1;
};
#endif // RESOURCECACHEITEM_T333236149_H
#ifndef DEFAULT_T3956931304_H
#define DEFAULT_T3956931304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder/Default
struct  Default_t3956931304  : public Binder_t3404612058
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULT_T3956931304_H
#ifndef ASSEMBLYTITLEATTRIBUTE_T92945912_H
#define ASSEMBLYTITLEATTRIBUTE_T92945912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyTitleAttribute
struct  AssemblyTitleAttribute_t92945912  : public Attribute_t542643598
{
public:
	// System.String System.Reflection.AssemblyTitleAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyTitleAttribute_t92945912, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYTITLEATTRIBUTE_T92945912_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#define NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.NeutralResourcesLanguageAttribute
struct  NeutralResourcesLanguageAttribute_t3267676636  : public Attribute_t542643598
{
public:
	// System.String System.Resources.NeutralResourcesLanguageAttribute::culture
	String_t* ___culture_0;

public:
	inline static int32_t get_offset_of_culture_0() { return static_cast<int32_t>(offsetof(NeutralResourcesLanguageAttribute_t3267676636, ___culture_0)); }
	inline String_t* get_culture_0() const { return ___culture_0; }
	inline String_t** get_address_of_culture_0() { return &___culture_0; }
	inline void set_culture_0(String_t* value)
	{
		___culture_0 = value;
		Il2CppCodeGenWriteBarrier((&___culture_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NEUTRALRESOURCESLANGUAGEATTRIBUTE_T3267676636_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef RUNTIMETYPEHANDLE_T2330101084_H
#define RUNTIMETYPEHANDLE_T2330101084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t2330101084 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t2330101084, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T2330101084_H
#ifndef GCHANDLETYPE_T1970708122_H
#define GCHANDLETYPE_T1970708122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t1970708122 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t1970708122, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLETYPE_T1970708122_H
#ifndef EXTERNALEXCEPTION_T1252662682_H
#define EXTERNALEXCEPTION_T1252662682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1252662682  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1252662682_H
#ifndef COMINTERFACETYPE_T1898221498_H
#define COMINTERFACETYPE_T1898221498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComInterfaceType
struct  ComInterfaceType_t1898221498 
{
public:
	// System.Int32 System.Runtime.InteropServices.ComInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ComInterfaceType_t1898221498, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMINTERFACETYPE_T1898221498_H
#ifndef UNMANAGEDTYPE_T2550630890_H
#define UNMANAGEDTYPE_T2550630890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.UnmanagedType
struct  UnmanagedType_t2550630890 
{
public:
	// System.Int32 System.Runtime.InteropServices.UnmanagedType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnmanagedType_t2550630890, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDTYPE_T2550630890_H
#ifndef RUNTIMEFIELDHANDLE_T2331729674_H
#define RUNTIMEFIELDHANDLE_T2331729674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t2331729674 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	IntPtr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t2331729674, ___value_0)); }
	inline IntPtr_t get_value_0() const { return ___value_0; }
	inline IntPtr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(IntPtr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T2331729674_H
#ifndef ASSEMBLYVERSIONCOMPATIBILITY_T1223556284_H
#define ASSEMBLYVERSIONCOMPATIBILITY_T1223556284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyVersionCompatibility
struct  AssemblyVersionCompatibility_t1223556284 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyVersionCompatibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyVersionCompatibility_t1223556284, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYVERSIONCOMPATIBILITY_T1223556284_H
#ifndef ASSEMBLYHASHALGORITHM_T4147282775_H
#define ASSEMBLYHASHALGORITHM_T4147282775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Assemblies.AssemblyHashAlgorithm
struct  AssemblyHashAlgorithm_t4147282775 
{
public:
	// System.Int32 System.Configuration.Assemblies.AssemblyHashAlgorithm::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyHashAlgorithm_t4147282775, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYHASHALGORITHM_T4147282775_H
#ifndef CER_T2101567438_H
#define CER_T2101567438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Cer
struct  Cer_t2101567438 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Cer::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Cer_t2101567438, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CER_T2101567438_H
#ifndef LOADHINT_T3781660191_H
#define LOADHINT_T3781660191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.LoadHint
struct  LoadHint_t3781660191 
{
public:
	// System.Int32 System.Runtime.CompilerServices.LoadHint::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoadHint_t3781660191, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADHINT_T3781660191_H
#ifndef COMPILATIONRELAXATIONS_T4211964247_H
#define COMPILATIONRELAXATIONS_T4211964247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.CompilationRelaxations
struct  CompilationRelaxations_t4211964247 
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxations::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompilationRelaxations_t4211964247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPILATIONRELAXATIONS_T4211964247_H
#ifndef CONSISTENCY_T1390725888_H
#define CONSISTENCY_T1390725888_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.Consistency
struct  Consistency_t1390725888 
{
public:
	// System.Int32 System.Runtime.ConstrainedExecution.Consistency::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Consistency_t1390725888, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSISTENCY_T1390725888_H
#ifndef CLASSINTERFACETYPE_T295178211_H
#define CLASSINTERFACETYPE_T295178211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceType
struct  ClassInterfaceType_t295178211 
{
public:
	// System.Int32 System.Runtime.InteropServices.ClassInterfaceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ClassInterfaceType_t295178211, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACETYPE_T295178211_H
#ifndef CHARSET_T2778376310_H
#define CHARSET_T2778376310_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CharSet
struct  CharSet_t2778376310 
{
public:
	// System.Int32 System.Runtime.InteropServices.CharSet::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CharSet_t2778376310, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARSET_T2778376310_H
#ifndef CALLINGCONVENTION_T3354538265_H
#define CALLINGCONVENTION_T3354538265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.CallingConvention
struct  CallingConvention_t3354538265 
{
public:
	// System.Int32 System.Runtime.InteropServices.CallingConvention::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConvention_t3354538265, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTION_T3354538265_H
#ifndef CALLINGCONVENTIONS_T1097349142_H
#define CALLINGCONVENTIONS_T1097349142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t1097349142 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t1097349142, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLINGCONVENTIONS_T1097349142_H
#ifndef CONSTRUCTORINFO_T2851816542_H
#define CONSTRUCTORINFO_T2851816542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t2851816542  : public MethodBase_t904190842
{
public:

public:
};

struct ConstructorInfo_t2851816542_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2851816542_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t2851816542_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T2851816542_H
#ifndef CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#define CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CustomAttributeNamedArgument
struct  CustomAttributeNamedArgument_t94157543 
{
public:
	// System.Reflection.CustomAttributeTypedArgument System.Reflection.CustomAttributeNamedArgument::typedArgument
	CustomAttributeTypedArgument_t1498197914  ___typedArgument_0;
	// System.Reflection.MemberInfo System.Reflection.CustomAttributeNamedArgument::memberInfo
	MemberInfo_t * ___memberInfo_1;

public:
	inline static int32_t get_offset_of_typedArgument_0() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t94157543, ___typedArgument_0)); }
	inline CustomAttributeTypedArgument_t1498197914  get_typedArgument_0() const { return ___typedArgument_0; }
	inline CustomAttributeTypedArgument_t1498197914 * get_address_of_typedArgument_0() { return &___typedArgument_0; }
	inline void set_typedArgument_0(CustomAttributeTypedArgument_t1498197914  value)
	{
		___typedArgument_0 = value;
	}

	inline static int32_t get_offset_of_memberInfo_1() { return static_cast<int32_t>(offsetof(CustomAttributeNamedArgument_t94157543, ___memberInfo_1)); }
	inline MemberInfo_t * get_memberInfo_1() const { return ___memberInfo_1; }
	inline MemberInfo_t ** get_address_of_memberInfo_1() { return &___memberInfo_1; }
	inline void set_memberInfo_1(MemberInfo_t * value)
	{
		___memberInfo_1 = value;
		Il2CppCodeGenWriteBarrier((&___memberInfo_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t94157543_marshaled_pinvoke
{
	CustomAttributeTypedArgument_t1498197914_marshaled_pinvoke ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
// Native definition for COM marshalling of System.Reflection.CustomAttributeNamedArgument
struct CustomAttributeNamedArgument_t94157543_marshaled_com
{
	CustomAttributeTypedArgument_t1498197914_marshaled_com ___typedArgument_0;
	MemberInfo_t * ___memberInfo_1;
};
#endif // CUSTOMATTRIBUTENAMEDARGUMENT_T94157543_H
#ifndef MEMBERTYPES_T3343038963_H
#define MEMBERTYPES_T3343038963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3343038963 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3343038963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERTYPES_T3343038963_H
#ifndef ASSEMBLYNAMEFLAGS_T1794031440_H
#define ASSEMBLYNAMEFLAGS_T1794031440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyNameFlags
struct  AssemblyNameFlags_t1794031440 
{
public:
	// System.Int32 System.Reflection.AssemblyNameFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AssemblyNameFlags_t1794031440, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAMEFLAGS_T1794031440_H
#ifndef BINDINGFLAGS_T1082350898_H
#define BINDINGFLAGS_T1082350898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t1082350898 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t1082350898, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T1082350898_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t904190842
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef METHODIMPLATTRIBUTES_T1541361196_H
#define METHODIMPLATTRIBUTES_T1541361196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodImplAttributes
struct  MethodImplAttributes_t1541361196 
{
public:
	// System.Int32 System.Reflection.MethodImplAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodImplAttributes_t1541361196, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODIMPLATTRIBUTES_T1541361196_H
#ifndef METHODATTRIBUTES_T790385034_H
#define METHODATTRIBUTES_T790385034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t790385034 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t790385034, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODATTRIBUTES_T790385034_H
#ifndef MONOEVENT_T_H
#define MONOEVENT_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEvent
struct  MonoEvent_t  : public EventInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoEvent::klass
	IntPtr_t ___klass_1;
	// System.IntPtr System.Reflection.MonoEvent::handle
	IntPtr_t ___handle_2;

public:
	inline static int32_t get_offset_of_klass_1() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___klass_1)); }
	inline IntPtr_t get_klass_1() const { return ___klass_1; }
	inline IntPtr_t* get_address_of_klass_1() { return &___klass_1; }
	inline void set_klass_1(IntPtr_t value)
	{
		___klass_1 = value;
	}

	inline static int32_t get_offset_of_handle_2() { return static_cast<int32_t>(offsetof(MonoEvent_t, ___handle_2)); }
	inline IntPtr_t get_handle_2() const { return ___handle_2; }
	inline IntPtr_t* get_address_of_handle_2() { return &___handle_2; }
	inline void set_handle_2(IntPtr_t value)
	{
		___handle_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOEVENT_T_H
#ifndef EVENTATTRIBUTES_T2989788983_H
#define EVENTATTRIBUTES_T2989788983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t2989788983 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t2989788983, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTATTRIBUTES_T2989788983_H
#ifndef FIELDATTRIBUTES_T1122705193_H
#define FIELDATTRIBUTES_T1122705193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t1122705193 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t1122705193, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDATTRIBUTES_T1122705193_H
#ifndef ASSEMBLY_T4268412390_H
#define ASSEMBLY_T4268412390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t4268412390  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	IntPtr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t1761494505 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t1407710183 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t1941658161 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t1941658161 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t1941658161 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t1941658161 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t1941658161 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____mono_assembly_0)); }
	inline IntPtr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline IntPtr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(IntPtr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t1761494505 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t1761494505 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t1761494505 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____evidence_2)); }
	inline Evidence_t1407710183 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t1407710183 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t1407710183 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____minimum_3)); }
	inline PermissionSet_t1941658161 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t1941658161 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t1941658161 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____optional_4)); }
	inline PermissionSet_t1941658161 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t1941658161 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t1941658161 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____refuse_5)); }
	inline PermissionSet_t1941658161 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t1941658161 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t1941658161 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____granted_6)); }
	inline PermissionSet_t1941658161 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t1941658161 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t1941658161 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ____denied_7)); }
	inline PermissionSet_t1941658161 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t1941658161 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t1941658161 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t4268412390, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T4268412390_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef PARAMETERATTRIBUTES_T1266705348_H
#define PARAMETERATTRIBUTES_T1266705348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t1266705348 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ParameterAttributes_t1266705348, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERATTRIBUTES_T1266705348_H
#ifndef PROPERTYATTRIBUTES_T883448530_H
#define PROPERTYATTRIBUTES_T883448530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t883448530 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t883448530, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTES_T883448530_H
#ifndef PREDEFINEDRESOURCETYPE_T3623697780_H
#define PREDEFINEDRESOURCETYPE_T3623697780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.PredefinedResourceType
struct  PredefinedResourceType_t3623697780 
{
public:
	// System.Int32 System.Resources.PredefinedResourceType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PredefinedResourceType_t3623697780, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREDEFINEDRESOURCETYPE_T3623697780_H
#ifndef TYPEATTRIBUTES_T2229518203_H
#define TYPEATTRIBUTES_T2229518203_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t2229518203 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t2229518203, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEATTRIBUTES_T2229518203_H
#ifndef PROCESSORARCHITECTURE_T1620065459_H
#define PROCESSORARCHITECTURE_T1620065459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ProcessorArchitecture
struct  ProcessorArchitecture_t1620065459 
{
public:
	// System.Int32 System.Reflection.ProcessorArchitecture::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProcessorArchitecture_t1620065459, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROCESSORARCHITECTURE_T1620065459_H
#ifndef AMBIGUOUSMATCHEXCEPTION_T1406414556_H
#define AMBIGUOUSMATCHEXCEPTION_T1406414556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AmbiguousMatchException
struct  AmbiguousMatchException_t1406414556  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AMBIGUOUSMATCHEXCEPTION_T1406414556_H
#ifndef PINFO_T957350482_H
#define PINFO_T957350482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PInfo
struct  PInfo_t957350482 
{
public:
	// System.Int32 System.Reflection.PInfo::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PInfo_t957350482, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PINFO_T957350482_H
#ifndef STACKBEHAVIOUR_T1390406961_H
#define STACKBEHAVIOUR_T1390406961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.StackBehaviour
struct  StackBehaviour_t1390406961 
{
public:
	// System.Int32 System.Reflection.Emit.StackBehaviour::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StackBehaviour_t1390406961, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBEHAVIOUR_T1390406961_H
#ifndef ASSEMBLYNAME_T894705941_H
#define ASSEMBLYNAME_T894705941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.AssemblyName
struct  AssemblyName_t894705941  : public RuntimeObject
{
public:
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t3500843524 * ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t4090869089 * ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_t3397334013* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_t3397334013* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_t1755874712 * ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_codebase_1() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___codebase_1)); }
	inline String_t* get_codebase_1() const { return ___codebase_1; }
	inline String_t** get_address_of_codebase_1() { return &___codebase_1; }
	inline void set_codebase_1(String_t* value)
	{
		___codebase_1 = value;
		Il2CppCodeGenWriteBarrier((&___codebase_1), value);
	}

	inline static int32_t get_offset_of_major_2() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___major_2)); }
	inline int32_t get_major_2() const { return ___major_2; }
	inline int32_t* get_address_of_major_2() { return &___major_2; }
	inline void set_major_2(int32_t value)
	{
		___major_2 = value;
	}

	inline static int32_t get_offset_of_minor_3() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___minor_3)); }
	inline int32_t get_minor_3() const { return ___minor_3; }
	inline int32_t* get_address_of_minor_3() { return &___minor_3; }
	inline void set_minor_3(int32_t value)
	{
		___minor_3 = value;
	}

	inline static int32_t get_offset_of_build_4() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___build_4)); }
	inline int32_t get_build_4() const { return ___build_4; }
	inline int32_t* get_address_of_build_4() { return &___build_4; }
	inline void set_build_4(int32_t value)
	{
		___build_4 = value;
	}

	inline static int32_t get_offset_of_revision_5() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___revision_5)); }
	inline int32_t get_revision_5() const { return ___revision_5; }
	inline int32_t* get_address_of_revision_5() { return &___revision_5; }
	inline void set_revision_5(int32_t value)
	{
		___revision_5 = value;
	}

	inline static int32_t get_offset_of_cultureinfo_6() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___cultureinfo_6)); }
	inline CultureInfo_t3500843524 * get_cultureinfo_6() const { return ___cultureinfo_6; }
	inline CultureInfo_t3500843524 ** get_address_of_cultureinfo_6() { return &___cultureinfo_6; }
	inline void set_cultureinfo_6(CultureInfo_t3500843524 * value)
	{
		___cultureinfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___cultureinfo_6), value);
	}

	inline static int32_t get_offset_of_flags_7() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___flags_7)); }
	inline int32_t get_flags_7() const { return ___flags_7; }
	inline int32_t* get_address_of_flags_7() { return &___flags_7; }
	inline void set_flags_7(int32_t value)
	{
		___flags_7 = value;
	}

	inline static int32_t get_offset_of_hashalg_8() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___hashalg_8)); }
	inline int32_t get_hashalg_8() const { return ___hashalg_8; }
	inline int32_t* get_address_of_hashalg_8() { return &___hashalg_8; }
	inline void set_hashalg_8(int32_t value)
	{
		___hashalg_8 = value;
	}

	inline static int32_t get_offset_of_keypair_9() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___keypair_9)); }
	inline StrongNameKeyPair_t4090869089 * get_keypair_9() const { return ___keypair_9; }
	inline StrongNameKeyPair_t4090869089 ** get_address_of_keypair_9() { return &___keypair_9; }
	inline void set_keypair_9(StrongNameKeyPair_t4090869089 * value)
	{
		___keypair_9 = value;
		Il2CppCodeGenWriteBarrier((&___keypair_9), value);
	}

	inline static int32_t get_offset_of_publicKey_10() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___publicKey_10)); }
	inline ByteU5BU5D_t3397334013* get_publicKey_10() const { return ___publicKey_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_publicKey_10() { return &___publicKey_10; }
	inline void set_publicKey_10(ByteU5BU5D_t3397334013* value)
	{
		___publicKey_10 = value;
		Il2CppCodeGenWriteBarrier((&___publicKey_10), value);
	}

	inline static int32_t get_offset_of_keyToken_11() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___keyToken_11)); }
	inline ByteU5BU5D_t3397334013* get_keyToken_11() const { return ___keyToken_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_keyToken_11() { return &___keyToken_11; }
	inline void set_keyToken_11(ByteU5BU5D_t3397334013* value)
	{
		___keyToken_11 = value;
		Il2CppCodeGenWriteBarrier((&___keyToken_11), value);
	}

	inline static int32_t get_offset_of_versioncompat_12() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___versioncompat_12)); }
	inline int32_t get_versioncompat_12() const { return ___versioncompat_12; }
	inline int32_t* get_address_of_versioncompat_12() { return &___versioncompat_12; }
	inline void set_versioncompat_12(int32_t value)
	{
		___versioncompat_12 = value;
	}

	inline static int32_t get_offset_of_version_13() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___version_13)); }
	inline Version_t1755874712 * get_version_13() const { return ___version_13; }
	inline Version_t1755874712 ** get_address_of_version_13() { return &___version_13; }
	inline void set_version_13(Version_t1755874712 * value)
	{
		___version_13 = value;
		Il2CppCodeGenWriteBarrier((&___version_13), value);
	}

	inline static int32_t get_offset_of_processor_architecture_14() { return static_cast<int32_t>(offsetof(AssemblyName_t894705941, ___processor_architecture_14)); }
	inline int32_t get_processor_architecture_14() const { return ___processor_architecture_14; }
	inline int32_t* get_address_of_processor_architecture_14() { return &___processor_architecture_14; }
	inline void set_processor_architecture_14(int32_t value)
	{
		___processor_architecture_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYNAME_T894705941_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t2330101084  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t2330101084  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t2330101084 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t2330101084  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t1664964607* ___EmptyTypes_2;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t3405857066 * ___FilterAttribute_3;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t3405857066 * ___FilterName_4;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t3405857066 * ___FilterNameIgnoreCase_5;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_6;

public:
	inline static int32_t get_offset_of_Delimiter_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_1)); }
	inline Il2CppChar get_Delimiter_1() const { return ___Delimiter_1; }
	inline Il2CppChar* get_address_of_Delimiter_1() { return &___Delimiter_1; }
	inline void set_Delimiter_1(Il2CppChar value)
	{
		___Delimiter_1 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_2)); }
	inline TypeU5BU5D_t1664964607* get_EmptyTypes_2() const { return ___EmptyTypes_2; }
	inline TypeU5BU5D_t1664964607** get_address_of_EmptyTypes_2() { return &___EmptyTypes_2; }
	inline void set_EmptyTypes_2(TypeU5BU5D_t1664964607* value)
	{
		___EmptyTypes_2 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_2), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_3)); }
	inline MemberFilter_t3405857066 * get_FilterAttribute_3() const { return ___FilterAttribute_3; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterAttribute_3() { return &___FilterAttribute_3; }
	inline void set_FilterAttribute_3(MemberFilter_t3405857066 * value)
	{
		___FilterAttribute_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_3), value);
	}

	inline static int32_t get_offset_of_FilterName_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_4)); }
	inline MemberFilter_t3405857066 * get_FilterName_4() const { return ___FilterName_4; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterName_4() { return &___FilterName_4; }
	inline void set_FilterName_4(MemberFilter_t3405857066 * value)
	{
		___FilterName_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_4), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_5)); }
	inline MemberFilter_t3405857066 * get_FilterNameIgnoreCase_5() const { return ___FilterNameIgnoreCase_5; }
	inline MemberFilter_t3405857066 ** get_address_of_FilterNameIgnoreCase_5() { return &___FilterNameIgnoreCase_5; }
	inline void set_FilterNameIgnoreCase_5(MemberFilter_t3405857066 * value)
	{
		___FilterNameIgnoreCase_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_5), value);
	}

	inline static int32_t get_offset_of_Missing_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_6)); }
	inline RuntimeObject * get_Missing_6() const { return ___Missing_6; }
	inline RuntimeObject ** get_address_of_Missing_6() { return &___Missing_6; }
	inline void set_Missing_6(RuntimeObject * value)
	{
		___Missing_6 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef PARAMETERBUILDER_T3344728474_H
#define PARAMETERBUILDER_T3344728474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ParameterBuilder
struct  ParameterBuilder_t3344728474  : public RuntimeObject
{
public:
	// System.String System.Reflection.Emit.ParameterBuilder::name
	String_t* ___name_0;
	// System.Reflection.ParameterAttributes System.Reflection.Emit.ParameterBuilder::attrs
	int32_t ___attrs_1;
	// System.Int32 System.Reflection.Emit.ParameterBuilder::position
	int32_t ___position_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_attrs_1() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___attrs_1)); }
	inline int32_t get_attrs_1() const { return ___attrs_1; }
	inline int32_t* get_address_of_attrs_1() { return &___attrs_1; }
	inline void set_attrs_1(int32_t value)
	{
		___attrs_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ParameterBuilder_t3344728474, ___position_2)); }
	inline int32_t get_position_2() const { return ___position_2; }
	inline int32_t* get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(int32_t value)
	{
		___position_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERBUILDER_T3344728474_H
#ifndef UNMANAGEDMARSHAL_T4270021860_H
#define UNMANAGEDMARSHAL_T4270021860_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.UnmanagedMarshal
struct  UnmanagedMarshal_t4270021860  : public RuntimeObject
{
public:
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::count
	int32_t ___count_0;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::t
	int32_t ___t_1;
	// System.Runtime.InteropServices.UnmanagedType System.Reflection.Emit.UnmanagedMarshal::tbase
	int32_t ___tbase_2;
	// System.String System.Reflection.Emit.UnmanagedMarshal::guid
	String_t* ___guid_3;
	// System.String System.Reflection.Emit.UnmanagedMarshal::mcookie
	String_t* ___mcookie_4;
	// System.String System.Reflection.Emit.UnmanagedMarshal::marshaltype
	String_t* ___marshaltype_5;
	// System.Type System.Reflection.Emit.UnmanagedMarshal::marshaltyperef
	Type_t * ___marshaltyperef_6;
	// System.Int32 System.Reflection.Emit.UnmanagedMarshal::param_num
	int32_t ___param_num_7;
	// System.Boolean System.Reflection.Emit.UnmanagedMarshal::has_size
	bool ___has_size_8;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_t_1() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___t_1)); }
	inline int32_t get_t_1() const { return ___t_1; }
	inline int32_t* get_address_of_t_1() { return &___t_1; }
	inline void set_t_1(int32_t value)
	{
		___t_1 = value;
	}

	inline static int32_t get_offset_of_tbase_2() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___tbase_2)); }
	inline int32_t get_tbase_2() const { return ___tbase_2; }
	inline int32_t* get_address_of_tbase_2() { return &___tbase_2; }
	inline void set_tbase_2(int32_t value)
	{
		___tbase_2 = value;
	}

	inline static int32_t get_offset_of_guid_3() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___guid_3)); }
	inline String_t* get_guid_3() const { return ___guid_3; }
	inline String_t** get_address_of_guid_3() { return &___guid_3; }
	inline void set_guid_3(String_t* value)
	{
		___guid_3 = value;
		Il2CppCodeGenWriteBarrier((&___guid_3), value);
	}

	inline static int32_t get_offset_of_mcookie_4() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___mcookie_4)); }
	inline String_t* get_mcookie_4() const { return ___mcookie_4; }
	inline String_t** get_address_of_mcookie_4() { return &___mcookie_4; }
	inline void set_mcookie_4(String_t* value)
	{
		___mcookie_4 = value;
		Il2CppCodeGenWriteBarrier((&___mcookie_4), value);
	}

	inline static int32_t get_offset_of_marshaltype_5() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___marshaltype_5)); }
	inline String_t* get_marshaltype_5() const { return ___marshaltype_5; }
	inline String_t** get_address_of_marshaltype_5() { return &___marshaltype_5; }
	inline void set_marshaltype_5(String_t* value)
	{
		___marshaltype_5 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltype_5), value);
	}

	inline static int32_t get_offset_of_marshaltyperef_6() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___marshaltyperef_6)); }
	inline Type_t * get_marshaltyperef_6() const { return ___marshaltyperef_6; }
	inline Type_t ** get_address_of_marshaltyperef_6() { return &___marshaltyperef_6; }
	inline void set_marshaltyperef_6(Type_t * value)
	{
		___marshaltyperef_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshaltyperef_6), value);
	}

	inline static int32_t get_offset_of_param_num_7() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___param_num_7)); }
	inline int32_t get_param_num_7() const { return ___param_num_7; }
	inline int32_t* get_address_of_param_num_7() { return &___param_num_7; }
	inline void set_param_num_7(int32_t value)
	{
		___param_num_7 = value;
	}

	inline static int32_t get_offset_of_has_size_8() { return static_cast<int32_t>(offsetof(UnmanagedMarshal_t4270021860, ___has_size_8)); }
	inline bool get_has_size_8() const { return ___has_size_8; }
	inline bool* get_address_of_has_size_8() { return &___has_size_8; }
	inline void set_has_size_8(bool value)
	{
		___has_size_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMANAGEDMARSHAL_T4270021860_H
#ifndef MEMBERINFOSERIALIZATIONHOLDER_T2799051170_H
#define MEMBERINFOSERIALIZATIONHOLDER_T2799051170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfoSerializationHolder
struct  MemberInfoSerializationHolder_t2799051170  : public RuntimeObject
{
public:
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberName
	String_t* ____memberName_0;
	// System.String System.Reflection.MemberInfoSerializationHolder::_memberSignature
	String_t* ____memberSignature_1;
	// System.Reflection.MemberTypes System.Reflection.MemberInfoSerializationHolder::_memberType
	int32_t ____memberType_2;
	// System.Type System.Reflection.MemberInfoSerializationHolder::_reflectedType
	Type_t * ____reflectedType_3;
	// System.Type[] System.Reflection.MemberInfoSerializationHolder::_genericArguments
	TypeU5BU5D_t1664964607* ____genericArguments_4;

public:
	inline static int32_t get_offset_of__memberName_0() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2799051170, ____memberName_0)); }
	inline String_t* get__memberName_0() const { return ____memberName_0; }
	inline String_t** get_address_of__memberName_0() { return &____memberName_0; }
	inline void set__memberName_0(String_t* value)
	{
		____memberName_0 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_0), value);
	}

	inline static int32_t get_offset_of__memberSignature_1() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2799051170, ____memberSignature_1)); }
	inline String_t* get__memberSignature_1() const { return ____memberSignature_1; }
	inline String_t** get_address_of__memberSignature_1() { return &____memberSignature_1; }
	inline void set__memberSignature_1(String_t* value)
	{
		____memberSignature_1 = value;
		Il2CppCodeGenWriteBarrier((&____memberSignature_1), value);
	}

	inline static int32_t get_offset_of__memberType_2() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2799051170, ____memberType_2)); }
	inline int32_t get__memberType_2() const { return ____memberType_2; }
	inline int32_t* get_address_of__memberType_2() { return &____memberType_2; }
	inline void set__memberType_2(int32_t value)
	{
		____memberType_2 = value;
	}

	inline static int32_t get_offset_of__reflectedType_3() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2799051170, ____reflectedType_3)); }
	inline Type_t * get__reflectedType_3() const { return ____reflectedType_3; }
	inline Type_t ** get_address_of__reflectedType_3() { return &____reflectedType_3; }
	inline void set__reflectedType_3(Type_t * value)
	{
		____reflectedType_3 = value;
		Il2CppCodeGenWriteBarrier((&____reflectedType_3), value);
	}

	inline static int32_t get_offset_of__genericArguments_4() { return static_cast<int32_t>(offsetof(MemberInfoSerializationHolder_t2799051170, ____genericArguments_4)); }
	inline TypeU5BU5D_t1664964607* get__genericArguments_4() const { return ____genericArguments_4; }
	inline TypeU5BU5D_t1664964607** get_address_of__genericArguments_4() { return &____genericArguments_4; }
	inline void set__genericArguments_4(TypeU5BU5D_t1664964607* value)
	{
		____genericArguments_4 = value;
		Il2CppCodeGenWriteBarrier((&____genericArguments_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFOSERIALIZATIONHOLDER_T2799051170_H
#ifndef MONOMETHODINFO_T3646562144_H
#define MONOMETHODINFO_T3646562144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethodInfo
struct  MonoMethodInfo_t3646562144 
{
public:
	// System.Type System.Reflection.MonoMethodInfo::parent
	Type_t * ___parent_0;
	// System.Type System.Reflection.MonoMethodInfo::ret
	Type_t * ___ret_1;
	// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::attrs
	int32_t ___attrs_2;
	// System.Reflection.MethodImplAttributes System.Reflection.MonoMethodInfo::iattrs
	int32_t ___iattrs_3;
	// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::callconv
	int32_t ___callconv_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3646562144, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_ret_1() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3646562144, ___ret_1)); }
	inline Type_t * get_ret_1() const { return ___ret_1; }
	inline Type_t ** get_address_of_ret_1() { return &___ret_1; }
	inline void set_ret_1(Type_t * value)
	{
		___ret_1 = value;
		Il2CppCodeGenWriteBarrier((&___ret_1), value);
	}

	inline static int32_t get_offset_of_attrs_2() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3646562144, ___attrs_2)); }
	inline int32_t get_attrs_2() const { return ___attrs_2; }
	inline int32_t* get_address_of_attrs_2() { return &___attrs_2; }
	inline void set_attrs_2(int32_t value)
	{
		___attrs_2 = value;
	}

	inline static int32_t get_offset_of_iattrs_3() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3646562144, ___iattrs_3)); }
	inline int32_t get_iattrs_3() const { return ___iattrs_3; }
	inline int32_t* get_address_of_iattrs_3() { return &___iattrs_3; }
	inline void set_iattrs_3(int32_t value)
	{
		___iattrs_3 = value;
	}

	inline static int32_t get_offset_of_callconv_4() { return static_cast<int32_t>(offsetof(MonoMethodInfo_t3646562144, ___callconv_4)); }
	inline int32_t get_callconv_4() const { return ___callconv_4; }
	inline int32_t* get_address_of_callconv_4() { return &___callconv_4; }
	inline void set_callconv_4(int32_t value)
	{
		___callconv_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3646562144_marshaled_pinvoke
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
// Native definition for COM marshalling of System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t3646562144_marshaled_com
{
	Type_t * ___parent_0;
	Type_t * ___ret_1;
	int32_t ___attrs_2;
	int32_t ___iattrs_3;
	int32_t ___callconv_4;
};
#endif // MONOMETHODINFO_T3646562144_H
#ifndef PARAMETERINFO_T2249040075_H
#define PARAMETERINFO_T2249040075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterInfo
struct  ParameterInfo_t2249040075  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Reflection.Emit.UnmanagedMarshal System.Reflection.ParameterInfo::marshalAs
	UnmanagedMarshal_t4270021860 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((&___ClassImpl_0), value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultValueImpl_1), value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberImpl_2), value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((&___NameImpl_3), value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t2249040075, ___marshalAs_6)); }
	inline UnmanagedMarshal_t4270021860 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline UnmanagedMarshal_t4270021860 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(UnmanagedMarshal_t4270021860 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((&___marshalAs_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARAMETERINFO_T2249040075_H
#ifndef RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
#define RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
struct  ReliabilityContractAttribute_t1625655220  : public Attribute_t542643598
{
public:
	// System.Runtime.ConstrainedExecution.Consistency System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::consistency
	int32_t ___consistency_0;
	// System.Runtime.ConstrainedExecution.Cer System.Runtime.ConstrainedExecution.ReliabilityContractAttribute::cer
	int32_t ___cer_1;

public:
	inline static int32_t get_offset_of_consistency_0() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___consistency_0)); }
	inline int32_t get_consistency_0() const { return ___consistency_0; }
	inline int32_t* get_address_of_consistency_0() { return &___consistency_0; }
	inline void set_consistency_0(int32_t value)
	{
		___consistency_0 = value;
	}

	inline static int32_t get_offset_of_cer_1() { return static_cast<int32_t>(offsetof(ReliabilityContractAttribute_t1625655220, ___cer_1)); }
	inline int32_t get_cer_1() const { return ___cer_1; }
	inline int32_t* get_address_of_cer_1() { return &___cer_1; }
	inline void set_cer_1(int32_t value)
	{
		___cer_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RELIABILITYCONTRACTATTRIBUTE_T1625655220_H
#ifndef MONOMETHOD_T_H
#define MONOMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoMethod
struct  MonoMethod_t  : public MethodInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoMethod::mhandle
	IntPtr_t ___mhandle_0;
	// System.String System.Reflection.MonoMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.MonoMethod::reftype
	Type_t * ___reftype_2;

public:
	inline static int32_t get_offset_of_mhandle_0() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___mhandle_0)); }
	inline IntPtr_t get_mhandle_0() const { return ___mhandle_0; }
	inline IntPtr_t* get_address_of_mhandle_0() { return &___mhandle_0; }
	inline void set_mhandle_0(IntPtr_t value)
	{
		___mhandle_0 = value;
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_reftype_2() { return static_cast<int32_t>(offsetof(MonoMethod_t, ___reftype_2)); }
	inline Type_t * get_reftype_2() const { return ___reftype_2; }
	inline Type_t ** get_address_of_reftype_2() { return &___reftype_2; }
	inline void set_reftype_2(Type_t * value)
	{
		___reftype_2 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOMETHOD_T_H
#ifndef DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#define DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.DefaultDependencyAttribute
struct  DefaultDependencyAttribute_t3858269114  : public Attribute_t542643598
{
public:
	// System.Runtime.CompilerServices.LoadHint System.Runtime.CompilerServices.DefaultDependencyAttribute::hint
	int32_t ___hint_0;

public:
	inline static int32_t get_offset_of_hint_0() { return static_cast<int32_t>(offsetof(DefaultDependencyAttribute_t3858269114, ___hint_0)); }
	inline int32_t get_hint_0() const { return ___hint_0; }
	inline int32_t* get_address_of_hint_0() { return &___hint_0; }
	inline void set_hint_0(int32_t value)
	{
		___hint_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTDEPENDENCYATTRIBUTE_T3858269114_H
#ifndef MONOPROPERTYINFO_T486106184_H
#define MONOPROPERTYINFO_T486106184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoPropertyInfo
struct  MonoPropertyInfo_t486106184 
{
public:
	// System.Type System.Reflection.MonoPropertyInfo::parent
	Type_t * ___parent_0;
	// System.String System.Reflection.MonoPropertyInfo::name
	String_t* ___name_1;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::get_method
	MethodInfo_t * ___get_method_2;
	// System.Reflection.MethodInfo System.Reflection.MonoPropertyInfo::set_method
	MethodInfo_t * ___set_method_3;
	// System.Reflection.PropertyAttributes System.Reflection.MonoPropertyInfo::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t486106184, ___parent_0)); }
	inline Type_t * get_parent_0() const { return ___parent_0; }
	inline Type_t ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(Type_t * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t486106184, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_get_method_2() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t486106184, ___get_method_2)); }
	inline MethodInfo_t * get_get_method_2() const { return ___get_method_2; }
	inline MethodInfo_t ** get_address_of_get_method_2() { return &___get_method_2; }
	inline void set_get_method_2(MethodInfo_t * value)
	{
		___get_method_2 = value;
		Il2CppCodeGenWriteBarrier((&___get_method_2), value);
	}

	inline static int32_t get_offset_of_set_method_3() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t486106184, ___set_method_3)); }
	inline MethodInfo_t * get_set_method_3() const { return ___set_method_3; }
	inline MethodInfo_t ** get_address_of_set_method_3() { return &___set_method_3; }
	inline void set_set_method_3(MethodInfo_t * value)
	{
		___set_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___set_method_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoPropertyInfo_t486106184, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t486106184_marshaled_pinvoke
{
	Type_t * ___parent_0;
	char* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
// Native definition for COM marshalling of System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t486106184_marshaled_com
{
	Type_t * ___parent_0;
	Il2CppChar* ___name_1;
	MethodInfo_t * ___get_method_2;
	MethodInfo_t * ___set_method_3;
	int32_t ___attrs_4;
};
#endif // MONOPROPERTYINFO_T486106184_H
#ifndef MONOCMETHOD_T611352247_H
#define MONOCMETHOD_T611352247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoCMethod
struct  MonoCMethod_t611352247  : public ConstructorInfo_t2851816542
{
public:
	// System.IntPtr System.Reflection.MonoCMethod::mhandle
	IntPtr_t ___mhandle_2;
	// System.String System.Reflection.MonoCMethod::name
	String_t* ___name_3;
	// System.Type System.Reflection.MonoCMethod::reftype
	Type_t * ___reftype_4;

public:
	inline static int32_t get_offset_of_mhandle_2() { return static_cast<int32_t>(offsetof(MonoCMethod_t611352247, ___mhandle_2)); }
	inline IntPtr_t get_mhandle_2() const { return ___mhandle_2; }
	inline IntPtr_t* get_address_of_mhandle_2() { return &___mhandle_2; }
	inline void set_mhandle_2(IntPtr_t value)
	{
		___mhandle_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(MonoCMethod_t611352247, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_reftype_4() { return static_cast<int32_t>(offsetof(MonoCMethod_t611352247, ___reftype_4)); }
	inline Type_t * get_reftype_4() const { return ___reftype_4; }
	inline Type_t ** get_address_of_reftype_4() { return &___reftype_4; }
	inline void set_reftype_4(Type_t * value)
	{
		___reftype_4 = value;
		Il2CppCodeGenWriteBarrier((&___reftype_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCMETHOD_T611352247_H
#ifndef MONOEVENTINFO_T2190036573_H
#define MONOEVENTINFO_T2190036573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoEventInfo
struct  MonoEventInfo_t2190036573 
{
public:
	// System.Type System.Reflection.MonoEventInfo::declaring_type
	Type_t * ___declaring_type_0;
	// System.Type System.Reflection.MonoEventInfo::reflected_type
	Type_t * ___reflected_type_1;
	// System.String System.Reflection.MonoEventInfo::name
	String_t* ___name_2;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::add_method
	MethodInfo_t * ___add_method_3;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::remove_method
	MethodInfo_t * ___remove_method_4;
	// System.Reflection.MethodInfo System.Reflection.MonoEventInfo::raise_method
	MethodInfo_t * ___raise_method_5;
	// System.Reflection.EventAttributes System.Reflection.MonoEventInfo::attrs
	int32_t ___attrs_6;
	// System.Reflection.MethodInfo[] System.Reflection.MonoEventInfo::other_methods
	MethodInfoU5BU5D_t152480188* ___other_methods_7;

public:
	inline static int32_t get_offset_of_declaring_type_0() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___declaring_type_0)); }
	inline Type_t * get_declaring_type_0() const { return ___declaring_type_0; }
	inline Type_t ** get_address_of_declaring_type_0() { return &___declaring_type_0; }
	inline void set_declaring_type_0(Type_t * value)
	{
		___declaring_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___declaring_type_0), value);
	}

	inline static int32_t get_offset_of_reflected_type_1() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___reflected_type_1)); }
	inline Type_t * get_reflected_type_1() const { return ___reflected_type_1; }
	inline Type_t ** get_address_of_reflected_type_1() { return &___reflected_type_1; }
	inline void set_reflected_type_1(Type_t * value)
	{
		___reflected_type_1 = value;
		Il2CppCodeGenWriteBarrier((&___reflected_type_1), value);
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_add_method_3() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___add_method_3)); }
	inline MethodInfo_t * get_add_method_3() const { return ___add_method_3; }
	inline MethodInfo_t ** get_address_of_add_method_3() { return &___add_method_3; }
	inline void set_add_method_3(MethodInfo_t * value)
	{
		___add_method_3 = value;
		Il2CppCodeGenWriteBarrier((&___add_method_3), value);
	}

	inline static int32_t get_offset_of_remove_method_4() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___remove_method_4)); }
	inline MethodInfo_t * get_remove_method_4() const { return ___remove_method_4; }
	inline MethodInfo_t ** get_address_of_remove_method_4() { return &___remove_method_4; }
	inline void set_remove_method_4(MethodInfo_t * value)
	{
		___remove_method_4 = value;
		Il2CppCodeGenWriteBarrier((&___remove_method_4), value);
	}

	inline static int32_t get_offset_of_raise_method_5() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___raise_method_5)); }
	inline MethodInfo_t * get_raise_method_5() const { return ___raise_method_5; }
	inline MethodInfo_t ** get_address_of_raise_method_5() { return &___raise_method_5; }
	inline void set_raise_method_5(MethodInfo_t * value)
	{
		___raise_method_5 = value;
		Il2CppCodeGenWriteBarrier((&___raise_method_5), value);
	}

	inline static int32_t get_offset_of_attrs_6() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___attrs_6)); }
	inline int32_t get_attrs_6() const { return ___attrs_6; }
	inline int32_t* get_address_of_attrs_6() { return &___attrs_6; }
	inline void set_attrs_6(int32_t value)
	{
		___attrs_6 = value;
	}

	inline static int32_t get_offset_of_other_methods_7() { return static_cast<int32_t>(offsetof(MonoEventInfo_t2190036573, ___other_methods_7)); }
	inline MethodInfoU5BU5D_t152480188* get_other_methods_7() const { return ___other_methods_7; }
	inline MethodInfoU5BU5D_t152480188** get_address_of_other_methods_7() { return &___other_methods_7; }
	inline void set_other_methods_7(MethodInfoU5BU5D_t152480188* value)
	{
		___other_methods_7 = value;
		Il2CppCodeGenWriteBarrier((&___other_methods_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t2190036573_marshaled_pinvoke
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	char* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t152480188* ___other_methods_7;
};
// Native definition for COM marshalling of System.Reflection.MonoEventInfo
struct MonoEventInfo_t2190036573_marshaled_com
{
	Type_t * ___declaring_type_0;
	Type_t * ___reflected_type_1;
	Il2CppChar* ___name_2;
	MethodInfo_t * ___add_method_3;
	MethodInfo_t * ___remove_method_4;
	MethodInfo_t * ___raise_method_5;
	int32_t ___attrs_6;
	MethodInfoU5BU5D_t152480188* ___other_methods_7;
};
#endif // MONOEVENTINFO_T2190036573_H
#ifndef MODULE_T4282841206_H
#define MODULE_T4282841206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t4282841206  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	IntPtr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t4268412390 * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t4282841206, ____impl_3)); }
	inline IntPtr_t get__impl_3() const { return ____impl_3; }
	inline IntPtr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(IntPtr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___assembly_4)); }
	inline Assembly_t4268412390 * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t4268412390 ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t4268412390 * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t4282841206, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t4282841206_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2905709404 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2905709404 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t4282841206_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2905709404 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2905709404 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2905709404 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t4282841206_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2905709404 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2905709404 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2905709404 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T4282841206_H
#ifndef MONOFIELD_T_H
#define MONOFIELD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoField
struct  MonoField_t  : public FieldInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoField::klass
	IntPtr_t ___klass_0;
	// System.RuntimeFieldHandle System.Reflection.MonoField::fhandle
	RuntimeFieldHandle_t2331729674  ___fhandle_1;
	// System.String System.Reflection.MonoField::name
	String_t* ___name_2;
	// System.Type System.Reflection.MonoField::type
	Type_t * ___type_3;
	// System.Reflection.FieldAttributes System.Reflection.MonoField::attrs
	int32_t ___attrs_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoField_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_fhandle_1() { return static_cast<int32_t>(offsetof(MonoField_t, ___fhandle_1)); }
	inline RuntimeFieldHandle_t2331729674  get_fhandle_1() const { return ___fhandle_1; }
	inline RuntimeFieldHandle_t2331729674 * get_address_of_fhandle_1() { return &___fhandle_1; }
	inline void set_fhandle_1(RuntimeFieldHandle_t2331729674  value)
	{
		___fhandle_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(MonoField_t, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(MonoField_t, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}

	inline static int32_t get_offset_of_attrs_4() { return static_cast<int32_t>(offsetof(MonoField_t, ___attrs_4)); }
	inline int32_t get_attrs_4() const { return ___attrs_4; }
	inline int32_t* get_address_of_attrs_4() { return &___attrs_4; }
	inline void set_attrs_4(int32_t value)
	{
		___attrs_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOFIELD_T_H
#ifndef CLASSINTERFACEATTRIBUTE_T910653559_H
#define CLASSINTERFACEATTRIBUTE_T910653559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ClassInterfaceAttribute
struct  ClassInterfaceAttribute_t910653559  : public Attribute_t542643598
{
public:
	// System.Runtime.InteropServices.ClassInterfaceType System.Runtime.InteropServices.ClassInterfaceAttribute::ciType
	int32_t ___ciType_0;

public:
	inline static int32_t get_offset_of_ciType_0() { return static_cast<int32_t>(offsetof(ClassInterfaceAttribute_t910653559, ___ciType_0)); }
	inline int32_t get_ciType_0() const { return ___ciType_0; }
	inline int32_t* get_address_of_ciType_0() { return &___ciType_0; }
	inline void set_ciType_0(int32_t value)
	{
		___ciType_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSINTERFACEATTRIBUTE_T910653559_H
#ifndef COMEXCEPTION_T1790481504_H
#define COMEXCEPTION_T1790481504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.COMException
struct  COMException_t1790481504  : public ExternalException_t1252662682
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMEXCEPTION_T1790481504_H
#ifndef MONOPROPERTY_T_H
#define MONOPROPERTY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty
struct  MonoProperty_t  : public PropertyInfo_t
{
public:
	// System.IntPtr System.Reflection.MonoProperty::klass
	IntPtr_t ___klass_0;
	// System.IntPtr System.Reflection.MonoProperty::prop
	IntPtr_t ___prop_1;
	// System.Reflection.MonoPropertyInfo System.Reflection.MonoProperty::info
	MonoPropertyInfo_t486106184  ___info_2;
	// System.Reflection.PInfo System.Reflection.MonoProperty::cached
	int32_t ___cached_3;
	// System.Reflection.MonoProperty/GetterAdapter System.Reflection.MonoProperty::cached_getter
	GetterAdapter_t1423755509 * ___cached_getter_4;

public:
	inline static int32_t get_offset_of_klass_0() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___klass_0)); }
	inline IntPtr_t get_klass_0() const { return ___klass_0; }
	inline IntPtr_t* get_address_of_klass_0() { return &___klass_0; }
	inline void set_klass_0(IntPtr_t value)
	{
		___klass_0 = value;
	}

	inline static int32_t get_offset_of_prop_1() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___prop_1)); }
	inline IntPtr_t get_prop_1() const { return ___prop_1; }
	inline IntPtr_t* get_address_of_prop_1() { return &___prop_1; }
	inline void set_prop_1(IntPtr_t value)
	{
		___prop_1 = value;
	}

	inline static int32_t get_offset_of_info_2() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___info_2)); }
	inline MonoPropertyInfo_t486106184  get_info_2() const { return ___info_2; }
	inline MonoPropertyInfo_t486106184 * get_address_of_info_2() { return &___info_2; }
	inline void set_info_2(MonoPropertyInfo_t486106184  value)
	{
		___info_2 = value;
	}

	inline static int32_t get_offset_of_cached_3() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_3)); }
	inline int32_t get_cached_3() const { return ___cached_3; }
	inline int32_t* get_address_of_cached_3() { return &___cached_3; }
	inline void set_cached_3(int32_t value)
	{
		___cached_3 = value;
	}

	inline static int32_t get_offset_of_cached_getter_4() { return static_cast<int32_t>(offsetof(MonoProperty_t, ___cached_getter_4)); }
	inline GetterAdapter_t1423755509 * get_cached_getter_4() const { return ___cached_getter_4; }
	inline GetterAdapter_t1423755509 ** get_address_of_cached_getter_4() { return &___cached_getter_4; }
	inline void set_cached_getter_4(GetterAdapter_t1423755509 * value)
	{
		___cached_getter_4 = value;
		Il2CppCodeGenWriteBarrier((&___cached_getter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPROPERTY_T_H
#ifndef MONOGENERICCMETHOD_T2923423538_H
#define MONOGENERICCMETHOD_T2923423538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericCMethod
struct  MonoGenericCMethod_t2923423538  : public MonoCMethod_t611352247
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICCMETHOD_T2923423538_H
#ifndef GETTERADAPTER_T1423755509_H
#define GETTERADAPTER_T1423755509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoProperty/GetterAdapter
struct  GetterAdapter_t1423755509  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GETTERADAPTER_T1423755509_H
#ifndef MONOGENERICMETHOD_T_H
#define MONOGENERICMETHOD_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MonoGenericMethod
struct  MonoGenericMethod_t  : public MonoMethod_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOGENERICMETHOD_T_H
#ifndef ADDEVENTADAPTER_T1766862959_H
#define ADDEVENTADAPTER_T1766862959_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo/AddEventAdapter
struct  AddEventAdapter_t1766862959  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDEVENTADAPTER_T1766862959_H
#ifndef TYPEBUILDER_T3308873219_H
#define TYPEBUILDER_T3308873219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t3308873219  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_7;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_8;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_9;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_10;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t1664964607* ___interfaces_11;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_12;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t4238041457* ___methods_13;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t775814140* ___ctors_14;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t867683112* ___fields_15;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_16;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t4156028127 * ___pmodule_17;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t358971386* ___generic_params_18;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_19;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_20;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_21;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_22;

public:
	inline static int32_t get_offset_of_tname_7() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___tname_7)); }
	inline String_t* get_tname_7() const { return ___tname_7; }
	inline String_t** get_address_of_tname_7() { return &___tname_7; }
	inline void set_tname_7(String_t* value)
	{
		___tname_7 = value;
		Il2CppCodeGenWriteBarrier((&___tname_7), value);
	}

	inline static int32_t get_offset_of_nspace_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___nspace_8)); }
	inline String_t* get_nspace_8() const { return ___nspace_8; }
	inline String_t** get_address_of_nspace_8() { return &___nspace_8; }
	inline void set_nspace_8(String_t* value)
	{
		___nspace_8 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_8), value);
	}

	inline static int32_t get_offset_of_parent_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___parent_9)); }
	inline Type_t * get_parent_9() const { return ___parent_9; }
	inline Type_t ** get_address_of_parent_9() { return &___parent_9; }
	inline void set_parent_9(Type_t * value)
	{
		___parent_9 = value;
		Il2CppCodeGenWriteBarrier((&___parent_9), value);
	}

	inline static int32_t get_offset_of_nesting_type_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___nesting_type_10)); }
	inline Type_t * get_nesting_type_10() const { return ___nesting_type_10; }
	inline Type_t ** get_address_of_nesting_type_10() { return &___nesting_type_10; }
	inline void set_nesting_type_10(Type_t * value)
	{
		___nesting_type_10 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_10), value);
	}

	inline static int32_t get_offset_of_interfaces_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___interfaces_11)); }
	inline TypeU5BU5D_t1664964607* get_interfaces_11() const { return ___interfaces_11; }
	inline TypeU5BU5D_t1664964607** get_address_of_interfaces_11() { return &___interfaces_11; }
	inline void set_interfaces_11(TypeU5BU5D_t1664964607* value)
	{
		___interfaces_11 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_11), value);
	}

	inline static int32_t get_offset_of_num_methods_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___num_methods_12)); }
	inline int32_t get_num_methods_12() const { return ___num_methods_12; }
	inline int32_t* get_address_of_num_methods_12() { return &___num_methods_12; }
	inline void set_num_methods_12(int32_t value)
	{
		___num_methods_12 = value;
	}

	inline static int32_t get_offset_of_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___methods_13)); }
	inline MethodBuilderU5BU5D_t4238041457* get_methods_13() const { return ___methods_13; }
	inline MethodBuilderU5BU5D_t4238041457** get_address_of_methods_13() { return &___methods_13; }
	inline void set_methods_13(MethodBuilderU5BU5D_t4238041457* value)
	{
		___methods_13 = value;
		Il2CppCodeGenWriteBarrier((&___methods_13), value);
	}

	inline static int32_t get_offset_of_ctors_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___ctors_14)); }
	inline ConstructorBuilderU5BU5D_t775814140* get_ctors_14() const { return ___ctors_14; }
	inline ConstructorBuilderU5BU5D_t775814140** get_address_of_ctors_14() { return &___ctors_14; }
	inline void set_ctors_14(ConstructorBuilderU5BU5D_t775814140* value)
	{
		___ctors_14 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_14), value);
	}

	inline static int32_t get_offset_of_fields_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___fields_15)); }
	inline FieldBuilderU5BU5D_t867683112* get_fields_15() const { return ___fields_15; }
	inline FieldBuilderU5BU5D_t867683112** get_address_of_fields_15() { return &___fields_15; }
	inline void set_fields_15(FieldBuilderU5BU5D_t867683112* value)
	{
		___fields_15 = value;
		Il2CppCodeGenWriteBarrier((&___fields_15), value);
	}

	inline static int32_t get_offset_of_attrs_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___attrs_16)); }
	inline int32_t get_attrs_16() const { return ___attrs_16; }
	inline int32_t* get_address_of_attrs_16() { return &___attrs_16; }
	inline void set_attrs_16(int32_t value)
	{
		___attrs_16 = value;
	}

	inline static int32_t get_offset_of_pmodule_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___pmodule_17)); }
	inline ModuleBuilder_t4156028127 * get_pmodule_17() const { return ___pmodule_17; }
	inline ModuleBuilder_t4156028127 ** get_address_of_pmodule_17() { return &___pmodule_17; }
	inline void set_pmodule_17(ModuleBuilder_t4156028127 * value)
	{
		___pmodule_17 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_17), value);
	}

	inline static int32_t get_offset_of_generic_params_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___generic_params_18)); }
	inline GenericTypeParameterBuilderU5BU5D_t358971386* get_generic_params_18() const { return ___generic_params_18; }
	inline GenericTypeParameterBuilderU5BU5D_t358971386** get_address_of_generic_params_18() { return &___generic_params_18; }
	inline void set_generic_params_18(GenericTypeParameterBuilderU5BU5D_t358971386* value)
	{
		___generic_params_18 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_18), value);
	}

	inline static int32_t get_offset_of_created_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___created_19)); }
	inline Type_t * get_created_19() const { return ___created_19; }
	inline Type_t ** get_address_of_created_19() { return &___created_19; }
	inline void set_created_19(Type_t * value)
	{
		___created_19 = value;
		Il2CppCodeGenWriteBarrier((&___created_19), value);
	}

	inline static int32_t get_offset_of_fullname_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___fullname_20)); }
	inline String_t* get_fullname_20() const { return ___fullname_20; }
	inline String_t** get_address_of_fullname_20() { return &___fullname_20; }
	inline void set_fullname_20(String_t* value)
	{
		___fullname_20 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_20), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___createTypeCalled_21)); }
	inline bool get_createTypeCalled_21() const { return ___createTypeCalled_21; }
	inline bool* get_address_of_createTypeCalled_21() { return &___createTypeCalled_21; }
	inline void set_createTypeCalled_21(bool value)
	{
		___createTypeCalled_21 = value;
	}

	inline static int32_t get_offset_of_underlying_type_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t3308873219, ___underlying_type_22)); }
	inline Type_t * get_underlying_type_22() const { return ___underlying_type_22; }
	inline Type_t ** get_address_of_underlying_type_22() { return &___underlying_type_22; }
	inline void set_underlying_type_22(Type_t * value)
	{
		___underlying_type_22 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T3308873219_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize300 = { sizeof (ParameterBuilder_t3344728474), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable300[3] = 
{
	ParameterBuilder_t3344728474::get_offset_of_name_0(),
	ParameterBuilder_t3344728474::get_offset_of_attrs_1(),
	ParameterBuilder_t3344728474::get_offset_of_position_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize301 = { sizeof (StackBehaviour_t1390406961)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable301[30] = 
{
	StackBehaviour_t1390406961::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize302 = { sizeof (TypeBuilder_t3308873219), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable302[16] = 
{
	TypeBuilder_t3308873219::get_offset_of_tname_7(),
	TypeBuilder_t3308873219::get_offset_of_nspace_8(),
	TypeBuilder_t3308873219::get_offset_of_parent_9(),
	TypeBuilder_t3308873219::get_offset_of_nesting_type_10(),
	TypeBuilder_t3308873219::get_offset_of_interfaces_11(),
	TypeBuilder_t3308873219::get_offset_of_num_methods_12(),
	TypeBuilder_t3308873219::get_offset_of_methods_13(),
	TypeBuilder_t3308873219::get_offset_of_ctors_14(),
	TypeBuilder_t3308873219::get_offset_of_fields_15(),
	TypeBuilder_t3308873219::get_offset_of_attrs_16(),
	TypeBuilder_t3308873219::get_offset_of_pmodule_17(),
	TypeBuilder_t3308873219::get_offset_of_generic_params_18(),
	TypeBuilder_t3308873219::get_offset_of_created_19(),
	TypeBuilder_t3308873219::get_offset_of_fullname_20(),
	TypeBuilder_t3308873219::get_offset_of_createTypeCalled_21(),
	TypeBuilder_t3308873219::get_offset_of_underlying_type_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize303 = { sizeof (UnmanagedMarshal_t4270021860), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable303[9] = 
{
	UnmanagedMarshal_t4270021860::get_offset_of_count_0(),
	UnmanagedMarshal_t4270021860::get_offset_of_t_1(),
	UnmanagedMarshal_t4270021860::get_offset_of_tbase_2(),
	UnmanagedMarshal_t4270021860::get_offset_of_guid_3(),
	UnmanagedMarshal_t4270021860::get_offset_of_mcookie_4(),
	UnmanagedMarshal_t4270021860::get_offset_of_marshaltype_5(),
	UnmanagedMarshal_t4270021860::get_offset_of_marshaltyperef_6(),
	UnmanagedMarshal_t4270021860::get_offset_of_param_num_7(),
	UnmanagedMarshal_t4270021860::get_offset_of_has_size_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize304 = { sizeof (AmbiguousMatchException_t1406414556), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize305 = { sizeof (Assembly_t4268412390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable305[10] = 
{
	Assembly_t4268412390::get_offset_of__mono_assembly_0(),
	Assembly_t4268412390::get_offset_of_resolve_event_holder_1(),
	Assembly_t4268412390::get_offset_of__evidence_2(),
	Assembly_t4268412390::get_offset_of__minimum_3(),
	Assembly_t4268412390::get_offset_of__optional_4(),
	Assembly_t4268412390::get_offset_of__refuse_5(),
	Assembly_t4268412390::get_offset_of__granted_6(),
	Assembly_t4268412390::get_offset_of__denied_7(),
	Assembly_t4268412390::get_offset_of_fromByteArray_8(),
	Assembly_t4268412390::get_offset_of_assemblyName_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize306 = { sizeof (ResolveEventHolder_t1761494505), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize307 = { sizeof (AssemblyCompanyAttribute_t2851673381), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable307[1] = 
{
	AssemblyCompanyAttribute_t2851673381::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize308 = { sizeof (AssemblyCopyrightAttribute_t177123295), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable308[1] = 
{
	AssemblyCopyrightAttribute_t177123295::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize309 = { sizeof (AssemblyDefaultAliasAttribute_t1774139159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable309[1] = 
{
	AssemblyDefaultAliasAttribute_t1774139159::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize310 = { sizeof (AssemblyDelaySignAttribute_t2705758496), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable310[1] = 
{
	AssemblyDelaySignAttribute_t2705758496::get_offset_of_delay_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize311 = { sizeof (AssemblyDescriptionAttribute_t1018387888), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable311[1] = 
{
	AssemblyDescriptionAttribute_t1018387888::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize312 = { sizeof (AssemblyFileVersionAttribute_t2897687916), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable312[1] = 
{
	AssemblyFileVersionAttribute_t2897687916::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize313 = { sizeof (AssemblyInformationalVersionAttribute_t3037389657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable313[1] = 
{
	AssemblyInformationalVersionAttribute_t3037389657::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize314 = { sizeof (AssemblyKeyFileAttribute_t605245443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable314[1] = 
{
	AssemblyKeyFileAttribute_t605245443::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize315 = { sizeof (AssemblyName_t894705941), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable315[15] = 
{
	AssemblyName_t894705941::get_offset_of_name_0(),
	AssemblyName_t894705941::get_offset_of_codebase_1(),
	AssemblyName_t894705941::get_offset_of_major_2(),
	AssemblyName_t894705941::get_offset_of_minor_3(),
	AssemblyName_t894705941::get_offset_of_build_4(),
	AssemblyName_t894705941::get_offset_of_revision_5(),
	AssemblyName_t894705941::get_offset_of_cultureinfo_6(),
	AssemblyName_t894705941::get_offset_of_flags_7(),
	AssemblyName_t894705941::get_offset_of_hashalg_8(),
	AssemblyName_t894705941::get_offset_of_keypair_9(),
	AssemblyName_t894705941::get_offset_of_publicKey_10(),
	AssemblyName_t894705941::get_offset_of_keyToken_11(),
	AssemblyName_t894705941::get_offset_of_versioncompat_12(),
	AssemblyName_t894705941::get_offset_of_version_13(),
	AssemblyName_t894705941::get_offset_of_processor_architecture_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize316 = { sizeof (AssemblyNameFlags_t1794031440)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable316[6] = 
{
	AssemblyNameFlags_t1794031440::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize317 = { sizeof (AssemblyProductAttribute_t1523443169), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable317[1] = 
{
	AssemblyProductAttribute_t1523443169::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize318 = { sizeof (AssemblyTitleAttribute_t92945912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable318[1] = 
{
	AssemblyTitleAttribute_t92945912::get_offset_of_name_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize319 = { sizeof (Binder_t3404612058), -1, sizeof(Binder_t3404612058_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable319[1] = 
{
	Binder_t3404612058_StaticFields::get_offset_of_default_binder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize320 = { sizeof (Default_t3956931304), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize321 = { sizeof (BindingFlags_t1082350898)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable321[21] = 
{
	BindingFlags_t1082350898::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize322 = { sizeof (CallingConventions_t1097349142)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable322[6] = 
{
	CallingConventions_t1097349142::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize323 = { sizeof (ConstructorInfo_t2851816542), -1, sizeof(ConstructorInfo_t2851816542_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable323[2] = 
{
	ConstructorInfo_t2851816542_StaticFields::get_offset_of_ConstructorName_0(),
	ConstructorInfo_t2851816542_StaticFields::get_offset_of_TypeConstructorName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize324 = { sizeof (CustomAttributeData_t3093286891), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable324[3] = 
{
	CustomAttributeData_t3093286891::get_offset_of_ctorInfo_0(),
	CustomAttributeData_t3093286891::get_offset_of_ctorArgs_1(),
	CustomAttributeData_t3093286891::get_offset_of_namedArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize325 = { sizeof (CustomAttributeNamedArgument_t94157543)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable325[2] = 
{
	CustomAttributeNamedArgument_t94157543::get_offset_of_typedArgument_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeNamedArgument_t94157543::get_offset_of_memberInfo_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize326 = { sizeof (CustomAttributeTypedArgument_t1498197914)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable326[2] = 
{
	CustomAttributeTypedArgument_t1498197914::get_offset_of_argumentType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CustomAttributeTypedArgument_t1498197914::get_offset_of_value_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize327 = { sizeof (EventAttributes_t2989788983)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable327[5] = 
{
	EventAttributes_t2989788983::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize328 = { sizeof (EventInfo_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable328[1] = 
{
	EventInfo_t::get_offset_of_cached_add_event_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize329 = { sizeof (AddEventAdapter_t1766862959), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize330 = { sizeof (FieldAttributes_t1122705193)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable330[20] = 
{
	FieldAttributes_t1122705193::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize331 = { sizeof (FieldInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize332 = { sizeof (MemberInfoSerializationHolder_t2799051170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable332[5] = 
{
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberName_0(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberSignature_1(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__memberType_2(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__reflectedType_3(),
	MemberInfoSerializationHolder_t2799051170::get_offset_of__genericArguments_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize333 = { sizeof (MemberTypes_t3343038963)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable333[10] = 
{
	MemberTypes_t3343038963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize334 = { sizeof (MethodAttributes_t790385034)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable334[25] = 
{
	MethodAttributes_t790385034::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize335 = { sizeof (MethodBase_t904190842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize336 = { sizeof (MethodImplAttributes_t1541361196)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable336[15] = 
{
	MethodImplAttributes_t1541361196::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize337 = { sizeof (MethodInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize338 = { sizeof (Missing_t1033855606), -1, sizeof(Missing_t1033855606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable338[1] = 
{
	Missing_t1033855606_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize339 = { sizeof (Module_t4282841206), -1, sizeof(Module_t4282841206_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable339[10] = 
{
	0,
	Module_t4282841206_StaticFields::get_offset_of_FilterTypeName_1(),
	Module_t4282841206_StaticFields::get_offset_of_FilterTypeNameIgnoreCase_2(),
	Module_t4282841206::get_offset_of__impl_3(),
	Module_t4282841206::get_offset_of_assembly_4(),
	Module_t4282841206::get_offset_of_fqname_5(),
	Module_t4282841206::get_offset_of_name_6(),
	Module_t4282841206::get_offset_of_scopename_7(),
	Module_t4282841206::get_offset_of_is_resource_8(),
	Module_t4282841206::get_offset_of_token_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize340 = { sizeof (MonoEventInfo_t2190036573)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable340[8] = 
{
	MonoEventInfo_t2190036573::get_offset_of_declaring_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_reflected_type_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_name_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_add_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_remove_method_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_raise_method_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_attrs_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEventInfo_t2190036573::get_offset_of_other_methods_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize341 = { sizeof (MonoEvent_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable341[2] = 
{
	MonoEvent_t::get_offset_of_klass_1(),
	MonoEvent_t::get_offset_of_handle_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize342 = { sizeof (MonoField_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable342[5] = 
{
	MonoField_t::get_offset_of_klass_0(),
	MonoField_t::get_offset_of_fhandle_1(),
	MonoField_t::get_offset_of_name_2(),
	MonoField_t::get_offset_of_type_3(),
	MonoField_t::get_offset_of_attrs_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize343 = { sizeof (MonoGenericMethod_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize344 = { sizeof (MonoGenericCMethod_t2923423538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize345 = { sizeof (MonoMethodInfo_t3646562144)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable345[5] = 
{
	MonoMethodInfo_t3646562144::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3646562144::get_offset_of_ret_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3646562144::get_offset_of_attrs_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3646562144::get_offset_of_iattrs_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoMethodInfo_t3646562144::get_offset_of_callconv_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize346 = { sizeof (MonoMethod_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable346[3] = 
{
	MonoMethod_t::get_offset_of_mhandle_0(),
	MonoMethod_t::get_offset_of_name_1(),
	MonoMethod_t::get_offset_of_reftype_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize347 = { sizeof (MonoCMethod_t611352247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable347[3] = 
{
	MonoCMethod_t611352247::get_offset_of_mhandle_2(),
	MonoCMethod_t611352247::get_offset_of_name_3(),
	MonoCMethod_t611352247::get_offset_of_reftype_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize348 = { sizeof (MonoPropertyInfo_t486106184)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable348[5] = 
{
	MonoPropertyInfo_t486106184::get_offset_of_parent_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t486106184::get_offset_of_name_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t486106184::get_offset_of_get_method_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t486106184::get_offset_of_set_method_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoPropertyInfo_t486106184::get_offset_of_attrs_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize349 = { sizeof (PInfo_t957350482)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable349[7] = 
{
	PInfo_t957350482::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize350 = { sizeof (MonoProperty_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable350[5] = 
{
	MonoProperty_t::get_offset_of_klass_0(),
	MonoProperty_t::get_offset_of_prop_1(),
	MonoProperty_t::get_offset_of_info_2(),
	MonoProperty_t::get_offset_of_cached_3(),
	MonoProperty_t::get_offset_of_cached_getter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize351 = { sizeof (GetterAdapter_t1423755509), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize352 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize353 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize354 = { sizeof (ParameterAttributes_t1266705348)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable354[12] = 
{
	ParameterAttributes_t1266705348::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize355 = { sizeof (ParameterInfo_t2249040075), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable355[7] = 
{
	ParameterInfo_t2249040075::get_offset_of_ClassImpl_0(),
	ParameterInfo_t2249040075::get_offset_of_DefaultValueImpl_1(),
	ParameterInfo_t2249040075::get_offset_of_MemberImpl_2(),
	ParameterInfo_t2249040075::get_offset_of_NameImpl_3(),
	ParameterInfo_t2249040075::get_offset_of_PositionImpl_4(),
	ParameterInfo_t2249040075::get_offset_of_AttrsImpl_5(),
	ParameterInfo_t2249040075::get_offset_of_marshalAs_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize356 = { sizeof (ParameterModifier_t1820634920)+ sizeof (RuntimeObject), sizeof(ParameterModifier_t1820634920_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable356[1] = 
{
	ParameterModifier_t1820634920::get_offset_of__byref_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize357 = { sizeof (Pointer_t937075087), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable357[2] = 
{
	Pointer_t937075087::get_offset_of_data_0(),
	Pointer_t937075087::get_offset_of_type_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize358 = { sizeof (ProcessorArchitecture_t1620065459)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable358[6] = 
{
	ProcessorArchitecture_t1620065459::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize359 = { sizeof (PropertyAttributes_t883448530)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable359[9] = 
{
	PropertyAttributes_t883448530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize360 = { sizeof (PropertyInfo_t), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize361 = { sizeof (StrongNameKeyPair_t4090869089), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable361[4] = 
{
	StrongNameKeyPair_t4090869089::get_offset_of__publicKey_0(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairContainer_1(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairExported_2(),
	StrongNameKeyPair_t4090869089::get_offset_of__keyPairArray_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize362 = { sizeof (TargetException_t1572104820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize363 = { sizeof (TargetInvocationException_t4098620458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize364 = { sizeof (TargetParameterCountException_t1554451430), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize365 = { sizeof (TypeAttributes_t2229518203)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable365[32] = 
{
	TypeAttributes_t2229518203::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize366 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize367 = { sizeof (NeutralResourcesLanguageAttribute_t3267676636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable367[1] = 
{
	NeutralResourcesLanguageAttribute_t3267676636::get_offset_of_culture_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize368 = { sizeof (ResourceManager_t264715885), -1, sizeof(ResourceManager_t264715885_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable368[5] = 
{
	ResourceManager_t264715885_StaticFields::get_offset_of_ResourceCache_0(),
	ResourceManager_t264715885_StaticFields::get_offset_of_NonExistent_1(),
	ResourceManager_t264715885_StaticFields::get_offset_of_HeaderVersionNumber_2(),
	ResourceManager_t264715885_StaticFields::get_offset_of_MagicNumber_3(),
	ResourceManager_t264715885::get_offset_of_resourceSetType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize369 = { sizeof (PredefinedResourceType_t3623697780)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable369[21] = 
{
	PredefinedResourceType_t3623697780::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize370 = { sizeof (ResourceReader_t2463923611), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable370[13] = 
{
	ResourceReader_t2463923611::get_offset_of_reader_0(),
	ResourceReader_t2463923611::get_offset_of_readerLock_1(),
	ResourceReader_t2463923611::get_offset_of_formatter_2(),
	ResourceReader_t2463923611::get_offset_of_resourceCount_3(),
	ResourceReader_t2463923611::get_offset_of_typeCount_4(),
	ResourceReader_t2463923611::get_offset_of_typeNames_5(),
	ResourceReader_t2463923611::get_offset_of_hashes_6(),
	ResourceReader_t2463923611::get_offset_of_infos_7(),
	ResourceReader_t2463923611::get_offset_of_dataSectionOffset_8(),
	ResourceReader_t2463923611::get_offset_of_nameSectionOffset_9(),
	ResourceReader_t2463923611::get_offset_of_resource_ver_10(),
	ResourceReader_t2463923611::get_offset_of_cache_11(),
	ResourceReader_t2463923611::get_offset_of_cache_lock_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize371 = { sizeof (ResourceInfo_t3933049236)+ sizeof (RuntimeObject), sizeof(ResourceInfo_t3933049236_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable371[3] = 
{
	ResourceInfo_t3933049236::get_offset_of_ValuePosition_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t3933049236::get_offset_of_ResourceName_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceInfo_t3933049236::get_offset_of_TypeIndex_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize372 = { sizeof (ResourceCacheItem_t333236149)+ sizeof (RuntimeObject), sizeof(ResourceCacheItem_t333236149_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable372[2] = 
{
	ResourceCacheItem_t333236149::get_offset_of_ResourceName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ResourceCacheItem_t333236149::get_offset_of_ResourceValue_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize373 = { sizeof (ResourceEnumerator_t2665690338), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable373[3] = 
{
	ResourceEnumerator_t2665690338::get_offset_of_reader_0(),
	ResourceEnumerator_t2665690338::get_offset_of_index_1(),
	ResourceEnumerator_t2665690338::get_offset_of_finished_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize374 = { sizeof (ResourceSet_t1348327650), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable374[4] = 
{
	ResourceSet_t1348327650::get_offset_of_Reader_0(),
	ResourceSet_t1348327650::get_offset_of_Table_1(),
	ResourceSet_t1348327650::get_offset_of_resources_read_2(),
	ResourceSet_t1348327650::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize375 = { sizeof (RuntimeResourceSet_t1442459318), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize376 = { sizeof (SatelliteContractVersionAttribute_t2989984391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable376[1] = 
{
	SatelliteContractVersionAttribute_t2989984391::get_offset_of_ver_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize377 = { sizeof (CompilationRelaxations_t4211964247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable377[2] = 
{
	CompilationRelaxations_t4211964247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize378 = { sizeof (CompilationRelaxationsAttribute_t238494011), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable378[1] = 
{
	CompilationRelaxationsAttribute_t238494011::get_offset_of_relax_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize379 = { sizeof (DefaultDependencyAttribute_t3858269114), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable379[1] = 
{
	DefaultDependencyAttribute_t3858269114::get_offset_of_hint_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize380 = { sizeof (IsVolatile_t700755342), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize381 = { sizeof (LoadHint_t3781660191)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable381[4] = 
{
	LoadHint_t3781660191::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize382 = { sizeof (StringFreezingAttribute_t2691375565), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize383 = { sizeof (Cer_t2101567438)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable383[4] = 
{
	Cer_t2101567438::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize384 = { sizeof (Consistency_t1390725888)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable384[5] = 
{
	Consistency_t1390725888::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize385 = { sizeof (CriticalFinalizerObject_t1920899984), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize386 = { sizeof (ReliabilityContractAttribute_t1625655220), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable386[2] = 
{
	ReliabilityContractAttribute_t1625655220::get_offset_of_consistency_0(),
	ReliabilityContractAttribute_t1625655220::get_offset_of_cer_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize387 = { sizeof (ActivationArguments_t640021366), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize388 = { sizeof (COMException_t1790481504), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize389 = { sizeof (CallingConvention_t3354538265)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable389[6] = 
{
	CallingConvention_t3354538265::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize390 = { sizeof (CharSet_t2778376310)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable390[5] = 
{
	CharSet_t2778376310::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize391 = { sizeof (ClassInterfaceAttribute_t910653559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable391[1] = 
{
	ClassInterfaceAttribute_t910653559::get_offset_of_ciType_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize392 = { sizeof (ClassInterfaceType_t295178211)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable392[4] = 
{
	ClassInterfaceType_t295178211::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize393 = { sizeof (ComDefaultInterfaceAttribute_t347642415), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable393[1] = 
{
	ComDefaultInterfaceAttribute_t347642415::get_offset_of__type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize394 = { sizeof (ComInterfaceType_t1898221498)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable394[4] = 
{
	ComInterfaceType_t1898221498::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize395 = { sizeof (DispIdAttribute_t607560947), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable395[1] = 
{
	DispIdAttribute_t607560947::get_offset_of_id_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize396 = { sizeof (ErrorWrapper_t2775489663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable396[1] = 
{
	ErrorWrapper_t2775489663::get_offset_of_errorCode_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize397 = { sizeof (ExternalException_t1252662682), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize398 = { sizeof (GCHandle_t3409268066)+ sizeof (RuntimeObject), sizeof(GCHandle_t3409268066 ), 0, 0 };
extern const int32_t g_FieldOffsetTable398[1] = 
{
	GCHandle_t3409268066::get_offset_of_handle_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize399 = { sizeof (GCHandleType_t1970708122)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable399[5] = 
{
	GCHandleType_t1970708122::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

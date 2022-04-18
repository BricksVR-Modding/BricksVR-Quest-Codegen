// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ReadObjectInfo
  class ReadObjectInfo;
  // Forward declaring type: ObjectReader
  class ObjectReader;
  // Forward declaring type: BinaryAssemblyInfo
  class BinaryAssemblyInfo;
  // Forward declaring type: SizedArray
  class SizedArray;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: ObjectMap
  class ObjectMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::ObjectMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::ObjectMap*, "System.Runtime.Serialization.Formatters.Binary", "ObjectMap");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.ObjectMap
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectMap : public ::Il2CppObject {
    public:
    public:
    // System.String objectName
    // Size: 0x8
    // Offset: 0x10
    ::StringW objectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Type objectType
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* objectType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>) == 0x8);
    // System.Object[] typeInformationA
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::Il2CppObject*> typeInformationA;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Type*> memberTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> memberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo
    // Size: 0x8
    // Offset: 0x40
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* objectInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*) == 0x8);
    // System.Boolean isInitObjectInfo
    // Size: 0x1
    // Offset: 0x48
    bool isInitObjectInfo;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isInitObjectInfo and: objectReader
    char __padding7[0x7] = {};
    // System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader
    // Size: 0x8
    // Offset: 0x50
    ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::ObjectReader*) == 0x8);
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x58
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: objectId and: assemblyInfo
    char __padding9[0x4] = {};
    // System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo
    // Size: 0x8
    // Offset: 0x60
    ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*) == 0x8);
    public:
    // Get instance field reference: System.String objectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_objectName();
    // Get instance field reference: System.Type objectType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_objectType();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>& dyn_binaryTypeEnumA();
    // Get instance field reference: System.Object[] typeInformationA
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_typeInformationA();
    // Get instance field reference: System.Type[] memberTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_memberTypes();
    // Get instance field reference: System.String[] memberNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_memberNames();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo objectInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo*& dyn_objectInfo();
    // Get instance field reference: System.Boolean isInitObjectInfo
    [[deprecated("Use field access instead!")]] bool& dyn_isInitObjectInfo();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*& dyn_objectReader();
    // Get instance field reference: System.Int32 objectId
    [[deprecated("Use field access instead!")]] int& dyn_objectId();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*& dyn_assemblyInfo();
    // System.Void .ctor(System.String objectName, System.Type objectType, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
    // Offset: 0x447AB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectMap* New_ctor(::StringW objectName, ::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ObjectMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectMap*, creationType>(objectName, objectType, memberNames, objectReader, objectId, assemblyInfo)));
    }
    // System.Void .ctor(System.String objectName, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
    // Offset: 0x4475C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectMap* New_ctor(::StringW objectName, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::Il2CppObject*> typeInformationA, ::ArrayW<int> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::ObjectMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectMap*, creationType>(objectName, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable)));
    }
    // System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo CreateObjectInfo(ref System.Runtime.Serialization.SerializationInfo si, ref System.Object[] memberData)
    // Offset: 0x447400
    ::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* CreateObjectInfo(ByRef<::System::Runtime::Serialization::SerializationInfo*> si, ByRef<::ArrayW<::Il2CppObject*>> memberData);
    // static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(System.String name, System.Type objectType, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo)
    // Offset: 0x447450
    static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::StringW name, ::System::Type* objectType, ::ArrayW<::StringW> memberNames, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo);
    // static System.Runtime.Serialization.Formatters.Binary.ObjectMap Create(System.String name, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Runtime.Serialization.Formatters.Binary.ObjectReader objectReader, System.Int32 objectId, System.Runtime.Serialization.Formatters.Binary.BinaryAssemblyInfo assemblyInfo, System.Runtime.Serialization.Formatters.Binary.SizedArray assemIdToAssemblyTable)
    // Offset: 0x4474F0
    static ::System::Runtime::Serialization::Formatters::Binary::ObjectMap* Create(::StringW name, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::Il2CppObject*> typeInformationA, ::ArrayW<int> memberAssemIds, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, int objectId, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable);
  }; // System.Runtime.Serialization.Formatters.Binary.ObjectMap
  #pragma pack(pop)
  static check_size<sizeof(ObjectMap), 96 + sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)> __System_Runtime_Serialization_Formatters_Binary_ObjectMapSizeCheck;
  static_assert(sizeof(ObjectMap) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo
// Il2CppName: CreateObjectInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* (System::Runtime::Serialization::Formatters::Binary::ObjectMap::*)(ByRef<::System::Runtime::Serialization::SerializationInfo*>, ByRef<::ArrayW<::Il2CppObject*>>)>(&System::Runtime::Serialization::Formatters::Binary::ObjectMap::CreateObjectInfo)> {
  static const MethodInfo* get() {
    static auto* si = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->this_arg;
    static auto* memberData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectMap*), "CreateObjectInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{si, memberData});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ObjectMap* (*)(::StringW, ::System::Type*, ::ArrayW<::StringW>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*)>(&System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* objectType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* objectReader = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectReader")->byval_arg;
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* assemblyInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectMap*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, objectType, memberNames, objectReader, objectId, assemblyInfo});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::Formatters::Binary::ObjectMap* (*)(::StringW, ::ArrayW<::StringW>, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::ArrayW<::Il2CppObject*>, ::ArrayW<int>, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, int, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::SizedArray*)>(&System::Runtime::Serialization::Formatters::Binary::ObjectMap::Create)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* binaryTypeEnumA = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum"), 1)->byval_arg;
    static auto* typeInformationA = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* memberAssemIds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* objectReader = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "ObjectReader")->byval_arg;
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* assemblyInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryAssemblyInfo")->byval_arg;
    static auto* assemIdToAssemblyTable = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "SizedArray")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::ObjectMap*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, objectReader, objectId, assemblyInfo, assemIdToAssemblyTable});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationBinder
  class SerializationBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::SerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationBinder*, "System.Runtime.Serialization", "SerializationBinder");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.SerializationBinder
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C9BC0
  class SerializationBinder : public ::Il2CppObject {
    public:
    // public System.Void BindToName(System.Type serializedType, out System.String assemblyName, out System.String typeName)
    // Offset: 0xBBDC18
    void BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName);
    // public System.Type BindToType(System.String assemblyName, System.String typeName)
    // Offset: 0xFFFFFFFF
    ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);
    // protected System.Void .ctor()
    // Offset: 0xBBDC24
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerializationBinder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::SerializationBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerializationBinder*, creationType>()));
    }
  }; // System.Runtime.Serialization.SerializationBinder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationBinder::BindToName
// Il2CppName: BindToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::SerializationBinder::*)(::System::Type*, ByRef<::StringW>, ByRef<::StringW>)>(&System::Runtime::Serialization::SerializationBinder::BindToName)> {
  static const MethodInfo* get() {
    static auto* serializedType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationBinder*), "BindToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedType, assemblyName, typeName});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationBinder::BindToType
// Il2CppName: BindToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Serialization::SerializationBinder::*)(::StringW, ::StringW)>(&System::Runtime::Serialization::SerializationBinder::BindToType)> {
  static const MethodInfo* get() {
    static auto* assemblyName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* typeName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationBinder*), "BindToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assemblyName, typeName});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

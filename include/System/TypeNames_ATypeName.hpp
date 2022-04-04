// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TypeNames
#include "System/TypeNames.hpp"
// Including type: System.TypeName
#include "System/TypeName.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TypeNames::ATypeName);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNames::ATypeName*, "System", "TypeNames/ATypeName");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeNames/System.ATypeName
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeNames::ATypeName : public ::Il2CppObject/*, public ::System::TypeName*/ {
    public:
    // Creating interface conversion operator: operator ::System::TypeName
    operator ::System::TypeName() noexcept {
      return *reinterpret_cast<::System::TypeName*>(this);
    }
    // public System.String get_DisplayName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_DisplayName();
    // public System.Boolean Equals(System.TypeName other)
    // Offset: 0x606890
    bool Equals(::System::TypeName* other);
    // protected System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeNames::ATypeName* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TypeNames::ATypeName::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeNames::ATypeName*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x6069D0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x606910
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // System.TypeNames/System.ATypeName
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeNames::ATypeName::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeNames::ATypeName::*)()>(&System::TypeNames::ATypeName::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeNames::ATypeName::*)(::System::TypeName*)>(&System::TypeNames::ATypeName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "TypeName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeNames::ATypeName::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::TypeNames::ATypeName::*)()>(&System::TypeNames::ATypeName::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeNames::ATypeName::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::TypeNames::ATypeName::*)(::Il2CppObject*)>(&System::TypeNames::ATypeName::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::TypeNames::ATypeName*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};

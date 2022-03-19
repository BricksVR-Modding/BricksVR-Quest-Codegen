// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TypeIdentifiers
#include "System/TypeIdentifiers.hpp"
// Including type: System.TypeNames/System.ATypeName
#include "System/TypeNames_ATypeName.hpp"
// Including type: System.TypeIdentifier
#include "System/TypeIdentifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TypeIdentifiers::Display);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifiers::Display*, "System", "TypeIdentifiers/Display");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeIdentifiers/System.Display
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeIdentifiers::Display : public ::System::TypeNames::ATypeName/*, public ::System::TypeIdentifier*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.String displayName
    // Size: 0x8
    // Offset: 0x10
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String internal_name
    // Size: 0x8
    // Offset: 0x18
    ::StringW internal_name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::TypeIdentifier
    operator ::System::TypeIdentifier() noexcept {
      return *reinterpret_cast<::System::TypeIdentifier*>(this);
    }
    // Get instance field reference: private System.String displayName
    ::StringW& dyn_displayName();
    // Get instance field reference: private System.String internal_name
    ::StringW& dyn_internal_name();
    // public System.String get_InternalName()
    // Offset: 0xC5FB8C
    ::StringW get_InternalName();
    // System.Void .ctor(System.String displayName)
    // Offset: 0xC5FB50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeIdentifiers::Display* New_ctor(::StringW displayName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TypeIdentifiers::Display::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeIdentifiers::Display*, creationType>(displayName)));
    }
    // private System.String GetInternalName()
    // Offset: 0xC5FBBC
    ::StringW GetInternalName();
    // public override System.String get_DisplayName()
    // Offset: 0xC5FB84
    // Implemented from: System.TypeNames/System.ATypeName
    // Base method: System.String ATypeName::get_DisplayName()
    ::StringW get_DisplayName();
  }; // System.TypeIdentifiers/System.Display
  #pragma pack(pop)
  static check_size<sizeof(TypeIdentifiers::Display), 24 + sizeof(::StringW)> __System_TypeIdentifiers_DisplaySizeCheck;
  static_assert(sizeof(TypeIdentifiers::Display) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::get_InternalName
// Il2CppName: get_InternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::get_InternalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "get_InternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::GetInternalName
// Il2CppName: GetInternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::GetInternalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "GetInternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::TypeIdentifiers::Display::get_DisplayName
// Il2CppName: get_DisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeIdentifiers::Display::*)()>(&System::TypeIdentifiers::Display::get_DisplayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifiers::Display*), "get_DisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

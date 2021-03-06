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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LoadingError
  class LoadingError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LoadingError);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LoadingError*, "", "LoadingError");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LoadingError
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadingError : public ::Il2CppObject {
    public:
    // Get static field: static private System.String _error
    static ::StringW _get__error();
    // Set static field: static private System.String _error
    static void _set__error(::StringW value);
    // Get static field: static public System.Boolean IntentionalDisconnect
    static bool _get_IntentionalDisconnect();
    // Set static field: static public System.Boolean IntentionalDisconnect
    static void _set_IntentionalDisconnect(bool value);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadingError* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LoadingError::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadingError*, creationType>()));
    }
    // static public System.Void SetError(System.String error)
    // Offset: 0x6BD320
    static void SetError(::StringW error);
    // static public System.String GetError()
    // Offset: 0x6BD2E0
    static ::StringW GetError();
    // static public System.Void ClearError()
    // Offset: 0x6BD2A0
    static void ClearError();
  }; // LoadingError
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LoadingError::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LoadingError::SetError
// Il2CppName: SetError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&GlobalNamespace::LoadingError::SetError)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingError*), "SetError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingError::GetError
// Il2CppName: GetError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::LoadingError::GetError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingError*), "GetError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LoadingError::ClearError
// Il2CppName: ClearError
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LoadingError::ClearError)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LoadingError*), "ClearError", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

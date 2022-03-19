// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: OidGroup
  struct OidGroup;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Utils
  class X509Utils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Utils);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Utils*, "System.Security.Cryptography.X509Certificates", "X509Utils");
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Utils
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Utils : public ::Il2CppObject {
    public:
    // static System.String FindOidInfo(System.UInt32 keyType, System.String keyValue, System.Security.Cryptography.OidGroup oidGroup)
    // Offset: 0xA24E44
    static ::StringW FindOidInfo(uint keyType, ::StringW keyValue, ::System::Security::Cryptography::OidGroup oidGroup);
    // static System.String FindOidInfoWithFallback(System.UInt32 key, System.String value, System.Security.Cryptography.OidGroup group)
    // Offset: 0xA21B24
    static ::StringW FindOidInfoWithFallback(uint key, ::StringW value, ::System::Security::Cryptography::OidGroup group);
  }; // System.Security.Cryptography.X509Certificates.X509Utils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfo
// Il2CppName: FindOidInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint, ::StringW, ::System::Security::Cryptography::OidGroup)>(&System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfo)> {
  static const MethodInfo* get() {
    static auto* keyType = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* keyValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* oidGroup = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "OidGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Utils*), "FindOidInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{keyType, keyValue, oidGroup});
  }
};
// Writing MetadataGetter for method: System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfoWithFallback
// Il2CppName: FindOidInfoWithFallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint, ::StringW, ::System::Security::Cryptography::OidGroup)>(&System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfoWithFallback)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "OidGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Cryptography::X509Certificates::X509Utils*), "FindOidInfoWithFallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, group});
  }
};

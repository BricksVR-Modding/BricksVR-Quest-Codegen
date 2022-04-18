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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: StandalonePlatformSettings
  class StandalonePlatformSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::StandalonePlatformSettings);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatformSettings*, "Oculus.Platform", "StandalonePlatformSettings");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.StandalonePlatformSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class StandalonePlatformSettings : public ::Il2CppObject {
    public:
    // static public System.String get_OculusPlatformTestUserEmail()
    // Offset: 0x7EA8A0
    static ::StringW get_OculusPlatformTestUserEmail();
    // static public System.Void set_OculusPlatformTestUserEmail(System.String value)
    // Offset: 0x1DDF00
    static void set_OculusPlatformTestUserEmail(::StringW value);
    // static public System.String get_OculusPlatformTestUserPassword()
    // Offset: 0x7EA8E0
    static ::StringW get_OculusPlatformTestUserPassword();
    // static public System.Void set_OculusPlatformTestUserPassword(System.String value)
    // Offset: 0x1DDF00
    static void set_OculusPlatformTestUserPassword(::StringW value);
    // static public System.String get_OculusPlatformTestUserAccessToken()
    // Offset: 0x7EA860
    static ::StringW get_OculusPlatformTestUserAccessToken();
    // static public System.Void set_OculusPlatformTestUserAccessToken(System.String value)
    // Offset: 0x1DDF00
    static void set_OculusPlatformTestUserAccessToken(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandalonePlatformSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::StandalonePlatformSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandalonePlatformSettings*, creationType>()));
    }
  }; // Oculus.Platform.StandalonePlatformSettings
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserEmail
// Il2CppName: get_OculusPlatformTestUserEmail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserEmail)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "get_OculusPlatformTestUserEmail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserEmail
// Il2CppName: set_OculusPlatformTestUserEmail
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserEmail)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "set_OculusPlatformTestUserEmail", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserPassword
// Il2CppName: get_OculusPlatformTestUserPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserPassword)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "get_OculusPlatformTestUserPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserPassword
// Il2CppName: set_OculusPlatformTestUserPassword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserPassword)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "set_OculusPlatformTestUserPassword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken
// Il2CppName: get_OculusPlatformTestUserAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Oculus::Platform::StandalonePlatformSettings::get_OculusPlatformTestUserAccessToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "get_OculusPlatformTestUserAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken
// Il2CppName: set_OculusPlatformTestUserAccessToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&Oculus::Platform::StandalonePlatformSettings::set_OculusPlatformTestUserAccessToken)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::StandalonePlatformSettings*), "set_OculusPlatformTestUserAccessToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::StandalonePlatformSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Forward declaring type: Development
  class Development;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::XR::Oculus::Development);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development*, "Unity.XR.Oculus", "Development");
// Type namespace: Unity.XR.Oculus
namespace Unity::XR::Oculus {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.XR.Oculus.Development
  // [TokenAttribute] Offset: FFFFFFFF
  class Development : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache
    struct UserDeveloperModeSettingCache;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache
    // [TokenAttribute] Offset: FFFFFFFF
    struct UserDeveloperModeSettingCache/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UserDeveloperModeSettingCache
      constexpr UserDeveloperModeSettingCache(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache NoUserSettingCached
      static constexpr const int NoUserSettingCached = 0;
      // Get static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache NoUserSettingCached
      static ::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache _get_NoUserSettingCached();
      // Set static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache NoUserSettingCached
      static void _set_NoUserSettingCached(::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache value);
      // static field const value: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingFalse
      static constexpr const int UserSettingFalse = 1;
      // Get static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingFalse
      static ::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache _get_UserSettingFalse();
      // Set static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingFalse
      static void _set_UserSettingFalse(::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache value);
      // static field const value: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingTrue
      static constexpr const int UserSettingTrue = 2;
      // Get static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingTrue
      static ::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache _get_UserSettingTrue();
      // Set static field: static public Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache UserSettingTrue
      static void _set_UserSettingTrue(::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache
    #pragma pack(pop)
    static check_size<sizeof(Development::UserDeveloperModeSettingCache), 0 + sizeof(int)> __Unity_XR_Oculus_Development_UserDeveloperModeSettingCacheSizeCheck;
    static_assert(sizeof(Development::UserDeveloperModeSettingCache) == 0x4);
    // Get static field: static private Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache s_CachedMode
    static ::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache _get_s_CachedMode();
    // Set static field: static private Unity.XR.Oculus.Development/Unity.XR.Oculus.UserDeveloperModeSettingCache s_CachedMode
    static void _set_s_CachedMode(::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache value);
    // static private System.Void .cctor()
    // Offset: 0x1DDF00
    static void _cctor();
    // static public System.Void TrySetDeveloperMode(System.Boolean active)
    // Offset: 0x64F010
    static void TrySetDeveloperMode(bool active);
    // static System.Void OverrideDeveloperModeStart()
    // Offset: 0x64EEB0
    static void OverrideDeveloperModeStart();
    // static System.Void OverrideDeveloperModeStop()
    // Offset: 0x64EFA0
    static void OverrideDeveloperModeStop();
  }; // Unity.XR.Oculus.Development
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development::UserDeveloperModeSettingCache, "Unity.XR.Oculus", "Development/UserDeveloperModeSettingCache");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::XR::Oculus::Development::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::Development::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Development*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Development::TrySetDeveloperMode
// Il2CppName: TrySetDeveloperMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&Unity::XR::Oculus::Development::TrySetDeveloperMode)> {
  static const MethodInfo* get() {
    static auto* active = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Development*), "TrySetDeveloperMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{active});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Development::OverrideDeveloperModeStart
// Il2CppName: OverrideDeveloperModeStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::Development::OverrideDeveloperModeStart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Development*), "OverrideDeveloperModeStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::XR::Oculus::Development::OverrideDeveloperModeStop
// Il2CppName: OverrideDeveloperModeStop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::XR::Oculus::Development::OverrideDeveloperModeStop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::XR::Oculus::Development*), "OverrideDeveloperModeStop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Normal.Utility.NormcoreLogLevel
#include "Normal/Utility/NormcoreLogLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Normal
namespace Normal {
  // Forward declaring type: NormcoreProjectSettings
  class NormcoreProjectSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::NormcoreProjectSettings);
DEFINE_IL2CPP_ARG_TYPE(::Normal::NormcoreProjectSettings*, "Normal", "NormcoreProjectSettings");
// Type namespace: Normal
namespace Normal {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: Normal.NormcoreProjectSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class NormcoreProjectSettings : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private Normal.Utility.NormcoreLogLevel _logLevel
    // Size: 0x4
    // Offset: 0x18
    ::Normal::Utility::NormcoreLogLevel logLevel;
    // Field size check
    static_assert(sizeof(::Normal::Utility::NormcoreLogLevel) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private Normal.NormcoreProjectSettings __instance
    static ::Normal::NormcoreProjectSettings* _get___instance();
    // Set static field: static private Normal.NormcoreProjectSettings __instance
    static void _set___instance(::Normal::NormcoreProjectSettings* value);
    // Get instance field reference: private Normal.Utility.NormcoreLogLevel _logLevel
    [[deprecated]] ::Normal::Utility::NormcoreLogLevel& dyn__logLevel();
    // static public Normal.Utility.NormcoreLogLevel get_logLevel()
    // Offset: 0x8BAFE0
    static ::Normal::Utility::NormcoreLogLevel get_logLevel();
    // static public System.Void set_logLevel(Normal.Utility.NormcoreLogLevel value)
    // Offset: 0x8BB000
    static void set_logLevel(::Normal::Utility::NormcoreLogLevel value);
    // static private Normal.NormcoreProjectSettings GetInstance()
    // Offset: 0x8BADC0
    static ::Normal::NormcoreProjectSettings* GetInstance();
    // static private Normal.NormcoreProjectSettings LoadInstance()
    // Offset: 0x8BAF50
    static ::Normal::NormcoreProjectSettings* LoadInstance();
    // static private Normal.NormcoreProjectSettings CreateInstance()
    // Offset: 0x8BAD90
    static ::Normal::NormcoreProjectSettings* CreateInstance();
    // public System.Void .ctor()
    // Offset: 0x8BAFD0
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NormcoreProjectSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::NormcoreProjectSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NormcoreProjectSettings*, creationType>()));
    }
  }; // Normal.NormcoreProjectSettings
  #pragma pack(pop)
  static check_size<sizeof(NormcoreProjectSettings), 24 + sizeof(::Normal::Utility::NormcoreLogLevel)> __Normal_NormcoreProjectSettingsSizeCheck;
  static_assert(sizeof(NormcoreProjectSettings) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::get_logLevel
// Il2CppName: get_logLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Utility::NormcoreLogLevel (*)()>(&Normal::NormcoreProjectSettings::get_logLevel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::NormcoreProjectSettings*), "get_logLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::set_logLevel
// Il2CppName: set_logLevel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Normal::Utility::NormcoreLogLevel)>(&Normal::NormcoreProjectSettings::set_logLevel)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Utility", "NormcoreLogLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::NormcoreProjectSettings*), "set_logLevel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::NormcoreProjectSettings* (*)()>(&Normal::NormcoreProjectSettings::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::NormcoreProjectSettings*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::LoadInstance
// Il2CppName: LoadInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::NormcoreProjectSettings* (*)()>(&Normal::NormcoreProjectSettings::LoadInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::NormcoreProjectSettings*), "LoadInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::NormcoreProjectSettings* (*)()>(&Normal::NormcoreProjectSettings::CreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::NormcoreProjectSettings*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::NormcoreProjectSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

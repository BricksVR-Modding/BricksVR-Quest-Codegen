// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSettings
#include "OVR/OpenVR/IVRSettings.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSettingsError
  struct EVRSettingsError;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRSettings
  class CVRSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRSettings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSettings*, "OVR.OpenVR", "CVRSettings");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRSettings : public ::Il2CppObject {
    public:
    public:
    // private OVR.OpenVR.IVRSettings FnTable
    // Size: 0x60
    // Offset: 0x10
    ::OVR::OpenVR::IVRSettings FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRSettings) == 0x60);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRSettings
    constexpr operator ::OVR::OpenVR::IVRSettings() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRSettings FnTable
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRSettings& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x360620
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRSettings* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRSettings*, creationType>(pInterface)));
    }
    // public System.String GetSettingsErrorNameFromEnum(OVR.OpenVR.EVRSettingsError eError)
    // Offset: 0x360440
    ::StringW GetSettingsErrorNameFromEnum(::OVR::OpenVR::EVRSettingsError eError);
    // public System.Boolean Sync(System.Boolean bForce, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x360600
    bool Sync(bool bForce, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void SetBool(System.String pchSection, System.String pchSettingsKey, System.Boolean bValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x360540
    void SetBool(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void SetInt32(System.String pchSection, System.String pchSettingsKey, System.Int32 nValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3605A0
    void SetInt32(::StringW pchSection, ::StringW pchSettingsKey, int nValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void SetFloat(System.String pchSection, System.String pchSettingsKey, System.Single flValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x360570
    void SetFloat(::StringW pchSection, ::StringW pchSettingsKey, float flValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void SetString(System.String pchSection, System.String pchSettingsKey, System.String pchValue, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3605D0
    void SetString(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Boolean GetBool(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3603B0
    bool GetBool(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Int32 GetInt32(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x360410
    int GetInt32(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Single GetFloat(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3603E0
    float GetFloat(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void GetString(System.String pchSection, System.String pchSettingsKey, System.Text.StringBuilder pchValue, System.UInt32 unValueLen, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3604C0
    void GetString(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint unValueLen, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void RemoveSection(System.String pchSection, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x360520
    void RemoveSection(::StringW pchSection, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
    // public System.Void RemoveKeyInSection(System.String pchSection, System.String pchSettingsKey, ref OVR.OpenVR.EVRSettingsError peError)
    // Offset: 0x3604F0
    void RemoveKeyInSection(::StringW pchSection, ::StringW pchSettingsKey, ByRef<::OVR::OpenVR::EVRSettingsError> peError);
  }; // OVR.OpenVR.CVRSettings
  #pragma pack(pop)
  static check_size<sizeof(CVRSettings), 16 + sizeof(::OVR::OpenVR::IVRSettings)> __OVR_OpenVR_CVRSettingsSizeCheck;
  static_assert(sizeof(CVRSettings) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::GetSettingsErrorNameFromEnum
// Il2CppName: GetSettingsErrorNameFromEnum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (OVR::OpenVR::CVRSettings::*)(::OVR::OpenVR::EVRSettingsError)>(&OVR::OpenVR::CVRSettings::GetSettingsErrorNameFromEnum)> {
  static const MethodInfo* get() {
    static auto* eError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "GetSettingsErrorNameFromEnum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::Sync
// Il2CppName: Sync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSettings::*)(bool, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::Sync)> {
  static const MethodInfo* get() {
    static auto* bForce = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "Sync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bForce, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::SetBool
// Il2CppName: SetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, bool, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::SetBool)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bValue = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "SetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, bValue, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::SetInt32
// Il2CppName: SetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, int, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::SetInt32)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* nValue = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "SetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, nValue, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::SetFloat
// Il2CppName: SetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, float, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::SetFloat)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* flValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "SetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, flValue, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::SetString
// Il2CppName: SetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::SetString)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "SetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::GetBool
// Il2CppName: GetBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::GetBool)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "GetBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::GetInt32
// Il2CppName: GetInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::GetInt32)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "GetInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::GetFloat
// Il2CppName: GetFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::GetFloat)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "GetFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::GetString
// Il2CppName: GetString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ::System::Text::StringBuilder*, uint, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::GetString)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchValue = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unValueLen = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "GetString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, pchValue, unValueLen, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::RemoveSection
// Il2CppName: RemoveSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::RemoveSection)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "RemoveSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, peError});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRSettings::RemoveKeyInSection
// Il2CppName: RemoveKeyInSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::CVRSettings::*)(::StringW, ::StringW, ByRef<::OVR::OpenVR::EVRSettingsError>)>(&OVR::OpenVR::CVRSettings::RemoveKeyInSection)> {
  static const MethodInfo* get() {
    static auto* pchSection = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pchSettingsKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* peError = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSettingsError")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRSettings*), "RemoveKeyInSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchSection, pchSettingsKey, peError});
  }
};

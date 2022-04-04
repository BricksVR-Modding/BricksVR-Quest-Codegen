// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Forward declaring type: XRConfigurationDataAttribute
  class XRConfigurationDataAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Management::XRConfigurationDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRConfigurationDataAttribute*, "UnityEngine.XR.Management", "XRConfigurationDataAttribute");
// Type namespace: UnityEngine.XR.Management
namespace UnityEngine::XR::Management {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Management.XRConfigurationDataAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: C57E0
  class XRConfigurationDataAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <displayName>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW displayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <buildSettingsKey>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW buildSettingsKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String <displayName>k__BackingField
    [[deprecated]] ::StringW& dyn_$displayName$k__BackingField();
    // Get instance field reference: private System.String <buildSettingsKey>k__BackingField
    [[deprecated]] ::StringW& dyn_$buildSettingsKey$k__BackingField();
    // public System.String get_displayName()
    // Offset: 0x1E1920
    ::StringW get_displayName();
    // public System.Void set_displayName(System.String value)
    // Offset: 0x269100
    void set_displayName(::StringW value);
    // public System.String get_buildSettingsKey()
    // Offset: 0x1E1520
    ::StringW get_buildSettingsKey();
    // public System.Void set_buildSettingsKey(System.String value)
    // Offset: 0x1E4910
    void set_buildSettingsKey(::StringW value);
    // public System.Void .ctor(System.String displayName, System.String buildSettingsKey)
    // Offset: 0x65EE50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRConfigurationDataAttribute* New_ctor(::StringW displayName, ::StringW buildSettingsKey) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRConfigurationDataAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRConfigurationDataAttribute*, creationType>(displayName, buildSettingsKey)));
    }
    // private System.Void .ctor()
    // Offset: 0x1E10D0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRConfigurationDataAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Management::XRConfigurationDataAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRConfigurationDataAttribute*, creationType>()));
    }
  }; // UnityEngine.XR.Management.XRConfigurationDataAttribute
  #pragma pack(pop)
  static check_size<sizeof(XRConfigurationDataAttribute), 24 + sizeof(::StringW)> __UnityEngine_XR_Management_XRConfigurationDataAttributeSizeCheck;
  static_assert(sizeof(XRConfigurationDataAttribute) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::get_displayName
// Il2CppName: get_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::Management::XRConfigurationDataAttribute::*)()>(&UnityEngine::XR::Management::XRConfigurationDataAttribute::get_displayName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRConfigurationDataAttribute*), "get_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::set_displayName
// Il2CppName: set_displayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRConfigurationDataAttribute::*)(::StringW)>(&UnityEngine::XR::Management::XRConfigurationDataAttribute::set_displayName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRConfigurationDataAttribute*), "set_displayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::get_buildSettingsKey
// Il2CppName: get_buildSettingsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::Management::XRConfigurationDataAttribute::*)()>(&UnityEngine::XR::Management::XRConfigurationDataAttribute::get_buildSettingsKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRConfigurationDataAttribute*), "get_buildSettingsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::set_buildSettingsKey
// Il2CppName: set_buildSettingsKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Management::XRConfigurationDataAttribute::*)(::StringW)>(&UnityEngine::XR::Management::XRConfigurationDataAttribute::set_buildSettingsKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Management::XRConfigurationDataAttribute*), "set_buildSettingsKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Management::XRConfigurationDataAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Configuration.ConfigurationSection
#include "System/Configuration/ConfigurationSection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Configuration
namespace System::Configuration {
  // Forward declaring type: ConfigurationPropertyCollection
  class ConfigurationPropertyCollection;
  // Forward declaring type: ConfigurationSaveMode
  struct ConfigurationSaveMode;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: IgnoreSection
  class IgnoreSection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::IgnoreSection);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::IgnoreSection*, "System.Configuration", "IgnoreSection");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.IgnoreSection
  // [TokenAttribute] Offset: FFFFFFFF
  class IgnoreSection : public ::System::Configuration::ConfigurationSection {
    public:
    // public System.Void .ctor()
    // Offset: 0x6710B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IgnoreSection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::IgnoreSection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IgnoreSection*, creationType>()));
    }
    // protected internal override System.Configuration.ConfigurationPropertyCollection get_Properties()
    // Offset: 0x6710E0
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Configuration.ConfigurationPropertyCollection ConfigurationElement::get_Properties()
    ::System::Configuration::ConfigurationPropertyCollection* get_Properties();
    // protected internal override System.Void DeserializeSection(System.Xml.XmlReader xmlReader)
    // Offset: 0x670FC0
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Void ConfigurationSection::DeserializeSection(System.Xml.XmlReader xmlReader)
    void DeserializeSection(::System::Xml::XmlReader* xmlReader);
    // protected internal override System.Boolean IsModified()
    // Offset: 0x670FF0
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Boolean ConfigurationSection::IsModified()
    bool IsModified();
    // protected internal override System.Void Reset(System.Configuration.ConfigurationElement parentSection)
    // Offset: 0x671050
    // Implemented from: System.Configuration.ConfigurationElement
    // Base method: System.Void ConfigurationElement::Reset(System.Configuration.ConfigurationElement parentSection)
    void Reset(::System::Configuration::ConfigurationElement* parentSection);
    // protected internal override System.Void ResetModified()
    // Offset: 0x671020
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.Void ConfigurationSection::ResetModified()
    void ResetModified();
    // protected internal override System.String SerializeSection(System.Configuration.ConfigurationElement parentSection, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    // Offset: 0x671080
    // Implemented from: System.Configuration.ConfigurationSection
    // Base method: System.String ConfigurationSection::SerializeSection(System.Configuration.ConfigurationElement parentSection, System.String name, System.Configuration.ConfigurationSaveMode saveMode)
    ::StringW SerializeSection(::System::Configuration::ConfigurationElement* parentSection, ::StringW name, ::System::Configuration::ConfigurationSaveMode saveMode);
  }; // System.Configuration.IgnoreSection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::get_Properties
// Il2CppName: get_Properties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (System::Configuration::IgnoreSection::*)()>(&System::Configuration::IgnoreSection::get_Properties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "get_Properties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::DeserializeSection
// Il2CppName: DeserializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::IgnoreSection::*)(::System::Xml::XmlReader*)>(&System::Configuration::IgnoreSection::DeserializeSection)> {
  static const MethodInfo* get() {
    static auto* xmlReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "DeserializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlReader});
  }
};
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::IsModified
// Il2CppName: IsModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Configuration::IgnoreSection::*)()>(&System::Configuration::IgnoreSection::IsModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "IsModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::IgnoreSection::*)(::System::Configuration::ConfigurationElement*)>(&System::Configuration::IgnoreSection::Reset)> {
  static const MethodInfo* get() {
    static auto* parentSection = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentSection});
  }
};
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::ResetModified
// Il2CppName: ResetModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::IgnoreSection::*)()>(&System::Configuration::IgnoreSection::ResetModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "ResetModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Configuration::IgnoreSection::SerializeSection
// Il2CppName: SerializeSection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Configuration::IgnoreSection::*)(::System::Configuration::ConfigurationElement*, ::StringW, ::System::Configuration::ConfigurationSaveMode)>(&System::Configuration::IgnoreSection::SerializeSection)> {
  static const MethodInfo* get() {
    static auto* parentSection = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationElement")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* saveMode = &::il2cpp_utils::GetClassFromName("System.Configuration", "ConfigurationSaveMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::IgnoreSection*), "SerializeSection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parentSection, name, saveMode});
  }
};

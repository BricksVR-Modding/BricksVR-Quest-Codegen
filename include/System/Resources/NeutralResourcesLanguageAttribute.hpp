// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Resources.UltimateResourceFallbackLocation
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Forward declaring type: NeutralResourcesLanguageAttribute
  class NeutralResourcesLanguageAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Resources::NeutralResourcesLanguageAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::NeutralResourcesLanguageAttribute*, "System.Resources", "NeutralResourcesLanguageAttribute");
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.NeutralResourcesLanguageAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C791C
  // [AttributeUsageAttribute] Offset: 6C791C
  class NeutralResourcesLanguageAttribute : public ::System::Attribute {
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
    // private System.String _culture
    // Size: 0x8
    // Offset: 0x10
    ::StringW culture;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    // Size: 0x4
    // Offset: 0x18
    ::System::Resources::UltimateResourceFallbackLocation fallbackLoc;
    // Field size check
    static_assert(sizeof(::System::Resources::UltimateResourceFallbackLocation) == 0x4);
    public:
    // Get instance field reference: private System.String _culture
    ::StringW& dyn__culture();
    // Get instance field reference: private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    ::System::Resources::UltimateResourceFallbackLocation& dyn__fallbackLoc();
    // public System.String get_CultureName()
    // Offset: 0xBFDA20
    ::StringW get_CultureName();
    // public System.Resources.UltimateResourceFallbackLocation get_Location()
    // Offset: 0xBFDA28
    ::System::Resources::UltimateResourceFallbackLocation get_Location();
    // public System.Void .ctor(System.String cultureName)
    // Offset: 0xBFD980
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NeutralResourcesLanguageAttribute* New_ctor(::StringW cultureName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Resources::NeutralResourcesLanguageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NeutralResourcesLanguageAttribute*, creationType>(cultureName)));
    }
  }; // System.Resources.NeutralResourcesLanguageAttribute
  #pragma pack(pop)
  static check_size<sizeof(NeutralResourcesLanguageAttribute), 24 + sizeof(::System::Resources::UltimateResourceFallbackLocation)> __System_Resources_NeutralResourcesLanguageAttributeSizeCheck;
  static_assert(sizeof(NeutralResourcesLanguageAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::get_CultureName
// Il2CppName: get_CultureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_CultureName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::NeutralResourcesLanguageAttribute*), "get_CultureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::get_Location
// Il2CppName: get_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Resources::UltimateResourceFallbackLocation (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_Location)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::NeutralResourcesLanguageAttribute*), "get_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

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
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // Forward declaring type: MetadataPreviewAttribute
  class MetadataPreviewAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Il2CppInspector::DLL::MetadataPreviewAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Il2CppInspector::DLL::MetadataPreviewAttribute*, "Il2CppInspector.DLL", "MetadataPreviewAttribute");
// Type namespace: Il2CppInspector.DLL
namespace Il2CppInspector::DLL {
  // WARNING Size may be invalid!
  // Autogenerated type: Il2CppInspector.DLL.MetadataPreviewAttribute
  class MetadataPreviewAttribute : public ::System::Attribute {
    public:
    public:
    // public System.String Data
    // Size: 0x8
    // Offset: 0xFFFFFFFF
    ::StringW Data;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return Data;
    }
    // Get instance field reference: public System.String Data
    [[deprecated]] ::StringW& dyn_Data();
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetadataPreviewAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Il2CppInspector::DLL::MetadataPreviewAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetadataPreviewAttribute*, creationType>()));
    }
  }; // Il2CppInspector.DLL.MetadataPreviewAttribute
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Il2CppInspector::DLL::MetadataPreviewAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

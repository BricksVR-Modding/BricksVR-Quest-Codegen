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
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ExtensionOfNativeClassAttribute
  class ExtensionOfNativeClassAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ExtensionOfNativeClassAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExtensionOfNativeClassAttribute*, "UnityEngine", "ExtensionOfNativeClassAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ExtensionOfNativeClassAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10A550
  // [RequiredByNativeCodeAttribute] Offset: 10A550
  class ExtensionOfNativeClassAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E10D0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExtensionOfNativeClassAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ExtensionOfNativeClassAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExtensionOfNativeClassAttribute*, creationType>()));
    }
  }; // UnityEngine.ExtensionOfNativeClassAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ExtensionOfNativeClassAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

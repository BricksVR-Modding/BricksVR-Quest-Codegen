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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RequireComponent
  class RequireComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::RequireComponent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RequireComponent*, "UnityEngine", "RequireComponent");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RequireComponent
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 1087D0
  // [AttributeUsageAttribute] Offset: 1087D0
  class RequireComponent : public ::System::Attribute {
    public:
    public:
    // public System.Type m_Type0
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* m_Type0;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type m_Type1
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* m_Type1;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Type m_Type2
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* m_Type2;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: public System.Type m_Type0
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_Type0();
    // Get instance field reference: public System.Type m_Type1
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_Type1();
    // Get instance field reference: public System.Type m_Type2
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_Type2();
    // public System.Void .ctor(System.Type requiredComponent)
    // Offset: 0x209300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequireComponent* New_ctor(::System::Type* requiredComponent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RequireComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequireComponent*, creationType>(requiredComponent)));
    }
    // public System.Void .ctor(System.Type requiredComponent, System.Type requiredComponent2)
    // Offset: 0x65EE50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RequireComponent* New_ctor(::System::Type* requiredComponent, ::System::Type* requiredComponent2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::RequireComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RequireComponent*, creationType>(requiredComponent, requiredComponent2)));
    }
  }; // UnityEngine.RequireComponent
  #pragma pack(pop)
  static check_size<sizeof(RequireComponent), 32 + sizeof(::System::Type*)> __UnityEngine_RequireComponentSizeCheck;
  static_assert(sizeof(RequireComponent) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RequireComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::RequireComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

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
// Type namespace: System
namespace System {
  // Forward declaring type: CLSCompliantAttribute
  class CLSCompliantAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::CLSCompliantAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::CLSCompliantAttribute*, "System", "CLSCompliantAttribute");
// Type namespace: System
namespace System {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: System.CLSCompliantAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6C67D4
  // [ComVisibleAttribute] Offset: 6C67D4
  class CLSCompliantAttribute : public ::System::Attribute {
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
    // private System.Boolean m_compliant
    // Size: 0x1
    // Offset: 0x10
    bool m_compliant;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return m_compliant;
    }
    // Get instance field reference: private System.Boolean m_compliant
    bool& dyn_m_compliant();
    // public System.Void .ctor(System.Boolean isCompliant)
    // Offset: 0x9E9100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CLSCompliantAttribute* New_ctor(bool isCompliant) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::CLSCompliantAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CLSCompliantAttribute*, creationType>(isCompliant)));
    }
  }; // System.CLSCompliantAttribute
  #pragma pack(pop)
  static check_size<sizeof(CLSCompliantAttribute), 16 + sizeof(bool)> __System_CLSCompliantAttributeSizeCheck;
  static_assert(sizeof(CLSCompliantAttribute) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::CLSCompliantAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: DebuggerHiddenAttribute
  class DebuggerHiddenAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::DebuggerHiddenAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::DebuggerHiddenAttribute*, "System.Diagnostics", "DebuggerHiddenAttribute");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerHiddenAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 6CD68C
  // [ComVisibleAttribute] Offset: 6CD68C
  class DebuggerHiddenAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0xAFF7C4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerHiddenAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::DebuggerHiddenAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerHiddenAttribute*, creationType>()));
    }
  }; // System.Diagnostics.DebuggerHiddenAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::DebuggerHiddenAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

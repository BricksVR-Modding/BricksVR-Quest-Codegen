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
// Type namespace: System.Security
namespace System::Security {
  // Forward declaring type: SecurityCriticalAttribute
  class SecurityCriticalAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::SecurityCriticalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityCriticalAttribute*, "System.Security", "SecurityCriticalAttribute");
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityCriticalAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 100FB0
  class SecurityCriticalAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1E10D0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityCriticalAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::SecurityCriticalAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityCriticalAttribute*, creationType>()));
    }
  }; // System.Security.SecurityCriticalAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityCriticalAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

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
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: GuidAttribute
  class GuidAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::GuidAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GuidAttribute*, "System.Runtime.InteropServices", "GuidAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.GuidAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 109C80
  // [ComVisibleAttribute] Offset: 109C80
  class GuidAttribute : public ::System::Attribute {
    public:
    public:
    // System.String _val
    // Size: 0x8
    // Offset: 0x10
    ::StringW val;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return val;
    }
    // Get instance field reference: System.String _val
    [[deprecated("Use field access instead!")]] ::StringW& dyn__val();
    // public System.Void .ctor(System.String guid)
    // Offset: 0x209300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GuidAttribute* New_ctor(::StringW guid) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::GuidAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GuidAttribute*, creationType>(guid)));
    }
  }; // System.Runtime.InteropServices.GuidAttribute
  #pragma pack(pop)
  static check_size<sizeof(GuidAttribute), 16 + sizeof(::StringW)> __System_Runtime_InteropServices_GuidAttributeSizeCheck;
  static_assert(sizeof(GuidAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::GuidAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

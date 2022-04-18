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
// Type namespace: Normal.Utility
namespace Normal::Utility {
  // Forward declaring type: ExecutionOrder
  class ExecutionOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Utility::ExecutionOrder);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Utility::ExecutionOrder*, "Normal.Utility", "ExecutionOrder");
// Type namespace: Normal.Utility
namespace Normal::Utility {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Utility.ExecutionOrder
  // [TokenAttribute] Offset: FFFFFFFF
  class ExecutionOrder : public ::System::Attribute {
    public:
    public:
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x10
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return order;
    }
    // Get instance field reference: public System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // public System.Void .ctor(System.Int32 order)
    // Offset: 0x20A3C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExecutionOrder* New_ctor(int order) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Utility::ExecutionOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExecutionOrder*, creationType>(order)));
    }
  }; // Normal.Utility.ExecutionOrder
  #pragma pack(pop)
  static check_size<sizeof(ExecutionOrder), 16 + sizeof(int)> __Normal_Utility_ExecutionOrderSizeCheck;
  static_assert(sizeof(ExecutionOrder) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Utility::ExecutionOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

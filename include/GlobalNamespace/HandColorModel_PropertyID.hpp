// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HandColorModel
#include "GlobalNamespace/HandColorModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandColorModel::PropertyID, "", "HandColorModel/PropertyID");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: HandColorModel/PropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  struct HandColorModel::PropertyID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PropertyID
    constexpr PropertyID(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public HandColorModel/PropertyID Color
    static constexpr const uint Color = 1u;
    // Get static field: static public HandColorModel/PropertyID Color
    static ::GlobalNamespace::HandColorModel::PropertyID _get_Color();
    // Set static field: static public HandColorModel/PropertyID Color
    static void _set_Color(::GlobalNamespace::HandColorModel::PropertyID value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // HandColorModel/PropertyID
  #pragma pack(pop)
  static check_size<sizeof(HandColorModel::PropertyID), 0 + sizeof(uint)> __GlobalNamespace_HandColorModel_PropertyIDSizeCheck;
  static_assert(sizeof(HandColorModel::PropertyID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

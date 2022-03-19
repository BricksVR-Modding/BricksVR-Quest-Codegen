// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Forward declaring type: RGBAType
  struct RGBAType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::RGBAType, "AdvancedColorPicker", "RGBAType");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.RGBAType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RGBAType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RGBAType
    constexpr RGBAType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AdvancedColorPicker.RGBAType A
    static constexpr const int A = 1;
    // Get static field: static public AdvancedColorPicker.RGBAType A
    static ::AdvancedColorPicker::RGBAType _get_A();
    // Set static field: static public AdvancedColorPicker.RGBAType A
    static void _set_A(::AdvancedColorPicker::RGBAType value);
    // static field const value: static public AdvancedColorPicker.RGBAType R
    static constexpr const int R = 2;
    // Get static field: static public AdvancedColorPicker.RGBAType R
    static ::AdvancedColorPicker::RGBAType _get_R();
    // Set static field: static public AdvancedColorPicker.RGBAType R
    static void _set_R(::AdvancedColorPicker::RGBAType value);
    // static field const value: static public AdvancedColorPicker.RGBAType G
    static constexpr const int G = 4;
    // Get static field: static public AdvancedColorPicker.RGBAType G
    static ::AdvancedColorPicker::RGBAType _get_G();
    // Set static field: static public AdvancedColorPicker.RGBAType G
    static void _set_G(::AdvancedColorPicker::RGBAType value);
    // static field const value: static public AdvancedColorPicker.RGBAType B
    static constexpr const int B = 8;
    // Get static field: static public AdvancedColorPicker.RGBAType B
    static ::AdvancedColorPicker::RGBAType _get_B();
    // Set static field: static public AdvancedColorPicker.RGBAType B
    static void _set_B(::AdvancedColorPicker::RGBAType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // AdvancedColorPicker.RGBAType
  #pragma pack(pop)
  static check_size<sizeof(RGBAType), 0 + sizeof(int)> __AdvancedColorPicker_RGBATypeSizeCheck;
  static_assert(sizeof(RGBAType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

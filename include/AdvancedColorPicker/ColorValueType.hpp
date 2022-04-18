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
  // Forward declaring type: ColorValueType
  struct ColorValueType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::ColorValueType, "AdvancedColorPicker", "ColorValueType");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.ColorValueType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ColorValueType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ColorValueType
    constexpr ColorValueType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AdvancedColorPicker.ColorValueType Alpha
    static constexpr const int Alpha = 1;
    // Get static field: static public AdvancedColorPicker.ColorValueType Alpha
    static ::AdvancedColorPicker::ColorValueType _get_Alpha();
    // Set static field: static public AdvancedColorPicker.ColorValueType Alpha
    static void _set_Alpha(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType RGB_R
    static constexpr const int RGB_R = 2;
    // Get static field: static public AdvancedColorPicker.ColorValueType RGB_R
    static ::AdvancedColorPicker::ColorValueType _get_RGB_R();
    // Set static field: static public AdvancedColorPicker.ColorValueType RGB_R
    static void _set_RGB_R(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType RGB_G
    static constexpr const int RGB_G = 4;
    // Get static field: static public AdvancedColorPicker.ColorValueType RGB_G
    static ::AdvancedColorPicker::ColorValueType _get_RGB_G();
    // Set static field: static public AdvancedColorPicker.ColorValueType RGB_G
    static void _set_RGB_G(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType RGB_B
    static constexpr const int RGB_B = 8;
    // Get static field: static public AdvancedColorPicker.ColorValueType RGB_B
    static ::AdvancedColorPicker::ColorValueType _get_RGB_B();
    // Set static field: static public AdvancedColorPicker.ColorValueType RGB_B
    static void _set_RGB_B(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSV_H
    static constexpr const int HSV_H = 16;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSV_H
    static ::AdvancedColorPicker::ColorValueType _get_HSV_H();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSV_H
    static void _set_HSV_H(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSV_S
    static constexpr const int HSV_S = 32;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSV_S
    static ::AdvancedColorPicker::ColorValueType _get_HSV_S();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSV_S
    static void _set_HSV_S(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSV_V
    static constexpr const int HSV_V = 64;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSV_V
    static ::AdvancedColorPicker::ColorValueType _get_HSV_V();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSV_V
    static void _set_HSV_V(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSL_H
    static constexpr const int HSL_H = 128;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSL_H
    static ::AdvancedColorPicker::ColorValueType _get_HSL_H();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSL_H
    static void _set_HSL_H(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSL_S
    static constexpr const int HSL_S = 256;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSL_S
    static ::AdvancedColorPicker::ColorValueType _get_HSL_S();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSL_S
    static void _set_HSL_S(::AdvancedColorPicker::ColorValueType value);
    // static field const value: static public AdvancedColorPicker.ColorValueType HSL_L
    static constexpr const int HSL_L = 512;
    // Get static field: static public AdvancedColorPicker.ColorValueType HSL_L
    static ::AdvancedColorPicker::ColorValueType _get_HSL_L();
    // Set static field: static public AdvancedColorPicker.ColorValueType HSL_L
    static void _set_HSL_L(::AdvancedColorPicker::ColorValueType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // AdvancedColorPicker.ColorValueType
  #pragma pack(pop)
  static check_size<sizeof(ColorValueType), 0 + sizeof(int)> __AdvancedColorPicker_ColorValueTypeSizeCheck;
  static_assert(sizeof(ColorValueType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
  // Forward declaring type: HexfieldType
  struct HexfieldType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::AdvancedColorPicker::HexfieldType, "AdvancedColorPicker", "HexfieldType");
// Type namespace: AdvancedColorPicker
namespace AdvancedColorPicker {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: AdvancedColorPicker.HexfieldType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HexfieldType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HexfieldType
    constexpr HexfieldType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public AdvancedColorPicker.HexfieldType RGB
    static constexpr const int RGB = 1;
    // Get static field: static public AdvancedColorPicker.HexfieldType RGB
    static ::AdvancedColorPicker::HexfieldType _get_RGB();
    // Set static field: static public AdvancedColorPicker.HexfieldType RGB
    static void _set_RGB(::AdvancedColorPicker::HexfieldType value);
    // static field const value: static public AdvancedColorPicker.HexfieldType RGBA
    static constexpr const int RGBA = 2;
    // Get static field: static public AdvancedColorPicker.HexfieldType RGBA
    static ::AdvancedColorPicker::HexfieldType _get_RGBA();
    // Set static field: static public AdvancedColorPicker.HexfieldType RGBA
    static void _set_RGBA(::AdvancedColorPicker::HexfieldType value);
    // static field const value: static public AdvancedColorPicker.HexfieldType RRGGBB
    static constexpr const int RRGGBB = 4;
    // Get static field: static public AdvancedColorPicker.HexfieldType RRGGBB
    static ::AdvancedColorPicker::HexfieldType _get_RRGGBB();
    // Set static field: static public AdvancedColorPicker.HexfieldType RRGGBB
    static void _set_RRGGBB(::AdvancedColorPicker::HexfieldType value);
    // static field const value: static public AdvancedColorPicker.HexfieldType RRGGBBAA
    static constexpr const int RRGGBBAA = 8;
    // Get static field: static public AdvancedColorPicker.HexfieldType RRGGBBAA
    static ::AdvancedColorPicker::HexfieldType _get_RRGGBBAA();
    // Set static field: static public AdvancedColorPicker.HexfieldType RRGGBBAA
    static void _set_RRGGBBAA(::AdvancedColorPicker::HexfieldType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // AdvancedColorPicker.HexfieldType
  #pragma pack(pop)
  static check_size<sizeof(HexfieldType), 0 + sizeof(int)> __AdvancedColorPicker_HexfieldTypeSizeCheck;
  static_assert(sizeof(HexfieldType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

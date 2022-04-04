// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Sigtrap.VrTunnellingPro.Angle
#include "Sigtrap/VrTunnellingPro/Angle.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::Angle::AngleType, "Sigtrap.VrTunnellingPro", "Angle/AngleType");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType
  // [TokenAttribute] Offset: FFFFFFFF
  struct Angle::AngleType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AngleType
    constexpr AngleType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ANGLE
    static constexpr const int ANGLE = 0;
    // Get static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ANGLE
    static ::Sigtrap::VrTunnellingPro::Angle::AngleType _get_ANGLE();
    // Set static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ANGLE
    static void _set_ANGLE(::Sigtrap::VrTunnellingPro::Angle::AngleType value);
    // static field const value: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ACUTE
    static constexpr const int ACUTE = 1;
    // Get static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ACUTE
    static ::Sigtrap::VrTunnellingPro::Angle::AngleType _get_ACUTE();
    // Set static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType ACUTE
    static void _set_ACUTE(::Sigtrap::VrTunnellingPro::Angle::AngleType value);
    // static field const value: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType REFLEX
    static constexpr const int REFLEX = 2;
    // Get static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType REFLEX
    static ::Sigtrap::VrTunnellingPro::Angle::AngleType _get_REFLEX();
    // Set static field: static public Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType REFLEX
    static void _set_REFLEX(::Sigtrap::VrTunnellingPro::Angle::AngleType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Sigtrap.VrTunnellingPro.Angle/Sigtrap.VrTunnellingPro.AngleType
  #pragma pack(pop)
  static check_size<sizeof(Angle::AngleType), 0 + sizeof(int)> __Sigtrap_VrTunnellingPro_Angle_AngleTypeSizeCheck;
  static_assert(sizeof(Angle::AngleType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

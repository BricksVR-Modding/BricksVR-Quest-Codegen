// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Sigtrap.VrTunnellingPro.TunnellingBase
#include "Sigtrap/VrTunnellingPro/TunnellingBase.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode, "Sigtrap.VrTunnellingPro", "TunnellingBase/MaskMode");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TunnellingBase::MaskMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MaskMode
    constexpr MaskMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode OFF
    static constexpr const int OFF = 0;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode OFF
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode _get_OFF();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode OFF
    static void _set_OFF(::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode MASK
    static constexpr const int MASK = 1;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode MASK
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode _get_MASK();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode MASK
    static void _set_MASK(::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode WINDOW
    static constexpr const int WINDOW = 2;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode WINDOW
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode _get_WINDOW();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode WINDOW
    static void _set_WINDOW(::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode PORTAL
    static constexpr const int PORTAL = 3;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode PORTAL
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode _get_PORTAL();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode PORTAL
    static void _set_PORTAL(::Sigtrap::VrTunnellingPro::TunnellingBase::MaskMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MaskMode
  #pragma pack(pop)
  static check_size<sizeof(TunnellingBase::MaskMode), 0 + sizeof(int)> __Sigtrap_VrTunnellingPro_TunnellingBase_MaskModeSizeCheck;
  static_assert(sizeof(TunnellingBase::MaskMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

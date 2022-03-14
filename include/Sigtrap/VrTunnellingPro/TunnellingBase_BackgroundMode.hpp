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
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode, "Sigtrap.VrTunnellingPro", "TunnellingBase/BackgroundMode");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct TunnellingBase::BackgroundMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BackgroundMode
    constexpr BackgroundMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode COLOR
    static constexpr const int COLOR = 0;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode COLOR
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_COLOR();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode COLOR
    static void _set_COLOR(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode SKYBOX
    static constexpr const int SKYBOX = 1;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode SKYBOX
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_SKYBOX();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode SKYBOX
    static void _set_SKYBOX(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_COLOR
    static constexpr const int CAGE_COLOR = 2;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_COLOR
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_CAGE_COLOR();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_COLOR
    static void _set_CAGE_COLOR(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_SKYBOX
    static constexpr const int CAGE_SKYBOX = 3;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_SKYBOX
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_CAGE_SKYBOX();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_SKYBOX
    static void _set_CAGE_SKYBOX(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_ONLY
    static constexpr const int CAGE_ONLY = 4;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_ONLY
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_CAGE_ONLY();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode CAGE_ONLY
    static void _set_CAGE_ONLY(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode BLUR
    static constexpr const int BLUR = 5;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode BLUR
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode _get_BLUR();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode BLUR
    static void _set_BLUR(::Sigtrap::VrTunnellingPro::TunnellingBase::BackgroundMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.BackgroundMode
  #pragma pack(pop)
  static check_size<sizeof(TunnellingBase::BackgroundMode), 0 + sizeof(int)> __Sigtrap_VrTunnellingPro_TunnellingBase_BackgroundModeSizeCheck;
  static_assert(sizeof(TunnellingBase::BackgroundMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

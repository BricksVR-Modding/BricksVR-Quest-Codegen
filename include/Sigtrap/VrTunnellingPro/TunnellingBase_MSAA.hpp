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
DEFINE_IL2CPP_ARG_TYPE(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA, "Sigtrap.VrTunnellingPro", "TunnellingBase/MSAA");
// Type namespace: Sigtrap.VrTunnellingPro
namespace Sigtrap::VrTunnellingPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA
  // [TokenAttribute] Offset: FFFFFFFF
  struct TunnellingBase::MSAA/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MSAA
    constexpr MSAA(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA AUTO
    static constexpr const int AUTO = 0;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA AUTO
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA _get_AUTO();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA AUTO
    static void _set_AUTO(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA OFF
    static constexpr const int OFF = 1;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA OFF
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA _get_OFF();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA OFF
    static void _set_OFF(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X2
    static constexpr const int X2 = 2;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X2
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA _get_X2();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X2
    static void _set_X2(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X4
    static constexpr const int X4 = 3;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X4
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA _get_X4();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X4
    static void _set_X4(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA value);
    // static field const value: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X8
    static constexpr const int X8 = 4;
    // Get static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X8
    static ::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA _get_X8();
    // Set static field: static public Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA X8
    static void _set_X8(::Sigtrap::VrTunnellingPro::TunnellingBase::MSAA value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Sigtrap.VrTunnellingPro.TunnellingBase/Sigtrap.VrTunnellingPro.MSAA
  #pragma pack(pop)
  static check_size<sizeof(TunnellingBase::MSAA), 0 + sizeof(int)> __Sigtrap_VrTunnellingPro_TunnellingBase_MSAASizeCheck;
  static_assert(sizeof(TunnellingBase::MSAA) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

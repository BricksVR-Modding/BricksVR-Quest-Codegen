// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/ActivityControl");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnsafeNativeMethods_ManifestEtw::ActivityControl/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: ActivityControl
    constexpr ActivityControl(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_ID
    static constexpr const uint EVENT_ACTIVITY_CTRL_GET_ID = 1u;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_ID
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl _get_EVENT_ACTIVITY_CTRL_GET_ID();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_ID
    static void _set_EVENT_ACTIVITY_CTRL_GET_ID(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_SET_ID
    static constexpr const uint EVENT_ACTIVITY_CTRL_SET_ID = 2u;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_SET_ID
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl _get_EVENT_ACTIVITY_CTRL_SET_ID();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_SET_ID
    static void _set_EVENT_ACTIVITY_CTRL_SET_ID(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_ID
    static constexpr const uint EVENT_ACTIVITY_CTRL_CREATE_ID = 3u;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_ID
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl _get_EVENT_ACTIVITY_CTRL_CREATE_ID();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_ID
    static void _set_EVENT_ACTIVITY_CTRL_CREATE_ID(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_SET_ID
    static constexpr const uint EVENT_ACTIVITY_CTRL_GET_SET_ID = 4u;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_SET_ID
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl _get_EVENT_ACTIVITY_CTRL_GET_SET_ID();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_GET_SET_ID
    static void _set_EVENT_ACTIVITY_CTRL_GET_SET_ID(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl value);
    // static field const value: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_SET_ID
    static constexpr const uint EVENT_ACTIVITY_CTRL_CREATE_SET_ID = 5u;
    // Get static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_SET_ID
    static ::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl _get_EVENT_ACTIVITY_CTRL_CREATE_SET_ID();
    // Set static field: static public Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl EVENT_ACTIVITY_CTRL_CREATE_SET_ID
    static void _set_EVENT_ACTIVITY_CTRL_CREATE_SET_ID(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::ActivityControl value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.ActivityControl
  #pragma pack(pop)
  static check_size<sizeof(UnsafeNativeMethods_ManifestEtw::ActivityControl), 0 + sizeof(uint)> __Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_ActivityControlSizeCheck;
  static_assert(sizeof(UnsafeNativeMethods_ManifestEtw::ActivityControl) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

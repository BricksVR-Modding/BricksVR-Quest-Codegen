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
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRScreenshotError
  struct EVRScreenshotError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::EVRScreenshotError, "OVR.OpenVR", "EVRScreenshotError");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.EVRScreenshotError
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRScreenshotError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EVRScreenshotError
    constexpr EVRScreenshotError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.EVRScreenshotError None
    static constexpr const int None = 0;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError None
    static ::OVR::OpenVR::EVRScreenshotError _get_None();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError None
    static void _set_None(::OVR::OpenVR::EVRScreenshotError value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotError RequestFailed
    static constexpr const int RequestFailed = 1;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError RequestFailed
    static ::OVR::OpenVR::EVRScreenshotError _get_RequestFailed();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError RequestFailed
    static void _set_RequestFailed(::OVR::OpenVR::EVRScreenshotError value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotError IncompatibleVersion
    static constexpr const int IncompatibleVersion = 100;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError IncompatibleVersion
    static ::OVR::OpenVR::EVRScreenshotError _get_IncompatibleVersion();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError IncompatibleVersion
    static void _set_IncompatibleVersion(::OVR::OpenVR::EVRScreenshotError value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotError NotFound
    static constexpr const int NotFound = 101;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError NotFound
    static ::OVR::OpenVR::EVRScreenshotError _get_NotFound();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError NotFound
    static void _set_NotFound(::OVR::OpenVR::EVRScreenshotError value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotError BufferTooSmall
    static constexpr const int BufferTooSmall = 102;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError BufferTooSmall
    static ::OVR::OpenVR::EVRScreenshotError _get_BufferTooSmall();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError BufferTooSmall
    static void _set_BufferTooSmall(::OVR::OpenVR::EVRScreenshotError value);
    // static field const value: static public OVR.OpenVR.EVRScreenshotError ScreenshotAlreadyInProgress
    static constexpr const int ScreenshotAlreadyInProgress = 108;
    // Get static field: static public OVR.OpenVR.EVRScreenshotError ScreenshotAlreadyInProgress
    static ::OVR::OpenVR::EVRScreenshotError _get_ScreenshotAlreadyInProgress();
    // Set static field: static public OVR.OpenVR.EVRScreenshotError ScreenshotAlreadyInProgress
    static void _set_ScreenshotAlreadyInProgress(::OVR::OpenVR::EVRScreenshotError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.EVRScreenshotError
  #pragma pack(pop)
  static check_size<sizeof(EVRScreenshotError), 0 + sizeof(int)> __OVR_OpenVR_EVRScreenshotErrorSizeCheck;
  static_assert(sizeof(EVRScreenshotError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

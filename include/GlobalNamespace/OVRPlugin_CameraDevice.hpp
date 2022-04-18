// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::CameraDevice, "", "OVRPlugin/CameraDevice");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/CameraDevice
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::CameraDevice/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CameraDevice
    constexpr CameraDevice(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/CameraDevice None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/CameraDevice None
    static ::GlobalNamespace::OVRPlugin::CameraDevice _get_None();
    // Set static field: static public OVRPlugin/CameraDevice None
    static void _set_None(::GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice WebCamera0
    static constexpr const int WebCamera0 = 100;
    // Get static field: static public OVRPlugin/CameraDevice WebCamera0
    static ::GlobalNamespace::OVRPlugin::CameraDevice _get_WebCamera0();
    // Set static field: static public OVRPlugin/CameraDevice WebCamera0
    static void _set_WebCamera0(::GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice WebCamera1
    static constexpr const int WebCamera1 = 101;
    // Get static field: static public OVRPlugin/CameraDevice WebCamera1
    static ::GlobalNamespace::OVRPlugin::CameraDevice _get_WebCamera1();
    // Set static field: static public OVRPlugin/CameraDevice WebCamera1
    static void _set_WebCamera1(::GlobalNamespace::OVRPlugin::CameraDevice value);
    // static field const value: static public OVRPlugin/CameraDevice ZEDCamera
    static constexpr const int ZEDCamera = 300;
    // Get static field: static public OVRPlugin/CameraDevice ZEDCamera
    static ::GlobalNamespace::OVRPlugin::CameraDevice _get_ZEDCamera();
    // Set static field: static public OVRPlugin/CameraDevice ZEDCamera
    static void _set_ZEDCamera(::GlobalNamespace::OVRPlugin::CameraDevice value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/CameraDevice
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraDevice), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_CameraDeviceSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraDevice) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

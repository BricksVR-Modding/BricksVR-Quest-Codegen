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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::LayerLayout, "", "OVRPlugin/LayerLayout");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/LayerLayout
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::LayerLayout/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LayerLayout
    constexpr LayerLayout(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/LayerLayout Stereo
    static constexpr const int Stereo = 0;
    // Get static field: static public OVRPlugin/LayerLayout Stereo
    static ::GlobalNamespace::OVRPlugin::LayerLayout _get_Stereo();
    // Set static field: static public OVRPlugin/LayerLayout Stereo
    static void _set_Stereo(::GlobalNamespace::OVRPlugin::LayerLayout value);
    // static field const value: static public OVRPlugin/LayerLayout Mono
    static constexpr const int Mono = 1;
    // Get static field: static public OVRPlugin/LayerLayout Mono
    static ::GlobalNamespace::OVRPlugin::LayerLayout _get_Mono();
    // Set static field: static public OVRPlugin/LayerLayout Mono
    static void _set_Mono(::GlobalNamespace::OVRPlugin::LayerLayout value);
    // static field const value: static public OVRPlugin/LayerLayout DoubleWide
    static constexpr const int DoubleWide = 2;
    // Get static field: static public OVRPlugin/LayerLayout DoubleWide
    static ::GlobalNamespace::OVRPlugin::LayerLayout _get_DoubleWide();
    // Set static field: static public OVRPlugin/LayerLayout DoubleWide
    static void _set_DoubleWide(::GlobalNamespace::OVRPlugin::LayerLayout value);
    // static field const value: static public OVRPlugin/LayerLayout Array
    static constexpr const int Array = 3;
    // Get static field: static public OVRPlugin/LayerLayout Array
    static ::GlobalNamespace::OVRPlugin::LayerLayout _get_Array();
    // Set static field: static public OVRPlugin/LayerLayout Array
    static void _set_Array(::GlobalNamespace::OVRPlugin::LayerLayout value);
    // static field const value: static public OVRPlugin/LayerLayout EnumSize
    static constexpr const int EnumSize = 15;
    // Get static field: static public OVRPlugin/LayerLayout EnumSize
    static ::GlobalNamespace::OVRPlugin::LayerLayout _get_EnumSize();
    // Set static field: static public OVRPlugin/LayerLayout EnumSize
    static void _set_EnumSize(::GlobalNamespace::OVRPlugin::LayerLayout value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRPlugin/LayerLayout
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::LayerLayout), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_LayerLayoutSizeCheck;
  static_assert(sizeof(OVRPlugin::LayerLayout) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

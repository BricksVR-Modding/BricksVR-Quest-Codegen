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
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::SystemHeadset, "", "OVRPlugin/SystemHeadset");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/SystemHeadset
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::SystemHeadset/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SystemHeadset
    constexpr SystemHeadset(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/SystemHeadset None
    static constexpr const int None = 0;
    // Get static field: static public OVRPlugin/SystemHeadset None
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_None();
    // Set static field: static public OVRPlugin/SystemHeadset None
    static void _set_None(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Oculus_Quest
    static constexpr const int Oculus_Quest = 8;
    // Get static field: static public OVRPlugin/SystemHeadset Oculus_Quest
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Oculus_Quest();
    // Set static field: static public OVRPlugin/SystemHeadset Oculus_Quest
    static void _set_Oculus_Quest(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_9
    static constexpr const int Placeholder_9 = 9;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_9
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_9();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_9
    static void _set_Placeholder_9(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_10
    static constexpr const int Placeholder_10 = 10;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_10
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_10();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_10
    static void _set_Placeholder_10(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_11
    static constexpr const int Placeholder_11 = 11;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_11
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_11();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_11
    static void _set_Placeholder_11(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_12
    static constexpr const int Placeholder_12 = 12;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_12
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_12();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_12
    static void _set_Placeholder_12(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_13
    static constexpr const int Placeholder_13 = 13;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_13
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_13();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_13
    static void _set_Placeholder_13(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Placeholder_14
    static constexpr const int Placeholder_14 = 14;
    // Get static field: static public OVRPlugin/SystemHeadset Placeholder_14
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Placeholder_14();
    // Set static field: static public OVRPlugin/SystemHeadset Placeholder_14
    static void _set_Placeholder_14(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Rift_DK1
    static constexpr const int Rift_DK1 = 4096;
    // Get static field: static public OVRPlugin/SystemHeadset Rift_DK1
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Rift_DK1();
    // Set static field: static public OVRPlugin/SystemHeadset Rift_DK1
    static void _set_Rift_DK1(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Rift_DK2
    static constexpr const int Rift_DK2 = 4097;
    // Get static field: static public OVRPlugin/SystemHeadset Rift_DK2
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Rift_DK2();
    // Set static field: static public OVRPlugin/SystemHeadset Rift_DK2
    static void _set_Rift_DK2(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Rift_CV1
    static constexpr const int Rift_CV1 = 4098;
    // Get static field: static public OVRPlugin/SystemHeadset Rift_CV1
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Rift_CV1();
    // Set static field: static public OVRPlugin/SystemHeadset Rift_CV1
    static void _set_Rift_CV1(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Rift_CB
    static constexpr const int Rift_CB = 4099;
    // Get static field: static public OVRPlugin/SystemHeadset Rift_CB
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Rift_CB();
    // Set static field: static public OVRPlugin/SystemHeadset Rift_CB
    static void _set_Rift_CB(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Rift_S
    static constexpr const int Rift_S = 4100;
    // Get static field: static public OVRPlugin/SystemHeadset Rift_S
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Rift_S();
    // Set static field: static public OVRPlugin/SystemHeadset Rift_S
    static void _set_Rift_S(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset Oculus_Link_Quest
    static constexpr const int Oculus_Link_Quest = 4101;
    // Get static field: static public OVRPlugin/SystemHeadset Oculus_Link_Quest
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_Oculus_Link_Quest();
    // Set static field: static public OVRPlugin/SystemHeadset Oculus_Link_Quest
    static void _set_Oculus_Link_Quest(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4102
    static constexpr const int PC_Placeholder_4102 = 4102;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4102
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4102();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4102
    static void _set_PC_Placeholder_4102(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4103
    static constexpr const int PC_Placeholder_4103 = 4103;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4103
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4103();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4103
    static void _set_PC_Placeholder_4103(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4104
    static constexpr const int PC_Placeholder_4104 = 4104;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4104
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4104();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4104
    static void _set_PC_Placeholder_4104(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4105
    static constexpr const int PC_Placeholder_4105 = 4105;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4105
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4105();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4105
    static void _set_PC_Placeholder_4105(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4106
    static constexpr const int PC_Placeholder_4106 = 4106;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4106
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4106();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4106
    static void _set_PC_Placeholder_4106(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // static field const value: static public OVRPlugin/SystemHeadset PC_Placeholder_4107
    static constexpr const int PC_Placeholder_4107 = 4107;
    // Get static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4107
    static ::GlobalNamespace::OVRPlugin::SystemHeadset _get_PC_Placeholder_4107();
    // Set static field: static public OVRPlugin/SystemHeadset PC_Placeholder_4107
    static void _set_PC_Placeholder_4107(::GlobalNamespace::OVRPlugin::SystemHeadset value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // OVRPlugin/SystemHeadset
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::SystemHeadset), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_SystemHeadsetSizeCheck;
  static_assert(sizeof(OVRPlugin::SystemHeadset) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

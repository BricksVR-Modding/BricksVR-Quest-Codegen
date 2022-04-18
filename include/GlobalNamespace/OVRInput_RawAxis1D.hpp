// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::RawAxis1D, "", "OVRInput/RawAxis1D");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/RawAxis1D
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct OVRInput::RawAxis1D/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RawAxis1D
    constexpr RawAxis1D(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRInput/RawAxis1D None
    static constexpr const int None = 0;
    // Get static field: static public OVRInput/RawAxis1D None
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_None();
    // Set static field: static public OVRInput/RawAxis1D None
    static void _set_None(::GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D LIndexTrigger
    static constexpr const int LIndexTrigger = 1;
    // Get static field: static public OVRInput/RawAxis1D LIndexTrigger
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_LIndexTrigger();
    // Set static field: static public OVRInput/RawAxis1D LIndexTrigger
    static void _set_LIndexTrigger(::GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D LHandTrigger
    static constexpr const int LHandTrigger = 4;
    // Get static field: static public OVRInput/RawAxis1D LHandTrigger
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_LHandTrigger();
    // Set static field: static public OVRInput/RawAxis1D LHandTrigger
    static void _set_LHandTrigger(::GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D RIndexTrigger
    static constexpr const int RIndexTrigger = 2;
    // Get static field: static public OVRInput/RawAxis1D RIndexTrigger
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_RIndexTrigger();
    // Set static field: static public OVRInput/RawAxis1D RIndexTrigger
    static void _set_RIndexTrigger(::GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D RHandTrigger
    static constexpr const int RHandTrigger = 8;
    // Get static field: static public OVRInput/RawAxis1D RHandTrigger
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_RHandTrigger();
    // Set static field: static public OVRInput/RawAxis1D RHandTrigger
    static void _set_RHandTrigger(::GlobalNamespace::OVRInput::RawAxis1D value);
    // static field const value: static public OVRInput/RawAxis1D Any
    static constexpr const int Any = -1;
    // Get static field: static public OVRInput/RawAxis1D Any
    static ::GlobalNamespace::OVRInput::RawAxis1D _get_Any();
    // Set static field: static public OVRInput/RawAxis1D Any
    static void _set_Any(::GlobalNamespace::OVRInput::RawAxis1D value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRInput/RawAxis1D
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::RawAxis1D), 0 + sizeof(int)> __GlobalNamespace_OVRInput_RawAxis1DSizeCheck;
  static_assert(sizeof(OVRInput::RawAxis1D) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

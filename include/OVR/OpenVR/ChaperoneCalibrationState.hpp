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
  // Forward declaring type: ChaperoneCalibrationState
  struct ChaperoneCalibrationState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::ChaperoneCalibrationState, "OVR.OpenVR", "ChaperoneCalibrationState");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.ChaperoneCalibrationState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChaperoneCalibrationState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChaperoneCalibrationState
    constexpr ChaperoneCalibrationState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState OK
    static constexpr const int OK = 1;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState OK
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_OK();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState OK
    static void _set_OK(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Warning
    static constexpr const int Warning = 100;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Warning();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning
    static void _set_Warning(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static constexpr const int Warning_BaseStationMayHaveMoved = 101;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Warning_BaseStationMayHaveMoved();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationMayHaveMoved
    static void _set_Warning_BaseStationMayHaveMoved(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static constexpr const int Warning_BaseStationRemoved = 102;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Warning_BaseStationRemoved();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_BaseStationRemoved
    static void _set_Warning_BaseStationRemoved(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static constexpr const int Warning_SeatedBoundsInvalid = 103;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Warning_SeatedBoundsInvalid();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Warning_SeatedBoundsInvalid
    static void _set_Warning_SeatedBoundsInvalid(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Error
    static constexpr const int Error = 200;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Error
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Error();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Error
    static void _set_Error(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static constexpr const int Error_BaseStationUninitialized = 201;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Error_BaseStationUninitialized();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationUninitialized
    static void _set_Error_BaseStationUninitialized(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationConflict
    static constexpr const int Error_BaseStationConflict = 202;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationConflict
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Error_BaseStationConflict();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_BaseStationConflict
    static void _set_Error_BaseStationConflict(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static constexpr const int Error_PlayAreaInvalid = 203;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Error_PlayAreaInvalid();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_PlayAreaInvalid
    static void _set_Error_PlayAreaInvalid(::OVR::OpenVR::ChaperoneCalibrationState value);
    // static field const value: static public OVR.OpenVR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static constexpr const int Error_CollisionBoundsInvalid = 204;
    // Get static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static ::OVR::OpenVR::ChaperoneCalibrationState _get_Error_CollisionBoundsInvalid();
    // Set static field: static public OVR.OpenVR.ChaperoneCalibrationState Error_CollisionBoundsInvalid
    static void _set_Error_CollisionBoundsInvalid(::OVR::OpenVR::ChaperoneCalibrationState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // OVR.OpenVR.ChaperoneCalibrationState
  #pragma pack(pop)
  static check_size<sizeof(ChaperoneCalibrationState), 0 + sizeof(int)> __OVR_OpenVR_ChaperoneCalibrationStateSizeCheck;
  static_assert(sizeof(ChaperoneCalibrationState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

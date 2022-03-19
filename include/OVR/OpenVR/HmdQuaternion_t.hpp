// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdQuaternion_t
  struct HmdQuaternion_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdQuaternion_t, "OVR.OpenVR", "HmdQuaternion_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.HmdQuaternion_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct HmdQuaternion_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double w
    // Size: 0x8
    // Offset: 0x0
    double w;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double x
    // Size: 0x8
    // Offset: 0x8
    double x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double y
    // Size: 0x8
    // Offset: 0x10
    double y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double z
    // Size: 0x8
    // Offset: 0x18
    double z;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: HmdQuaternion_t
    constexpr HmdQuaternion_t(double w_ = {}, double x_ = {}, double y_ = {}, double z_ = {}) noexcept : w{w_}, x{x_}, y{y_}, z{z_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double w
    double& dyn_w();
    // Get instance field reference: public System.Double x
    double& dyn_x();
    // Get instance field reference: public System.Double y
    double& dyn_y();
    // Get instance field reference: public System.Double z
    double& dyn_z();
  }; // OVR.OpenVR.HmdQuaternion_t
  #pragma pack(pop)
  static check_size<sizeof(HmdQuaternion_t), 24 + sizeof(double)> __OVR_OpenVR_HmdQuaternion_tSizeCheck;
  static_assert(sizeof(HmdQuaternion_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: InputAnalogActionData_t
  struct InputAnalogActionData_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputAnalogActionData_t, "OVR.OpenVR", "InputAnalogActionData_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.InputAnalogActionData_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputAnalogActionData_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Boolean bActive
    // Size: 0x1
    // Offset: 0x0
    bool bActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bActive and: activeOrigin
    char __padding0[0x7] = {};
    // public System.UInt64 activeOrigin
    // Size: 0x8
    // Offset: 0x8
    uint64_t activeOrigin;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.Single x
    // Size: 0x4
    // Offset: 0x10
    float x;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single y
    // Size: 0x4
    // Offset: 0x14
    float y;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single z
    // Size: 0x4
    // Offset: 0x18
    float z;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaX
    // Size: 0x4
    // Offset: 0x1C
    float deltaX;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaY
    // Size: 0x4
    // Offset: 0x20
    float deltaY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single deltaZ
    // Size: 0x4
    // Offset: 0x24
    float deltaZ;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single fUpdateTime
    // Size: 0x4
    // Offset: 0x28
    float fUpdateTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: InputAnalogActionData_t
    constexpr InputAnalogActionData_t(bool bActive_ = {}, uint64_t activeOrigin_ = {}, float x_ = {}, float y_ = {}, float z_ = {}, float deltaX_ = {}, float deltaY_ = {}, float deltaZ_ = {}, float fUpdateTime_ = {}) noexcept : bActive{bActive_}, activeOrigin{activeOrigin_}, x{x_}, y{y_}, z{z_}, deltaX{deltaX_}, deltaY{deltaY_}, deltaZ{deltaZ_}, fUpdateTime{fUpdateTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Boolean bActive
    [[deprecated("Use field access instead!")]] bool& dyn_bActive();
    // Get instance field reference: public System.UInt64 activeOrigin
    [[deprecated("Use field access instead!")]] uint64_t& dyn_activeOrigin();
    // Get instance field reference: public System.Single x
    [[deprecated("Use field access instead!")]] float& dyn_x();
    // Get instance field reference: public System.Single y
    [[deprecated("Use field access instead!")]] float& dyn_y();
    // Get instance field reference: public System.Single z
    [[deprecated("Use field access instead!")]] float& dyn_z();
    // Get instance field reference: public System.Single deltaX
    [[deprecated("Use field access instead!")]] float& dyn_deltaX();
    // Get instance field reference: public System.Single deltaY
    [[deprecated("Use field access instead!")]] float& dyn_deltaY();
    // Get instance field reference: public System.Single deltaZ
    [[deprecated("Use field access instead!")]] float& dyn_deltaZ();
    // Get instance field reference: public System.Single fUpdateTime
    [[deprecated("Use field access instead!")]] float& dyn_fUpdateTime();
  }; // OVR.OpenVR.InputAnalogActionData_t
  #pragma pack(pop)
  static check_size<sizeof(InputAnalogActionData_t), 40 + sizeof(float)> __OVR_OpenVR_InputAnalogActionData_tSizeCheck;
  static_assert(sizeof(InputAnalogActionData_t) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

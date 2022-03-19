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
  // Forward declaring type: VREvent_Controller_t
  struct VREvent_Controller_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_Controller_t, "OVR.OpenVR", "VREvent_Controller_t");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVR.OpenVR.VREvent_Controller_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct VREvent_Controller_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 button
    // Size: 0x4
    // Offset: 0x0
    uint button;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: VREvent_Controller_t
    constexpr VREvent_Controller_t(uint button_ = {}) noexcept : button{button_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return button;
    }
    // Get instance field reference: public System.UInt32 button
    uint& dyn_button();
  }; // OVR.OpenVR.VREvent_Controller_t
  #pragma pack(pop)
  static check_size<sizeof(VREvent_Controller_t), 0 + sizeof(uint)> __OVR_OpenVR_VREvent_Controller_tSizeCheck;
  static_assert(sizeof(VREvent_Controller_t) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Frustumf2, "", "OVRPlugin/Frustumf2");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Frustumf2
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Frustumf2/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single zNear
    // Size: 0x4
    // Offset: 0x0
    float zNear;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single zFar
    // Size: 0x4
    // Offset: 0x4
    float zFar;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public OVRPlugin/Fovf Fov
    // Size: 0x10
    // Offset: 0x8
    ::GlobalNamespace::OVRPlugin::Fovf Fov;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Fovf) == 0x10);
    public:
    // Creating value type constructor for type: Frustumf2
    constexpr Frustumf2(float zNear_ = {}, float zFar_ = {}, ::GlobalNamespace::OVRPlugin::Fovf Fov_ = {}) noexcept : zNear{zNear_}, zFar{zFar_}, Fov{Fov_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single zNear
    float& dyn_zNear();
    // Get instance field reference: public System.Single zFar
    float& dyn_zFar();
    // Get instance field reference: public OVRPlugin/Fovf Fov
    ::GlobalNamespace::OVRPlugin::Fovf& dyn_Fov();
  }; // OVRPlugin/Frustumf2
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Frustumf2), 8 + sizeof(::GlobalNamespace::OVRPlugin::Fovf)> __GlobalNamespace_OVRPlugin_Frustumf2SizeCheck;
  static_assert(sizeof(OVRPlugin::Frustumf2) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

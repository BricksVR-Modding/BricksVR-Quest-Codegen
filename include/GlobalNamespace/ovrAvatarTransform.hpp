// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarTransform
  struct ovrAvatarTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarTransform, "", "ovrAvatarTransform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarTransform
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarTransform/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion orientation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion orientation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 scale
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 scale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating value type constructor for type: ovrAvatarTransform
    constexpr ovrAvatarTransform(::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Quaternion orientation_ = {}, ::UnityEngine::Vector3 scale_ = {}) noexcept : position{position_}, orientation{orientation_}, scale{scale_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Quaternion orientation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_orientation();
    // Get instance field reference: public UnityEngine.Vector3 scale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_scale();
  }; // ovrAvatarTransform
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarTransform), 28 + sizeof(::UnityEngine::Vector3)> __GlobalNamespace_ovrAvatarTransformSizeCheck;
  static_assert(sizeof(ovrAvatarTransform) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

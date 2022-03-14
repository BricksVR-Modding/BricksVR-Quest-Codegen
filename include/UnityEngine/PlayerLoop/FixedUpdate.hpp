// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::PlayerLoop
namespace UnityEngine::PlayerLoop {
}
// Completed forward declares
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Forward declaring type: FixedUpdate
  struct FixedUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayerLoop::FixedUpdate, "UnityEngine.PlayerLoop", "FixedUpdate");
// Type namespace: UnityEngine.PlayerLoop
namespace UnityEngine::PlayerLoop {
  // Size: 0x0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.PlayerLoop.FixedUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: 6DA054
  // [MovedFromAttribute] Offset: 6DA054
  struct FixedUpdate/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::ClearLines
    struct ClearLines;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::DirectorFixedSampleTime
    struct DirectorFixedSampleTime;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::AudioFixedUpdate
    struct AudioFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::ScriptRunBehaviourFixedUpdate
    struct ScriptRunBehaviourFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::DirectorFixedUpdate
    struct DirectorFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::LegacyFixedAnimationUpdate
    struct LegacyFixedAnimationUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::XRFixedUpdate
    struct XRFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::PhysicsFixedUpdate
    struct PhysicsFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::Physics2DFixedUpdate
    struct Physics2DFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::PhysicsClothFixedUpdate
    struct PhysicsClothFixedUpdate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::DirectorFixedUpdatePostPhysics
    struct DirectorFixedUpdatePostPhysics;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::ScriptRunDelayedFixedFrameRate
    struct ScriptRunDelayedFixedFrameRate;
    // Nested type: ::UnityEngine::PlayerLoop::FixedUpdate::NewInputFixedUpdate
    struct NewInputFixedUpdate;
    // Creating value type constructor for type: FixedUpdate
    constexpr FixedUpdate() noexcept {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
  }; // UnityEngine.PlayerLoop.FixedUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

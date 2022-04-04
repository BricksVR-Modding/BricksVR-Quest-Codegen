// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8F
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.EmitParams
  // [TokenAttribute] Offset: FFFFFFFF
  struct ParticleSystem::EmitParams/*, public ::System::ValueType*/ {
    public:
    public:
    // [NativeNameAttribute] Offset: 0xFCFA0
    // private UnityEngine.ParticleSystem/UnityEngine.Particle m_Particle
    // Size: 0x84
    // Offset: 0x0
    ::UnityEngine::ParticleSystem::Particle m_Particle;
    // Field size check
    static_assert(sizeof(::UnityEngine::ParticleSystem::Particle) == 0x84);
    // [NativeNameAttribute] Offset: 0xFD020
    // private System.Boolean m_PositionSet
    // Size: 0x1
    // Offset: 0x84
    bool m_PositionSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD0A0
    // private System.Boolean m_VelocitySet
    // Size: 0x1
    // Offset: 0x85
    bool m_VelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD0D0
    // private System.Boolean m_AxisOfRotationSet
    // Size: 0x1
    // Offset: 0x86
    bool m_AxisOfRotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD1F0
    // private System.Boolean m_RotationSet
    // Size: 0x1
    // Offset: 0x87
    bool m_RotationSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD2A0
    // private System.Boolean m_AngularVelocitySet
    // Size: 0x1
    // Offset: 0x88
    bool m_AngularVelocitySet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD330
    // private System.Boolean m_StartSizeSet
    // Size: 0x1
    // Offset: 0x89
    bool m_StartSizeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD410
    // private System.Boolean m_StartColorSet
    // Size: 0x1
    // Offset: 0x8A
    bool m_StartColorSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD4F0
    // private System.Boolean m_RandomSeedSet
    // Size: 0x1
    // Offset: 0x8B
    bool m_RandomSeedSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD670
    // private System.Boolean m_StartLifetimeSet
    // Size: 0x1
    // Offset: 0x8C
    bool m_StartLifetimeSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD6D0
    // private System.Boolean m_MeshIndexSet
    // Size: 0x1
    // Offset: 0x8D
    bool m_MeshIndexSet;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [NativeNameAttribute] Offset: 0xFD730
    // private System.Boolean m_ApplyShapeToPosition
    // Size: 0x1
    // Offset: 0x8E
    bool m_ApplyShapeToPosition;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: EmitParams
    constexpr EmitParams(::UnityEngine::ParticleSystem::Particle m_Particle_ = {}, bool m_PositionSet_ = {}, bool m_VelocitySet_ = {}, bool m_AxisOfRotationSet_ = {}, bool m_RotationSet_ = {}, bool m_AngularVelocitySet_ = {}, bool m_StartSizeSet_ = {}, bool m_StartColorSet_ = {}, bool m_RandomSeedSet_ = {}, bool m_StartLifetimeSet_ = {}, bool m_MeshIndexSet_ = {}, bool m_ApplyShapeToPosition_ = {}) noexcept : m_Particle{m_Particle_}, m_PositionSet{m_PositionSet_}, m_VelocitySet{m_VelocitySet_}, m_AxisOfRotationSet{m_AxisOfRotationSet_}, m_RotationSet{m_RotationSet_}, m_AngularVelocitySet{m_AngularVelocitySet_}, m_StartSizeSet{m_StartSizeSet_}, m_StartColorSet{m_StartColorSet_}, m_RandomSeedSet{m_RandomSeedSet_}, m_StartLifetimeSet{m_StartLifetimeSet_}, m_MeshIndexSet{m_MeshIndexSet_}, m_ApplyShapeToPosition{m_ApplyShapeToPosition_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private UnityEngine.ParticleSystem/UnityEngine.Particle m_Particle
    [[deprecated]] ::UnityEngine::ParticleSystem::Particle& dyn_m_Particle();
    // Get instance field reference: private System.Boolean m_PositionSet
    [[deprecated]] bool& dyn_m_PositionSet();
    // Get instance field reference: private System.Boolean m_VelocitySet
    [[deprecated]] bool& dyn_m_VelocitySet();
    // Get instance field reference: private System.Boolean m_AxisOfRotationSet
    [[deprecated]] bool& dyn_m_AxisOfRotationSet();
    // Get instance field reference: private System.Boolean m_RotationSet
    [[deprecated]] bool& dyn_m_RotationSet();
    // Get instance field reference: private System.Boolean m_AngularVelocitySet
    [[deprecated]] bool& dyn_m_AngularVelocitySet();
    // Get instance field reference: private System.Boolean m_StartSizeSet
    [[deprecated]] bool& dyn_m_StartSizeSet();
    // Get instance field reference: private System.Boolean m_StartColorSet
    [[deprecated]] bool& dyn_m_StartColorSet();
    // Get instance field reference: private System.Boolean m_RandomSeedSet
    [[deprecated]] bool& dyn_m_RandomSeedSet();
    // Get instance field reference: private System.Boolean m_StartLifetimeSet
    [[deprecated]] bool& dyn_m_StartLifetimeSet();
    // Get instance field reference: private System.Boolean m_MeshIndexSet
    [[deprecated]] bool& dyn_m_MeshIndexSet();
    // Get instance field reference: private System.Boolean m_ApplyShapeToPosition
    [[deprecated]] bool& dyn_m_ApplyShapeToPosition();
  }; // UnityEngine.ParticleSystem/UnityEngine.EmitParams
  #pragma pack(pop)
  static check_size<sizeof(ParticleSystem::EmitParams), 142 + sizeof(bool)> __UnityEngine_ParticleSystem_EmitParamsSizeCheck;
  static_assert(sizeof(ParticleSystem::EmitParams) == 0x8F);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

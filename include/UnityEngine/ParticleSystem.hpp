// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Particle because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem*, "UnityEngine", "ParticleSystem");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ParticleSystem
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [UsedByNativeCodeAttribute] Offset: FB580
  // [RequireComponent] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  // [NativeHeaderAttribute] Offset: FB580
  class ParticleSystem : public ::UnityEngine::Component {
    public:
    // Nested type: ::UnityEngine::ParticleSystem::MainModule
    struct MainModule;
    // Nested type: ::UnityEngine::ParticleSystem::EmissionModule
    struct EmissionModule;
    // Nested type: ::UnityEngine::ParticleSystem::ShapeModule
    struct ShapeModule;
    // Nested type: ::UnityEngine::ParticleSystem::Particle
    struct Particle;
    // Nested type: ::UnityEngine::ParticleSystem::EmitParams
    struct EmitParams;
    // Size: 0x84
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.ParticleSystem/UnityEngine.Particle
    // [TokenAttribute] Offset: FFFFFFFF
    // [RequiredByNativeCodeAttribute] Offset: FBBD0
    struct Particle/*, public ::System::ValueType*/ {
      public:
      public:
      // private UnityEngine.Vector3 m_Position
      // Size: 0xC
      // Offset: 0x0
      ::UnityEngine::Vector3 m_Position;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Velocity
      // Size: 0xC
      // Offset: 0xC
      ::UnityEngine::Vector3 m_Velocity;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AnimatedVelocity
      // Size: 0xC
      // Offset: 0x18
      ::UnityEngine::Vector3 m_AnimatedVelocity;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_InitialVelocity
      // Size: 0xC
      // Offset: 0x24
      ::UnityEngine::Vector3 m_InitialVelocity;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AxisOfRotation
      // Size: 0xC
      // Offset: 0x30
      ::UnityEngine::Vector3 m_AxisOfRotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_Rotation
      // Size: 0xC
      // Offset: 0x3C
      ::UnityEngine::Vector3 m_Rotation;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_AngularVelocity
      // Size: 0xC
      // Offset: 0x48
      ::UnityEngine::Vector3 m_AngularVelocity;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Vector3 m_StartSize
      // Size: 0xC
      // Offset: 0x54
      ::UnityEngine::Vector3 m_StartSize;
      // Field size check
      static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
      // private UnityEngine.Color32 m_StartColor
      // Size: 0x4
      // Offset: 0x60
      ::UnityEngine::Color32 m_StartColor;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color32) == 0x4);
      // private System.UInt32 m_RandomSeed
      // Size: 0x4
      // Offset: 0x64
      uint m_RandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.UInt32 m_ParentRandomSeed
      // Size: 0x4
      // Offset: 0x68
      uint m_ParentRandomSeed;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      // private System.Single m_Lifetime
      // Size: 0x4
      // Offset: 0x6C
      float m_Lifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_StartLifetime
      // Size: 0x4
      // Offset: 0x70
      float m_StartLifetime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Int32 m_MeshIndex
      // Size: 0x4
      // Offset: 0x74
      int m_MeshIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // private System.Single m_EmitAccumulator0
      // Size: 0x4
      // Offset: 0x78
      float m_EmitAccumulator0;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.Single m_EmitAccumulator1
      // Size: 0x4
      // Offset: 0x7C
      float m_EmitAccumulator1;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private System.UInt32 m_Flags
      // Size: 0x4
      // Offset: 0x80
      uint m_Flags;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: Particle
      constexpr Particle(::UnityEngine::Vector3 m_Position_ = {}, ::UnityEngine::Vector3 m_Velocity_ = {}, ::UnityEngine::Vector3 m_AnimatedVelocity_ = {}, ::UnityEngine::Vector3 m_InitialVelocity_ = {}, ::UnityEngine::Vector3 m_AxisOfRotation_ = {}, ::UnityEngine::Vector3 m_Rotation_ = {}, ::UnityEngine::Vector3 m_AngularVelocity_ = {}, ::UnityEngine::Vector3 m_StartSize_ = {}, ::UnityEngine::Color32 m_StartColor_ = {}, uint m_RandomSeed_ = {}, uint m_ParentRandomSeed_ = {}, float m_Lifetime_ = {}, float m_StartLifetime_ = {}, int m_MeshIndex_ = {}, float m_EmitAccumulator0_ = {}, float m_EmitAccumulator1_ = {}, uint m_Flags_ = {}) noexcept : m_Position{m_Position_}, m_Velocity{m_Velocity_}, m_AnimatedVelocity{m_AnimatedVelocity_}, m_InitialVelocity{m_InitialVelocity_}, m_AxisOfRotation{m_AxisOfRotation_}, m_Rotation{m_Rotation_}, m_AngularVelocity{m_AngularVelocity_}, m_StartSize{m_StartSize_}, m_StartColor{m_StartColor_}, m_RandomSeed{m_RandomSeed_}, m_ParentRandomSeed{m_ParentRandomSeed_}, m_Lifetime{m_Lifetime_}, m_StartLifetime{m_StartLifetime_}, m_MeshIndex{m_MeshIndex_}, m_EmitAccumulator0{m_EmitAccumulator0_}, m_EmitAccumulator1{m_EmitAccumulator1_}, m_Flags{m_Flags_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private UnityEngine.Vector3 m_Position
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Position();
      // Get instance field reference: private UnityEngine.Vector3 m_Velocity
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Velocity();
      // Get instance field reference: private UnityEngine.Vector3 m_AnimatedVelocity
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_AnimatedVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_InitialVelocity
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_InitialVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_AxisOfRotation
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_AxisOfRotation();
      // Get instance field reference: private UnityEngine.Vector3 m_Rotation
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Rotation();
      // Get instance field reference: private UnityEngine.Vector3 m_AngularVelocity
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_AngularVelocity();
      // Get instance field reference: private UnityEngine.Vector3 m_StartSize
      [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_StartSize();
      // Get instance field reference: private UnityEngine.Color32 m_StartColor
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color32& dyn_m_StartColor();
      // Get instance field reference: private System.UInt32 m_RandomSeed
      [[deprecated("Use field access instead!")]] uint& dyn_m_RandomSeed();
      // Get instance field reference: private System.UInt32 m_ParentRandomSeed
      [[deprecated("Use field access instead!")]] uint& dyn_m_ParentRandomSeed();
      // Get instance field reference: private System.Single m_Lifetime
      [[deprecated("Use field access instead!")]] float& dyn_m_Lifetime();
      // Get instance field reference: private System.Single m_StartLifetime
      [[deprecated("Use field access instead!")]] float& dyn_m_StartLifetime();
      // Get instance field reference: private System.Int32 m_MeshIndex
      [[deprecated("Use field access instead!")]] int& dyn_m_MeshIndex();
      // Get instance field reference: private System.Single m_EmitAccumulator0
      [[deprecated("Use field access instead!")]] float& dyn_m_EmitAccumulator0();
      // Get instance field reference: private System.Single m_EmitAccumulator1
      [[deprecated("Use field access instead!")]] float& dyn_m_EmitAccumulator1();
      // Get instance field reference: private System.UInt32 m_Flags
      [[deprecated("Use field access instead!")]] uint& dyn_m_Flags();
      // public System.Void set_lifetime(System.Single value)
      // Offset: 0x66DB50
      void set_lifetime(float value);
      // public System.Void set_position(UnityEngine.Vector3 value)
      // Offset: 0x66DB60
      void set_position(::UnityEngine::Vector3 value);
      // public System.Void set_velocity(UnityEngine.Vector3 value)
      // Offset: 0x66DC80
      void set_velocity(::UnityEngine::Vector3 value);
      // public System.Void set_remainingLifetime(System.Single value)
      // Offset: 0x66DB50
      void set_remainingLifetime(float value);
      // public System.Void set_startLifetime(System.Single value)
      // Offset: 0x66DC20
      void set_startLifetime(float value);
      // public System.Void set_startColor(UnityEngine.Color32 value)
      // Offset: 0x2E6710
      void set_startColor(::UnityEngine::Color32 value);
      // public System.Void set_randomSeed(System.UInt32 value)
      // Offset: 0x66DB70
      void set_randomSeed(uint value);
      // public System.Void set_startSize(System.Single value)
      // Offset: 0x66DC30
      void set_startSize(float value);
      // public System.Void set_rotation3D(UnityEngine.Vector3 value)
      // Offset: 0x66DB80
      void set_rotation3D(::UnityEngine::Vector3 value);
      // public System.Void set_angularVelocity3D(UnityEngine.Vector3 value)
      // Offset: 0x66DAB0
      void set_angularVelocity3D(::UnityEngine::Vector3 value);
    }; // UnityEngine.ParticleSystem/UnityEngine.Particle
    #pragma pack(pop)
    static check_size<sizeof(ParticleSystem::Particle), 128 + sizeof(uint)> __UnityEngine_ParticleSystem_ParticleSizeCheck;
    static_assert(sizeof(ParticleSystem::Particle) == 0x84);
    // public UnityEngine.ParticleSystem/UnityEngine.MainModule get_main()
    // Offset: 0x350890
    ::UnityEngine::ParticleSystem::MainModule get_main();
    // public UnityEngine.ParticleSystem/UnityEngine.EmissionModule get_emission()
    // Offset: 0x350890
    ::UnityEngine::ParticleSystem::EmissionModule get_emission();
    // public UnityEngine.ParticleSystem/UnityEngine.ShapeModule get_shape()
    // Offset: 0x350890
    ::UnityEngine::ParticleSystem::ShapeModule get_shape();
    // public System.Void Emit(UnityEngine.Vector3 position, UnityEngine.Vector3 velocity, System.Single size, System.Single lifetime, UnityEngine.Color32 color)
    // Offset: 0x66D730
    void Emit(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 velocity, float size, float lifetime, ::UnityEngine::Color32 color);
    // public System.Void Emit(UnityEngine.ParticleSystem/UnityEngine.Particle particle)
    // Offset: 0x66D6E0
    void Emit(::UnityEngine::ParticleSystem::Particle particle);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size, System.Int32 offset)
    // Offset: 0x66D9E0
    void SetParticles(ByRef<::ArrayW<::UnityEngine::ParticleSystem::Particle>> particles, int size, int offset);
    // public System.Void SetParticles(out UnityEngine.ParticleSystem/UnityEngine.Particle[] particles, System.Int32 size)
    // Offset: 0x66DA50
    void SetParticles(ByRef<::ArrayW<::UnityEngine::ParticleSystem::Particle>> particles, int size);
    // public System.Void Emit(System.Int32 count)
    // Offset: 0x66D6A0
    void Emit(int count);
    // private System.Void Emit_Internal(System.Int32 count)
    // Offset: 0x66D6A0
    void Emit_Internal(int count);
    // public System.Void Emit(UnityEngine.ParticleSystem/UnityEngine.EmitParams emitParams, System.Int32 count)
    // Offset: 0x66D980
    void Emit(::UnityEngine::ParticleSystem::EmitParams emitParams, int count);
    // private System.Void EmitOld_Internal(ref UnityEngine.ParticleSystem/UnityEngine.Particle particle)
    // Offset: 0x66D5F0
    void EmitOld_Internal(ByRef<::UnityEngine::ParticleSystem::Particle> particle);
    // private System.Void Emit_Injected(ref UnityEngine.ParticleSystem/UnityEngine.EmitParams emitParams, System.Int32 count)
    // Offset: 0x66D640
    void Emit_Injected(ByRef<::UnityEngine::ParticleSystem::EmitParams> emitParams, int count);
  }; // UnityEngine.ParticleSystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ParticleSystem::Particle, "UnityEngine", "ParticleSystem/Particle");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_main
// Il2CppName: get_main
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::MainModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_main)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_main", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_emission
// Il2CppName: get_emission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::EmissionModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_emission)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_emission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::get_shape
// Il2CppName: get_shape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ParticleSystem::ShapeModule (UnityEngine::ParticleSystem::*)()>(&UnityEngine::ParticleSystem::get_shape)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "get_shape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float, float, ::UnityEngine::Color32)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* lifetime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, velocity, size, lifetime, color});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem::Particle)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* particle = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SetParticles
// Il2CppName: SetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::ArrayW<::UnityEngine::ParticleSystem::Particle>>, int, int)>(&UnityEngine::ParticleSystem::SetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "SetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::SetParticles
// Il2CppName: SetParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::ArrayW<::UnityEngine::ParticleSystem::Particle>>, int)>(&UnityEngine::ParticleSystem::SetParticles)> {
  static const MethodInfo* get() {
    static auto* particles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle"), 1)->this_arg;
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "SetParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particles, size});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(int)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit_Internal
// Il2CppName: Emit_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(int)>(&UnityEngine::ParticleSystem::Emit_Internal)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit
// Il2CppName: Emit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(::UnityEngine::ParticleSystem::EmitParams, int)>(&UnityEngine::ParticleSystem::Emit)> {
  static const MethodInfo* get() {
    static auto* emitParams = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmitParams")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitParams, count});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::EmitOld_Internal
// Il2CppName: EmitOld_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::ParticleSystem::Particle>)>(&UnityEngine::ParticleSystem::EmitOld_Internal)> {
  static const MethodInfo* get() {
    static auto* particle = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/Particle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "EmitOld_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{particle});
  }
};
// Writing MetadataGetter for method: UnityEngine::ParticleSystem::Emit_Injected
// Il2CppName: Emit_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ParticleSystem::*)(ByRef<::UnityEngine::ParticleSystem::EmitParams>, int)>(&UnityEngine::ParticleSystem::Emit_Injected)> {
  static const MethodInfo* get() {
    static auto* emitParams = &::il2cpp_utils::GetClassFromName("UnityEngine", "ParticleSystem/EmitParams")->this_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ParticleSystem*), "Emit_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitParams, count});
  }
};

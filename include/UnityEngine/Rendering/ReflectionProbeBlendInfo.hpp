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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ReflectionProbe
  class ReflectionProbe;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ReflectionProbeBlendInfo
  struct ReflectionProbeBlendInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ReflectionProbeBlendInfo, "UnityEngine.Rendering", "ReflectionProbeBlendInfo");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.ReflectionProbeBlendInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6DA79C
  struct ReflectionProbeBlendInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.ReflectionProbe probe
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::ReflectionProbe* probe;
    // Field size check
    static_assert(sizeof(::UnityEngine::ReflectionProbe*) == 0x8);
    // public System.Single weight
    // Size: 0x4
    // Offset: 0x8
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: ReflectionProbeBlendInfo
    constexpr ReflectionProbeBlendInfo(::UnityEngine::ReflectionProbe* probe_ = {}, float weight_ = {}) noexcept : probe{probe_}, weight{weight_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.ReflectionProbe probe
    ::UnityEngine::ReflectionProbe*& dyn_probe();
    // Get instance field reference: public System.Single weight
    float& dyn_weight();
  }; // UnityEngine.Rendering.ReflectionProbeBlendInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionProbeBlendInfo), 8 + sizeof(float)> __UnityEngine_Rendering_ReflectionProbeBlendInfoSizeCheck;
  static_assert(sizeof(ReflectionProbeBlendInfo) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

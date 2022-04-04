// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GradientColorKey
  struct GradientColorKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GradientColorKey, "UnityEngine", "GradientColorKey");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.GradientColorKey
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: BB1F0
  struct GradientColorKey/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single time
    // Size: 0x4
    // Offset: 0x10
    float time;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GradientColorKey
    constexpr GradientColorKey(::UnityEngine::Color color_ = {}, float time_ = {}) noexcept : color{color_}, time{time_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single time
    [[deprecated]] float& dyn_time();
    // public System.Void .ctor(UnityEngine.Color col, System.Single time)
    // Offset: 0x98CA70
    // ABORTED: conflicts with another method.  GradientColorKey(::UnityEngine::Color col, float time);
  }; // UnityEngine.GradientColorKey
  #pragma pack(pop)
  static check_size<sizeof(GradientColorKey), 16 + sizeof(float)> __UnityEngine_GradientColorKeySizeCheck;
  static_assert(sizeof(GradientColorKey) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GradientColorKey::GradientColorKey
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

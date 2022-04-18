// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ShadowResolution
  struct ShadowResolution;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ShadowResolution, "UnityEngine", "ShadowResolution");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ShadowResolution
  // [TokenAttribute] Offset: FFFFFFFF
  struct ShadowResolution/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ShadowResolution
    constexpr ShadowResolution(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ShadowResolution Low
    static constexpr const int Low = 0;
    // Get static field: static public UnityEngine.ShadowResolution Low
    static ::UnityEngine::ShadowResolution _get_Low();
    // Set static field: static public UnityEngine.ShadowResolution Low
    static void _set_Low(::UnityEngine::ShadowResolution value);
    // static field const value: static public UnityEngine.ShadowResolution Medium
    static constexpr const int Medium = 1;
    // Get static field: static public UnityEngine.ShadowResolution Medium
    static ::UnityEngine::ShadowResolution _get_Medium();
    // Set static field: static public UnityEngine.ShadowResolution Medium
    static void _set_Medium(::UnityEngine::ShadowResolution value);
    // static field const value: static public UnityEngine.ShadowResolution High
    static constexpr const int High = 2;
    // Get static field: static public UnityEngine.ShadowResolution High
    static ::UnityEngine::ShadowResolution _get_High();
    // Set static field: static public UnityEngine.ShadowResolution High
    static void _set_High(::UnityEngine::ShadowResolution value);
    // static field const value: static public UnityEngine.ShadowResolution VeryHigh
    static constexpr const int VeryHigh = 3;
    // Get static field: static public UnityEngine.ShadowResolution VeryHigh
    static ::UnityEngine::ShadowResolution _get_VeryHigh();
    // Set static field: static public UnityEngine.ShadowResolution VeryHigh
    static void _set_VeryHigh(::UnityEngine::ShadowResolution value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ShadowResolution
  #pragma pack(pop)
  static check_size<sizeof(ShadowResolution), 0 + sizeof(int)> __UnityEngine_ShadowResolutionSizeCheck;
  static_assert(sizeof(ShadowResolution) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

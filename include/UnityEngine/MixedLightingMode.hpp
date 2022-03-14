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
  // Forward declaring type: MixedLightingMode
  struct MixedLightingMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MixedLightingMode, "UnityEngine", "MixedLightingMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MixedLightingMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct MixedLightingMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MixedLightingMode
    constexpr MixedLightingMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.MixedLightingMode IndirectOnly
    static constexpr const int IndirectOnly = 0;
    // Get static field: static public UnityEngine.MixedLightingMode IndirectOnly
    static ::UnityEngine::MixedLightingMode _get_IndirectOnly();
    // Set static field: static public UnityEngine.MixedLightingMode IndirectOnly
    static void _set_IndirectOnly(::UnityEngine::MixedLightingMode value);
    // static field const value: static public UnityEngine.MixedLightingMode Shadowmask
    static constexpr const int Shadowmask = 2;
    // Get static field: static public UnityEngine.MixedLightingMode Shadowmask
    static ::UnityEngine::MixedLightingMode _get_Shadowmask();
    // Set static field: static public UnityEngine.MixedLightingMode Shadowmask
    static void _set_Shadowmask(::UnityEngine::MixedLightingMode value);
    // static field const value: static public UnityEngine.MixedLightingMode Subtractive
    static constexpr const int Subtractive = 1;
    // Get static field: static public UnityEngine.MixedLightingMode Subtractive
    static ::UnityEngine::MixedLightingMode _get_Subtractive();
    // Set static field: static public UnityEngine.MixedLightingMode Subtractive
    static void _set_Subtractive(::UnityEngine::MixedLightingMode value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.MixedLightingMode
  #pragma pack(pop)
  static check_size<sizeof(MixedLightingMode), 0 + sizeof(int)> __UnityEngine_MixedLightingModeSizeCheck;
  static_assert(sizeof(MixedLightingMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

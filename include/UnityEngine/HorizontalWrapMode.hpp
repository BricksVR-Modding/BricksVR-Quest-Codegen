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
  // Forward declaring type: HorizontalWrapMode
  struct HorizontalWrapMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::HorizontalWrapMode, "UnityEngine", "HorizontalWrapMode");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.HorizontalWrapMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct HorizontalWrapMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HorizontalWrapMode
    constexpr HorizontalWrapMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.HorizontalWrapMode Wrap
    static constexpr const int Wrap = 0;
    // Get static field: static public UnityEngine.HorizontalWrapMode Wrap
    static ::UnityEngine::HorizontalWrapMode _get_Wrap();
    // Set static field: static public UnityEngine.HorizontalWrapMode Wrap
    static void _set_Wrap(::UnityEngine::HorizontalWrapMode value);
    // static field const value: static public UnityEngine.HorizontalWrapMode Overflow
    static constexpr const int Overflow = 1;
    // Get static field: static public UnityEngine.HorizontalWrapMode Overflow
    static ::UnityEngine::HorizontalWrapMode _get_Overflow();
    // Set static field: static public UnityEngine.HorizontalWrapMode Overflow
    static void _set_Overflow(::UnityEngine::HorizontalWrapMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.HorizontalWrapMode
  #pragma pack(pop)
  static check_size<sizeof(HorizontalWrapMode), 0 + sizeof(int)> __UnityEngine_HorizontalWrapModeSizeCheck;
  static_assert(sizeof(HorizontalWrapMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

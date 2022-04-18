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
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Overflow
  struct Overflow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Overflow, "UnityEngine.UIElements", "Overflow");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Overflow
  // [TokenAttribute] Offset: FFFFFFFF
  struct Overflow/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Overflow
    constexpr Overflow(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.Overflow Visible
    static constexpr const int Visible = 0;
    // Get static field: static public UnityEngine.UIElements.Overflow Visible
    static ::UnityEngine::UIElements::Overflow _get_Visible();
    // Set static field: static public UnityEngine.UIElements.Overflow Visible
    static void _set_Visible(::UnityEngine::UIElements::Overflow value);
    // static field const value: static public UnityEngine.UIElements.Overflow Hidden
    static constexpr const int Hidden = 1;
    // Get static field: static public UnityEngine.UIElements.Overflow Hidden
    static ::UnityEngine::UIElements::Overflow _get_Hidden();
    // Set static field: static public UnityEngine.UIElements.Overflow Hidden
    static void _set_Hidden(::UnityEngine::UIElements::Overflow value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.Overflow
  #pragma pack(pop)
  static check_size<sizeof(Overflow), 0 + sizeof(int)> __UnityEngine_UIElements_OverflowSizeCheck;
  static_assert(sizeof(Overflow) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
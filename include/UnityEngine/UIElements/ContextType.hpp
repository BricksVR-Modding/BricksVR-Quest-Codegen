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
  // Forward declaring type: ContextType
  struct ContextType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextType, "UnityEngine.UIElements", "ContextType");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.ContextType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ContextType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ContextType
    constexpr ContextType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.ContextType Player
    static constexpr const int Player = 0;
    // Get static field: static public UnityEngine.UIElements.ContextType Player
    static ::UnityEngine::UIElements::ContextType _get_Player();
    // Set static field: static public UnityEngine.UIElements.ContextType Player
    static void _set_Player(::UnityEngine::UIElements::ContextType value);
    // static field const value: static public UnityEngine.UIElements.ContextType Editor
    static constexpr const int Editor = 1;
    // Get static field: static public UnityEngine.UIElements.ContextType Editor
    static ::UnityEngine::UIElements::ContextType _get_Editor();
    // Set static field: static public UnityEngine.UIElements.ContextType Editor
    static void _set_Editor(::UnityEngine::UIElements::ContextType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.UIElements.ContextType
  #pragma pack(pop)
  static check_size<sizeof(ContextType), 0 + sizeof(int)> __UnityEngine_UIElements_ContextTypeSizeCheck;
  static_assert(sizeof(ContextType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

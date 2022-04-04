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
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: ButtonDeltaState
  struct ButtonDeltaState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState, "UnityEngine.XR.Interaction.Toolkit.UI", "ButtonDeltaState");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ButtonDeltaState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ButtonDeltaState
    constexpr ButtonDeltaState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState NoChange
    static constexpr const int NoChange = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState NoChange
    static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _get_NoChange();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState NoChange
    static void _set_NoChange(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Pressed
    static constexpr const int Pressed = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Pressed
    static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _get_Pressed();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Pressed
    static void _set_Pressed(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Released
    static constexpr const int Released = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Released
    static ::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState _get_Released();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState Released
    static void _set_Released(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.UI.ButtonDeltaState
  #pragma pack(pop)
  static check_size<sizeof(ButtonDeltaState), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_UI_ButtonDeltaStateSizeCheck;
  static_assert(sizeof(ButtonDeltaState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

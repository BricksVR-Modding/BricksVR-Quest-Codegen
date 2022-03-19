// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.XRController
#include "UnityEngine/XR/Interaction/Toolkit/XRController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes, "UnityEngine.XR.Interaction.Toolkit", "XRController/InteractionTypes");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes
  // [TokenAttribute] Offset: FFFFFFFF
  struct XRController::InteractionTypes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InteractionTypes
    constexpr InteractionTypes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes select
    static constexpr const int select = 0;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes select
    static ::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes _get_select();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes select
    static void _set_select(::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes activate
    static constexpr const int activate = 1;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes activate
    static ::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes _get_activate();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes activate
    static void _set_activate(::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes value);
    // static field const value: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes uiPress
    static constexpr const int uiPress = 2;
    // Get static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes uiPress
    static ::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes _get_uiPress();
    // Set static field: static public UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes uiPress
    static void _set_uiPress(::UnityEngine::XR::Interaction::Toolkit::XRController::InteractionTypes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.XR.Interaction.Toolkit.XRController/UnityEngine.XR.Interaction.Toolkit.InteractionTypes
  #pragma pack(pop)
  static check_size<sizeof(XRController::InteractionTypes), 0 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_XRController_InteractionTypesSizeCheck;
  static_assert(sizeof(XRController::InteractionTypes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

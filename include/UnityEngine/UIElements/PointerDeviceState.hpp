// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPanel
  class IPanel;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerDeviceState
  class PointerDeviceState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerDeviceState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDeviceState*, "UnityEngine.UIElements", "PointerDeviceState");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.PointerDeviceState
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerDeviceState : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Vector2[] m_Positions
    static ::ArrayW<::UnityEngine::Vector2> _get_m_Positions();
    // Set static field: static private UnityEngine.Vector2[] m_Positions
    static void _set_m_Positions(::ArrayW<::UnityEngine::Vector2> value);
    // Get static field: static private UnityEngine.UIElements.IPanel[] m_Panels
    static ::ArrayW<::UnityEngine::UIElements::IPanel*> _get_m_Panels();
    // Set static field: static private UnityEngine.UIElements.IPanel[] m_Panels
    static void _set_m_Panels(::ArrayW<::UnityEngine::UIElements::IPanel*> value);
    // Get static field: static private System.Int32[] m_PressedButtons
    static ::ArrayW<int> _get_m_PressedButtons();
    // Set static field: static private System.Int32[] m_PressedButtons
    static void _set_m_PressedButtons(::ArrayW<int> value);
    // static private System.Void .cctor()
    // Offset: 0x2A9C00
    static void _cctor();
    // static public System.Void SavePointerPosition(System.Int32 pointerId, UnityEngine.Vector2 position, UnityEngine.UIElements.IPanel panel)
    // Offset: 0x2A9AD0
    static void SavePointerPosition(int pointerId, ::UnityEngine::Vector2 position, ::UnityEngine::UIElements::IPanel* panel);
    // static public System.Void PressButton(System.Int32 pointerId, System.Int32 buttonId)
    // Offset: 0x2A9880
    static void PressButton(int pointerId, int buttonId);
    // static public System.Void ReleaseButton(System.Int32 pointerId, System.Int32 buttonId)
    // Offset: 0x2A99F0
    static void ReleaseButton(int pointerId, int buttonId);
    // static public System.Void ReleaseAllButtons(System.Int32 pointerId)
    // Offset: 0x2A9960
    static void ReleaseAllButtons(int pointerId);
    // static public UnityEngine.Vector2 GetPointerPosition(System.Int32 pointerId)
    // Offset: 0x2A96C0
    static ::UnityEngine::Vector2 GetPointerPosition(int pointerId);
    // static public System.Int32 GetPressedButtons(System.Int32 pointerId)
    // Offset: 0x2A9750
    static int GetPressedButtons(int pointerId);
    // static System.Boolean HasAdditionalPressedButtons(System.Int32 pointerId, System.Int32 exceptButtonId)
    // Offset: 0x2A97E0
    static bool HasAdditionalPressedButtons(int pointerId, int exceptButtonId);
  }; // UnityEngine.UIElements.PointerDeviceState
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::PointerDeviceState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::SavePointerPosition
// Il2CppName: SavePointerPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::Vector2, ::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::PointerDeviceState::SavePointerPosition)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "SavePointerPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, position, panel});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::PressButton
// Il2CppName: PressButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::PressButton)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "PressButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, buttonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::ReleaseButton
// Il2CppName: ReleaseButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseButton)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "ReleaseButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, buttonId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons
// Il2CppName: ReleaseAllButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::ReleaseAllButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "ReleaseAllButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPointerPosition
// Il2CppName: GetPointerPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::GetPointerPosition)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPointerPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::GetPressedButtons
// Il2CppName: GetPressedButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&UnityEngine::UIElements::PointerDeviceState::GetPressedButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "GetPressedButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons
// Il2CppName: HasAdditionalPressedButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int)>(&UnityEngine::UIElements::PointerDeviceState::HasAdditionalPressedButtons)> {
  static const MethodInfo* get() {
    static auto* pointerId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exceptButtonId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerDeviceState*), "HasAdditionalPressedButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerId, exceptButtonId});
  }
};

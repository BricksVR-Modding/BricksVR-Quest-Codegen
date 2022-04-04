// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusChangeDirection
  class FocusChangeDirection;
  // Forward declaring type: Focusable
  class Focusable;
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IFocusRing
  class IFocusRing;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IFocusRing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IFocusRing*, "UnityEngine.UIElements", "IFocusRing");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IFocusRing
  // [TokenAttribute] Offset: FFFFFFFF
  class IFocusRing {
    public:
    // public UnityEngine.UIElements.FocusChangeDirection GetFocusChangeDirection(UnityEngine.UIElements.Focusable currentFocusable, UnityEngine.UIElements.EventBase e)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::FocusChangeDirection* GetFocusChangeDirection(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::EventBase* e);
    // public UnityEngine.UIElements.Focusable GetNextFocusable(UnityEngine.UIElements.Focusable currentFocusable, UnityEngine.UIElements.FocusChangeDirection direction)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::Focusable* GetNextFocusable(::UnityEngine::UIElements::Focusable* currentFocusable, ::UnityEngine::UIElements::FocusChangeDirection* direction);
  }; // UnityEngine.UIElements.IFocusRing
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection
// Il2CppName: GetFocusChangeDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (UnityEngine::UIElements::IFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::EventBase*)>(&UnityEngine::UIElements::IFocusRing::GetFocusChangeDirection)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IFocusRing*), "GetFocusChangeDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable, e});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IFocusRing::GetNextFocusable
// Il2CppName: GetNextFocusable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Focusable* (UnityEngine::UIElements::IFocusRing::*)(::UnityEngine::UIElements::Focusable*, ::UnityEngine::UIElements::FocusChangeDirection*)>(&UnityEngine::UIElements::IFocusRing::GetNextFocusable)> {
  static const MethodInfo* get() {
    static auto* currentFocusable = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Focusable")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "FocusChangeDirection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IFocusRing*), "GetNextFocusable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentFocusable, direction});
  }
};

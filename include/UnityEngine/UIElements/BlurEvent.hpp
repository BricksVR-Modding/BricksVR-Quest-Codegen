// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.FocusEventBase`1
#include "UnityEngine/UIElements/FocusEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Skipping declaration: EventBase because it is already included!
  // Forward declaring type: IPanel
  class IPanel;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: BlurEvent
  class BlurEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BlurEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BlurEvent*, "UnityEngine.UIElements", "BlurEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.BlurEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x29BDA0
    // Implemented from: UnityEngine.UIElements.FocusEventBase`1
    // Base method: System.Void FocusEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BlurEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BlurEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BlurEvent*, creationType>()));
    }
    // protected internal override System.Void PreDispatch(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x29BD00
    // Implemented from: UnityEngine.UIElements.EventBase
    // Base method: System.Void EventBase::PreDispatch(UnityEngine.UIElements.IPanel panel)
    void PreDispatch(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.BlurEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BlurEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BlurEvent::PreDispatch
// Il2CppName: PreDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::BlurEvent::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::BlurEvent::PreDispatch)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BlurEvent*), "PreDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};

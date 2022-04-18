// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.DragAndDropEventBase`1
#include "UnityEngine/UIElements/DragAndDropEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Event
  class Event;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPanel
  class IPanel;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DragUpdatedEvent
  class DragUpdatedEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DragUpdatedEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragUpdatedEvent*, "UnityEngine.UIElements", "DragUpdatedEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.DragUpdatedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class DragUpdatedEvent : public ::UnityEngine::UIElements::DragAndDropEventBase_1<::UnityEngine::UIElements::DragUpdatedEvent*> {
    public:
    // static public UnityEngine.UIElements.DragUpdatedEvent GetPooled(UnityEngine.Event systemEvent)
    // Offset: 0x29CB90
    static ::UnityEngine::UIElements::DragUpdatedEvent* GetPooled(::UnityEngine::Event* systemEvent);
    // public System.Void .ctor()
    // Offset: 0x29CD60
    // Implemented from: UnityEngine.UIElements.DragAndDropEventBase`1
    // Base method: System.Void DragAndDropEventBase_1::.ctor()
    // Base method: System.Void MouseEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DragUpdatedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DragUpdatedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DragUpdatedEvent*, creationType>()));
    }
    // protected internal override System.Void PostDispatch(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x29CC70
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::PostDispatch(UnityEngine.UIElements.IPanel panel)
    void PostDispatch(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.DragUpdatedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DragUpdatedEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DragUpdatedEvent* (*)(::UnityEngine::Event*)>(&UnityEngine::UIElements::DragUpdatedEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* systemEvent = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DragUpdatedEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{systemEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::DragUpdatedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::DragUpdatedEvent::PostDispatch
// Il2CppName: PostDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::DragUpdatedEvent::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::DragUpdatedEvent::PostDispatch)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DragUpdatedEvent*), "PostDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};
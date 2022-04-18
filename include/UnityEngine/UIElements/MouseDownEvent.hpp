// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.MouseEventBase`1
#include "UnityEngine/UIElements/MouseEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPointerEvent
  class IPointerEvent;
  // Forward declaring type: PointerDownEvent
  class PointerDownEvent;
  // Forward declaring type: PointerMoveEvent
  class PointerMoveEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: MouseDownEvent
  class MouseDownEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::MouseDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseDownEvent*, "UnityEngine.UIElements", "MouseDownEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.MouseDownEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class MouseDownEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseDownEvent*> {
    public:
    // static private UnityEngine.UIElements.MouseDownEvent MakeFromPointerEvent(UnityEngine.UIElements.IPointerEvent pointerEvent)
    // Offset: 0x2A69F0
    static ::UnityEngine::UIElements::MouseDownEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);
    // static UnityEngine.UIElements.MouseDownEvent GetPooled(UnityEngine.UIElements.PointerDownEvent pointerEvent)
    // Offset: 0x2A69E0
    static ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerDownEvent* pointerEvent);
    // static UnityEngine.UIElements.MouseDownEvent GetPooled(UnityEngine.UIElements.PointerMoveEvent pointerEvent)
    // Offset: 0x2A69E0
    static ::UnityEngine::UIElements::MouseDownEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);
    // public System.Void .ctor()
    // Offset: 0x2A6AE0
    // Implemented from: UnityEngine.UIElements.MouseEventBase`1
    // Base method: System.Void MouseEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MouseDownEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::MouseDownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MouseDownEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.MouseDownEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseDownEvent::MakeFromPointerEvent
// Il2CppName: MakeFromPointerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseDownEvent* (*)(::UnityEngine::UIElements::IPointerEvent*)>(&UnityEngine::UIElements::MouseDownEvent::MakeFromPointerEvent)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseDownEvent*), "MakeFromPointerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseDownEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseDownEvent* (*)(::UnityEngine::UIElements::PointerDownEvent*)>(&UnityEngine::UIElements::MouseDownEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDownEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseDownEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseDownEvent::GetPooled
// Il2CppName: GetPooled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::MouseDownEvent* (*)(::UnityEngine::UIElements::PointerMoveEvent*)>(&UnityEngine::UIElements::MouseDownEvent::GetPooled)> {
  static const MethodInfo* get() {
    static auto* pointerEvent = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerMoveEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::MouseDownEvent*), "GetPooled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pointerEvent});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::MouseDownEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PointerEventBase`1
#include "UnityEngine/UIElements/PointerEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: PointerCancelEvent
  class PointerCancelEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent*, "UnityEngine.UIElements", "PointerCancelEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PointerCancelEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A8A60
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerCancelEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCancelEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerCancelEvent*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x2A8700
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x2A8780
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::LocalInit()
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // protected internal override System.Void PostDispatch(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x2A87D0
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::PostDispatch(UnityEngine.UIElements.IPanel panel)
    void PostDispatch(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.PointerCancelEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCancelEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCancelEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerCancelEvent::*)()>(&UnityEngine::UIElements::PointerCancelEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCancelEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCancelEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerCancelEvent::*)()>(&UnityEngine::UIElements::PointerCancelEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCancelEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCancelEvent::PostDispatch
// Il2CppName: PostDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerCancelEvent::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::PointerCancelEvent::PostDispatch)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerCancelEvent*), "PostDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};

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
  // Forward declaring type: PointerUpEvent
  class PointerUpEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerUpEvent*, "UnityEngine.UIElements", "PointerUpEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PointerUpEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerUpEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerUpEvent*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2ABE20
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerUpEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerUpEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerUpEvent*, creationType>()));
    }
    // protected override System.Void Init()
    // Offset: 0x2ABA60
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::Init()
    void Init();
    // private System.Void LocalInit()
    // Offset: 0x2ABAD0
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::LocalInit()
    // Base method: System.Void EventBase::LocalInit()
    void LocalInit();
    // protected internal override System.Void PostDispatch(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x2ABB10
    // Implemented from: UnityEngine.UIElements.PointerEventBase`1
    // Base method: System.Void PointerEventBase_1::PostDispatch(UnityEngine.UIElements.IPanel panel)
    void PostDispatch(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.PointerUpEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerUpEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerUpEvent::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerUpEvent::*)()>(&UnityEngine::UIElements::PointerUpEvent::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerUpEvent*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerUpEvent::LocalInit
// Il2CppName: LocalInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerUpEvent::*)()>(&UnityEngine::UIElements::PointerUpEvent::LocalInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerUpEvent*), "LocalInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerUpEvent::PostDispatch
// Il2CppName: PostDispatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::PointerUpEvent::*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::PointerUpEvent::PostDispatch)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::PointerUpEvent*), "PostDispatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};

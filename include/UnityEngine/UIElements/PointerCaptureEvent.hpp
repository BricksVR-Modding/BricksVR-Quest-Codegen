// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.PointerCaptureEventBase`1
#include "UnityEngine/UIElements/PointerCaptureEventBase_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: PointerCaptureEvent
  class PointerCaptureEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent*, "UnityEngine.UIElements", "PointerCaptureEvent");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.PointerCaptureEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A8E10
    // Implemented from: UnityEngine.UIElements.PointerCaptureEventBase`1
    // Base method: System.Void PointerCaptureEventBase_1::.ctor()
    // Base method: System.Void EventBase_1::.ctor()
    // Base method: System.Void EventBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerCaptureEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::PointerCaptureEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerCaptureEvent*, creationType>()));
    }
  }; // UnityEngine.UIElements.PointerCaptureEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::PointerCaptureEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
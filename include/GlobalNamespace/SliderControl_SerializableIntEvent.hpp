// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SliderControl
#include "GlobalNamespace/SliderControl.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SliderControl::SerializableIntEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SliderControl::SerializableIntEvent*, "", "SliderControl/SerializableIntEvent");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: SliderControl/SerializableIntEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class SliderControl::SerializableIntEvent : public ::UnityEngine::Events::UnityEvent_1<int> {
    public:
    // public System.Void .ctor()
    // Offset: 0x6CDCB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SliderControl::SerializableIntEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SliderControl::SerializableIntEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SliderControl::SerializableIntEvent*, creationType>()));
    }
  }; // SliderControl/SerializableIntEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SliderControl::SerializableIntEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

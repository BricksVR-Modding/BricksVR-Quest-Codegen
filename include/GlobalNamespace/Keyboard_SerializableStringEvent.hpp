// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Keyboard
#include "GlobalNamespace/Keyboard.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Keyboard::SerializableStringEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Keyboard::SerializableStringEvent*, "", "Keyboard/SerializableStringEvent");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: Keyboard/SerializableStringEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Keyboard::SerializableStringEvent : public ::UnityEngine::Events::UnityEvent_1<::StringW> {
    public:
    // public System.Void .ctor()
    // Offset: 0x6C25C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Keyboard::SerializableStringEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Keyboard::SerializableStringEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Keyboard::SerializableStringEvent*, creationType>()));
    }
  }; // Keyboard/SerializableStringEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Keyboard::SerializableStringEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

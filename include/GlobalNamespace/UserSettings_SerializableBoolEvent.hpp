// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UserSettings
#include "GlobalNamespace/UserSettings.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UserSettings::SerializableBoolEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserSettings::SerializableBoolEvent*, "", "UserSettings/SerializableBoolEvent");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UserSettings/SerializableBoolEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class UserSettings::SerializableBoolEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
    public:
    // public System.Void .ctor()
    // Offset: 0x9221E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UserSettings::SerializableBoolEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UserSettings::SerializableBoolEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UserSettings::SerializableBoolEvent*, creationType>()));
    }
  }; // UserSettings/SerializableBoolEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UserSettings::SerializableBoolEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Dropdown
#include "UnityEngine/UI/Dropdown.hpp"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Dropdown::DropdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Dropdown::DropdownEvent*, "UnityEngine.UI", "Dropdown/DropdownEvent");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class Dropdown::DropdownEvent : public ::UnityEngine::Events::UnityEvent_1<int> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4B0DE0
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent_1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Dropdown::DropdownEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Dropdown::DropdownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Dropdown::DropdownEvent*, creationType>()));
    }
  }; // UnityEngine.UI.Dropdown/UnityEngine.UI.DropdownEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Dropdown::DropdownEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

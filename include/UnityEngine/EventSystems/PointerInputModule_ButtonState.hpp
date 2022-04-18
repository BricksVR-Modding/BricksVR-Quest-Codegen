// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine/EventSystems/PointerInputModule.hpp"
// Including type: UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton
#include "UnityEngine/EventSystems/PointerEventData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule::ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule::ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.ButtonState
  // [TokenAttribute] Offset: FFFFFFFF
  class PointerInputModule::ButtonState : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton m_Button
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::EventSystems::PointerEventData::InputButton m_Button;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerEventData::InputButton) == 0x4);
    // Padding between fields: m_Button and: m_EventData
    char __padding0[0x4] = {};
    // private UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData m_EventData
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* m_EventData;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton m_Button
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::PointerEventData::InputButton& dyn_m_Button();
    // Get instance field reference: private UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData m_EventData
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*& dyn_m_EventData();
    // public UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData get_eventData()
    // Offset: 0x1E1520
    ::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* get_eventData();
    // public System.Void set_eventData(UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.MouseButtonEventData value)
    // Offset: 0x1E4910
    void set_eventData(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* value);
    // public UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton get_button()
    // Offset: 0x1DD410
    ::UnityEngine::EventSystems::PointerEventData::InputButton get_button();
    // public System.Void set_button(UnityEngine.EventSystems.PointerEventData/UnityEngine.EventSystems.InputButton value)
    // Offset: 0x217270
    void set_button(::UnityEngine::EventSystems::PointerEventData::InputButton value);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointerInputModule::ButtonState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::EventSystems::PointerInputModule::ButtonState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointerInputModule::ButtonState*, creationType>()));
    }
  }; // UnityEngine.EventSystems.PointerInputModule/UnityEngine.EventSystems.ButtonState
  #pragma pack(pop)
  static check_size<sizeof(PointerInputModule::ButtonState), 24 + sizeof(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)> __UnityEngine_EventSystems_PointerInputModule_ButtonStateSizeCheck;
  static_assert(sizeof(PointerInputModule::ButtonState) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::get_eventData
// Il2CppName: get_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData* (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)()>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::get_eventData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "get_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::set_eventData
// Il2CppName: set_eventData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)(::UnityEngine::EventSystems::PointerInputModule::MouseButtonEventData*)>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::set_eventData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "set_eventData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::get_button
// Il2CppName: get_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData::InputButton (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)()>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::get_button)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "get_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::set_button
// Il2CppName: set_button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::PointerInputModule::ButtonState::*)(::UnityEngine::EventSystems::PointerEventData::InputButton)>(&UnityEngine::EventSystems::PointerInputModule::ButtonState::set_button)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData/InputButton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::PointerInputModule::ButtonState*), "set_button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::EventSystems::PointerInputModule::ButtonState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

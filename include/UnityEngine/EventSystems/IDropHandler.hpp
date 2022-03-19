// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.IEventSystemHandler
#include "UnityEngine/EventSystems/IEventSystemHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: IDropHandler
  class IDropHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::EventSystems::IDropHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::IDropHandler*, "UnityEngine.EventSystems", "IDropHandler");
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.IDropHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IDropHandler/*, public ::UnityEngine::EventSystems::IEventSystemHandler*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IEventSystemHandler
    operator ::UnityEngine::EventSystems::IEventSystemHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(this);
    }
    // public System.Void OnDrop(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0xFFFFFFFF
    void OnDrop(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // UnityEngine.EventSystems.IDropHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::EventSystems::IDropHandler::OnDrop
// Il2CppName: OnDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::EventSystems::IDropHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&UnityEngine::EventSystems::IDropHandler::OnDrop)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::EventSystems::IDropHandler*), "OnDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};

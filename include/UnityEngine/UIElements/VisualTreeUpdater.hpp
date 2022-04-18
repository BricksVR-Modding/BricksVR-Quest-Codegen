// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualTreeUpdatePhase
  struct VisualTreeUpdatePhase;
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: VersionChangeType
  struct VersionChangeType;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualTreeUpdater
  class VisualTreeUpdater;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater*, "UnityEngine.UIElements", "VisualTreeUpdater");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualTreeUpdater
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualTreeUpdater : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray
    class UpdaterArray;
    public:
    // private UnityEngine.UIElements.VisualTreeUpdater/UnityEngine.UIElements.UpdaterArray m_UpdaterArray
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray* m_UpdaterArray;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*
    constexpr operator ::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*() const noexcept {
      return m_UpdaterArray;
    }
    // Get instance field reference: private UnityEngine.UIElements.VisualTreeUpdater/UnityEngine.UIElements.UpdaterArray m_UpdaterArray
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*& dyn_m_UpdaterArray();
    // public System.Void UpdateVisualTreePhase(UnityEngine.UIElements.VisualTreeUpdatePhase phase)
    // Offset: 0x655F70
    void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);
    // public System.Void OnVersionChanged(UnityEngine.UIElements.VisualElement ve, UnityEngine.UIElements.VersionChangeType versionChangeType)
    // Offset: 0x655E40
    void OnVersionChanged(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType);
  }; // UnityEngine.UIElements.VisualTreeUpdater
  #pragma pack(pop)
  static check_size<sizeof(VisualTreeUpdater), 16 + sizeof(::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*)> __UnityEngine_UIElements_VisualTreeUpdaterSizeCheck;
  static_assert(sizeof(VisualTreeUpdater) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase
// Il2CppName: UpdateVisualTreePhase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&UnityEngine::UIElements::VisualTreeUpdater::UpdateVisualTreePhase)> {
  static const MethodInfo* get() {
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualTreeUpdatePhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeUpdater*), "UpdateVisualTreePhase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged
// Il2CppName: OnVersionChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeUpdater::*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VersionChangeType)>(&UnityEngine::UIElements::VisualTreeUpdater::OnVersionChanged)> {
  static const MethodInfo* get() {
    static auto* ve = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualElement")->byval_arg;
    static auto* versionChangeType = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VersionChangeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeUpdater*), "OnVersionChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ve, versionChangeType});
  }
};

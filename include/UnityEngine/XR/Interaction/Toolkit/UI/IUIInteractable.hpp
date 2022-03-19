// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.ILineRenderable
#include "UnityEngine/XR/Interaction/Toolkit/ILineRenderable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: TrackedDeviceModel
  struct TrackedDeviceModel;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Forward declaring type: IUIInteractable
  class IUIInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable*, "UnityEngine.XR.Interaction.Toolkit.UI", "IUIInteractable");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.UI
namespace UnityEngine::XR::Interaction::Toolkit::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class IUIInteractable/*, public ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable
    operator ::UnityEngine::XR::Interaction::Toolkit::ILineRenderable() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::ILineRenderable*>(this);
    }
    // public System.Void UpdateUIModel(ref UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel model)
    // Offset: 0xFFFFFFFF
    void UpdateUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);
    // public System.Boolean TryGetUIModel(out UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceModel model)
    // Offset: 0xFFFFFFFF
    bool TryGetUIModel(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel> model);
  }; // UnityEngine.XR.Interaction.Toolkit.UI.IUIInteractable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::UpdateUIModel
// Il2CppName: UpdateUIModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::UpdateUIModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable*), "UpdateUIModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::TryGetUIModel
// Il2CppName: TryGetUIModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::*)(ByRef<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>)>(&UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable::TryGetUIModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.UI", "TrackedDeviceModel")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::UI::IUIInteractable*), "TryGetUIModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};

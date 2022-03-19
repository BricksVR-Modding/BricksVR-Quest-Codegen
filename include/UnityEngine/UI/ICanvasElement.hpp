// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: ICanvasElement
  class ICanvasElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::ICanvasElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ICanvasElement*, "UnityEngine.UI", "ICanvasElement");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.ICanvasElement
  // [TokenAttribute] Offset: FFFFFFFF
  class ICanvasElement {
    public:
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFF
    ::UnityEngine::Transform* get_transform();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0xFFFFFFFF
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0xFFFFFFFF
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0xFFFFFFFF
    void GraphicUpdateComplete();
    // public System.Boolean IsDestroyed()
    // Offset: 0xFFFFFFFF
    bool IsDestroyed();
  }; // UnityEngine.UI.ICanvasElement
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::ICanvasElement::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::UI::ICanvasElement::*)()>(&UnityEngine::UI::ICanvasElement::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ICanvasElement*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ICanvasElement::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ICanvasElement::*)(::UnityEngine::UI::CanvasUpdate)>(&UnityEngine::UI::ICanvasElement::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ICanvasElement*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ICanvasElement::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ICanvasElement::*)()>(&UnityEngine::UI::ICanvasElement::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ICanvasElement*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ICanvasElement::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::ICanvasElement::*)()>(&UnityEngine::UI::ICanvasElement::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ICanvasElement*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::ICanvasElement::IsDestroyed
// Il2CppName: IsDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::ICanvasElement::*)()>(&UnityEngine::UI::ICanvasElement::IsDestroyed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::ICanvasElement*), "IsDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

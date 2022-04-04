// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Visibility
  struct Visibility;
  // Forward declaring type: DisplayStyle
  struct DisplayStyle;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IResolvedStyle
  class IResolvedStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IResolvedStyle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IResolvedStyle*, "UnityEngine.UIElements", "IResolvedStyle");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IResolvedStyle
  // [TokenAttribute] Offset: FFFFFFFF
  class IResolvedStyle {
    public:
    // public UnityEngine.UIElements.Visibility get_visibility()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::Visibility get_visibility();
    // public UnityEngine.UIElements.DisplayStyle get_display()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::UIElements::DisplayStyle get_display();
  }; // UnityEngine.UIElements.IResolvedStyle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IResolvedStyle::get_visibility
// Il2CppName: get_visibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Visibility (UnityEngine::UIElements::IResolvedStyle::*)()>(&UnityEngine::UIElements::IResolvedStyle::get_visibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IResolvedStyle*), "get_visibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IResolvedStyle::get_display
// Il2CppName: get_display
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::DisplayStyle (UnityEngine::UIElements::IResolvedStyle::*)()>(&UnityEngine::UIElements::IResolvedStyle::get_display)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IResolvedStyle*), "get_display", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.UIElements.Overflow
#include "UnityEngine/UIElements/Overflow.hpp"
// Including type: UnityEngine.UIElements.DisplayStyle
#include "UnityEngine/UIElements/DisplayStyle.hpp"
// Including type: UnityEngine.UIElements.Visibility
#include "UnityEngine/UIElements/Visibility.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElement
  class VisualElement;
  // Forward declaring type: StyleEnum`1<T>
  template<typename T>
  struct StyleEnum_1;
}
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: VisualElementStylesData
  class VisualElementStylesData;
  // Forward declaring type: InheritedStylesData
  class InheritedStylesData;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ComputedStyle
  struct ComputedStyle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ComputedStyle, "UnityEngine.UIElements", "ComputedStyle");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.ComputedStyle
  // [TokenAttribute] Offset: FFFFFFFF
  struct ComputedStyle/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.UIElements.VisualElement m_Element
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::UIElements::VisualElement* m_Element;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElement*) == 0x8);
    public:
    // Creating value type constructor for type: ComputedStyle
    constexpr ComputedStyle(::UnityEngine::UIElements::VisualElement* m_Element_ = {}) noexcept : m_Element{m_Element_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::UIElements::VisualElement*
    constexpr operator ::UnityEngine::UIElements::VisualElement*() const noexcept {
      return m_Element;
    }
    // Get instance field reference: private UnityEngine.UIElements.VisualElement m_Element
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElement*& dyn_m_Element();
    // private UnityEngine.UIElements.StyleSheets.VisualElementStylesData get_stylesData()
    // Offset: 0x29C4B0
    ::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* get_stylesData();
    // private UnityEngine.UIElements.StyleSheets.InheritedStylesData get_inheritedStylesData()
    // Offset: 0x29C3E0
    ::UnityEngine::UIElements::StyleSheets::InheritedStylesData* get_inheritedStylesData();
    // public UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Overflow> get_overflow()
    // Offset: 0x29C400
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> get_overflow();
    // public UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.DisplayStyle> get_display()
    // Offset: 0x29C330
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> get_display();
    // public UnityEngine.UIElements.StyleEnum`1<UnityEngine.UIElements.Visibility> get_visibility()
    // Offset: 0x29C4D0
    ::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> get_visibility();
  }; // UnityEngine.UIElements.ComputedStyle
  #pragma pack(pop)
  static check_size<sizeof(ComputedStyle), 0 + sizeof(::UnityEngine::UIElements::VisualElement*)> __UnityEngine_UIElements_ComputedStyleSizeCheck;
  static_assert(sizeof(ComputedStyle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedStyle::get_stylesData
// Il2CppName: get_stylesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::VisualElementStylesData* (UnityEngine::UIElements::ComputedStyle::*)()>(&UnityEngine::UIElements::ComputedStyle::get_stylesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedStyle), "get_stylesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedStyle::get_inheritedStylesData
// Il2CppName: get_inheritedStylesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::InheritedStylesData* (UnityEngine::UIElements::ComputedStyle::*)()>(&UnityEngine::UIElements::ComputedStyle::get_inheritedStylesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedStyle), "get_inheritedStylesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedStyle::get_overflow
// Il2CppName: get_overflow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Overflow> (UnityEngine::UIElements::ComputedStyle::*)()>(&UnityEngine::UIElements::ComputedStyle::get_overflow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedStyle), "get_overflow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedStyle::get_display
// Il2CppName: get_display
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::DisplayStyle> (UnityEngine::UIElements::ComputedStyle::*)()>(&UnityEngine::UIElements::ComputedStyle::get_display)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedStyle), "get_display", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::ComputedStyle::get_visibility
// Il2CppName: get_visibility
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleEnum_1<::UnityEngine::UIElements::Visibility> (UnityEngine::UIElements::ComputedStyle::*)()>(&UnityEngine::UIElements::ComputedStyle::get_visibility)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::ComputedStyle), "get_visibility", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutElement
#include "UnityEngine/UI/ILayoutElement.hpp"
// Including type: UnityEngine.UI.ILayoutIgnorer
#include "UnityEngine/UI/ILayoutIgnorer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: LayoutElement
  class LayoutElement;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::LayoutElement);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::LayoutElement*, "UnityEngine.UI", "LayoutElement");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.LayoutElement
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 711F80
  // [RequireComponent] Offset: 711F80
  // [ExecuteAlways] Offset: FFFFFFFF
  class LayoutElement : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::UI::ILayoutElement, public ::UnityEngine::UI::ILayoutIgnorer*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Boolean m_IgnoreLayout
    // Size: 0x1
    // Offset: 0x18
    bool m_IgnoreLayout;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IgnoreLayout and: m_MinWidth
    char __padding0[0x3] = {};
    // private System.Single m_MinWidth
    // Size: 0x4
    // Offset: 0x1C
    float m_MinWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_MinHeight
    // Size: 0x4
    // Offset: 0x20
    float m_MinHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_PreferredWidth
    // Size: 0x4
    // Offset: 0x24
    float m_PreferredWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_PreferredHeight
    // Size: 0x4
    // Offset: 0x28
    float m_PreferredHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_FlexibleWidth
    // Size: 0x4
    // Offset: 0x2C
    float m_FlexibleWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_FlexibleHeight
    // Size: 0x4
    // Offset: 0x30
    float m_FlexibleHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_LayoutPriority
    // Size: 0x4
    // Offset: 0x34
    int m_LayoutPriority;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UI::ILayoutElement
    operator ::UnityEngine::UI::ILayoutElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ILayoutElement*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::ILayoutIgnorer
    operator ::UnityEngine::UI::ILayoutIgnorer() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ILayoutIgnorer*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean m_IgnoreLayout
    bool& dyn_m_IgnoreLayout();
    // Get instance field reference: private System.Single m_MinWidth
    float& dyn_m_MinWidth();
    // Get instance field reference: private System.Single m_MinHeight
    float& dyn_m_MinHeight();
    // Get instance field reference: private System.Single m_PreferredWidth
    float& dyn_m_PreferredWidth();
    // Get instance field reference: private System.Single m_PreferredHeight
    float& dyn_m_PreferredHeight();
    // Get instance field reference: private System.Single m_FlexibleWidth
    float& dyn_m_FlexibleWidth();
    // Get instance field reference: private System.Single m_FlexibleHeight
    float& dyn_m_FlexibleHeight();
    // Get instance field reference: private System.Int32 m_LayoutPriority
    int& dyn_m_LayoutPriority();
    // public System.Boolean get_ignoreLayout()
    // Offset: 0xB8D70C
    bool get_ignoreLayout();
    // public System.Void set_ignoreLayout(System.Boolean value)
    // Offset: 0xB8D714
    void set_ignoreLayout(bool value);
    // public System.Single get_minWidth()
    // Offset: 0xB8D854
    float get_minWidth();
    // public System.Void set_minWidth(System.Single value)
    // Offset: 0xB8D85C
    void set_minWidth(float value);
    // public System.Single get_minHeight()
    // Offset: 0xB8D8D8
    float get_minHeight();
    // public System.Void set_minHeight(System.Single value)
    // Offset: 0xB8D8E0
    void set_minHeight(float value);
    // public System.Single get_preferredWidth()
    // Offset: 0xB8D95C
    float get_preferredWidth();
    // public System.Void set_preferredWidth(System.Single value)
    // Offset: 0xB8D964
    void set_preferredWidth(float value);
    // public System.Single get_preferredHeight()
    // Offset: 0xB8D9E0
    float get_preferredHeight();
    // public System.Void set_preferredHeight(System.Single value)
    // Offset: 0xB8D9E8
    void set_preferredHeight(float value);
    // public System.Single get_flexibleWidth()
    // Offset: 0xB8DA64
    float get_flexibleWidth();
    // public System.Void set_flexibleWidth(System.Single value)
    // Offset: 0xB8DA6C
    void set_flexibleWidth(float value);
    // public System.Single get_flexibleHeight()
    // Offset: 0xB8DAE8
    float get_flexibleHeight();
    // public System.Void set_flexibleHeight(System.Single value)
    // Offset: 0xB8DAF0
    void set_flexibleHeight(float value);
    // public System.Int32 get_layoutPriority()
    // Offset: 0xB8DB6C
    int get_layoutPriority();
    // public System.Void set_layoutPriority(System.Int32 value)
    // Offset: 0xB8DB74
    void set_layoutPriority(int value);
    // public System.Void CalculateLayoutInputHorizontal()
    // Offset: 0xB8D84C
    void CalculateLayoutInputHorizontal();
    // public System.Void CalculateLayoutInputVertical()
    // Offset: 0xB8D850
    void CalculateLayoutInputVertical();
    // protected System.Void SetDirty()
    // Offset: 0xB8D790
    void SetDirty();
    // protected System.Void .ctor()
    // Offset: 0xB8DBF0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutElement* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::LayoutElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutElement*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0xB8DC14
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnTransformParentChanged()
    // Offset: 0xB8DC3C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnTransformParentChanged()
    void OnTransformParentChanged();
    // protected override System.Void OnDisable()
    // Offset: 0xB8DC40
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0xB8DC68
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
    // protected override System.Void OnBeforeTransformParentChanged()
    // Offset: 0xB8DC6C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnBeforeTransformParentChanged()
    void OnBeforeTransformParentChanged();
  }; // UnityEngine.UI.LayoutElement
  #pragma pack(pop)
  static check_size<sizeof(LayoutElement), 52 + sizeof(int)> __UnityEngine_UI_LayoutElementSizeCheck;
  static_assert(sizeof(LayoutElement) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_ignoreLayout
// Il2CppName: get_ignoreLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_ignoreLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_ignoreLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_ignoreLayout
// Il2CppName: set_ignoreLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(bool)>(&UnityEngine::UI::LayoutElement::set_ignoreLayout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_ignoreLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_minWidth
// Il2CppName: get_minWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_minWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_minWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_minWidth
// Il2CppName: set_minWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_minWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_minWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_minHeight
// Il2CppName: get_minHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_minHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_minHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_minHeight
// Il2CppName: set_minHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_minHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_minHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_preferredWidth
// Il2CppName: get_preferredWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_preferredWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_preferredWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_preferredWidth
// Il2CppName: set_preferredWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_preferredWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_preferredWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_preferredHeight
// Il2CppName: get_preferredHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_preferredHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_preferredHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_preferredHeight
// Il2CppName: set_preferredHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_preferredHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_preferredHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_flexibleWidth
// Il2CppName: get_flexibleWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_flexibleWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_flexibleWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_flexibleWidth
// Il2CppName: set_flexibleWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_flexibleWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_flexibleWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_flexibleHeight
// Il2CppName: get_flexibleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_flexibleHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_flexibleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_flexibleHeight
// Il2CppName: set_flexibleHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(float)>(&UnityEngine::UI::LayoutElement::set_flexibleHeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_flexibleHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::get_layoutPriority
// Il2CppName: get_layoutPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::get_layoutPriority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "get_layoutPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::set_layoutPriority
// Il2CppName: set_layoutPriority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)(int)>(&UnityEngine::UI::LayoutElement::set_layoutPriority)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "set_layoutPriority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::CalculateLayoutInputHorizontal
// Il2CppName: CalculateLayoutInputHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::CalculateLayoutInputHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "CalculateLayoutInputHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::CalculateLayoutInputVertical
// Il2CppName: CalculateLayoutInputVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::CalculateLayoutInputVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "CalculateLayoutInputVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::OnTransformParentChanged
// Il2CppName: OnTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::OnTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "OnTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::OnDidApplyAnimationProperties
// Il2CppName: OnDidApplyAnimationProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::OnDidApplyAnimationProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "OnDidApplyAnimationProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::LayoutElement::OnBeforeTransformParentChanged
// Il2CppName: OnBeforeTransformParentChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::LayoutElement::*)()>(&UnityEngine::UI::LayoutElement::OnBeforeTransformParentChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::LayoutElement*), "OnBeforeTransformParentChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

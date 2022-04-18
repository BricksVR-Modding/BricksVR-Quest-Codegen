// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualElement
#include "UnityEngine/UIElements/VisualElement.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.GUILayoutUtility
#include "UnityEngine/GUILayoutUtility.hpp"
// Including type: UnityEngine.UIElements.ContextType
#include "UnityEngine/UIElements/ContextType.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Event
  class Event;
  // Forward declaring type: ObjectGUIState
  class ObjectGUIState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: FocusChangeDirection
  class FocusChangeDirection;
  // Forward declaring type: EventBase
  class EventBase;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IMGUIContainer
  class IMGUIContainer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIContainer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer*, "UnityEngine.UIElements", "IMGUIContainer");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x274
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IMGUIContainer
  // [TokenAttribute] Offset: FFFFFFFF
  class IMGUIContainer : public ::UnityEngine::UIElements::VisualElement/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::IMGUIContainer::GUIGlobals
    struct GUIGlobals;
    // Size: 0x78
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.IMGUIContainer/UnityEngine.UIElements.GUIGlobals
    // [TokenAttribute] Offset: FFFFFFFF
    struct GUIGlobals/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Matrix4x4 matrix
      // Size: 0x40
      // Offset: 0x0
      ::UnityEngine::Matrix4x4 matrix;
      // Field size check
      static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
      // public UnityEngine.Color color
      // Size: 0x10
      // Offset: 0x40
      ::UnityEngine::Color color;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      // public UnityEngine.Color contentColor
      // Size: 0x10
      // Offset: 0x50
      ::UnityEngine::Color contentColor;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      // public UnityEngine.Color backgroundColor
      // Size: 0x10
      // Offset: 0x60
      ::UnityEngine::Color backgroundColor;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      // public System.Boolean enabled
      // Size: 0x1
      // Offset: 0x70
      bool enabled;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // public System.Boolean changed
      // Size: 0x1
      // Offset: 0x71
      bool changed;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: changed and: displayIndex
      char __padding5[0x2] = {};
      // public System.Int32 displayIndex
      // Size: 0x4
      // Offset: 0x74
      int displayIndex;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: GUIGlobals
      constexpr GUIGlobals(::UnityEngine::Matrix4x4 matrix_ = {}, ::UnityEngine::Color color_ = {}, ::UnityEngine::Color contentColor_ = {}, ::UnityEngine::Color backgroundColor_ = {}, bool enabled_ = {}, bool changed_ = {}, int displayIndex_ = {}) noexcept : matrix{matrix_}, color{color_}, contentColor{contentColor_}, backgroundColor{backgroundColor_}, enabled{enabled_}, changed{changed_}, displayIndex{displayIndex_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Matrix4x4 matrix
      [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_matrix();
      // Get instance field reference: public UnityEngine.Color color
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
      // Get instance field reference: public UnityEngine.Color contentColor
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_contentColor();
      // Get instance field reference: public UnityEngine.Color backgroundColor
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_backgroundColor();
      // Get instance field reference: public System.Boolean enabled
      [[deprecated("Use field access instead!")]] bool& dyn_enabled();
      // Get instance field reference: public System.Boolean changed
      [[deprecated("Use field access instead!")]] bool& dyn_changed();
      // Get instance field reference: public System.Int32 displayIndex
      [[deprecated("Use field access instead!")]] int& dyn_displayIndex();
    }; // UnityEngine.UIElements.IMGUIContainer/UnityEngine.UIElements.GUIGlobals
    #pragma pack(pop)
    static check_size<sizeof(IMGUIContainer::GUIGlobals), 116 + sizeof(int)> __UnityEngine_UIElements_IMGUIContainer_GUIGlobalsSizeCheck;
    static_assert(sizeof(IMGUIContainer::GUIGlobals) == 0x78);
    public:
    // private System.Action m_OnGUIHandler
    // Size: 0x8
    // Offset: 0x160
    ::System::Action* m_OnGUIHandler;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private UnityEngine.ObjectGUIState m_ObjectGUIState
    // Size: 0x8
    // Offset: 0x168
    ::UnityEngine::ObjectGUIState* m_ObjectGUIState;
    // Field size check
    static_assert(sizeof(::UnityEngine::ObjectGUIState*) == 0x8);
    // System.Boolean useOwnerObjectGUIState
    // Size: 0x1
    // Offset: 0x170
    bool useOwnerObjectGUIState;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useOwnerObjectGUIState and: lastWorldClip
    char __padding2[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.Rect <lastWorldClip>k__BackingField
    // Size: 0x10
    // Offset: 0x174
    ::UnityEngine::Rect lastWorldClip;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // Padding between fields: lastWorldClip and: m_Cache
    char __padding3[0x4] = {};
    // private UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache m_Cache
    // Size: 0x8
    // Offset: 0x188
    ::UnityEngine::GUILayoutUtility::LayoutCache* m_Cache;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUILayoutUtility::LayoutCache*) == 0x8);
    // private UnityEngine.Rect m_CachedClippingRect
    // Size: 0x10
    // Offset: 0x190
    ::UnityEngine::Rect m_CachedClippingRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private UnityEngine.Matrix4x4 m_CachedTransform
    // Size: 0x40
    // Offset: 0x1A0
    ::UnityEngine::Matrix4x4 m_CachedTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private UnityEngine.UIElements.ContextType <contextType>k__BackingField
    // Size: 0x4
    // Offset: 0x1E0
    ::UnityEngine::UIElements::ContextType contextType;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::ContextType) == 0x4);
    // private System.Boolean lostFocus
    // Size: 0x1
    // Offset: 0x1E4
    bool lostFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean receivedFocus
    // Size: 0x1
    // Offset: 0x1E5
    bool receivedFocus;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: receivedFocus and: focusChangeDirection
    char __padding9[0x2] = {};
    // private UnityEngine.UIElements.FocusChangeDirection focusChangeDirection
    // Size: 0x8
    // Offset: 0x1E8
    ::UnityEngine::UIElements::FocusChangeDirection* focusChangeDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::FocusChangeDirection*) == 0x8);
    // private System.Boolean hasFocusableControls
    // Size: 0x1
    // Offset: 0x1F0
    bool hasFocusableControls;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasFocusableControls and: newKeyboardFocusControlID
    char __padding11[0x3] = {};
    // private System.Int32 newKeyboardFocusControlID
    // Size: 0x4
    // Offset: 0x1F4
    int newKeyboardFocusControlID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // private System.Boolean <focusOnlyIfHasFocusableControls>k__BackingField
    // Size: 0x1
    // Offset: 0x1F8
    bool focusOnlyIfHasFocusableControls;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: focusOnlyIfHasFocusableControls and: m_GUIGlobals
    char __padding13[0x3] = {};
    // private UnityEngine.UIElements.IMGUIContainer/UnityEngine.UIElements.GUIGlobals m_GUIGlobals
    // Size: 0x78
    // Offset: 0x1FC
    ::UnityEngine::UIElements::IMGUIContainer::GUIGlobals m_GUIGlobals;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::IMGUIContainer::GUIGlobals) == 0x78);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static public readonly System.String ussClassName
    static ::StringW _get_ussClassName();
    // Set static field: static public readonly System.String ussClassName
    static void _set_ussClassName(::StringW value);
    // Get instance field reference: private System.Action m_OnGUIHandler
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_m_OnGUIHandler();
    // Get instance field reference: private UnityEngine.ObjectGUIState m_ObjectGUIState
    [[deprecated("Use field access instead!")]] ::UnityEngine::ObjectGUIState*& dyn_m_ObjectGUIState();
    // Get instance field reference: System.Boolean useOwnerObjectGUIState
    [[deprecated("Use field access instead!")]] bool& dyn_useOwnerObjectGUIState();
    // Get instance field reference: private UnityEngine.Rect <lastWorldClip>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_$lastWorldClip$k__BackingField();
    // Get instance field reference: private UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache m_Cache
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUILayoutUtility::LayoutCache*& dyn_m_Cache();
    // Get instance field reference: private UnityEngine.Rect m_CachedClippingRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_m_CachedClippingRect();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_CachedTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_CachedTransform();
    // Get instance field reference: private UnityEngine.UIElements.ContextType <contextType>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::ContextType& dyn_$contextType$k__BackingField();
    // Get instance field reference: private System.Boolean lostFocus
    [[deprecated("Use field access instead!")]] bool& dyn_lostFocus();
    // Get instance field reference: private System.Boolean receivedFocus
    [[deprecated("Use field access instead!")]] bool& dyn_receivedFocus();
    // Get instance field reference: private UnityEngine.UIElements.FocusChangeDirection focusChangeDirection
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::FocusChangeDirection*& dyn_focusChangeDirection();
    // Get instance field reference: private System.Boolean hasFocusableControls
    [[deprecated("Use field access instead!")]] bool& dyn_hasFocusableControls();
    // Get instance field reference: private System.Int32 newKeyboardFocusControlID
    [[deprecated("Use field access instead!")]] int& dyn_newKeyboardFocusControlID();
    // Get instance field reference: private System.Boolean <focusOnlyIfHasFocusableControls>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$focusOnlyIfHasFocusableControls$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.IMGUIContainer/UnityEngine.UIElements.GUIGlobals m_GUIGlobals
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::IMGUIContainer::GUIGlobals& dyn_m_GUIGlobals();
    // public System.Action get_onGUIHandler()
    // Offset: 0x2A4770
    ::System::Action* get_onGUIHandler();
    // UnityEngine.ObjectGUIState get_guiState()
    // Offset: 0x2A4590
    ::UnityEngine::ObjectGUIState* get_guiState();
    // UnityEngine.Rect get_lastWorldClip()
    // Offset: 0x2A4640
    ::UnityEngine::Rect get_lastWorldClip();
    // private UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache get_cache()
    // Offset: 0x2A44F0
    ::UnityEngine::GUILayoutUtility::LayoutCache* get_cache();
    // private System.Single get_layoutMeasuredWidth()
    // Offset: 0x2A46E0
    float get_layoutMeasuredWidth();
    // private System.Single get_layoutMeasuredHeight()
    // Offset: 0x2A4650
    float get_layoutMeasuredHeight();
    // public UnityEngine.UIElements.ContextType get_contextType()
    // Offset: 0x2A4570
    ::UnityEngine::UIElements::ContextType get_contextType();
    // System.Boolean get_focusOnlyIfHasFocusableControls()
    // Offset: 0x2A4580
    bool get_focusOnlyIfHasFocusableControls();
    // private System.Void SaveGlobals()
    // Offset: 0x2A42D0
    void SaveGlobals();
    // private System.Void RestoreGlobals()
    // Offset: 0x2A4180
    void RestoreGlobals();
    // private System.Void DoOnGUI(UnityEngine.Event evt, UnityEngine.Matrix4x4 parentTransform, UnityEngine.Rect clippingRect, System.Boolean isComputingLayout, UnityEngine.Rect layoutSize, System.Action onGUIHandler, System.Boolean canAffectFocus)
    // Offset: 0x2A2950
    void DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout, ::UnityEngine::Rect layoutSize, ::System::Action* onGUIHandler, bool canAffectFocus);
    // public System.Void MarkDirtyLayout()
    // Offset: 0x2A4150
    void MarkDirtyLayout();
    // System.Boolean SendEventToIMGUI(UnityEngine.UIElements.EventBase evt, System.Boolean canAffectFocus)
    // Offset: 0x2A43E0
    bool SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus);
    // System.Boolean HandleIMGUIEvent(UnityEngine.Event e, System.Boolean canAffectFocus)
    // Offset: 0x2A4040
    bool HandleIMGUIEvent(::UnityEngine::Event* e, bool canAffectFocus);
    // System.Boolean HandleIMGUIEvent(UnityEngine.Event e, System.Action onGUIHandler, System.Boolean canAffectFocus)
    // Offset: 0x2A3B00
    bool HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Action* onGUIHandler, bool canAffectFocus);
    // private System.Boolean HandleIMGUIEvent(UnityEngine.Event e, UnityEngine.Matrix4x4 worldTransform, UnityEngine.Rect clippingRect, System.Action onGUIHandler, System.Boolean canAffectFocus)
    // Offset: 0x2A3C10
    bool HandleIMGUIEvent(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect, ::System::Action* onGUIHandler, bool canAffectFocus);
    // static private System.Void GetCurrentTransformAndClip(UnityEngine.UIElements.IMGUIContainer container, UnityEngine.Event evt, out UnityEngine.Matrix4x4 transform, out UnityEngine.Rect clipRect)
    // Offset: 0x2A3760
    static void GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt, ByRef<::UnityEngine::Matrix4x4> transform, ByRef<::UnityEngine::Rect> clipRect);
    // public System.Void Dispose()
    // Offset: 0x2A28E0
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposeManaged)
    // Offset: 0x2A28C0
    void Dispose(bool disposeManaged);
    // static private System.Void .cctor()
    // Offset: 0x2A44B0
    // Implemented from: UnityEngine.UIElements.VisualElement
    // Base method: System.Void VisualElement::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.IMGUIContainer
  #pragma pack(pop)
  static check_size<sizeof(IMGUIContainer), 508 + sizeof(::UnityEngine::UIElements::IMGUIContainer::GUIGlobals)> __UnityEngine_UIElements_IMGUIContainerSizeCheck;
  static_assert(sizeof(IMGUIContainer) == 0x274);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIContainer::GUIGlobals, "UnityEngine.UIElements", "IMGUIContainer/GUIGlobals");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler
// Il2CppName: get_onGUIHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_onGUIHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_guiState
// Il2CppName: get_guiState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ObjectGUIState* (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_guiState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_guiState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip
// Il2CppName: get_lastWorldClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_lastWorldClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_cache
// Il2CppName: get_cache
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutUtility::LayoutCache* (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_cache)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_cache", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth
// Il2CppName: get_layoutMeasuredWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_layoutMeasuredWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight
// Il2CppName: get_layoutMeasuredHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_layoutMeasuredHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_contextType
// Il2CppName: get_contextType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_contextType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_contextType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls
// Il2CppName: get_focusOnlyIfHasFocusableControls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "get_focusOnlyIfHasFocusableControls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::SaveGlobals
// Il2CppName: SaveGlobals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::SaveGlobals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "SaveGlobals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::RestoreGlobals
// Il2CppName: RestoreGlobals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::RestoreGlobals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "RestoreGlobals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::DoOnGUI
// Il2CppName: DoOnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, bool, ::UnityEngine::Rect, ::System::Action*, bool)>(&UnityEngine::UIElements::IMGUIContainer::DoOnGUI)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    static auto* parentTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* clippingRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* isComputingLayout = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* layoutSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* onGUIHandler = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* canAffectFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "DoOnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, parentTransform, clippingRect, isComputingLayout, layoutSize, onGUIHandler, canAffectFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout
// Il2CppName: MarkDirtyLayout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "MarkDirtyLayout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI
// Il2CppName: SendEventToIMGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool)>(&UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "EventBase")->byval_arg;
    static auto* canAffectFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "SendEventToIMGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt, canAffectFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent
// Il2CppName: HandleIMGUIEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, bool)>(&UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    static auto* canAffectFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "HandleIMGUIEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, canAffectFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent
// Il2CppName: HandleIMGUIEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::System::Action*, bool)>(&UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    static auto* onGUIHandler = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* canAffectFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "HandleIMGUIEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, onGUIHandler, canAffectFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent
// Il2CppName: HandleIMGUIEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*, bool)>(&UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    static auto* worldTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* clippingRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* onGUIHandler = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    static auto* canAffectFocus = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "HandleIMGUIEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e, worldTransform, clippingRect, onGUIHandler, canAffectFocus});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip
// Il2CppName: GetCurrentTransformAndClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ByRef<::UnityEngine::Matrix4x4>, ByRef<::UnityEngine::Rect>)>(&UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip)> {
  static const MethodInfo* get() {
    static auto* container = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IMGUIContainer")->byval_arg;
    static auto* evt = &::il2cpp_utils::GetClassFromName("UnityEngine", "Event")->byval_arg;
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    static auto* clipRect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "GetCurrentTransformAndClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{container, evt, transform, clipRect});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)()>(&UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposeManaged = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposeManaged});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IMGUIContainer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::IMGUIContainer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IMGUIContainer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

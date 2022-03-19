// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
  // Forward declaring type: GUILayoutGroup
  class GUILayoutGroup;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutUtility
  class GUILayoutUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUILayoutUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutUtility*, "UnityEngine", "GUILayoutUtility");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6F92F0
  class GUILayoutUtility : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::GUILayoutUtility::LayoutCache
    class LayoutCache;
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache> s_StoredLayouts
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::GUILayoutUtility::LayoutCache*>* _get_s_StoredLayouts();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache> s_StoredLayouts
    static void _set_s_StoredLayouts(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::GUILayoutUtility::LayoutCache*>* value);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache> s_StoredWindows
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::GUILayoutUtility::LayoutCache*>* _get_s_StoredWindows();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache> s_StoredWindows
    static void _set_s_StoredWindows(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::GUILayoutUtility::LayoutCache*>* value);
    // Get static field: static UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache current
    static ::UnityEngine::GUILayoutUtility::LayoutCache* _get_current();
    // Set static field: static UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache current
    static void _set_current(::UnityEngine::GUILayoutUtility::LayoutCache* value);
    // Get static field: static readonly UnityEngine.Rect kDummyRect
    static ::UnityEngine::Rect _get_kDummyRect();
    // Set static field: static readonly UnityEngine.Rect kDummyRect
    static void _set_kDummyRect(::UnityEngine::Rect value);
    // static private System.Void .cctor()
    // Offset: 0xFFCADC
    static void _cctor();
    // static private UnityEngine.Rect Internal_GetWindowRect(System.Int32 windowID)
    // Offset: 0xFFC04C
    static ::UnityEngine::Rect Internal_GetWindowRect(int windowID);
    // static private System.Void Internal_MoveWindow(System.Int32 windowID, UnityEngine.Rect r)
    // Offset: 0xFFC13C
    static void Internal_MoveWindow(int windowID, ::UnityEngine::Rect r);
    // static UnityEngine.GUILayoutUtility/UnityEngine.LayoutCache SelectIDList(System.Int32 instanceID, System.Boolean isWindow)
    // Offset: 0xFF7BDC
    static ::UnityEngine::GUILayoutUtility::LayoutCache* SelectIDList(int instanceID, bool isWindow);
    // static System.Void Begin(System.Int32 instanceID)
    // Offset: 0xFFC2E8
    static void Begin(int instanceID);
    // static System.Void BeginWindow(System.Int32 windowID, UnityEngine.GUIStyle style, UnityEngine.GUILayoutOption[] options)
    // Offset: 0xFF7E6C
    static void BeginWindow(int windowID, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static System.Void Layout()
    // Offset: 0xFF843C
    static void Layout();
    // static System.Void LayoutFromEditorWindow()
    // Offset: 0xFFC8E8
    static void LayoutFromEditorWindow();
    // static System.Void LayoutFreeGroup(UnityEngine.GUILayoutGroup toplevel)
    // Offset: 0xFFC530
    static void LayoutFreeGroup(::UnityEngine::GUILayoutGroup* toplevel);
    // static private System.Void LayoutSingleGroup(UnityEngine.GUILayoutGroup i)
    // Offset: 0xFFC698
    static void LayoutSingleGroup(::UnityEngine::GUILayoutGroup* i);
    // static private System.Void Internal_GetWindowRect_Injected(System.Int32 windowID, out UnityEngine.Rect ret)
    // Offset: 0xFFC0EC
    static void Internal_GetWindowRect_Injected(int windowID, ByRef<::UnityEngine::Rect> ret);
    // static private System.Void Internal_MoveWindow_Injected(System.Int32 windowID, ref UnityEngine.Rect r)
    // Offset: 0xFFC1D8
    static void Internal_MoveWindow_Injected(int windowID, ByRef<::UnityEngine::Rect> r);
  }; // UnityEngine.GUILayoutUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_GetWindowRect
// Il2CppName: Internal_GetWindowRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(int)>(&UnityEngine::GUILayoutUtility::Internal_GetWindowRect)> {
  static const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_GetWindowRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_MoveWindow
// Il2CppName: Internal_MoveWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::Rect)>(&UnityEngine::GUILayoutUtility::Internal_MoveWindow)> {
  static const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_MoveWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, r});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::SelectIDList
// Il2CppName: SelectIDList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutUtility::LayoutCache* (*)(int, bool)>(&UnityEngine::GUILayoutUtility::SelectIDList)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isWindow = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "SelectIDList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID, isWindow});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&UnityEngine::GUILayoutUtility::Begin)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::BeginWindow
// Il2CppName: BeginWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayoutUtility::BeginWindow)> {
  static const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "BeginWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, style, options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Layout
// Il2CppName: Layout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::Layout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Layout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutFromEditorWindow
// Il2CppName: LayoutFromEditorWindow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutUtility::LayoutFromEditorWindow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutFromEditorWindow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutFreeGroup
// Il2CppName: LayoutFreeGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&UnityEngine::GUILayoutUtility::LayoutFreeGroup)> {
  static const MethodInfo* get() {
    static auto* toplevel = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutFreeGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{toplevel});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::LayoutSingleGroup
// Il2CppName: LayoutSingleGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::GUILayoutGroup*)>(&UnityEngine::GUILayoutUtility::LayoutSingleGroup)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "LayoutSingleGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected
// Il2CppName: Internal_GetWindowRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::UnityEngine::Rect>)>(&UnityEngine::GUILayoutUtility::Internal_GetWindowRect_Injected)> {
  static const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_GetWindowRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected
// Il2CppName: Internal_MoveWindow_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, ByRef<::UnityEngine::Rect>)>(&UnityEngine::GUILayoutUtility::Internal_MoveWindow_Injected)> {
  static const MethodInfo* get() {
    static auto* windowID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutUtility*), "Internal_MoveWindow_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{windowID, r});
  }
};

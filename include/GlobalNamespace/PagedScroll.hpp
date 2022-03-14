// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PagedScroll
  class PagedScroll;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PagedScroll);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PagedScroll*, "", "PagedScroll");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: PagedScroll
  // [TokenAttribute] Offset: FFFFFFFF
  class PagedScroll : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.UI.Button upButton
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UI::Button* upButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // public UnityEngine.UI.Button downButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* downButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // public System.Int32 itemsPerPage
    // Size: 0x4
    // Offset: 0x28
    int itemsPerPage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: itemsPerPage and: listObject
    char __padding2[0x4] = {};
    // public UnityEngine.GameObject listObject
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* listObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.Transform listObjectTransform
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* listObjectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> listChildren
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* listChildren;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // private System.Int32 _page
    // Size: 0x4
    // Offset: 0x48
    int page;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _cachedChildCount
    // Size: 0x4
    // Offset: 0x4C
    int cachedChildCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 fixedElementCount
    // Size: 0x4
    // Offset: 0x50
    int fixedElementCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean usingFixedElementCount
    // Size: 0x1
    // Offset: 0x54
    bool usingFixedElementCount;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.UI.Button upButton
    ::UnityEngine::UI::Button*& dyn_upButton();
    // Get instance field reference: public UnityEngine.UI.Button downButton
    ::UnityEngine::UI::Button*& dyn_downButton();
    // Get instance field reference: public System.Int32 itemsPerPage
    int& dyn_itemsPerPage();
    // Get instance field reference: public UnityEngine.GameObject listObject
    ::UnityEngine::GameObject*& dyn_listObject();
    // Get instance field reference: public UnityEngine.Transform listObjectTransform
    ::UnityEngine::Transform*& dyn_listObjectTransform();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> listChildren
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_listChildren();
    // Get instance field reference: private System.Int32 _page
    int& dyn__page();
    // Get instance field reference: private System.Int32 _cachedChildCount
    int& dyn__cachedChildCount();
    // Get instance field reference: private System.Int32 fixedElementCount
    int& dyn_fixedElementCount();
    // Get instance field reference: private System.Boolean usingFixedElementCount
    bool& dyn_usingFixedElementCount();
    // private System.Int32 get_LastPage()
    // Offset: 0x1056FE4
    int get_LastPage();
    // public System.Void SetFixedElementCount(System.Int32 count)
    // Offset: 0x1056FF8
    void SetFixedElementCount(int count);
    // public System.Void DisableButtons()
    // Offset: 0x10572F0
    void DisableButtons();
    // public System.Void PageDown()
    // Offset: 0x1057334
    void PageDown();
    // public System.Void PageUp()
    // Offset: 0x105754C
    void PageUp();
    // private System.Void RepopulateListChildren()
    // Offset: 0x1057008
    void RepopulateListChildren();
    // private System.Void SetListChildrenVisibilities()
    // Offset: 0x10573CC
    void SetListChildrenVisibilities();
    // private System.Void SetPageButtonStates()
    // Offset: 0x10574EC
    void SetPageButtonStates();
    // public System.Void .ctor()
    // Offset: 0x10575D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PagedScroll* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PagedScroll::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PagedScroll*, creationType>()));
    }
  }; // PagedScroll
  #pragma pack(pop)
  static check_size<sizeof(PagedScroll), 84 + sizeof(bool)> __GlobalNamespace_PagedScrollSizeCheck;
  static_assert(sizeof(PagedScroll) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::get_LastPage
// Il2CppName: get_LastPage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::get_LastPage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "get_LastPage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::SetFixedElementCount
// Il2CppName: SetFixedElementCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)(int)>(&GlobalNamespace::PagedScroll::SetFixedElementCount)> {
  static const MethodInfo* get() {
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "SetFixedElementCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{count});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::DisableButtons
// Il2CppName: DisableButtons
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::DisableButtons)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "DisableButtons", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::PageDown
// Il2CppName: PageDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::PageDown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "PageDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::PageUp
// Il2CppName: PageUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::PageUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "PageUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::RepopulateListChildren
// Il2CppName: RepopulateListChildren
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::RepopulateListChildren)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "RepopulateListChildren", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::SetListChildrenVisibilities
// Il2CppName: SetListChildrenVisibilities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::SetListChildrenVisibilities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "SetListChildrenVisibilities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::SetPageButtonStates
// Il2CppName: SetPageButtonStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PagedScroll::*)()>(&GlobalNamespace::PagedScroll::SetPageButtonStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PagedScroll*), "SetPageButtonStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PagedScroll::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

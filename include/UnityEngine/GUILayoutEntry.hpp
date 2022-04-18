// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GUILayoutEntry
  class GUILayoutEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GUILayoutEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutEntry*, "UnityEngine", "GUILayoutEntry");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GUILayoutEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  class GUILayoutEntry : public ::Il2CppObject {
    public:
    public:
    // public System.Single minWidth
    // Size: 0x4
    // Offset: 0x10
    float minWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxWidth
    // Size: 0x4
    // Offset: 0x14
    float maxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minHeight
    // Size: 0x4
    // Offset: 0x18
    float minHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxHeight
    // Size: 0x4
    // Offset: 0x1C
    float maxHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Rect rect
    // Size: 0x10
    // Offset: 0x20
    ::UnityEngine::Rect rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public System.Int32 stretchWidth
    // Size: 0x4
    // Offset: 0x30
    int stretchWidth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 stretchHeight
    // Size: 0x4
    // Offset: 0x34
    int stretchHeight;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean consideredForMargin
    // Size: 0x1
    // Offset: 0x38
    bool consideredForMargin;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: consideredForMargin and: m_Style
    char __padding7[0x7] = {};
    // private UnityEngine.GUIStyle m_Style
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::GUIStyle* m_Style;
    // Field size check
    static_assert(sizeof(::UnityEngine::GUIStyle*) == 0x8);
    public:
    // Get static field: static UnityEngine.Rect kDummyRect
    static ::UnityEngine::Rect _get_kDummyRect();
    // Set static field: static UnityEngine.Rect kDummyRect
    static void _set_kDummyRect(::UnityEngine::Rect value);
    // Get static field: static protected System.Int32 indent
    static int _get_indent();
    // Set static field: static protected System.Int32 indent
    static void _set_indent(int value);
    // Get instance field reference: public System.Single minWidth
    [[deprecated("Use field access instead!")]] float& dyn_minWidth();
    // Get instance field reference: public System.Single maxWidth
    [[deprecated("Use field access instead!")]] float& dyn_maxWidth();
    // Get instance field reference: public System.Single minHeight
    [[deprecated("Use field access instead!")]] float& dyn_minHeight();
    // Get instance field reference: public System.Single maxHeight
    [[deprecated("Use field access instead!")]] float& dyn_maxHeight();
    // Get instance field reference: public UnityEngine.Rect rect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_rect();
    // Get instance field reference: public System.Int32 stretchWidth
    [[deprecated("Use field access instead!")]] int& dyn_stretchWidth();
    // Get instance field reference: public System.Int32 stretchHeight
    [[deprecated("Use field access instead!")]] int& dyn_stretchHeight();
    // Get instance field reference: public System.Boolean consideredForMargin
    [[deprecated("Use field access instead!")]] bool& dyn_consideredForMargin();
    // Get instance field reference: private UnityEngine.GUIStyle m_Style
    [[deprecated("Use field access instead!")]] ::UnityEngine::GUIStyle*& dyn_m_Style();
    // public UnityEngine.GUIStyle get_style()
    // Offset: 0x61E960
    ::UnityEngine::GUIStyle* get_style();
    // public System.Void set_style(UnityEngine.GUIStyle value)
    // Offset: 0x61E970
    void set_style(::UnityEngine::GUIStyle* value);
    // public System.Int32 get_marginLeft()
    // Offset: 0x61E890
    int get_marginLeft();
    // public System.Int32 get_marginRight()
    // Offset: 0x61E8C0
    int get_marginRight();
    // public System.Int32 get_marginTop()
    // Offset: 0x61E8F0
    int get_marginTop();
    // public System.Int32 get_marginBottom()
    // Offset: 0x61E820
    int get_marginBottom();
    // public System.Int32 get_marginHorizontal()
    // Offset: 0x61E850
    int get_marginHorizontal();
    // public System.Int32 get_marginVertical()
    // Offset: 0x61E920
    int get_marginVertical();
    // public System.Void .ctor(System.Single _minWidth, System.Single _maxWidth, System.Single _minHeight, System.Single _maxHeight, UnityEngine.GUIStyle _style)
    // Offset: 0x61E6C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GUILayoutEntry* New_ctor(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, ::UnityEngine::GUIStyle* _style) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::GUILayoutEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GUILayoutEntry*, creationType>(_minWidth, _maxWidth, _minHeight, _maxHeight, _style)));
    }
    // static private System.Void .cctor()
    // Offset: 0x61E640
    static void _cctor();
    // public System.Void CalcWidth()
    // Offset: 0x1DDF00
    void CalcWidth();
    // public System.Void CalcHeight()
    // Offset: 0x1DDF00
    void CalcHeight();
    // public System.Void SetHorizontal(System.Single x, System.Single width)
    // Offset: 0x61DCC0
    void SetHorizontal(float x, float width);
    // public System.Void SetVertical(System.Single y, System.Single height)
    // Offset: 0x61DD00
    void SetVertical(float y, float height);
    // protected System.Void ApplyStyleSettings(UnityEngine.GUIStyle style)
    // Offset: 0x61DBB0
    void ApplyStyleSettings(::UnityEngine::GUIStyle* style);
    // public System.Void ApplyOptions(UnityEngine.GUILayoutOption[] options)
    // Offset: 0x61D810
    void ApplyOptions(::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // public override System.String ToString()
    // Offset: 0x61DD40
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // UnityEngine.GUILayoutEntry
  #pragma pack(pop)
  static check_size<sizeof(GUILayoutEntry), 64 + sizeof(::UnityEngine::GUIStyle*)> __UnityEngine_GUILayoutEntrySizeCheck;
  static_assert(sizeof(GUILayoutEntry) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_style
// Il2CppName: get_style
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_style)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_style", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::set_style
// Il2CppName: set_style
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)(::UnityEngine::GUIStyle*)>(&UnityEngine::GUILayoutEntry::set_style)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "set_style", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginLeft
// Il2CppName: get_marginLeft
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginLeft)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginLeft", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginRight
// Il2CppName: get_marginRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginRight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginTop
// Il2CppName: get_marginTop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginTop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginTop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginBottom
// Il2CppName: get_marginBottom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginBottom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginBottom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginHorizontal
// Il2CppName: get_marginHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::get_marginVertical
// Il2CppName: get_marginVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::get_marginVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "get_marginVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::GUILayoutEntry::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::CalcWidth
// Il2CppName: CalcWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::CalcWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "CalcWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::CalcHeight
// Il2CppName: CalcHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::CalcHeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "CalcHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::SetHorizontal
// Il2CppName: SetHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)(float, float)>(&UnityEngine::GUILayoutEntry::SetHorizontal)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "SetHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, width});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::SetVertical
// Il2CppName: SetVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)(float, float)>(&UnityEngine::GUILayoutEntry::SetVertical)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "SetVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::ApplyStyleSettings
// Il2CppName: ApplyStyleSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)(::UnityEngine::GUIStyle*)>(&UnityEngine::GUILayoutEntry::ApplyStyleSettings)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "ApplyStyleSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::ApplyOptions
// Il2CppName: ApplyOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GUILayoutEntry::*)(::ArrayW<::UnityEngine::GUILayoutOption*>)>(&UnityEngine::GUILayoutEntry::ApplyOptions)> {
  static const MethodInfo* get() {
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "ApplyOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};
// Writing MetadataGetter for method: UnityEngine::GUILayoutEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::GUILayoutEntry::*)()>(&UnityEngine::GUILayoutEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GUILayoutEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

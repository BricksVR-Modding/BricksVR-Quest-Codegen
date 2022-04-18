// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Style
  class TMP_Style;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_StyleSheet
  class TMP_StyleSheet;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::TMPro::TMP_StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_StyleSheet*, "TMPro", "TMP_StyleSheet");
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_StyleSheet
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  class TMP_StyleSheet : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.Collections.Generic.List`1<TMPro.TMP_Style> m_StyleList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* m_StyleList;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> m_StyleLookupDictionary
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_Style*>* m_StyleLookupDictionary;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_Style*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Collections.Generic.List`1<TMPro.TMP_Style> m_StyleList
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>*& dyn_m_StyleList();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,TMPro.TMP_Style> m_StyleLookupDictionary
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_Style*>*& dyn_m_StyleLookupDictionary();
    // System.Collections.Generic.List`1<TMPro.TMP_Style> get_styles()
    // Offset: 0x1E1520
    ::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* get_styles();
    // public System.Void .ctor()
    // Offset: 0x1E14B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_StyleSheet* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::TMP_StyleSheet::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_StyleSheet*, creationType>()));
    }
    // private System.Void Reset()
    // Offset: 0x1E14A0
    void Reset();
    // public TMPro.TMP_Style GetStyle(System.Int32 hashCode)
    // Offset: 0x1E1190
    ::TMPro::TMP_Style* GetStyle(int hashCode);
    // public TMPro.TMP_Style GetStyle(System.String name)
    // Offset: 0x1E10E0
    ::TMPro::TMP_Style* GetStyle(::StringW name);
    // public System.Void RefreshStyles()
    // Offset: 0x1E14A0
    void RefreshStyles();
    // private System.Void LoadStyleDictionaryInternal()
    // Offset: 0x1E1220
    void LoadStyleDictionaryInternal();
  }; // TMPro.TMP_StyleSheet
  #pragma pack(pop)
  static check_size<sizeof(TMP_StyleSheet), 32 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::TMPro::TMP_Style*>*)> __TMPro_TMP_StyleSheetSizeCheck;
  static_assert(sizeof(TMP_StyleSheet) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::get_styles
// Il2CppName: get_styles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::TMPro::TMP_Style*>* (TMPro::TMP_StyleSheet::*)()>(&TMPro::TMP_StyleSheet::get_styles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "get_styles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_StyleSheet::*)()>(&TMPro::TMP_StyleSheet::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::GetStyle
// Il2CppName: GetStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Style* (TMPro::TMP_StyleSheet::*)(int)>(&TMPro::TMP_StyleSheet::GetStyle)> {
  static const MethodInfo* get() {
    static auto* hashCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "GetStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hashCode});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::GetStyle
// Il2CppName: GetStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::TMP_Style* (TMPro::TMP_StyleSheet::*)(::StringW)>(&TMPro::TMP_StyleSheet::GetStyle)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "GetStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::RefreshStyles
// Il2CppName: RefreshStyles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_StyleSheet::*)()>(&TMPro::TMP_StyleSheet::RefreshStyles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "RefreshStyles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: TMPro::TMP_StyleSheet::LoadStyleDictionaryInternal
// Il2CppName: LoadStyleDictionaryInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (TMPro::TMP_StyleSheet::*)()>(&TMPro::TMP_StyleSheet::LoadStyleDictionaryInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::TMP_StyleSheet*), "LoadStyleDictionaryInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

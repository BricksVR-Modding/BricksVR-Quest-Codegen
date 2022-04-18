// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StylePropertyID
#include "UnityEngine/UIElements/StyleSheets/StylePropertyID.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StyleValue
#include "UnityEngine/UIElements/StyleSheets/StyleValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Forward declaring type: StyleSheetCache
  class StyleSheetCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetCache);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache");
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.StyleSheetCache
  // [TokenAttribute] Offset: FFFFFFFF
  class StyleSheetCache : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey
    struct SheetHandleKey;
    // Nested type: ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer
    class SheetHandleKeyComparer;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey
    // [TokenAttribute] Offset: FFFFFFFF
    struct SheetHandleKey/*, public ::System::ValueType*/ {
      public:
      public:
      // public readonly System.Int32 sheetInstanceID
      // Size: 0x4
      // Offset: 0x0
      int sheetInstanceID;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // public readonly System.Int32 index
      // Size: 0x4
      // Offset: 0x4
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SheetHandleKey
      constexpr SheetHandleKey(int sheetInstanceID_ = {}, int index_ = {}) noexcept : sheetInstanceID{sheetInstanceID_}, index{index_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public readonly System.Int32 sheetInstanceID
      [[deprecated("Use field access instead!")]] int& dyn_sheetInstanceID();
      // Get instance field reference: public readonly System.Int32 index
      [[deprecated("Use field access instead!")]] int& dyn_index();
    }; // UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey
    #pragma pack(pop)
    static check_size<sizeof(StyleSheetCache::SheetHandleKey), 4 + sizeof(int)> __UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKeySizeCheck;
    static_assert(sizeof(StyleSheetCache::SheetHandleKey) == 0x8);
    // Get static field: static private UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKeyComparer s_Comparer
    static ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer* _get_s_Comparer();
    // Set static field: static private UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKeyComparer s_Comparer
    static void _set_s_Comparer(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey,System.Int32> s_EnumToIntCache
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, int>* _get_s_EnumToIntCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey,System.Int32> s_EnumToIntCache
    static void _set_s_EnumToIntCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, int>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey,UnityEngine.UIElements.StyleSheets.StylePropertyID[]> s_RulePropertyIDsCache
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyID>>* _get_s_RulePropertyIDsCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey,UnityEngine.UIElements.StyleSheets.StylePropertyID[]> s_RulePropertyIDsCache
    static void _set_s_RulePropertyIDsCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyID>>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyID> s_NameToIDCache
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>* _get_s_NameToIDCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyID> s_NameToIDCache
    static void _set_s_NameToIDCache(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::UIElements::StyleSheets::StylePropertyID>* value);
    // Get static field: static private UnityEngine.UIElements.StyleSheets.StyleValue[] s_InitialStyleValues
    static ::ArrayW<::UnityEngine::UIElements::StyleSheets::StyleValue> _get_s_InitialStyleValues();
    // Set static field: static private UnityEngine.UIElements.StyleSheets.StyleValue[] s_InitialStyleValues
    static void _set_s_InitialStyleValues(::ArrayW<::UnityEngine::UIElements::StyleSheets::StyleValue> value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_DeprecatedNames
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _get_s_DeprecatedNames();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> s_DeprecatedNames
    static void _set_s_DeprecatedNames(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x2AD370
    static void _cctor();
    // static UnityEngine.UIElements.StyleSheets.StyleValue GetInitialValue(UnityEngine.UIElements.StyleSheets.StylePropertyID propertyId)
    // Offset: 0x2AD280
    static ::UnityEngine::UIElements::StyleSheets::StyleValue GetInitialValue(::UnityEngine::UIElements::StyleSheets::StylePropertyID propertyId);
  }; // UnityEngine.UIElements.StyleSheets.StyleSheetCache
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StyleSheetCache::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::StyleSheets::StyleSheetCache::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StyleSheetCache*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetInitialValue
// Il2CppName: GetInitialValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::StyleSheets::StyleValue (*)(::UnityEngine::UIElements::StyleSheets::StylePropertyID)>(&UnityEngine::UIElements::StyleSheets::StyleSheetCache::GetInitialValue)> {
  static const MethodInfo* get() {
    static auto* propertyId = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StylePropertyID")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StyleSheetCache*), "GetInitialValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{propertyId});
  }
};
// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StyleSheets.StyleSheetCache
#include "UnityEngine/UIElements/StyleSheets/StyleSheetCache.hpp"
// Including type: System.Collections.Generic.IEqualityComparer`1
#include "System/Collections/Generic/IEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer*, "UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKeyComparer");
// Type namespace: UnityEngine.UIElements.StyleSheets
namespace UnityEngine::UIElements::StyleSheets {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKeyComparer
  // [TokenAttribute] Offset: FFFFFFFF
  class StyleSheetCache::SheetHandleKeyComparer : public ::Il2CppObject/*, public ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey>
    operator ::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEqualityComparer_1<::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StyleSheetCache::SheetHandleKeyComparer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StyleSheetCache::SheetHandleKeyComparer*, creationType>()));
    }
    // public System.Boolean Equals(UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey x, UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey y)
    // Offset: 0x2AC430
    bool Equals(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey x, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey y);
    // public System.Int32 GetHashCode(UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKey key)
    // Offset: 0x2AC450
    int GetHashCode(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey key);
  }; // UnityEngine.UIElements.StyleSheets.StyleSheetCache/UnityEngine.UIElements.StyleSheets.SheetHandleKeyComparer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::*)(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey, ::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey)>(&UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::Equals)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::*)(::UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKey)>(&UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.StyleSheets", "StyleSheetCache/SheetHandleKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleSheets::StyleSheetCache::SheetHandleKeyComparer*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};

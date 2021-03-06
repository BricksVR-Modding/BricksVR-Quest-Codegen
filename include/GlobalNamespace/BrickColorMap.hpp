// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color32
#include "UnityEngine/Color32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BrickColorMap
  class BrickColorMap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BrickColorMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BrickColorMap*, "", "BrickColorMap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BrickColorMap
  // [TokenAttribute] Offset: FFFFFFFF
  class BrickColorMap : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::BrickColorMap::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color32> _idsToColors
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Color32>* _get__idsToColors();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Color32> _idsToColors
    static void _set__idsToColors(::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::Color32>* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Color32,System.Int32> _colorsToIds
    static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Color32, int>* _get__colorsToIds();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Color32,System.Int32> _colorsToIds
    static void _set__colorsToIds(::System::Collections::Generic::Dictionary_2<::UnityEngine::Color32, int>* value);
    // static public UnityEngine.Color32 ColorFromID(System.Int32 id)
    // Offset: 0x6E92D0
    static ::UnityEngine::Color32 ColorFromID(int id);
    // static public System.Int32 IDFromColor(UnityEngine.Color32 color)
    // Offset: 0x6E9340
    static int IDFromColor(::UnityEngine::Color32 color);
    // static public System.Void WarmColorDictionary()
    // Offset: 0x6E98D0
    static void WarmColorDictionary();
    // static private System.Void InitializeDictionary()
    // Offset: 0x6E93B0
    static void InitializeDictionary();
  }; // BrickColorMap
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::ColorFromID
// Il2CppName: ColorFromID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (*)(int)>(&GlobalNamespace::BrickColorMap::ColorFromID)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap*), "ColorFromID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::IDFromColor
// Il2CppName: IDFromColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::Color32)>(&GlobalNamespace::BrickColorMap::IDFromColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap*), "IDFromColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::WarmColorDictionary
// Il2CppName: WarmColorDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickColorMap::WarmColorDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap*), "WarmColorDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BrickColorMap::InitializeDictionary
// Il2CppName: InitializeDictionary
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BrickColorMap::InitializeDictionary)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BrickColorMap*), "InitializeDictionary", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

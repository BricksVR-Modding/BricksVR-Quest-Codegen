// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.GridLayout
#include "UnityEngine/GridLayout.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3Int
  struct Vector3Int;
}
// Completed forward declares
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Forward declaring type: Tilemap
  class Tilemap;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Tilemaps::Tilemap);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Tilemaps::Tilemap*, "UnityEngine.Tilemaps", "Tilemap");
// Type namespace: UnityEngine.Tilemaps
namespace UnityEngine::Tilemaps {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Tilemaps.Tilemap
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 1041E0
  // [RequireComponent] Offset: 1041E0
  // [NativeTypeAttribute] Offset: 1041E0
  // [NativeHeaderAttribute] Offset: 1041E0
  // [NativeHeaderAttribute] Offset: 1041E0
  // [NativeHeaderAttribute] Offset: 1041E0
  // [NativeHeaderAttribute] Offset: 1041E0
  class Tilemap : public ::UnityEngine::GridLayout {
    public:
    // public System.Void RefreshTile(UnityEngine.Vector3Int position)
    // Offset: 0x66F3C0
    void RefreshTile(::UnityEngine::Vector3Int position);
    // private System.Void RefreshTile_Injected(ref UnityEngine.Vector3Int position)
    // Offset: 0x66F370
    void RefreshTile_Injected(ByRef<::UnityEngine::Vector3Int> position);
  }; // UnityEngine.Tilemaps.Tilemap
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile
// Il2CppName: RefreshTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(::UnityEngine::Vector3Int)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};
// Writing MetadataGetter for method: UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected
// Il2CppName: RefreshTile_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Tilemaps::Tilemap::*)(ByRef<::UnityEngine::Vector3Int>)>(&UnityEngine::Tilemaps::Tilemap::RefreshTile_Injected)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3Int")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Tilemaps::Tilemap*), "RefreshTile_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position});
  }
};

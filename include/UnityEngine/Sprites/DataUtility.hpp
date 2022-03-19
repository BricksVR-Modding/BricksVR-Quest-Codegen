// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Completed forward declares
// Type namespace: UnityEngine.Sprites
namespace UnityEngine::Sprites {
  // Forward declaring type: DataUtility
  class DataUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Sprites::DataUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprites::DataUtility*, "UnityEngine.Sprites", "DataUtility");
// Type namespace: UnityEngine.Sprites
namespace UnityEngine::Sprites {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Sprites.DataUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class DataUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector4 GetInnerUV(UnityEngine.Sprite sprite)
    // Offset: 0xFC8D6C
    static ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetOuterUV(UnityEngine.Sprite sprite)
    // Offset: 0xFC8D80
    static ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector4 GetPadding(UnityEngine.Sprite sprite)
    // Offset: 0xFC8D94
    static ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* sprite);
    // static public UnityEngine.Vector2 GetMinSize(UnityEngine.Sprite sprite)
    // Offset: 0xFC8DA8
    static ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* sprite);
  }; // UnityEngine.Sprites.DataUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Sprites::DataUtility::GetInnerUV
// Il2CppName: GetInnerUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Sprite*)>(&UnityEngine::Sprites::DataUtility::GetInnerUV)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprites::DataUtility*), "GetInnerUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprites::DataUtility::GetOuterUV
// Il2CppName: GetOuterUV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Sprite*)>(&UnityEngine::Sprites::DataUtility::GetOuterUV)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprites::DataUtility*), "GetOuterUV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprites::DataUtility::GetPadding
// Il2CppName: GetPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Sprite*)>(&UnityEngine::Sprites::DataUtility::GetPadding)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprites::DataUtility*), "GetPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprites::DataUtility::GetMinSize
// Il2CppName: GetMinSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Sprite*)>(&UnityEngine::Sprites::DataUtility::GetMinSize)> {
  static const MethodInfo* get() {
    static auto* sprite = &::il2cpp_utils::GetClassFromName("UnityEngine", "Sprite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprites::DataUtility*), "GetMinSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sprite});
  }
};

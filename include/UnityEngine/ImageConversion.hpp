// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ImageConversion
  class ImageConversion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ImageConversion);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImageConversion*, "UnityEngine", "ImageConversion");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ImageConversion
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: F0FD0
  class ImageConversion : public ::Il2CppObject {
    public:
    // static public System.Byte[] EncodeToPNG(UnityEngine.Texture2D tex)
    // Offset: 0x671D10
    static ::ArrayW<uint8_t> EncodeToPNG(::UnityEngine::Texture2D* tex);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex, System.Int32 quality)
    // Offset: 0x671CD0
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex, int quality);
    // static public System.Byte[] EncodeToJPG(UnityEngine.Texture2D tex)
    // Offset: 0x671C90
    static ::ArrayW<uint8_t> EncodeToJPG(::UnityEngine::Texture2D* tex);
  }; // UnityEngine.ImageConversion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToPNG
// Il2CppName: EncodeToPNG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToPNG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToPNG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*, int)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* quality = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex, quality});
  }
};
// Writing MetadataGetter for method: UnityEngine::ImageConversion::EncodeToJPG
// Il2CppName: EncodeToJPG
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::UnityEngine::Texture2D*)>(&UnityEngine::ImageConversion::EncodeToJPG)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ImageConversion*), "EncodeToJPG", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};

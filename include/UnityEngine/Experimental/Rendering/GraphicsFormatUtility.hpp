// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Experimental::Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormat
  struct GraphicsFormat;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: TextureFormat
  struct TextureFormat;
  // Forward declaring type: RenderTextureFormat
  struct RenderTextureFormat;
  // Forward declaring type: RenderTextureReadWrite
  struct RenderTextureReadWrite;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Forward declaring type: GraphicsFormatUtility
  class GraphicsFormatUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::Rendering::GraphicsFormatUtility*, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
// Type namespace: UnityEngine.Experimental.Rendering
namespace UnityEngine::Experimental::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6DB230
  // [NativeHeaderAttribute] Offset: 6DB230
  // [NativeHeaderAttribute] Offset: 6DB230
  class GraphicsFormatUtility : public ::Il2CppObject {
    public:
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.TextureFormat format, System.Boolean isSRGB)
    // Offset: 0xC9BC28
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::TextureFormat format, bool isSRGB);
    // static private UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat_Native_TextureFormat(UnityEngine.TextureFormat format, System.Boolean isSRGB)
    // Offset: 0xCA2C98
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(::UnityEngine::TextureFormat format, bool isSRGB);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.RenderTextureFormat format, System.Boolean isSRGB)
    // Offset: 0xCA2CE8
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);
    // static private UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine.RenderTextureFormat format, System.Boolean isSRGB)
    // Offset: 0xCA2D38
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(::UnityEngine::RenderTextureFormat format, bool isSRGB);
    // static public UnityEngine.Experimental.Rendering.GraphicsFormat GetGraphicsFormat(UnityEngine.RenderTextureFormat format, UnityEngine.RenderTextureReadWrite readWrite)
    // Offset: 0xCA2D88
    static ::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(::UnityEngine::RenderTextureFormat format, ::UnityEngine::RenderTextureReadWrite readWrite);
    // static public System.Boolean IsSRGBFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0xCA2DF8
    static bool IsSRGBFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // static public UnityEngine.RenderTextureFormat GetRenderTextureFormat(UnityEngine.Experimental.Rendering.GraphicsFormat format)
    // Offset: 0xCA2E38
    static ::UnityEngine::RenderTextureFormat GetRenderTextureFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format);
    // static System.Boolean IsCompressedTextureFormat(UnityEngine.TextureFormat format)
    // Offset: 0xCA2E78
    static bool IsCompressedTextureFormat(::UnityEngine::TextureFormat format);
    // static public System.Boolean IsCrunchFormat(UnityEngine.TextureFormat format)
    // Offset: 0xC9BC78
    static bool IsCrunchFormat(::UnityEngine::TextureFormat format);
  }; // UnityEngine.Experimental.Rendering.GraphicsFormatUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat
// Il2CppName: GetGraphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::TextureFormat, bool)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    static auto* isSRGB = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetGraphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, isSRGB});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat
// Il2CppName: GetGraphicsFormat_Native_TextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::TextureFormat, bool)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_TextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    static auto* isSRGB = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetGraphicsFormat_Native_TextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, isSRGB});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat
// Il2CppName: GetGraphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, bool)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* isSRGB = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetGraphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, isSRGB});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat
// Il2CppName: GetGraphicsFormat_Native_RenderTextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, bool)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat_Native_RenderTextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* isSRGB = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetGraphicsFormat_Native_RenderTextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, isSRGB});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat
// Il2CppName: GetGraphicsFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)(::UnityEngine::RenderTextureFormat, ::UnityEngine::RenderTextureReadWrite)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetGraphicsFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureFormat")->byval_arg;
    static auto* readWrite = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTextureReadWrite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetGraphicsFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, readWrite});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsSRGBFormat
// Il2CppName: IsSRGBFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsSRGBFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "IsSRGBFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetRenderTextureFormat
// Il2CppName: GetRenderTextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTextureFormat (*)(::UnityEngine::Experimental::Rendering::GraphicsFormat)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::GetRenderTextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "GetRenderTextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedTextureFormat
// Il2CppName: IsCompressedTextureFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCompressedTextureFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "IsCompressedTextureFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCrunchFormat
// Il2CppName: IsCrunchFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&UnityEngine::Experimental::Rendering::GraphicsFormatUtility::IsCrunchFormat)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine", "TextureFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::Rendering::GraphicsFormatUtility*), "IsCrunchFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};

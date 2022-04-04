// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Texture
#include "UnityEngine/Texture.hpp"
// Including type: UnityEngine.Experimental.Rendering.DefaultFormat
#include "UnityEngine/Experimental/Rendering/DefaultFormat.hpp"
// Including type: UnityEngine.Experimental.Rendering.TextureCreationFlags
#include "UnityEngine/Experimental/Rendering/TextureCreationFlags.hpp"
// Including type: UnityEngine.Experimental.Rendering.GraphicsFormat
#include "UnityEngine/Experimental/Rendering/GraphicsFormat.hpp"
// Including type: UnityEngine.TextureFormat
#include "UnityEngine/TextureFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture3D
  class Texture3D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Texture3D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture3D*, "UnityEngine", "Texture3D");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Texture3D
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FF5B0
  // [ExcludeFromPresetAttribute] Offset: FF5B0
  class Texture3D : public ::UnityEngine::Texture {
    public:
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.DefaultFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xA413F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture3D* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture3D*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xA41160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture3D* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture3D*, creationType>(width, height, depth, format, flags)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags, System.Int32 mipCount)
    // Offset: 0xA416C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture3D* New_ctor(int width, int height, int depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture3D*, creationType>(width, height, depth, format, flags, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Int32 mipCount)
    // Offset: 0xA412B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture3D* New_ctor(int width, int height, int depth, ::UnityEngine::TextureFormat textureFormat, int mipCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture3D*, creationType>(width, height, depth, textureFormat, mipCount)));
    }
    // public System.Void .ctor(System.Int32 width, System.Int32 height, System.Int32 depth, UnityEngine.TextureFormat textureFormat, System.Boolean mipChain)
    // Offset: 0xA41560
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Texture3D* New_ctor(int width, int height, int depth, ::UnityEngine::TextureFormat textureFormat, bool mipChain) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Texture3D::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Texture3D*, creationType>(width, height, depth, textureFormat, mipChain)));
    }
    // static private System.Boolean Internal_CreateImpl(UnityEngine.Texture3D mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xA41030
    static bool Internal_CreateImpl(::UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // static private System.Void Internal_Create(UnityEngine.Texture3D mono, System.Int32 w, System.Int32 h, System.Int32 d, System.Int32 mipCount, UnityEngine.Experimental.Rendering.GraphicsFormat format, UnityEngine.Experimental.Rendering.TextureCreationFlags flags)
    // Offset: 0xA41090
    static void Internal_Create(::UnityEngine::Texture3D* mono, int w, int h, int d, int mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
    // public override System.Boolean get_isReadable()
    // Offset: 0xA417D0
    // Implemented from: UnityEngine.Texture
    // Base method: System.Boolean Texture::get_isReadable()
    bool get_isReadable();
  }; // UnityEngine.Texture3D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Texture3D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture3D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture3D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture3D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture3D::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Texture3D::Internal_CreateImpl
// Il2CppName: Internal_CreateImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Texture3D*, int, int, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture3D::Internal_CreateImpl)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture3D")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture3D*), "Internal_CreateImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, w, h, d, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture3D::Internal_Create
// Il2CppName: Internal_Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture3D*, int, int, int, int, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Experimental::Rendering::TextureCreationFlags)>(&UnityEngine::Texture3D::Internal_Create)> {
  static const MethodInfo* get() {
    static auto* mono = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture3D")->byval_arg;
    static auto* w = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* h = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* d = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mipCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* format = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "GraphicsFormat")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Experimental.Rendering", "TextureCreationFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture3D*), "Internal_Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mono, w, h, d, mipCount, format, flags});
  }
};
// Writing MetadataGetter for method: UnityEngine::Texture3D::get_isReadable
// Il2CppName: get_isReadable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Texture3D::*)()>(&UnityEngine::Texture3D::get_isReadable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Texture3D*), "get_isReadable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

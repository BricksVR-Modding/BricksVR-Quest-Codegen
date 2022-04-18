// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: SpritePackingMode
  struct SpritePackingMode;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Sprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprite*, "UnityEngine", "Sprite");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Sprite
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: C4AF0
  // [NativeHeaderAttribute] Offset: C4AF0
  // [NativeHeaderAttribute] Offset: C4AF0
  // [ExcludeFromPresetAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: C4AF0
  class Sprite : public ::UnityEngine::Object {
    public:
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0xA3D0A0
    ::UnityEngine::Bounds get_bounds();
    // public UnityEngine.Rect get_rect()
    // Offset: 0xA3D270
    ::UnityEngine::Rect get_rect();
    // public UnityEngine.Vector4 get_border()
    // Offset: 0xA3D000
    ::UnityEngine::Vector4 get_border();
    // public UnityEngine.Texture2D get_texture()
    // Offset: 0xA3D390
    ::UnityEngine::Texture2D* get_texture();
    // public System.Single get_pixelsPerUnit()
    // Offset: 0xA3D1E0
    float get_pixelsPerUnit();
    // public UnityEngine.Texture2D get_associatedAlphaSplitTexture()
    // Offset: 0xA3CF70
    ::UnityEngine::Texture2D* get_associatedAlphaSplitTexture();
    // public UnityEngine.Vector2 get_pivot()
    // Offset: 0xA3D190
    ::UnityEngine::Vector2 get_pivot();
    // public System.Boolean get_packed()
    // Offset: 0xA3D100
    bool get_packed();
    // public UnityEngine.SpritePackingMode get_packingMode()
    // Offset: 0xA3CD90
    ::UnityEngine::SpritePackingMode get_packingMode();
    // public UnityEngine.Rect get_textureRect()
    // Offset: 0xA3D2C0
    ::UnityEngine::Rect get_textureRect();
    // public UnityEngine.Vector2[] get_vertices()
    // Offset: 0xA3D450
    ::ArrayW<::UnityEngine::Vector2> get_vertices();
    // public System.UInt16[] get_triangles()
    // Offset: 0xA3D3D0
    ::ArrayW<uint16_t> get_triangles();
    // public UnityEngine.Vector2[] get_uv()
    // Offset: 0xA3D410
    ::ArrayW<::UnityEngine::Vector2> get_uv();
    // System.Int32 GetPackingMode()
    // Offset: 0xA3CD90
    int GetPackingMode();
    // System.Int32 GetPacked()
    // Offset: 0xA3CD50
    int GetPacked();
    // UnityEngine.Rect GetTextureRect()
    // Offset: 0xA3CEC0
    ::UnityEngine::Rect GetTextureRect();
    // UnityEngine.Vector4 GetInnerUVs()
    // Offset: 0xA3CC60
    ::UnityEngine::Vector4 GetInnerUVs();
    // UnityEngine.Vector4 GetOuterUVs()
    // Offset: 0xA3CD00
    ::UnityEngine::Vector4 GetOuterUVs();
    // UnityEngine.Vector4 GetPadding()
    // Offset: 0xA3CE20
    ::UnityEngine::Vector4 GetPadding();
    // private System.Void GetTextureRect_Injected(out UnityEngine.Rect ret)
    // Offset: 0xA3CE70
    void GetTextureRect_Injected(ByRef<::UnityEngine::Rect> ret);
    // private System.Void GetInnerUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0xA3CC10
    void GetInnerUVs_Injected(ByRef<::UnityEngine::Vector4> ret);
    // private System.Void GetOuterUVs_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0xA3CCB0
    void GetOuterUVs_Injected(ByRef<::UnityEngine::Vector4> ret);
    // private System.Void GetPadding_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0xA3CDD0
    void GetPadding_Injected(ByRef<::UnityEngine::Vector4> ret);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0xA3D050
    void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);
    // private System.Void get_rect_Injected(out UnityEngine.Rect ret)
    // Offset: 0xA3D220
    void get_rect_Injected(ByRef<::UnityEngine::Rect> ret);
    // private System.Void get_border_Injected(out UnityEngine.Vector4 ret)
    // Offset: 0xA3CFB0
    void get_border_Injected(ByRef<::UnityEngine::Vector4> ret);
    // private System.Void get_pivot_Injected(out UnityEngine.Vector2 ret)
    // Offset: 0xA3D140
    void get_pivot_Injected(ByRef<::UnityEngine::Vector2> ret);
    // private System.Void .ctor()
    // Offset: 0xA3CF10
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sprite* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Sprite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sprite*, creationType>()));
    }
  }; // UnityEngine.Sprite
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Sprite::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_rect
// Il2CppName: get_rect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_rect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_rect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_border
// Il2CppName: get_border
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_border)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_border", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_texture
// Il2CppName: get_texture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_texture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_texture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pixelsPerUnit
// Il2CppName: get_pixelsPerUnit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_pixelsPerUnit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pixelsPerUnit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_associatedAlphaSplitTexture
// Il2CppName: get_associatedAlphaSplitTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_associatedAlphaSplitTexture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_associatedAlphaSplitTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pivot
// Il2CppName: get_pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_packed
// Il2CppName: get_packed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_packed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_packed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_packingMode
// Il2CppName: get_packingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpritePackingMode (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_packingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_packingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_textureRect
// Il2CppName: get_textureRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_textureRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_textureRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_vertices
// Il2CppName: get_vertices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_vertices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_vertices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_triangles
// Il2CppName: get_triangles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint16_t> (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_triangles)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_triangles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_uv
// Il2CppName: get_uv
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector2> (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::get_uv)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_uv", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPackingMode
// Il2CppName: GetPackingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPackingMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPackingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPacked
// Il2CppName: GetPacked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPacked)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPacked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetTextureRect
// Il2CppName: GetTextureRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetTextureRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetTextureRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetInnerUVs
// Il2CppName: GetInnerUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetInnerUVs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetInnerUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetOuterUVs
// Il2CppName: GetOuterUVs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetOuterUVs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetOuterUVs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPadding
// Il2CppName: GetPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Sprite::*)()>(&UnityEngine::Sprite::GetPadding)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetTextureRect_Injected
// Il2CppName: GetTextureRect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::Sprite::GetTextureRect_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetTextureRect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetInnerUVs_Injected
// Il2CppName: GetInnerUVs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Sprite::GetInnerUVs_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetInnerUVs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetOuterUVs_Injected
// Il2CppName: GetOuterUVs_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Sprite::GetOuterUVs_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetOuterUVs_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::GetPadding_Injected
// Il2CppName: GetPadding_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Sprite::GetPadding_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "GetPadding_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Sprite::get_bounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_rect_Injected
// Il2CppName: get_rect_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Rect>)>(&UnityEngine::Sprite::get_rect_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_rect_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_border_Injected
// Il2CppName: get_border_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Vector4>)>(&UnityEngine::Sprite::get_border_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_border_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::get_pivot_Injected
// Il2CppName: get_pivot_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Sprite::*)(ByRef<::UnityEngine::Vector2>)>(&UnityEngine::Sprite::get_pivot_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Sprite*), "get_pivot_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Sprite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

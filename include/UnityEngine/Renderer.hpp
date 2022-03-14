// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Component
#include "UnityEngine/Component.hpp"
// Including type: UnityEngine.Rendering.ReflectionProbeBlendInfo
#include "UnityEngine/Rendering/ReflectionProbeBlendInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Bounds
  struct Bounds;
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ShadowCastingMode
  struct ShadowCastingMode;
  // Forward declaring type: LightProbeUsage
  struct LightProbeUsage;
  // Forward declaring type: ReflectionProbeUsage
  struct ReflectionProbeUsage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Renderer
  class Renderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Renderer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Renderer*, "UnityEngine", "Renderer");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Renderer
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6D79EC
  // [NativeHeaderAttribute] Offset: 6D79EC
  // [UsedByNativeCodeAttribute] Offset: 6D79EC
  // [RequireComponent] Offset: 6D79EC
  class Renderer : public ::UnityEngine::Component {
    public:
    // public UnityEngine.Bounds get_bounds()
    // Offset: 0x1161DA8
    ::UnityEngine::Bounds get_bounds();
    // public System.Boolean get_enabled()
    // Offset: 0x1162204
    bool get_enabled();
    // public System.Void set_enabled(System.Boolean value)
    // Offset: 0x1162244
    void set_enabled(bool value);
    // public System.Void set_shadowCastingMode(UnityEngine.Rendering.ShadowCastingMode value)
    // Offset: 0x1162294
    void set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode value);
    // public System.Void set_receiveShadows(System.Boolean value)
    // Offset: 0x11622E4
    void set_receiveShadows(bool value);
    // public System.Void set_lightProbeUsage(UnityEngine.Rendering.LightProbeUsage value)
    // Offset: 0x1162334
    void set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage value);
    // public System.Void set_reflectionProbeUsage(UnityEngine.Rendering.ReflectionProbeUsage value)
    // Offset: 0x1162384
    void set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage value);
    // public System.Int32 get_sortingLayerID()
    // Offset: 0x11623D4
    int get_sortingLayerID();
    // public System.Void set_sortingLayerID(System.Int32 value)
    // Offset: 0x1162414
    void set_sortingLayerID(int value);
    // public System.Int32 get_sortingOrder()
    // Offset: 0x1162464
    int get_sortingOrder();
    // public System.Void set_sortingOrder(System.Int32 value)
    // Offset: 0x11624A4
    void set_sortingOrder(int value);
    // public System.Void set_allowOcclusionWhenDynamic(System.Boolean value)
    // Offset: 0x11624F4
    void set_allowOcclusionWhenDynamic(bool value);
    // public UnityEngine.Matrix4x4 get_localToWorldMatrix()
    // Offset: 0x1162544
    ::UnityEngine::Matrix4x4 get_localToWorldMatrix();
    // public UnityEngine.Material[] get_materials()
    // Offset: 0x116264C
    ::ArrayW<::UnityEngine::Material*> get_materials();
    // public System.Void set_materials(UnityEngine.Material[] value)
    // Offset: 0x116268C
    void set_materials(::ArrayW<::UnityEngine::Material*> value);
    // public UnityEngine.Material get_material()
    // Offset: 0x11626DC
    ::UnityEngine::Material* get_material();
    // public System.Void set_material(UnityEngine.Material value)
    // Offset: 0x116271C
    void set_material(::UnityEngine::Material* value);
    // public UnityEngine.Material get_sharedMaterial()
    // Offset: 0x116276C
    ::UnityEngine::Material* get_sharedMaterial();
    // public System.Void set_sharedMaterial(UnityEngine.Material value)
    // Offset: 0x11627AC
    void set_sharedMaterial(::UnityEngine::Material* value);
    // public UnityEngine.Material[] get_sharedMaterials()
    // Offset: 0x11627FC
    ::ArrayW<::UnityEngine::Material*> get_sharedMaterials();
    // private UnityEngine.Material GetMaterial()
    // Offset: 0x1161E64
    ::UnityEngine::Material* GetMaterial();
    // private UnityEngine.Material GetSharedMaterial()
    // Offset: 0x1161EA4
    ::UnityEngine::Material* GetSharedMaterial();
    // private System.Void SetMaterial(UnityEngine.Material m)
    // Offset: 0x1161EE4
    void SetMaterial(::UnityEngine::Material* m);
    // private UnityEngine.Material[] GetMaterialArray()
    // Offset: 0x1161F34
    ::ArrayW<::UnityEngine::Material*> GetMaterialArray();
    // private System.Void SetMaterialArray(UnityEngine.Material[] m)
    // Offset: 0x1161F74
    void SetMaterialArray(::ArrayW<::UnityEngine::Material*> m);
    // System.Void Internal_SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1161FC4
    void Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // System.Void Internal_GetPropertyBlock(UnityEngine.MaterialPropertyBlock dest)
    // Offset: 0x1162014
    void Internal_GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* dest);
    // System.Void Internal_SetPropertyBlockMaterialIndex(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
    // Offset: 0x1162064
    void Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock* properties, int materialIndex);
    // public System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x11620BC
    void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // public System.Void SetPropertyBlock(UnityEngine.MaterialPropertyBlock properties, System.Int32 materialIndex)
    // Offset: 0x116210C
    void SetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties, int materialIndex);
    // public System.Void GetPropertyBlock(UnityEngine.MaterialPropertyBlock properties)
    // Offset: 0x1162164
    void GetPropertyBlock(::UnityEngine::MaterialPropertyBlock* properties);
    // private System.Void GetClosestReflectionProbesInternal(System.Object result)
    // Offset: 0x11621B4
    void GetClosestReflectionProbesInternal(::Il2CppObject* result);
    // private UnityEngine.Material[] GetSharedMaterialArray()
    // Offset: 0x116260C
    ::ArrayW<::UnityEngine::Material*> GetSharedMaterialArray();
    // public System.Void GetClosestReflectionProbes(System.Collections.Generic.List`1<UnityEngine.Rendering.ReflectionProbeBlendInfo> result)
    // Offset: 0x116283C
    void GetClosestReflectionProbes(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>* result);
    // private System.Void get_bounds_Injected(out UnityEngine.Bounds ret)
    // Offset: 0x1161E14
    void get_bounds_Injected(ByRef<::UnityEngine::Bounds> ret);
    // private System.Void get_localToWorldMatrix_Injected(out UnityEngine.Matrix4x4 ret)
    // Offset: 0x11625BC
    void get_localToWorldMatrix_Injected(ByRef<::UnityEngine::Matrix4x4> ret);
  }; // UnityEngine.Renderer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds
// Il2CppName: get_bounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_bounds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_enabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_enabled
// Il2CppName: set_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_enabled)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_shadowCastingMode
// Il2CppName: set_shadowCastingMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::ShadowCastingMode)>(&UnityEngine::Renderer::set_shadowCastingMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowCastingMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_shadowCastingMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_receiveShadows
// Il2CppName: set_receiveShadows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_receiveShadows)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_receiveShadows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_lightProbeUsage
// Il2CppName: set_lightProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::LightProbeUsage)>(&UnityEngine::Renderer::set_lightProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "LightProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_lightProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_reflectionProbeUsage
// Il2CppName: set_reflectionProbeUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Rendering::ReflectionProbeUsage)>(&UnityEngine::Renderer::set_reflectionProbeUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ReflectionProbeUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_reflectionProbeUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingLayerID
// Il2CppName: get_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingLayerID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sortingLayerID
// Il2CppName: set_sortingLayerID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_sortingLayerID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sortingLayerID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sortingOrder
// Il2CppName: get_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sortingOrder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sortingOrder
// Il2CppName: set_sortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(int)>(&UnityEngine::Renderer::set_sortingOrder)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_allowOcclusionWhenDynamic
// Il2CppName: set_allowOcclusionWhenDynamic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(bool)>(&UnityEngine::Renderer::set_allowOcclusionWhenDynamic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_allowOcclusionWhenDynamic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_localToWorldMatrix
// Il2CppName: get_localToWorldMatrix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_localToWorldMatrix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_localToWorldMatrix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_materials
// Il2CppName: get_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_materials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_materials
// Il2CppName: set_materials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&UnityEngine::Renderer::set_materials)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_materials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_material
// Il2CppName: get_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_material)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_material
// Il2CppName: set_material
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::set_material)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_material", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterial
// Il2CppName: get_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::set_sharedMaterial
// Il2CppName: set_sharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::set_sharedMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "set_sharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_sharedMaterials
// Il2CppName: get_sharedMaterials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::get_sharedMaterials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_sharedMaterials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterial
// Il2CppName: GetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterial
// Il2CppName: GetSharedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterial
// Il2CppName: SetMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&UnityEngine::Renderer::SetMaterial)> {
  static const MethodInfo* get() {
    static auto* m = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetMaterialArray
// Il2CppName: GetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetMaterialArray
// Il2CppName: SetMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&UnityEngine::Renderer::SetMaterialArray)> {
  static const MethodInfo* get() {
    static auto* m = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Material"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{m});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_SetPropertyBlock
// Il2CppName: Internal_SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::Internal_SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_GetPropertyBlock
// Il2CppName: Internal_GetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::Internal_GetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* dest = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_GetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex
// Il2CppName: Internal_SetPropertyBlockMaterialIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int)>(&UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "Internal_SetPropertyBlockMaterialIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties, materialIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetPropertyBlock
// Il2CppName: SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::SetPropertyBlock
// Il2CppName: SetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int)>(&UnityEngine::Renderer::SetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    static auto* materialIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "SetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties, materialIndex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetPropertyBlock
// Il2CppName: GetPropertyBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&UnityEngine::Renderer::GetPropertyBlock)> {
  static const MethodInfo* get() {
    static auto* properties = &::il2cpp_utils::GetClassFromName("UnityEngine", "MaterialPropertyBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetPropertyBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{properties});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetClosestReflectionProbesInternal
// Il2CppName: GetClosestReflectionProbesInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::Il2CppObject*)>(&UnityEngine::Renderer::GetClosestReflectionProbesInternal)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetClosestReflectionProbesInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetSharedMaterialArray
// Il2CppName: GetSharedMaterialArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Material*> (UnityEngine::Renderer::*)()>(&UnityEngine::Renderer::GetSharedMaterialArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetSharedMaterialArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::GetClosestReflectionProbes
// Il2CppName: GetClosestReflectionProbes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ReflectionProbeBlendInfo>*)>(&UnityEngine::Renderer::GetClosestReflectionProbes)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ReflectionProbeBlendInfo")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "GetClosestReflectionProbes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_bounds_Injected
// Il2CppName: get_bounds_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::UnityEngine::Bounds>)>(&UnityEngine::Renderer::get_bounds_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_bounds_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};
// Writing MetadataGetter for method: UnityEngine::Renderer::get_localToWorldMatrix_Injected
// Il2CppName: get_localToWorldMatrix_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Renderer::*)(ByRef<::UnityEngine::Matrix4x4>)>(&UnityEngine::Renderer::get_localToWorldMatrix_Injected)> {
  static const MethodInfo* get() {
    static auto* ret = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Renderer*), "get_localToWorldMatrix_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ret});
  }
};

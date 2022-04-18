// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CombineInstance
  struct CombineInstance;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CombineInstance, "UnityEngine", "CombineInstance");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.CombineInstance
  // [TokenAttribute] Offset: FFFFFFFF
  struct CombineInstance/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_MeshInstanceID
    // Size: 0x4
    // Offset: 0x0
    int m_MeshInstanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_SubMeshIndex
    // Size: 0x4
    // Offset: 0x4
    int m_SubMeshIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Matrix4x4 m_Transform
    // Size: 0x40
    // Offset: 0x8
    ::UnityEngine::Matrix4x4 m_Transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    // private UnityEngine.Vector4 m_LightmapScaleOffset
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Vector4 m_LightmapScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private UnityEngine.Vector4 m_RealtimeLightmapScaleOffset
    // Size: 0x10
    // Offset: 0x58
    ::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    public:
    // Creating value type constructor for type: CombineInstance
    constexpr CombineInstance(int m_MeshInstanceID_ = {}, int m_SubMeshIndex_ = {}, ::UnityEngine::Matrix4x4 m_Transform_ = {}, ::UnityEngine::Vector4 m_LightmapScaleOffset_ = {}, ::UnityEngine::Vector4 m_RealtimeLightmapScaleOffset_ = {}) noexcept : m_MeshInstanceID{m_MeshInstanceID_}, m_SubMeshIndex{m_SubMeshIndex_}, m_Transform{m_Transform_}, m_LightmapScaleOffset{m_LightmapScaleOffset_}, m_RealtimeLightmapScaleOffset{m_RealtimeLightmapScaleOffset_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 m_MeshInstanceID
    [[deprecated("Use field access instead!")]] int& dyn_m_MeshInstanceID();
    // Get instance field reference: private System.Int32 m_SubMeshIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_SubMeshIndex();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_Transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_Transform();
    // Get instance field reference: private UnityEngine.Vector4 m_LightmapScaleOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_m_LightmapScaleOffset();
    // Get instance field reference: private UnityEngine.Vector4 m_RealtimeLightmapScaleOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_m_RealtimeLightmapScaleOffset();
    // public System.Void set_mesh(UnityEngine.Mesh value)
    // Offset: 0x9878F0
    void set_mesh(::UnityEngine::Mesh* value);
    // public System.Void set_transform(UnityEngine.Matrix4x4 value)
    // Offset: 0x987980
    void set_transform(::UnityEngine::Matrix4x4 value);
  }; // UnityEngine.CombineInstance
  #pragma pack(pop)
  static check_size<sizeof(CombineInstance), 88 + sizeof(::UnityEngine::Vector4)> __UnityEngine_CombineInstanceSizeCheck;
  static_assert(sizeof(CombineInstance) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::CombineInstance::set_mesh
// Il2CppName: set_mesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CombineInstance::*)(::UnityEngine::Mesh*)>(&UnityEngine::CombineInstance::set_mesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CombineInstance), "set_mesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::CombineInstance::set_transform
// Il2CppName: set_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::CombineInstance::*)(::UnityEngine::Matrix4x4)>(&UnityEngine::CombineInstance::set_transform)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::CombineInstance), "set_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

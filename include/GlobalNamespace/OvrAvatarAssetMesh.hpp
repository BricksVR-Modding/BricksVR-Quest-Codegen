// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarAsset
#include "GlobalNamespace/OvrAvatarAsset.hpp"
// Including type: ovrAvatarSkinnedMeshPose
#include "GlobalNamespace/ovrAvatarSkinnedMeshPose.hpp"
// Including type: ovrAvatarAssetType
#include "GlobalNamespace/ovrAvatarAssetType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarAssetMesh
  class OvrAvatarAssetMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarAssetMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarAssetMesh*, "", "OvrAvatarAssetMesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarAssetMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarAssetMesh : public ::GlobalNamespace::OvrAvatarAsset {
    public:
    public:
    // public UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private ovrAvatarSkinnedMeshPose skinnedBindPose
    // Size: 0x20
    // Offset: 0x20
    ::GlobalNamespace::ovrAvatarSkinnedMeshPose skinnedBindPose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarSkinnedMeshPose) == 0x20);
    // public System.String[] jointNames
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::StringW> jointNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // Get instance field reference: public UnityEngine.Mesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: private ovrAvatarSkinnedMeshPose skinnedBindPose
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarSkinnedMeshPose& dyn_skinnedBindPose();
    // Get instance field reference: public System.String[] jointNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_jointNames();
    // public System.Void .ctor(System.UInt64 _assetId, System.IntPtr asset, ovrAvatarAssetType meshType)
    // Offset: 0x7D5CE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarAssetMesh* New_ctor(uint64_t _assetId, ::System::IntPtr asset, ::GlobalNamespace::ovrAvatarAssetType meshType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarAssetMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarAssetMesh*, creationType>(_assetId, asset, meshType)));
    }
    // private System.Void LoadSubmeshes(System.IntPtr asset, System.IntPtr indexBufferPtr, System.UInt64 indexCount)
    // Offset: 0x7D58F0
    void LoadSubmeshes(::System::IntPtr asset, ::System::IntPtr indexBufferPtr, uint64_t indexCount);
    // private System.Void LoadBlendShapes(System.IntPtr asset, System.Int64 vertexCount)
    // Offset: 0x7D53F0
    void LoadBlendShapes(::System::IntPtr asset, int64_t vertexCount);
    // private System.Void SetSkinnedBindPose(System.IntPtr asset, ovrAvatarAssetType meshType)
    // Offset: 0x7D5C10
    void SetSkinnedBindPose(::System::IntPtr asset, ::GlobalNamespace::ovrAvatarAssetType meshType);
    // private System.Void GetVertexAndIndexData(System.IntPtr asset, ovrAvatarAssetType meshType, out System.Int64 vertexCount, out System.IntPtr vertexBuffer, out System.UInt32 indexCount, out System.IntPtr indexBuffer)
    // Offset: 0x7D5260
    void GetVertexAndIndexData(::System::IntPtr asset, ::GlobalNamespace::ovrAvatarAssetType meshType, ByRef<int64_t> vertexCount, ByRef<::System::IntPtr> vertexBuffer, ByRef<uint> indexCount, ByRef<::System::IntPtr> indexBuffer);
    // public UnityEngine.SkinnedMeshRenderer CreateSkinnedMeshRendererOnObject(UnityEngine.GameObject target)
    // Offset: 0x7D4A40
    ::UnityEngine::SkinnedMeshRenderer* CreateSkinnedMeshRendererOnObject(::UnityEngine::GameObject* target);
  }; // OvrAvatarAssetMesh
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarAssetMesh), 64 + sizeof(::ArrayW<::StringW>)> __GlobalNamespace_OvrAvatarAssetMeshSizeCheck;
  static_assert(sizeof(OvrAvatarAssetMesh) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::LoadSubmeshes
// Il2CppName: LoadSubmeshes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarAssetMesh::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&GlobalNamespace::OvrAvatarAssetMesh::LoadSubmeshes)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexBufferPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarAssetMesh*), "LoadSubmeshes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, indexBufferPtr, indexCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::LoadBlendShapes
// Il2CppName: LoadBlendShapes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarAssetMesh::*)(::System::IntPtr, int64_t)>(&GlobalNamespace::OvrAvatarAssetMesh::LoadBlendShapes)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarAssetMesh*), "LoadBlendShapes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, vertexCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::SetSkinnedBindPose
// Il2CppName: SetSkinnedBindPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarAssetMesh::*)(::System::IntPtr, ::GlobalNamespace::ovrAvatarAssetType)>(&GlobalNamespace::OvrAvatarAssetMesh::SetSkinnedBindPose)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* meshType = &::il2cpp_utils::GetClassFromName("", "ovrAvatarAssetType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarAssetMesh*), "SetSkinnedBindPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, meshType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::GetVertexAndIndexData
// Il2CppName: GetVertexAndIndexData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarAssetMesh::*)(::System::IntPtr, ::GlobalNamespace::ovrAvatarAssetType, ByRef<int64_t>, ByRef<::System::IntPtr>, ByRef<uint>, ByRef<::System::IntPtr>)>(&GlobalNamespace::OvrAvatarAssetMesh::GetVertexAndIndexData)> {
  static const MethodInfo* get() {
    static auto* asset = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* meshType = &::il2cpp_utils::GetClassFromName("", "ovrAvatarAssetType")->byval_arg;
    static auto* vertexCount = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    static auto* vertexBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* indexCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* indexBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarAssetMesh*), "GetVertexAndIndexData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asset, meshType, vertexCount, vertexBuffer, indexCount, indexBuffer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarAssetMesh::CreateSkinnedMeshRendererOnObject
// Il2CppName: CreateSkinnedMeshRendererOnObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SkinnedMeshRenderer* (GlobalNamespace::OvrAvatarAssetMesh::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::OvrAvatarAssetMesh::CreateSkinnedMeshRendererOnObject)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarAssetMesh*), "CreateSkinnedMeshRendererOnObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};

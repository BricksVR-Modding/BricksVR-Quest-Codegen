// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlacedBrickRendererManager
#include "GlobalNamespace/PlacedBrickRendererManager.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*, "", "PlacedBrickRendererManager/MeshRenderBucketGroup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRendererManager/MeshRenderBucketGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRendererManager::MeshRenderBucketGroup : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly PlacedBrickRendererManager/MeshRenderBucket Bucket
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket* Bucket;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*) == 0x8);
    // public readonly UnityEngine.Matrix4x4[] TransformationMatrices
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Matrix4x4> TransformationMatrices;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Matrix4x4>) == 0x8);
    // public readonly UnityEngine.Vector4[] Colors
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::UnityEngine::Vector4> Colors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector4>) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x28
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly PlacedBrickRendererManager/MeshRenderBucket Bucket
    ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*& dyn_Bucket();
    // Get instance field reference: public readonly UnityEngine.Matrix4x4[] TransformationMatrices
    ::ArrayW<::UnityEngine::Matrix4x4>& dyn_TransformationMatrices();
    // Get instance field reference: public readonly UnityEngine.Vector4[] Colors
    ::ArrayW<::UnityEngine::Vector4>& dyn_Colors();
    // Get instance field reference: private System.Int32 _index
    int& dyn__index();
    // public System.Int32 get_Count()
    // Offset: 0x10598E8
    int get_Count();
    // public System.Void .ctor(PlacedBrickRendererManager/MeshRenderBucket bucket)
    // Offset: 0x10597B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManager::MeshRenderBucketGroup* New_ctor(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket* bucket) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManager::MeshRenderBucketGroup*, creationType>(bucket)));
    }
    // public System.Void AddMeshToRender(PlacedBrickRendererManager/MeshToRender meshToRender)
    // Offset: 0x1059840
    void AddMeshToRender(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender* meshToRender);
  }; // PlacedBrickRendererManager/MeshRenderBucketGroup
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRendererManager::MeshRenderBucketGroup), 40 + sizeof(int)> __GlobalNamespace_PlacedBrickRendererManager_MeshRenderBucketGroupSizeCheck;
  static_assert(sizeof(PlacedBrickRendererManager::MeshRenderBucketGroup) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::*)()>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::AddMeshToRender
// Il2CppName: AddMeshToRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::*)(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*)>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup::AddMeshToRender)> {
  static const MethodInfo* get() {
    static auto* meshToRender = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManager/MeshToRender")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*), "AddMeshToRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshToRender});
  }
};

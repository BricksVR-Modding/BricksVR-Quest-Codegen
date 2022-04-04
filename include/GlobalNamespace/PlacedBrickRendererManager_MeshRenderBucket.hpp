// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlacedBrickRendererManager
#include "GlobalNamespace/PlacedBrickRendererManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*, "", "PlacedBrickRendererManager/MeshRenderBucket");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRendererManager/MeshRenderBucket
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRendererManager::MeshRenderBucket : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Mesh Mesh
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Mesh* Mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<PlacedBrickRendererManager/MeshToRender> MeshesToRender
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>* MeshesToRender;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>*) == 0x8);
    // private PlacedBrickRendererManager/MeshRenderBucketGroup[] _meshRenderBucketGroups
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*> meshRenderBucketGroups;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*>) == 0x8);
    // private System.Boolean _dirty
    // Size: 0x1
    // Offset: 0x28
    bool dirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public UnityEngine.Mesh Mesh
    [[deprecated]] ::UnityEngine::Mesh*& dyn_Mesh();
    // Get instance field reference: private System.Collections.Generic.LinkedList`1<PlacedBrickRendererManager/MeshToRender> MeshesToRender
    [[deprecated]] ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>*& dyn_MeshesToRender();
    // Get instance field reference: private PlacedBrickRendererManager/MeshRenderBucketGroup[] _meshRenderBucketGroups
    [[deprecated]] ::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*>& dyn__meshRenderBucketGroups();
    // Get instance field reference: private System.Boolean _dirty
    [[deprecated]] bool& dyn__dirty();
    // public System.Int32 get_Count()
    // Offset: 0x672800
    int get_Count();
    // public System.Void .ctor(UnityEngine.Mesh mesh)
    // Offset: 0x672770
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManager::MeshRenderBucket* New_ctor(::UnityEngine::Mesh* mesh) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManager::MeshRenderBucket*, creationType>(mesh)));
    }
    // public System.Collections.Generic.LinkedListNode`1<PlacedBrickRendererManager/MeshToRender> AddMeshToRender(PlacedBrickRendererManager/MeshToRender meshToRender)
    // Offset: 0x6723F0
    ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>* AddMeshToRender(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender* meshToRender);
    // public PlacedBrickRendererManager/MeshRenderBucketGroup[] MeshRenderBucketGroups()
    // Offset: 0x672730
    ::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*> MeshRenderBucketGroups();
    // private System.Void CalculateMeshRenderBucketGroups(PlacedBrickRendererManager/MeshRenderBucket bucket)
    // Offset: 0x672450
    void CalculateMeshRenderBucketGroups(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket* bucket);
  }; // PlacedBrickRendererManager/MeshRenderBucket
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRendererManager::MeshRenderBucket), 40 + sizeof(bool)> __GlobalNamespace_PlacedBrickRendererManager_MeshRenderBucketSizeCheck;
  static_assert(sizeof(PlacedBrickRendererManager::MeshRenderBucket) == 0x29);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::get_Count
// Il2CppName: get_Count
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::*)()>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::get_Count)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*), "get_Count", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::AddMeshToRender
// Il2CppName: AddMeshToRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>* (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::*)(::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*)>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::AddMeshToRender)> {
  static const MethodInfo* get() {
    static auto* meshToRender = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManager/MeshToRender")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*), "AddMeshToRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{meshToRender});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::MeshRenderBucketGroups
// Il2CppName: MeshRenderBucketGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*> (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::*)()>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::MeshRenderBucketGroups)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*), "MeshRenderBucketGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::CalculateMeshRenderBucketGroups
// Il2CppName: CalculateMeshRenderBucketGroups
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::*)(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*)>(&GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket::CalculateMeshRenderBucketGroups)> {
  static const MethodInfo* get() {
    static auto* bucket = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManager/MeshRenderBucket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*), "CalculateMeshRenderBucketGroups", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bucket});
  }
};

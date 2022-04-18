// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Mesh
  class Mesh;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Color
  struct Color;
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlacedBrickRendererManager
  class PlacedBrickRendererManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlacedBrickRendererManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlacedBrickRendererManager*, "", "PlacedBrickRendererManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x55
  #pragma pack(push, 1)
  // Autogenerated type: PlacedBrickRendererManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PlacedBrickRendererManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::PlacedBrickRendererManager::MeshToRender
    class MeshToRender;
    // Nested type: ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket
    class MeshRenderBucket;
    // Nested type: ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup
    class MeshRenderBucketGroup;
    public:
    // public UnityEngine.Material brickMaterial
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Material* brickMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,PlacedBrickRendererManager/MeshRenderBucket> _meshToRenderBuckets
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*>* meshToRenderBuckets;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<PlacedBrickRendererManager/MeshToRender>> _brickUuidToNodes
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>*>* brickUuidToNodes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh> _brickUuidToMesh
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>* brickUuidToMesh;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,PlacedBrickRendererManager/MeshToRender[][]> _groupedBrickBucketCache
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::ArrayW<::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>>>* groupedBrickBucketCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::ArrayW<::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>>>*) == 0x8);
    // private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::MaterialPropertyBlock* materialPropertyBlock;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    // private readonly UnityEngine.Vector3 _brickScale
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 brickScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean renderingEnabled
    // Size: 0x1
    // Offset: 0x54
    bool renderingEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private PlacedBrickRendererManager _instance
    static ::GlobalNamespace::PlacedBrickRendererManager* _get__instance();
    // Set static field: static private PlacedBrickRendererManager _instance
    static void _set__instance(::GlobalNamespace::PlacedBrickRendererManager* value);
    // Get static field: static private readonly System.Int32 ColorsKey
    static int _get_ColorsKey();
    // Set static field: static private readonly System.Int32 ColorsKey
    static void _set_ColorsKey(int value);
    // static field const value: static private System.Int32 MaximumBatchSize
    static constexpr const int MaximumBatchSize = 1023;
    // Get static field: static private System.Int32 MaximumBatchSize
    static int _get_MaximumBatchSize();
    // Set static field: static private System.Int32 MaximumBatchSize
    static void _set_MaximumBatchSize(int value);
    // Get instance field reference: public UnityEngine.Material brickMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_brickMaterial();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,PlacedBrickRendererManager/MeshRenderBucket> _meshToRenderBuckets
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*>*& dyn__meshToRenderBuckets();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.LinkedListNode`1<PlacedBrickRendererManager/MeshToRender>> _brickUuidToNodes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>*>*& dyn__brickUuidToNodes();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Mesh> _brickUuidToMesh
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Mesh*>*& dyn__brickUuidToMesh();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Mesh,PlacedBrickRendererManager/MeshToRender[][]> _groupedBrickBucketCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::ArrayW<::ArrayW<::GlobalNamespace::PlacedBrickRendererManager::MeshToRender*>>>*& dyn__groupedBrickBucketCache();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock _materialPropertyBlock
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn__materialPropertyBlock();
    // Get instance field reference: private readonly UnityEngine.Vector3 _brickScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__brickScale();
    // Get instance field reference: public System.Boolean renderingEnabled
    [[deprecated("Use field access instead!")]] bool& dyn_renderingEnabled();
    // public System.Void .ctor()
    // Offset: 0x67A190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlacedBrickRendererManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlacedBrickRendererManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlacedBrickRendererManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x67A140
    static void _cctor();
    // static public PlacedBrickRendererManager GetInstance()
    // Offset: 0x679910
    static ::GlobalNamespace::PlacedBrickRendererManager* GetInstance();
    // private System.Void Awake()
    // Offset: 0x6798B0
    void Awake();
    // public System.Void AddBrick(System.String uuid, UnityEngine.Transform t, UnityEngine.Color color, UnityEngine.Mesh mesh)
    // Offset: 0x6797D0
    void AddBrick(::StringW uuid, ::UnityEngine::Transform* t, ::UnityEngine::Color color, ::UnityEngine::Mesh* mesh);
    // public System.Void AddBrick(System.String uuid, UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, UnityEngine.Color color, UnityEngine.Mesh mesh)
    // Offset: 0x6794C0
    void AddBrick(::StringW uuid, ::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, ::UnityEngine::Color color, ::UnityEngine::Mesh* mesh);
    // public System.Void RemoveBrick(System.String uuid)
    // Offset: 0x679C10
    void RemoveBrick(::StringW uuid);
    // private System.Void Update()
    // Offset: 0x679E40
    void Update();
    // private System.Void PerformBucketRender(UnityEngine.Mesh mesh, PlacedBrickRendererManager/MeshRenderBucket renderBucket)
    // Offset: 0x679A30
    void PerformBucketRender(::UnityEngine::Mesh* mesh, ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket* renderBucket);
    // private System.Void RenderBucketGroup(PlacedBrickRendererManager/MeshRenderBucketGroup renderBucketGroup)
    // Offset: 0x679D10
    void RenderBucketGroup(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup* renderBucketGroup);
  }; // PlacedBrickRendererManager
  #pragma pack(pop)
  static check_size<sizeof(PlacedBrickRendererManager), 84 + sizeof(bool)> __GlobalNamespace_PlacedBrickRendererManagerSizeCheck;
  static_assert(sizeof(PlacedBrickRendererManager) == 0x55);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlacedBrickRendererManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PlacedBrickRendererManager* (*)()>(&GlobalNamespace::PlacedBrickRendererManager::GetInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)()>(&GlobalNamespace::PlacedBrickRendererManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::AddBrick
// Il2CppName: AddBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)(::StringW, ::UnityEngine::Transform*, ::UnityEngine::Color, ::UnityEngine::Mesh*)>(&GlobalNamespace::PlacedBrickRendererManager::AddBrick)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "AddBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid, t, color, mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::AddBrick
// Il2CppName: AddBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Color, ::UnityEngine::Mesh*)>(&GlobalNamespace::PlacedBrickRendererManager::AddBrick)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "AddBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid, pos, rot, color, mesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::RemoveBrick
// Il2CppName: RemoveBrick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)(::StringW)>(&GlobalNamespace::PlacedBrickRendererManager::RemoveBrick)> {
  static const MethodInfo* get() {
    static auto* uuid = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "RemoveBrick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uuid});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)()>(&GlobalNamespace::PlacedBrickRendererManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::PerformBucketRender
// Il2CppName: PerformBucketRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)(::UnityEngine::Mesh*, ::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucket*)>(&GlobalNamespace::PlacedBrickRendererManager::PerformBucketRender)> {
  static const MethodInfo* get() {
    static auto* mesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "Mesh")->byval_arg;
    static auto* renderBucket = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManager/MeshRenderBucket")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "PerformBucketRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mesh, renderBucket});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlacedBrickRendererManager::RenderBucketGroup
// Il2CppName: RenderBucketGroup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlacedBrickRendererManager::*)(::GlobalNamespace::PlacedBrickRendererManager::MeshRenderBucketGroup*)>(&GlobalNamespace::PlacedBrickRendererManager::RenderBucketGroup)> {
  static const MethodInfo* get() {
    static auto* renderBucketGroup = &::il2cpp_utils::GetClassFromName("", "PlacedBrickRendererManager/MeshRenderBucketGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlacedBrickRendererManager*), "RenderBucketGroup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renderBucketGroup});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*, "", "OVRSkeletonRenderer/CapsuleVisualization");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: OVRSkeletonRenderer/CapsuleVisualization
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRSkeletonRenderer::CapsuleVisualization : public ::Il2CppObject {
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
    // private UnityEngine.GameObject CapsuleGO
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::GameObject* CapsuleGO;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private OVRBoneCapsule BoneCapsule
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRBoneCapsule* BoneCapsule;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRBoneCapsule*) == 0x8);
    // private UnityEngine.Vector3 capsuleScale
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 capsuleScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // Padding between fields: capsuleScale and: Renderer
    char __padding2[0x4] = {};
    // private UnityEngine.MeshRenderer Renderer
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MeshRenderer* Renderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.Material RenderMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* RenderMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material SystemGestureMaterial
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Material* SystemGestureMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.GameObject CapsuleGO
    ::UnityEngine::GameObject*& dyn_CapsuleGO();
    // Get instance field reference: private OVRBoneCapsule BoneCapsule
    ::GlobalNamespace::OVRBoneCapsule*& dyn_BoneCapsule();
    // Get instance field reference: private UnityEngine.Vector3 capsuleScale
    ::UnityEngine::Vector3& dyn_capsuleScale();
    // Get instance field reference: private UnityEngine.MeshRenderer Renderer
    ::UnityEngine::MeshRenderer*& dyn_Renderer();
    // Get instance field reference: private UnityEngine.Material RenderMaterial
    ::UnityEngine::Material*& dyn_RenderMaterial();
    // Get instance field reference: private UnityEngine.Material SystemGestureMaterial
    ::UnityEngine::Material*& dyn_SystemGestureMaterial();
    // public System.Void .ctor(UnityEngine.GameObject rootGO, UnityEngine.Material renderMat, UnityEngine.Material systemGestureMat, System.Single scale, OVRBoneCapsule boneCapsule)
    // Offset: 0xFD4C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRSkeletonRenderer::CapsuleVisualization* New_ctor(::UnityEngine::GameObject* rootGO, ::UnityEngine::Material* renderMat, ::UnityEngine::Material* systemGestureMat, float scale, ::GlobalNamespace::OVRBoneCapsule* boneCapsule) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRSkeletonRenderer::CapsuleVisualization*, creationType>(rootGO, renderMat, systemGestureMat, scale, boneCapsule)));
    }
    // public System.Void Update(System.Single scale, System.Boolean shouldRender, System.Boolean shouldUseSystemGestureMaterial, OVRSkeletonRenderer/ConfidenceBehavior confidenceBehavior, OVRSkeletonRenderer/SystemGestureBehavior systemGestureBehavior)
    // Offset: 0xFD516C
    void Update(float scale, bool shouldRender, bool shouldUseSystemGestureMaterial, ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior confidenceBehavior, ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior systemGestureBehavior);
  }; // OVRSkeletonRenderer/CapsuleVisualization
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeletonRenderer::CapsuleVisualization), 64 + sizeof(::UnityEngine::Material*)> __GlobalNamespace_OVRSkeletonRenderer_CapsuleVisualizationSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer::CapsuleVisualization) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::*)(float, bool, bool, ::GlobalNamespace::OVRSkeletonRenderer::ConfidenceBehavior, ::GlobalNamespace::OVRSkeletonRenderer::SystemGestureBehavior)>(&GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization::Update)> {
  static const MethodInfo* get() {
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* shouldRender = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* shouldUseSystemGestureMaterial = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* confidenceBehavior = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer/ConfidenceBehavior")->byval_arg;
    static auto* systemGestureBehavior = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer/SystemGestureBehavior")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::CapsuleVisualization*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{scale, shouldRender, shouldUseSystemGestureMaterial, confidenceBehavior, systemGestureBehavior});
  }
};

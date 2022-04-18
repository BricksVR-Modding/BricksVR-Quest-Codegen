// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OvrAvatarRenderComponent
#include "GlobalNamespace/OvrAvatarRenderComponent.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_SkinnedMeshRender
  struct ovrAvatarRenderPart_SkinnedMeshRender;
  // Forward declaring type: OvrAvatarComponent
  class OvrAvatarComponent_;
  // Forward declaring type: OvrAvatar
  class OvrAvatar;
  // Forward declaring type: ovrAvatarVisibilityFlags
  struct ovrAvatarVisibilityFlags;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarSkinnedMeshRenderComponent
  class OvrAvatarSkinnedMeshRenderComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent*, "", "OvrAvatarSkinnedMeshRenderComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarSkinnedMeshRenderComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarSkinnedMeshRenderComponent : public ::GlobalNamespace::OvrAvatarRenderComponent {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    public:
    // private UnityEngine.Shader surface
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Shader* surface;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private UnityEngine.Shader surfaceSelfOccluding
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Shader* surfaceSelfOccluding;
    // Field size check
    static_assert(sizeof(::UnityEngine::Shader*) == 0x8);
    // private System.Boolean previouslyActive
    // Size: 0x1
    // Offset: 0x48
    bool previouslyActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Shader surface
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_surface();
    // Get instance field reference: private UnityEngine.Shader surfaceSelfOccluding
    [[deprecated("Use field access instead!")]] ::UnityEngine::Shader*& dyn_surfaceSelfOccluding();
    // Get instance field reference: private System.Boolean previouslyActive
    [[deprecated("Use field access instead!")]] bool& dyn_previouslyActive();
    // System.Void Initialize(ovrAvatarRenderPart_SkinnedMeshRender skinnedMeshRender, UnityEngine.Shader surface, UnityEngine.Shader surfaceSelfOccluding, System.Int32 thirdPersonLayer, System.Int32 firstPersonLayer)
    // Offset: 0x675980
    void Initialize(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRender skinnedMeshRender, ::UnityEngine::Shader* surface, ::UnityEngine::Shader* surfaceSelfOccluding, int thirdPersonLayer, int firstPersonLayer);
    // public System.Void UpdateSkinnedMeshRender(OvrAvatarComponent component, OvrAvatar avatar, System.IntPtr renderPart)
    // Offset: 0x675D80
    void UpdateSkinnedMeshRender(::GlobalNamespace::OvrAvatarComponent_* component, ::GlobalNamespace::OvrAvatar* avatar, ::System::IntPtr renderPart);
    // private System.Void UpdateMeshMaterial(ovrAvatarVisibilityFlags visibilityMask, UnityEngine.SkinnedMeshRenderer rootMesh)
    // Offset: 0x675C30
    void UpdateMeshMaterial(::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask, ::UnityEngine::SkinnedMeshRenderer* rootMesh);
    // public System.Void .ctor()
    // Offset: 0x287580
    // Implemented from: OvrAvatarRenderComponent
    // Base method: System.Void OvrAvatarRenderComponent::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarSkinnedMeshRenderComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarSkinnedMeshRenderComponent*, creationType>()));
    }
  }; // OvrAvatarSkinnedMeshRenderComponent
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarSkinnedMeshRenderComponent), 72 + sizeof(bool)> __GlobalNamespace_OvrAvatarSkinnedMeshRenderComponentSizeCheck;
  static_assert(sizeof(OvrAvatarSkinnedMeshRenderComponent) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::*)(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRender, ::UnityEngine::Shader*, ::UnityEngine::Shader*, int, int)>(&GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::Initialize)> {
  static const MethodInfo* get() {
    static auto* skinnedMeshRender = &::il2cpp_utils::GetClassFromName("", "ovrAvatarRenderPart_SkinnedMeshRender")->byval_arg;
    static auto* surface = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* surfaceSelfOccluding = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* thirdPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinnedMeshRender, surface, surfaceSelfOccluding, thirdPersonLayer, firstPersonLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::UpdateSkinnedMeshRender
// Il2CppName: UpdateSkinnedMeshRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::*)(::GlobalNamespace::OvrAvatarComponent_*, ::GlobalNamespace::OvrAvatar*, ::System::IntPtr)>(&GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::UpdateSkinnedMeshRender)> {
  static const MethodInfo* get() {
    static auto* component = &::il2cpp_utils::GetClassFromName("", "OvrAvatarComponent")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent*), "UpdateSkinnedMeshRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{component, avatar, renderPart});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::UpdateMeshMaterial
// Il2CppName: UpdateMeshMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::*)(::GlobalNamespace::ovrAvatarVisibilityFlags, ::UnityEngine::SkinnedMeshRenderer*)>(&GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::UpdateMeshMaterial)> {
  static const MethodInfo* get() {
    static auto* visibilityMask = &::il2cpp_utils::GetClassFromName("", "ovrAvatarVisibilityFlags")->byval_arg;
    static auto* rootMesh = &::il2cpp_utils::GetClassFromName("UnityEngine", "SkinnedMeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent*), "UpdateMeshMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{visibilityMask, rootMesh});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

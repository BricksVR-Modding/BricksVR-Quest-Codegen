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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_SkinnedMeshRenderPBS
  struct ovrAvatarRenderPart_SkinnedMeshRenderPBS;
  // Forward declaring type: OvrAvatar
  class OvrAvatar;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Shader
  class Shader;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OvrAvatarSkinnedMeshRenderPBSComponent
  class OvrAvatarSkinnedMeshRenderPBSComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent*, "", "OvrAvatarSkinnedMeshRenderPBSComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: OvrAvatarSkinnedMeshRenderPBSComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class OvrAvatarSkinnedMeshRenderPBSComponent : public ::GlobalNamespace::OvrAvatarRenderComponent {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    public:
    // private System.Boolean isMaterialInitilized
    // Size: 0x1
    // Offset: 0x38
    bool isMaterialInitilized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Boolean isMaterialInitilized
    [[deprecated("Use field access instead!")]] bool& dyn_isMaterialInitilized();
    // System.Void Initialize(ovrAvatarRenderPart_SkinnedMeshRenderPBS skinnedMeshRenderPBS, UnityEngine.Shader shader, System.Int32 thirdPersonLayer, System.Int32 firstPersonLayer)
    // Offset: 0x676050
    void Initialize(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRenderPBS skinnedMeshRenderPBS, ::UnityEngine::Shader* shader, int thirdPersonLayer, int firstPersonLayer);
    // System.Void UpdateSkinnedMeshRenderPBS(OvrAvatar avatar, System.IntPtr renderPart, UnityEngine.Material mat)
    // Offset: 0x6761B0
    void UpdateSkinnedMeshRenderPBS(::GlobalNamespace::OvrAvatar* avatar, ::System::IntPtr renderPart, ::UnityEngine::Material* mat);
    // public System.Void .ctor()
    // Offset: 0x287580
    // Implemented from: OvrAvatarRenderComponent
    // Base method: System.Void OvrAvatarRenderComponent::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OvrAvatarSkinnedMeshRenderPBSComponent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OvrAvatarSkinnedMeshRenderPBSComponent*, creationType>()));
    }
  }; // OvrAvatarSkinnedMeshRenderPBSComponent
  #pragma pack(pop)
  static check_size<sizeof(OvrAvatarSkinnedMeshRenderPBSComponent), 56 + sizeof(bool)> __GlobalNamespace_OvrAvatarSkinnedMeshRenderPBSComponentSizeCheck;
  static_assert(sizeof(OvrAvatarSkinnedMeshRenderPBSComponent) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::*)(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRenderPBS, ::UnityEngine::Shader*, int, int)>(&GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::Initialize)> {
  static const MethodInfo* get() {
    static auto* skinnedMeshRenderPBS = &::il2cpp_utils::GetClassFromName("", "ovrAvatarRenderPart_SkinnedMeshRenderPBS")->byval_arg;
    static auto* shader = &::il2cpp_utils::GetClassFromName("UnityEngine", "Shader")->byval_arg;
    static auto* thirdPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* firstPersonLayer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skinnedMeshRenderPBS, shader, thirdPersonLayer, firstPersonLayer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::UpdateSkinnedMeshRenderPBS
// Il2CppName: UpdateSkinnedMeshRenderPBS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::*)(::GlobalNamespace::OvrAvatar*, ::System::IntPtr, ::UnityEngine::Material*)>(&GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::UpdateSkinnedMeshRenderPBS)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("", "OvrAvatar")->byval_arg;
    static auto* renderPart = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* mat = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent*), "UpdateSkinnedMeshRenderPBS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar, renderPart, mat});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OvrAvatarSkinnedMeshRenderPBSComponent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

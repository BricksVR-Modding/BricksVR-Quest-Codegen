// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTransform
#include "GlobalNamespace/ovrAvatarTransform.hpp"
// Including type: ovrAvatarVisibilityFlags
#include "GlobalNamespace/ovrAvatarVisibilityFlags.hpp"
// Including type: ovrAvatarMaterialState
#include "GlobalNamespace/ovrAvatarMaterialState.hpp"
// Including type: ovrAvatarSkinnedMeshPose
#include "GlobalNamespace/ovrAvatarSkinnedMeshPose.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarRenderPart_SkinnedMeshRender
  struct ovrAvatarRenderPart_SkinnedMeshRender;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarRenderPart_SkinnedMeshRender, "", "ovrAvatarRenderPart_SkinnedMeshRender");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x100
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarRenderPart_SkinnedMeshRender
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarRenderPart_SkinnedMeshRender/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTransform localTransform
    // Size: 0x28
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTransform localTransform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public ovrAvatarVisibilityFlags visibilityMask
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarVisibilityFlags) == 0x4);
    // Padding between fields: visibilityMask and: meshAssetID
    char __padding1[0x4] = {};
    // public System.UInt64 meshAssetID
    // Size: 0x8
    // Offset: 0x30
    uint64_t meshAssetID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public ovrAvatarMaterialState materialState
    // Size: 0xA8
    // Offset: 0x38
    ::GlobalNamespace::ovrAvatarMaterialState materialState;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarMaterialState) == 0xA8);
    // public ovrAvatarSkinnedMeshPose skinnedPose
    // Size: 0x20
    // Offset: 0xE0
    ::GlobalNamespace::ovrAvatarSkinnedMeshPose skinnedPose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarSkinnedMeshPose) == 0x20);
    public:
    // Creating value type constructor for type: ovrAvatarRenderPart_SkinnedMeshRender
    constexpr ovrAvatarRenderPart_SkinnedMeshRender(::GlobalNamespace::ovrAvatarTransform localTransform_ = {}, ::GlobalNamespace::ovrAvatarVisibilityFlags visibilityMask_ = {}, uint64_t meshAssetID_ = {}, ::GlobalNamespace::ovrAvatarMaterialState materialState_ = {}, ::GlobalNamespace::ovrAvatarSkinnedMeshPose skinnedPose_ = {}) noexcept : localTransform{localTransform_}, visibilityMask{visibilityMask_}, meshAssetID{meshAssetID_}, materialState{materialState_}, skinnedPose{skinnedPose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTransform localTransform
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarTransform& dyn_localTransform();
    // Get instance field reference: public ovrAvatarVisibilityFlags visibilityMask
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarVisibilityFlags& dyn_visibilityMask();
    // Get instance field reference: public System.UInt64 meshAssetID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_meshAssetID();
    // Get instance field reference: public ovrAvatarMaterialState materialState
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarMaterialState& dyn_materialState();
    // Get instance field reference: public ovrAvatarSkinnedMeshPose skinnedPose
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ovrAvatarSkinnedMeshPose& dyn_skinnedPose();
  }; // ovrAvatarRenderPart_SkinnedMeshRender
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarRenderPart_SkinnedMeshRender), 224 + sizeof(::GlobalNamespace::ovrAvatarSkinnedMeshPose)> __GlobalNamespace_ovrAvatarRenderPart_SkinnedMeshRenderSizeCheck;
  static_assert(sizeof(ovrAvatarRenderPart_SkinnedMeshRender) == 0x100);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

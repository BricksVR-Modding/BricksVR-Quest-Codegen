// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Recti
#include "GlobalNamespace/OVRPlugin_Recti.hpp"
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::LayerSubmit, "", "OVRPlugin/LayerSubmit");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/LayerSubmit
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::LayerSubmit/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 LayerId
    // Size: 0x4
    // Offset: 0x0
    int LayerId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 TextureStage
    // Size: 0x4
    // Offset: 0x4
    int TextureStage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private OVRPlugin/Recti[] ViewportRect
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::GlobalNamespace::OVRPlugin::Recti> ViewportRect;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Recti>) == 0x8);
    // private OVRPlugin/Posef Pose
    // Size: 0x1C
    // Offset: 0x10
    ::GlobalNamespace::OVRPlugin::Posef Pose;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // private System.Int32 LayerSubmitFlags
    // Size: 0x4
    // Offset: 0x2C
    int LayerSubmitFlags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LayerSubmit
    constexpr LayerSubmit(int LayerId_ = {}, int TextureStage_ = {}, ::ArrayW<::GlobalNamespace::OVRPlugin::Recti> ViewportRect_ = ::ArrayW<::GlobalNamespace::OVRPlugin::Recti>(static_cast<void*>(nullptr)), ::GlobalNamespace::OVRPlugin::Posef Pose_ = {}, int LayerSubmitFlags_ = {}) noexcept : LayerId{LayerId_}, TextureStage{TextureStage_}, ViewportRect{ViewportRect_}, Pose{Pose_}, LayerSubmitFlags{LayerSubmitFlags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 LayerId
    int& dyn_LayerId();
    // Get instance field reference: private System.Int32 TextureStage
    int& dyn_TextureStage();
    // Get instance field reference: private OVRPlugin/Recti[] ViewportRect
    ::ArrayW<::GlobalNamespace::OVRPlugin::Recti>& dyn_ViewportRect();
    // Get instance field reference: private OVRPlugin/Posef Pose
    ::GlobalNamespace::OVRPlugin::Posef& dyn_Pose();
    // Get instance field reference: private System.Int32 LayerSubmitFlags
    int& dyn_LayerSubmitFlags();
  }; // OVRPlugin/LayerSubmit
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::LayerSubmit), 44 + sizeof(int)> __GlobalNamespace_OVRPlugin_LayerSubmitSizeCheck;
  static_assert(sizeof(OVRPlugin::LayerSubmit) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

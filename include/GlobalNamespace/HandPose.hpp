// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HandPoseId
#include "GlobalNamespace/HandPoseId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HandPose
  class HandPose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HandPose);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HandPose*, "", "HandPose");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HandPose
  // [TokenAttribute] Offset: FFFFFFFF
  class HandPose : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean m_allowPointing
    // Size: 0x1
    // Offset: 0x18
    bool m_allowPointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_allowThumbsUp
    // Size: 0x1
    // Offset: 0x19
    bool m_allowThumbsUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_allowThumbsUp and: m_poseId
    char __padding1[0x2] = {};
    // private HandPoseId m_poseId
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::HandPoseId m_poseId;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HandPoseId) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean m_allowPointing
    [[deprecated("Use field access instead!")]] bool& dyn_m_allowPointing();
    // Get instance field reference: private System.Boolean m_allowThumbsUp
    [[deprecated("Use field access instead!")]] bool& dyn_m_allowThumbsUp();
    // Get instance field reference: private HandPoseId m_poseId
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HandPoseId& dyn_m_poseId();
    // public System.Boolean get_AllowPointing()
    // Offset: 0x2512D0
    bool get_AllowPointing();
    // public System.Boolean get_AllowThumbsUp()
    // Offset: 0x28B040
    bool get_AllowThumbsUp();
    // public HandPoseId get_PoseId()
    // Offset: 0x28B050
    ::GlobalNamespace::HandPoseId get_PoseId();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandPose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HandPose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandPose*, creationType>()));
    }
  }; // HandPose
  #pragma pack(pop)
  static check_size<sizeof(HandPose), 28 + sizeof(::GlobalNamespace::HandPoseId)> __GlobalNamespace_HandPoseSizeCheck;
  static_assert(sizeof(HandPose) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HandPose::get_AllowPointing
// Il2CppName: get_AllowPointing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HandPose::*)()>(&GlobalNamespace::HandPose::get_AllowPointing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandPose*), "get_AllowPointing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandPose::get_AllowThumbsUp
// Il2CppName: get_AllowThumbsUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HandPose::*)()>(&GlobalNamespace::HandPose::get_AllowThumbsUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandPose*), "get_AllowThumbsUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandPose::get_PoseId
// Il2CppName: get_PoseId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HandPoseId (GlobalNamespace::HandPose::*)()>(&GlobalNamespace::HandPose::get_PoseId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HandPose*), "get_PoseId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HandPose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

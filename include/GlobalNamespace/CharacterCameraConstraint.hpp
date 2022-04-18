// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRCameraRig
  class OVRCameraRig;
  // Forward declaring type: SimpleCapsuleWithStickMovement
  class SimpleCapsuleWithStickMovement;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CapsuleCollider
  class CapsuleCollider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CharacterCameraConstraint
  class CharacterCameraConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CharacterCameraConstraint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CharacterCameraConstraint*, "", "CharacterCameraConstraint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: CharacterCameraConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class CharacterCameraConstraint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // [TooltipAttribute] Offset: 0xF8F90
    // public OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // [TooltipAttribute] Offset: 0xF9040
    // public System.Boolean EnableCollision
    // Size: 0x1
    // Offset: 0x20
    bool EnableCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableCollision and: CollideLayers
    char __padding1[0x3] = {};
    // public UnityEngine.LayerMask CollideLayers
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::LayerMask CollideLayers;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // [TooltipAttribute] Offset: 0xF90A0
    // public System.Single MaxFade
    // Size: 0x4
    // Offset: 0x28
    float MaxFade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xFA630
    // public System.Single FadeMinDistance
    // Size: 0x4
    // Offset: 0x2C
    float FadeMinDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single PreferredHeight
    // Size: 0x4
    // Offset: 0x30
    float PreferredHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0xFA6A0
    // public System.Single FadeMaxDistance
    // Size: 0x4
    // Offset: 0x34
    float FadeMaxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly System.Action _cameraUpdateAction
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* cameraUpdateAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Action _preCharacterMovementAction
    // Size: 0x8
    // Offset: 0x40
    ::System::Action* preCharacterMovementAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private UnityEngine.CapsuleCollider _character
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::CapsuleCollider* character;
    // Field size check
    static_assert(sizeof(::UnityEngine::CapsuleCollider*) == 0x8);
    // private SimpleCapsuleWithStickMovement _simplePlayerController
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::SimpleCapsuleWithStickMovement* simplePlayerController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public OVRCameraRig CameraRig
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: public System.Boolean EnableCollision
    [[deprecated("Use field access instead!")]] bool& dyn_EnableCollision();
    // Get instance field reference: public UnityEngine.LayerMask CollideLayers
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_CollideLayers();
    // Get instance field reference: public System.Single MaxFade
    [[deprecated("Use field access instead!")]] float& dyn_MaxFade();
    // Get instance field reference: public System.Single FadeMinDistance
    [[deprecated("Use field access instead!")]] float& dyn_FadeMinDistance();
    // Get instance field reference: public System.Single PreferredHeight
    [[deprecated("Use field access instead!")]] float& dyn_PreferredHeight();
    // Get instance field reference: public System.Single FadeMaxDistance
    [[deprecated("Use field access instead!")]] float& dyn_FadeMaxDistance();
    // Get instance field reference: private readonly System.Action _cameraUpdateAction
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn__cameraUpdateAction();
    // Get instance field reference: private readonly System.Action _preCharacterMovementAction
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn__preCharacterMovementAction();
    // Get instance field reference: private UnityEngine.CapsuleCollider _character
    [[deprecated("Use field access instead!")]] ::UnityEngine::CapsuleCollider*& dyn__character();
    // Get instance field reference: private SimpleCapsuleWithStickMovement _simplePlayerController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleCapsuleWithStickMovement*& dyn__simplePlayerController();
    // private System.Void .ctor()
    // Offset: 0x284CD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterCameraConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CharacterCameraConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterCameraConstraint*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x284860
    void Awake();
    // private System.Void Start()
    // Offset: 0x1DDF00
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x284CA0
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x284C70
    void OnDisable();
    // private System.Void CameraUpdate()
    // Offset: 0x2848D0
    void CameraUpdate();
  }; // CharacterCameraConstraint
  #pragma pack(pop)
  static check_size<sizeof(CharacterCameraConstraint), 80 + sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*)> __GlobalNamespace_CharacterCameraConstraintSizeCheck;
  static_assert(sizeof(CharacterCameraConstraint) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::CameraUpdate
// Il2CppName: CameraUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CharacterCameraConstraint::*)()>(&GlobalNamespace::CharacterCameraConstraint::CameraUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CharacterCameraConstraint*), "CameraUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

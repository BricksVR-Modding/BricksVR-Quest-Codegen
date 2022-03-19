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
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [TooltipAttribute] Offset: 0x71FE50
    // public OVRCameraRig CameraRig
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::OVRCameraRig* CameraRig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCameraRig*) == 0x8);
    // [TooltipAttribute] Offset: 0x71FE88
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
    // [TooltipAttribute] Offset: 0x71FEC0
    // public System.Single MaxFade
    // Size: 0x4
    // Offset: 0x28
    float MaxFade;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x71FEF8
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
    // [TooltipAttribute] Offset: 0x71FF30
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
    ::GlobalNamespace::OVRCameraRig*& dyn_CameraRig();
    // Get instance field reference: public System.Boolean EnableCollision
    bool& dyn_EnableCollision();
    // Get instance field reference: public UnityEngine.LayerMask CollideLayers
    ::UnityEngine::LayerMask& dyn_CollideLayers();
    // Get instance field reference: public System.Single MaxFade
    float& dyn_MaxFade();
    // Get instance field reference: public System.Single FadeMinDistance
    float& dyn_FadeMinDistance();
    // Get instance field reference: public System.Single PreferredHeight
    float& dyn_PreferredHeight();
    // Get instance field reference: public System.Single FadeMaxDistance
    float& dyn_FadeMaxDistance();
    // Get instance field reference: private readonly System.Action _cameraUpdateAction
    ::System::Action*& dyn__cameraUpdateAction();
    // Get instance field reference: private readonly System.Action _preCharacterMovementAction
    ::System::Action*& dyn__preCharacterMovementAction();
    // Get instance field reference: private UnityEngine.CapsuleCollider _character
    ::UnityEngine::CapsuleCollider*& dyn__character();
    // Get instance field reference: private SimpleCapsuleWithStickMovement _simplePlayerController
    ::GlobalNamespace::SimpleCapsuleWithStickMovement*& dyn__simplePlayerController();
    // private System.Void Awake()
    // Offset: 0x847660
    void Awake();
    // private System.Void Start()
    // Offset: 0x8476D0
    void Start();
    // private System.Void OnEnable()
    // Offset: 0x8476D4
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x8476F8
    void OnDisable();
    // private System.Void CameraUpdate()
    // Offset: 0x84771C
    void CameraUpdate();
    // private System.Void .ctor()
    // Offset: 0x8475D8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CharacterCameraConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CharacterCameraConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CharacterCameraConstraint*, creationType>()));
    }
  }; // CharacterCameraConstraint
  #pragma pack(pop)
  static check_size<sizeof(CharacterCameraConstraint), 80 + sizeof(::GlobalNamespace::SimpleCapsuleWithStickMovement*)> __GlobalNamespace_CharacterCameraConstraintSizeCheck;
  static_assert(sizeof(CharacterCameraConstraint) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
// Writing MetadataGetter for method: GlobalNamespace::CharacterCameraConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

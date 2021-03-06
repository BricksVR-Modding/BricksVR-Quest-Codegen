// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRTouchSample
namespace OVRTouchSample {
  // Forward declaring type: HandPose
  class HandPose;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Animator
  class Animator;
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Renderer
  class Renderer;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: XRDirectInteractor
  class XRDirectInteractor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ChangeHandGesture
  class ChangeHandGesture;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: OVRTouchSample
namespace OVRTouchSample {
  // Forward declaring type: Hand
  class Hand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVRTouchSample::Hand);
DEFINE_IL2CPP_ARG_TYPE(::OVRTouchSample::Hand*, "OVRTouchSample", "Hand");
// Type namespace: OVRTouchSample
namespace OVRTouchSample {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: OVRTouchSample.Hand
  // [TokenAttribute] Offset: FFFFFFFF
  class Hand : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OVRTouchSample::Hand::$$c
    class $$c;
    public:
    // public UnityEngine.GameObject avatar
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* avatar;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x109F40
    // private OVRInput/Controller mController
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::Controller mController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Controller) == 0x4);
    // Padding between fields: mController and: mAnimator
    char __padding1[0x4] = {};
    // [FormerlySerializedAsAttribute] Offset: 0x10A010
    // private UnityEngine.Animator mAnimator
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Animator* mAnimator;
    // Field size check
    static_assert(sizeof(::UnityEngine::Animator*) == 0x8);
    // [FormerlySerializedAsAttribute] Offset: 0x10A090
    // private OVRTouchSample.HandPose mDefaultGrabPose
    // Size: 0x8
    // Offset: 0x30
    ::OVRTouchSample::HandPose* mDefaultGrabPose;
    // Field size check
    static_assert(sizeof(::OVRTouchSample::HandPose*) == 0x8);
    // private UnityEngine.Collider[] _mColliders
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::UnityEngine::Collider*> mColliders;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Boolean _mCollisionEnabled
    // Size: 0x1
    // Offset: 0x40
    bool mCollisionEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mCollisionEnabled and: mGrabber
    char __padding5[0x7] = {};
    // public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor mGrabber
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor* mGrabber;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*) == 0x8);
    // private System.Boolean _isLocalHand
    // Size: 0x1
    // Offset: 0x50
    bool isLocalHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isLocalHand and: mShowAfterInputFocusAcquired
    char __padding7[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.Renderer> _mShowAfterInputFocusAcquired
    // Size: 0x8
    // Offset: 0x58
    ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* mShowAfterInputFocusAcquired;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*) == 0x8);
    // private System.Int32 _mAnimLayerIndexThumb
    // Size: 0x4
    // Offset: 0x60
    int mAnimLayerIndexThumb;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mAnimLayerIndexPoint
    // Size: 0x4
    // Offset: 0x64
    int mAnimLayerIndexPoint;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mAnimParamIndexFlex
    // Size: 0x4
    // Offset: 0x68
    int mAnimParamIndexFlex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _mAnimParamIndexPose
    // Size: 0x4
    // Offset: 0x6C
    int mAnimParamIndexPose;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _mIsPointing
    // Size: 0x1
    // Offset: 0x70
    bool mIsPointing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _mIsGivingThumbsUp
    // Size: 0x1
    // Offset: 0x71
    bool mIsGivingThumbsUp;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mIsGivingThumbsUp and: mPointBlend
    char __padding14[0x2] = {};
    // private System.Single _mPointBlend
    // Size: 0x4
    // Offset: 0x74
    float mPointBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _mThumbsUpBlend
    // Size: 0x4
    // Offset: 0x78
    float mThumbsUpBlend;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _mPointLock
    // Size: 0x1
    // Offset: 0x7C
    bool mPointLock;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mPointLock and: mPointLockBegin
    char __padding17[0x3] = {};
    // private System.Single _mPointLockBegin
    // Size: 0x4
    // Offset: 0x80
    float mPointLockBegin;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _mRestoreOnInputAcquired
    // Size: 0x1
    // Offset: 0x84
    bool mRestoreOnInputAcquired;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mRestoreOnInputAcquired and: changeHandGesture
    char __padding19[0x3] = {};
    // private ChangeHandGesture _changeHandGesture
    // Size: 0x8
    // Offset: 0x88
    ::GlobalNamespace::ChangeHandGesture* changeHandGesture;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ChangeHandGesture*) == 0x8);
    // public System.Boolean leftHand
    // Size: 0x1
    // Offset: 0x90
    bool leftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHand and: pointLockCounter
    char __padding21[0x3] = {};
    // private System.Int32 _pointLockCounter
    // Size: 0x4
    // Offset: 0x94
    int pointLockCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _mCollisionScaleCurrent
    // Size: 0x4
    // Offset: 0x98
    float mCollisionScaleCurrent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static public System.String AnimLayerNamePoint
    static constexpr const char* AnimLayerNamePoint = "Point Layer";
    // Get static field: static public System.String AnimLayerNamePoint
    static ::StringW _get_AnimLayerNamePoint();
    // Set static field: static public System.String AnimLayerNamePoint
    static void _set_AnimLayerNamePoint(::StringW value);
    // static field const value: static public System.String AnimLayerNameThumb
    static constexpr const char* AnimLayerNameThumb = "Thumb Layer";
    // Get static field: static public System.String AnimLayerNameThumb
    static ::StringW _get_AnimLayerNameThumb();
    // Set static field: static public System.String AnimLayerNameThumb
    static void _set_AnimLayerNameThumb(::StringW value);
    // static field const value: static public System.String AnimParamNameFlex
    static constexpr const char* AnimParamNameFlex = "Flex";
    // Get static field: static public System.String AnimParamNameFlex
    static ::StringW _get_AnimParamNameFlex();
    // Set static field: static public System.String AnimParamNameFlex
    static void _set_AnimParamNameFlex(::StringW value);
    // static field const value: static public System.String AnimParamNamePose
    static constexpr const char* AnimParamNamePose = "Pose";
    // Get static field: static public System.String AnimParamNamePose
    static ::StringW _get_AnimParamNamePose();
    // Set static field: static public System.String AnimParamNamePose
    static void _set_AnimParamNamePose(::StringW value);
    // static field const value: static public System.Single ThreshCollisionFlex
    static constexpr const float ThreshCollisionFlex = 0.9;
    // Get static field: static public System.Single ThreshCollisionFlex
    static float _get_ThreshCollisionFlex();
    // Set static field: static public System.Single ThreshCollisionFlex
    static void _set_ThreshCollisionFlex(float value);
    // static field const value: static public System.Single InputRateChange
    static constexpr const float InputRateChange = 20;
    // Get static field: static public System.Single InputRateChange
    static float _get_InputRateChange();
    // Set static field: static public System.Single InputRateChange
    static void _set_InputRateChange(float value);
    // static field const value: static public System.Single ColliderScaleMIN
    static constexpr const float ColliderScaleMIN = 0.01;
    // Get static field: static public System.Single ColliderScaleMIN
    static float _get_ColliderScaleMIN();
    // Set static field: static public System.Single ColliderScaleMIN
    static void _set_ColliderScaleMIN(float value);
    // static field const value: static public System.Single ColliderScaleMAX
    static constexpr const float ColliderScaleMAX = 1;
    // Get static field: static public System.Single ColliderScaleMAX
    static float _get_ColliderScaleMAX();
    // Set static field: static public System.Single ColliderScaleMAX
    static void _set_ColliderScaleMAX(float value);
    // static field const value: static public System.Single ColliderScalePerSecond
    static constexpr const float ColliderScalePerSecond = 1;
    // Get static field: static public System.Single ColliderScalePerSecond
    static float _get_ColliderScalePerSecond();
    // Set static field: static public System.Single ColliderScalePerSecond
    static void _set_ColliderScalePerSecond(float value);
    // static field const value: static public System.Single TriggerDebounceTime
    static constexpr const float TriggerDebounceTime = 0.05;
    // Get static field: static public System.Single TriggerDebounceTime
    static float _get_TriggerDebounceTime();
    // Set static field: static public System.Single TriggerDebounceTime
    static void _set_TriggerDebounceTime(float value);
    // static field const value: static public System.Single ThumbDebounceTime
    static constexpr const float ThumbDebounceTime = 0.15;
    // Get static field: static public System.Single ThumbDebounceTime
    static float _get_ThumbDebounceTime();
    // Set static field: static public System.Single ThumbDebounceTime
    static void _set_ThumbDebounceTime(float value);
    // static field const value: static private System.Single PointLockAnimationDuration
    static constexpr const float PointLockAnimationDuration = 0.1;
    // Get static field: static private System.Single PointLockAnimationDuration
    static float _get_PointLockAnimationDuration();
    // Set static field: static private System.Single PointLockAnimationDuration
    static void _set_PointLockAnimationDuration(float value);
    // Get instance field reference: public UnityEngine.GameObject avatar
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_avatar();
    // Get instance field reference: private OVRInput/Controller mController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Controller& dyn_mController();
    // Get instance field reference: private UnityEngine.Animator mAnimator
    [[deprecated("Use field access instead!")]] ::UnityEngine::Animator*& dyn_mAnimator();
    // Get instance field reference: private OVRTouchSample.HandPose mDefaultGrabPose
    [[deprecated("Use field access instead!")]] ::OVRTouchSample::HandPose*& dyn_mDefaultGrabPose();
    // Get instance field reference: private UnityEngine.Collider[] _mColliders
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Collider*>& dyn__mColliders();
    // Get instance field reference: private System.Boolean _mCollisionEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__mCollisionEnabled();
    // Get instance field reference: public UnityEngine.XR.Interaction.Toolkit.XRDirectInteractor mGrabber
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::XRDirectInteractor*& dyn_mGrabber();
    // Get instance field reference: private System.Boolean _isLocalHand
    [[deprecated("Use field access instead!")]] bool& dyn__isLocalHand();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Renderer> _mShowAfterInputFocusAcquired
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*& dyn__mShowAfterInputFocusAcquired();
    // Get instance field reference: private System.Int32 _mAnimLayerIndexThumb
    [[deprecated("Use field access instead!")]] int& dyn__mAnimLayerIndexThumb();
    // Get instance field reference: private System.Int32 _mAnimLayerIndexPoint
    [[deprecated("Use field access instead!")]] int& dyn__mAnimLayerIndexPoint();
    // Get instance field reference: private System.Int32 _mAnimParamIndexFlex
    [[deprecated("Use field access instead!")]] int& dyn__mAnimParamIndexFlex();
    // Get instance field reference: private System.Int32 _mAnimParamIndexPose
    [[deprecated("Use field access instead!")]] int& dyn__mAnimParamIndexPose();
    // Get instance field reference: private System.Boolean _mIsPointing
    [[deprecated("Use field access instead!")]] bool& dyn__mIsPointing();
    // Get instance field reference: private System.Boolean _mIsGivingThumbsUp
    [[deprecated("Use field access instead!")]] bool& dyn__mIsGivingThumbsUp();
    // Get instance field reference: private System.Single _mPointBlend
    [[deprecated("Use field access instead!")]] float& dyn__mPointBlend();
    // Get instance field reference: private System.Single _mThumbsUpBlend
    [[deprecated("Use field access instead!")]] float& dyn__mThumbsUpBlend();
    // Get instance field reference: private System.Boolean _mPointLock
    [[deprecated("Use field access instead!")]] bool& dyn__mPointLock();
    // Get instance field reference: private System.Single _mPointLockBegin
    [[deprecated("Use field access instead!")]] float& dyn__mPointLockBegin();
    // Get instance field reference: private System.Boolean _mRestoreOnInputAcquired
    [[deprecated("Use field access instead!")]] bool& dyn__mRestoreOnInputAcquired();
    // Get instance field reference: private ChangeHandGesture _changeHandGesture
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ChangeHandGesture*& dyn__changeHandGesture();
    // Get instance field reference: public System.Boolean leftHand
    [[deprecated("Use field access instead!")]] bool& dyn_leftHand();
    // Get instance field reference: private System.Int32 _pointLockCounter
    [[deprecated("Use field access instead!")]] int& dyn__pointLockCounter();
    // Get instance field reference: private System.Single _mCollisionScaleCurrent
    [[deprecated("Use field access instead!")]] float& dyn__mCollisionScaleCurrent();
    // private System.Single get__mPointLockEnd()
    // Offset: 0x72BDF0
    float get__mPointLockEnd();
    // public System.Void .ctor()
    // Offset: 0x72BDD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hand* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVRTouchSample::Hand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hand*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x72B6D0
    void Start();
    // public System.Void SetPointLock(System.Boolean isPointing)
    // Offset: 0x72B670
    void SetPointLock(bool isPointing);
    // private System.Single PointLockLerpValue()
    // Offset: 0x72B610
    float PointLockLerpValue();
    // private System.Void OnDestroy()
    // Offset: 0x72B2D0
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x72BD00
    void Update();
    // private System.Void UpdateCapTouchStates()
    // Offset: 0x72BC70
    void UpdateCapTouchStates();
    // private System.Void LateUpdate()
    // Offset: 0x72B0D0
    void LateUpdate();
    // private System.Void OnInputFocusLost()
    // Offset: 0x72B4B0
    void OnInputFocusLost();
    // private System.Void OnInputFocusAcquired()
    // Offset: 0x72B380
    void OnInputFocusAcquired();
    // private System.Single InputValueRateChange(System.Boolean isDown, System.Single value)
    // Offset: 0x72B020
    float InputValueRateChange(bool isDown, float value);
    // private System.Void UpdateAnimStates()
    // Offset: 0x72BA30
    void UpdateAnimStates();
    // private System.Void CollisionEnable(System.Boolean enabled)
    // Offset: 0x72ADE0
    void CollisionEnable(bool enabled);
  }; // OVRTouchSample.Hand
  #pragma pack(pop)
  static check_size<sizeof(Hand), 152 + sizeof(float)> __OVRTouchSample_HandSizeCheck;
  static_assert(sizeof(Hand) == 0x9C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVRTouchSample::Hand::get__mPointLockEnd
// Il2CppName: get__mPointLockEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::get__mPointLockEnd)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "get__mPointLockEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVRTouchSample::Hand::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::SetPointLock
// Il2CppName: SetPointLock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)(bool)>(&OVRTouchSample::Hand::SetPointLock)> {
  static const MethodInfo* get() {
    static auto* isPointing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "SetPointLock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isPointing});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::PointLockLerpValue
// Il2CppName: PointLockLerpValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::PointLockLerpValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "PointLockLerpValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::UpdateCapTouchStates
// Il2CppName: UpdateCapTouchStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::UpdateCapTouchStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "UpdateCapTouchStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnInputFocusLost
// Il2CppName: OnInputFocusLost
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnInputFocusLost)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnInputFocusLost", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::OnInputFocusAcquired
// Il2CppName: OnInputFocusAcquired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::OnInputFocusAcquired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "OnInputFocusAcquired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::InputValueRateChange
// Il2CppName: InputValueRateChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OVRTouchSample::Hand::*)(bool, float)>(&OVRTouchSample::Hand::InputValueRateChange)> {
  static const MethodInfo* get() {
    static auto* isDown = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "InputValueRateChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isDown, value});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::UpdateAnimStates
// Il2CppName: UpdateAnimStates
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)()>(&OVRTouchSample::Hand::UpdateAnimStates)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "UpdateAnimStates", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVRTouchSample::Hand::CollisionEnable
// Il2CppName: CollisionEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVRTouchSample::Hand::*)(bool)>(&OVRTouchSample::Hand::CollisionEnable)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVRTouchSample::Hand*), "CollisionEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HapticsManager
  class HapticsManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SphereCollider
  class SphereCollider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Coroutine
  class Coroutine;
  // Forward declaring type: Collider
  class Collider;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: OVRTouchSample
namespace OVRTouchSample {
  // Forward declaring type: Hand
  class Hand;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: HapticButton
  class HapticButton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::HapticButton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HapticButton*, "", "HapticButton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: HapticButton
  // [TokenAttribute] Offset: FFFFFFFF
  class HapticButton : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::HapticButton::$RunActivationHaptics$d__14
    class $RunActivationHaptics$d__14;
    public:
    // private HapticsManager _hapticsManager
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::HapticsManager* hapticsManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::HapticsManager*) == 0x8);
    // private UnityEngine.SphereCollider _collider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::SphereCollider* collider;
    // Field size check
    static_assert(sizeof(::UnityEngine::SphereCollider*) == 0x8);
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Single amountToPushToActivate
    // Size: 0x4
    // Offset: 0x30
    float amountToPushToActivate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _outerRadius
    // Size: 0x4
    // Offset: 0x34
    float outerRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _isPressed
    // Size: 0x1
    // Offset: 0x38
    bool isPressed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isPressed and: pressActivationHapticsCoroutine
    char __padding5[0x7] = {};
    // private UnityEngine.Coroutine _pressActivationHapticsCoroutine
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Coroutine* pressActivationHapticsCoroutine;
    // Field size check
    static_assert(sizeof(::UnityEngine::Coroutine*) == 0x8);
    // private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Collider,OVRTouchSample.Hand> _colliderToHandCache
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::OVRTouchSample::Hand*>* colliderToHandCache;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::OVRTouchSample::Hand*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private HapticsManager _hapticsManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::HapticsManager*& dyn__hapticsManager();
    // Get instance field reference: private UnityEngine.SphereCollider _collider
    [[deprecated("Use field access instead!")]] ::UnityEngine::SphereCollider*& dyn__collider();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // Get instance field reference: public System.Single amountToPushToActivate
    [[deprecated("Use field access instead!")]] float& dyn_amountToPushToActivate();
    // Get instance field reference: private System.Single _outerRadius
    [[deprecated("Use field access instead!")]] float& dyn__outerRadius();
    // Get instance field reference: private System.Boolean _isPressed
    [[deprecated("Use field access instead!")]] bool& dyn__isPressed();
    // Get instance field reference: private UnityEngine.Coroutine _pressActivationHapticsCoroutine
    [[deprecated("Use field access instead!")]] ::UnityEngine::Coroutine*& dyn__pressActivationHapticsCoroutine();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<UnityEngine.Collider,OVRTouchSample.Hand> _colliderToHandCache
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::OVRTouchSample::Hand*>*& dyn__colliderToHandCache();
    // private System.Single get_InnerRadius()
    // Offset: 0x6B9340
    float get_InnerRadius();
    // public System.Void .ctor()
    // Offset: 0x6B92D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HapticButton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::HapticButton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HapticButton*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6B8C10
    void Awake();
    // private System.Void OnTriggerStay(UnityEngine.Collider c)
    // Offset: 0x6B8E80
    void OnTriggerStay(::UnityEngine::Collider* c);
    // private System.Void OnTriggerExit(UnityEngine.Collider c)
    // Offset: 0x6B8DD0
    void OnTriggerExit(::UnityEngine::Collider* c);
    // private OVRTouchSample.Hand GetHandForCollider(UnityEngine.Collider c)
    // Offset: 0x6B8D20
    ::OVRTouchSample::Hand* GetHandForCollider(::UnityEngine::Collider* c);
    // private System.Collections.IEnumerator RunActivationHaptics(System.Boolean leftHand)
    // Offset: 0x6B9250
    ::System::Collections::IEnumerator* RunActivationHaptics(bool leftHand);
  }; // HapticButton
  #pragma pack(pop)
  static check_size<sizeof(HapticButton), 72 + sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::OVRTouchSample::Hand*>*)> __GlobalNamespace_HapticButtonSizeCheck;
  static_assert(sizeof(HapticButton) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::get_InnerRadius
// Il2CppName: get_InnerRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::HapticButton::*)()>(&GlobalNamespace::HapticButton::get_InnerRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "get_InnerRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticButton::*)()>(&GlobalNamespace::HapticButton::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::OnTriggerStay
// Il2CppName: OnTriggerStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticButton::*)(::UnityEngine::Collider*)>(&GlobalNamespace::HapticButton::OnTriggerStay)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "OnTriggerStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HapticButton::*)(::UnityEngine::Collider*)>(&GlobalNamespace::HapticButton::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::GetHandForCollider
// Il2CppName: GetHandForCollider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRTouchSample::Hand* (GlobalNamespace::HapticButton::*)(::UnityEngine::Collider*)>(&GlobalNamespace::HapticButton::GetHandForCollider)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "GetHandForCollider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HapticButton::RunActivationHaptics
// Il2CppName: RunActivationHaptics
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::HapticButton::*)(bool)>(&GlobalNamespace::HapticButton::RunActivationHaptics)> {
  static const MethodInfo* get() {
    static auto* leftHand = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HapticButton*), "RunActivationHaptics", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{leftHand});
  }
};

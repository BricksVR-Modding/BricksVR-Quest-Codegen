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
// Including type: OVRInput/Button
#include "GlobalNamespace/OVRInput_Button.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: QuickInteractable
  class QuickInteractable;
  // Forward declaring type: BrickHover
  class BrickHover;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: QuickInteractor
  class QuickInteractor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickInteractor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickInteractor*, "", "QuickInteractor");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4A
  #pragma pack(push, 1)
  // Autogenerated type: QuickInteractor
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickInteractor : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::QuickInteractor::$$c
    class $$c;
    public:
    // public System.Boolean leftHand
    // Size: 0x1
    // Offset: 0x18
    bool leftHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: leftHand and: interactionMask
    char __padding0[0x3] = {};
    // public UnityEngine.LayerMask interactionMask
    // Size: 0x4
    // Offset: 0x1C
    ::UnityEngine::LayerMask interactionMask;
    // Field size check
    static_assert(sizeof(::UnityEngine::LayerMask) == 0x4);
    // private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,QuickInteractable> _hoveredObjects
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>* hoveredObjects;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>*) == 0x8);
    // private OVRInput/Button _trigger
    // Size: 0x4
    // Offset: 0x28
    ::GlobalNamespace::OVRInput::Button trigger;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::Button) == 0x4);
    // Padding between fields: trigger and: tempHoveredObject
    char __padding3[0x4] = {};
    // private UnityEngine.GameObject _tempHoveredObject
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* tempHoveredObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private QuickInteractable _tempHoveredInteractable
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::QuickInteractable* tempHoveredInteractable;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::QuickInteractable*) == 0x8);
    // private BrickHover _brickHover
    // Size: 0x8
    // Offset: 0x40
    ::GlobalNamespace::BrickHover* brickHover;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BrickHover*) == 0x8);
    // private System.Boolean _debugGrabEnabled
    // Size: 0x1
    // Offset: 0x48
    bool debugGrabEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _interacting
    // Size: 0x1
    // Offset: 0x49
    bool interacting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public System.Boolean leftHand
    [[deprecated("Use field access instead!")]] bool& dyn_leftHand();
    // Get instance field reference: public UnityEngine.LayerMask interactionMask
    [[deprecated("Use field access instead!")]] ::UnityEngine::LayerMask& dyn_interactionMask();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,QuickInteractable> _hoveredObjects
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>*& dyn__hoveredObjects();
    // Get instance field reference: private OVRInput/Button _trigger
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::Button& dyn__trigger();
    // Get instance field reference: private UnityEngine.GameObject _tempHoveredObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__tempHoveredObject();
    // Get instance field reference: private QuickInteractable _tempHoveredInteractable
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::QuickInteractable*& dyn__tempHoveredInteractable();
    // Get instance field reference: private BrickHover _brickHover
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BrickHover*& dyn__brickHover();
    // Get instance field reference: private System.Boolean _debugGrabEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__debugGrabEnabled();
    // Get instance field reference: private System.Boolean _interacting
    [[deprecated("Use field access instead!")]] bool& dyn__interacting();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickInteractor* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickInteractor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickInteractor*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0x6C7AF0
    void Awake();
    // private System.Void OnTriggerEnter(UnityEngine.Collider c)
    // Offset: 0x6C7D70
    void OnTriggerEnter(::UnityEngine::Collider* c);
    // private System.Void OnTriggerExit(UnityEngine.Collider c)
    // Offset: 0x6C7EE0
    void OnTriggerExit(::UnityEngine::Collider* c);
    // private System.Void Update()
    // Offset: 0x6C8160
    void Update();
    // private System.Void CleanHoveredList()
    // Offset: 0x6C7BB0
    void CleanHoveredList();
    // public System.Collections.Generic.Dictionary`2<UnityEngine.GameObject,QuickInteractable> HoveredObjects()
    // Offset: 0x1E1950
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>* HoveredObjects();
    // static private System.Boolean Contains(UnityEngine.LayerMask mask, System.Int32 layer)
    // Offset: 0x6C7D30
    static bool Contains(::UnityEngine::LayerMask mask, int layer);
    // private System.Single <Update>b__12_0(System.Collections.Generic.KeyValuePair`2<UnityEngine.GameObject,QuickInteractable> o)
    // Offset: 0x6C8030
    float $Update$b__12_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*> o);
    // private System.Void <CleanHoveredList>b__13_1(UnityEngine.GameObject k)
    // Offset: 0x6C7FD0
    void $CleanHoveredList$b__13_1(::UnityEngine::GameObject* k);
  }; // QuickInteractor
  #pragma pack(pop)
  static check_size<sizeof(QuickInteractor), 73 + sizeof(bool)> __GlobalNamespace_QuickInteractorSizeCheck;
  static_assert(sizeof(QuickInteractor) == 0x4A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)()>(&GlobalNamespace::QuickInteractor::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)(::UnityEngine::Collider*)>(&GlobalNamespace::QuickInteractor::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)(::UnityEngine::Collider*)>(&GlobalNamespace::QuickInteractor::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)()>(&GlobalNamespace::QuickInteractor::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::CleanHoveredList
// Il2CppName: CleanHoveredList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)()>(&GlobalNamespace::QuickInteractor::CleanHoveredList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "CleanHoveredList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::HoveredObjects
// Il2CppName: HoveredObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>* (GlobalNamespace::QuickInteractor::*)()>(&GlobalNamespace::QuickInteractor::HoveredObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "HoveredObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::LayerMask, int)>(&GlobalNamespace::QuickInteractor::Contains)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine", "LayerMask")->byval_arg;
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask, layer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::$Update$b__12_0
// Il2CppName: <Update>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::QuickInteractor::*)(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::GameObject*, ::GlobalNamespace::QuickInteractable*>)>(&GlobalNamespace::QuickInteractor::$Update$b__12_0)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject"), ::il2cpp_utils::GetClassFromName("", "QuickInteractable")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "<Update>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickInteractor::$CleanHoveredList$b__13_1
// Il2CppName: <CleanHoveredList>b__13_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::QuickInteractor::*)(::UnityEngine::GameObject*)>(&GlobalNamespace::QuickInteractor::$CleanHoveredList$b__13_1)> {
  static const MethodInfo* get() {
    static auto* k = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickInteractor*), "<CleanHoveredList>b__13_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{k});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRHand
  class OVRHand;
  // Forward declaring type: OVRSkeletonRenderer
  class OVRSkeletonRenderer;
  // Forward declaring type: OVRMesh
  class OVRMesh;
  // Forward declaring type: OVRMeshRenderer
  class OVRMeshRenderer;
  // Forward declaring type: OVRBoneCapsule
  class OVRBoneCapsule;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: SkinnedMeshRenderer
  class SkinnedMeshRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: HandsManager
  class HandsManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::HandsManager);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::HandsManager*, "OculusSampleFramework", "HandsManager");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.HandsManager
  // [TokenAttribute] Offset: FFFFFFFF
  class HandsManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::HandsManager::HandsVisualMode
    struct HandsVisualMode;
    // Nested type: ::OculusSampleFramework::HandsManager::$FindSkeletonVisualGameObjects$d__52
    class $FindSkeletonVisualGameObjects$d__52;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct HandsVisualMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: HandsVisualMode
      constexpr HandsVisualMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Mesh
      static constexpr const int Mesh = 0;
      // Get static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Mesh
      static ::OculusSampleFramework::HandsManager::HandsVisualMode _get_Mesh();
      // Set static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Mesh
      static void _set_Mesh(::OculusSampleFramework::HandsManager::HandsVisualMode value);
      // static field const value: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Skeleton
      static constexpr const int Skeleton = 1;
      // Get static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Skeleton
      static ::OculusSampleFramework::HandsManager::HandsVisualMode _get_Skeleton();
      // Set static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Skeleton
      static void _set_Skeleton(::OculusSampleFramework::HandsManager::HandsVisualMode value);
      // static field const value: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Both
      static constexpr const int Both = 2;
      // Get static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Both
      static ::OculusSampleFramework::HandsManager::HandsVisualMode _get_Both();
      // Set static field: static public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode Both
      static void _set_Both(::OculusSampleFramework::HandsManager::HandsVisualMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode
    #pragma pack(pop)
    static check_size<sizeof(HandsManager::HandsVisualMode), 0 + sizeof(int)> __OculusSampleFramework_HandsManager_HandsVisualModeSizeCheck;
    static_assert(sizeof(HandsManager::HandsVisualMode) == 0x4);
    public:
    // private UnityEngine.GameObject _leftHand
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* leftHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _rightHand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* rightHand;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode VisualMode
    // Size: 0x4
    // Offset: 0x28
    ::OculusSampleFramework::HandsManager::HandsVisualMode VisualMode;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::HandsManager::HandsVisualMode) == 0x4);
    // Padding between fields: VisualMode and: hand
    char __padding2[0x4] = {};
    // private OVRHand[] _hand
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::GlobalNamespace::OVRHand*> hand;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRHand*>) == 0x8);
    // private OVRSkeleton[] _handSkeleton
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::GlobalNamespace::OVRSkeleton*> handSkeleton;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRSkeleton*>) == 0x8);
    // private OVRSkeletonRenderer[] _handSkeletonRenderer
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::GlobalNamespace::OVRSkeletonRenderer*> handSkeletonRenderer;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRSkeletonRenderer*>) == 0x8);
    // private OVRMesh[] _handMesh
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::GlobalNamespace::OVRMesh*> handMesh;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRMesh*>) == 0x8);
    // private OVRMeshRenderer[] _handMeshRenderer
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::GlobalNamespace::OVRMeshRenderer*> handMeshRenderer;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRMeshRenderer*>) == 0x8);
    // private UnityEngine.SkinnedMeshRenderer _leftMeshRenderer
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::SkinnedMeshRenderer* leftMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // private UnityEngine.SkinnedMeshRenderer _rightMeshRenderer
    // Size: 0x8
    // Offset: 0x60
    ::UnityEngine::SkinnedMeshRenderer* rightMeshRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::SkinnedMeshRenderer*) == 0x8);
    // private UnityEngine.GameObject _leftSkeletonVisual
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::GameObject* leftSkeletonVisual;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject _rightSkeletonVisual
    // Size: 0x8
    // Offset: 0x70
    ::UnityEngine::GameObject* rightSkeletonVisual;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single _currentHandAlpha
    // Size: 0x4
    // Offset: 0x78
    float currentHandAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 HandAlphaId
    // Size: 0x4
    // Offset: 0x7C
    int HandAlphaId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String SKELETON_VISUALIZER_NAME
    static constexpr const char* SKELETON_VISUALIZER_NAME = "SkeletonRenderer";
    // Get static field: static private System.String SKELETON_VISUALIZER_NAME
    static ::StringW _get_SKELETON_VISUALIZER_NAME();
    // Set static field: static private System.String SKELETON_VISUALIZER_NAME
    static void _set_SKELETON_VISUALIZER_NAME(::StringW value);
    // Get static field: static private OculusSampleFramework.HandsManager <Instance>k__BackingField
    static ::OculusSampleFramework::HandsManager* _get_$Instance$k__BackingField();
    // Set static field: static private OculusSampleFramework.HandsManager <Instance>k__BackingField
    static void _set_$Instance$k__BackingField(::OculusSampleFramework::HandsManager* value);
    // Get instance field reference: private UnityEngine.GameObject _leftHand
    [[deprecated]] ::UnityEngine::GameObject*& dyn__leftHand();
    // Get instance field reference: private UnityEngine.GameObject _rightHand
    [[deprecated]] ::UnityEngine::GameObject*& dyn__rightHand();
    // Get instance field reference: public OculusSampleFramework.HandsManager/OculusSampleFramework.HandsVisualMode VisualMode
    [[deprecated]] ::OculusSampleFramework::HandsManager::HandsVisualMode& dyn_VisualMode();
    // Get instance field reference: private OVRHand[] _hand
    [[deprecated]] ::ArrayW<::GlobalNamespace::OVRHand*>& dyn__hand();
    // Get instance field reference: private OVRSkeleton[] _handSkeleton
    [[deprecated]] ::ArrayW<::GlobalNamespace::OVRSkeleton*>& dyn__handSkeleton();
    // Get instance field reference: private OVRSkeletonRenderer[] _handSkeletonRenderer
    [[deprecated]] ::ArrayW<::GlobalNamespace::OVRSkeletonRenderer*>& dyn__handSkeletonRenderer();
    // Get instance field reference: private OVRMesh[] _handMesh
    [[deprecated]] ::ArrayW<::GlobalNamespace::OVRMesh*>& dyn__handMesh();
    // Get instance field reference: private OVRMeshRenderer[] _handMeshRenderer
    [[deprecated]] ::ArrayW<::GlobalNamespace::OVRMeshRenderer*>& dyn__handMeshRenderer();
    // Get instance field reference: private UnityEngine.SkinnedMeshRenderer _leftMeshRenderer
    [[deprecated]] ::UnityEngine::SkinnedMeshRenderer*& dyn__leftMeshRenderer();
    // Get instance field reference: private UnityEngine.SkinnedMeshRenderer _rightMeshRenderer
    [[deprecated]] ::UnityEngine::SkinnedMeshRenderer*& dyn__rightMeshRenderer();
    // Get instance field reference: private UnityEngine.GameObject _leftSkeletonVisual
    [[deprecated]] ::UnityEngine::GameObject*& dyn__leftSkeletonVisual();
    // Get instance field reference: private UnityEngine.GameObject _rightSkeletonVisual
    [[deprecated]] ::UnityEngine::GameObject*& dyn__rightSkeletonVisual();
    // Get instance field reference: private System.Single _currentHandAlpha
    [[deprecated]] float& dyn__currentHandAlpha();
    // Get instance field reference: private System.Int32 HandAlphaId
    [[deprecated]] int& dyn_HandAlphaId();
    // public OVRHand get_RightHand()
    // Offset: 0x28C600
    ::GlobalNamespace::OVRHand* get_RightHand();
    // private System.Void set_RightHand(OVRHand value)
    // Offset: 0x28CB10
    void set_RightHand(::GlobalNamespace::OVRHand* value);
    // public OVRSkeleton get_RightHandSkeleton()
    // Offset: 0x28C5C0
    ::GlobalNamespace::OVRSkeleton* get_RightHandSkeleton();
    // private System.Void set_RightHandSkeleton(OVRSkeleton value)
    // Offset: 0x28CA90
    void set_RightHandSkeleton(::GlobalNamespace::OVRSkeleton* value);
    // public OVRSkeletonRenderer get_RightHandSkeletonRenderer()
    // Offset: 0x28C580
    ::GlobalNamespace::OVRSkeletonRenderer* get_RightHandSkeletonRenderer();
    // private System.Void set_RightHandSkeletonRenderer(OVRSkeletonRenderer value)
    // Offset: 0x28CA10
    void set_RightHandSkeletonRenderer(::GlobalNamespace::OVRSkeletonRenderer* value);
    // public OVRMesh get_RightHandMesh()
    // Offset: 0x28C540
    ::GlobalNamespace::OVRMesh* get_RightHandMesh();
    // private System.Void set_RightHandMesh(OVRMesh value)
    // Offset: 0x28C990
    void set_RightHandMesh(::GlobalNamespace::OVRMesh* value);
    // public OVRMeshRenderer get_RightHandMeshRenderer()
    // Offset: 0x28C500
    ::GlobalNamespace::OVRMeshRenderer* get_RightHandMeshRenderer();
    // private System.Void set_RightHandMeshRenderer(OVRMeshRenderer value)
    // Offset: 0x28C910
    void set_RightHandMeshRenderer(::GlobalNamespace::OVRMeshRenderer* value);
    // public OVRHand get_LeftHand()
    // Offset: 0x28C4C0
    ::GlobalNamespace::OVRHand* get_LeftHand();
    // private System.Void set_LeftHand(OVRHand value)
    // Offset: 0x28C890
    void set_LeftHand(::GlobalNamespace::OVRHand* value);
    // public OVRSkeleton get_LeftHandSkeleton()
    // Offset: 0x28C480
    ::GlobalNamespace::OVRSkeleton* get_LeftHandSkeleton();
    // private System.Void set_LeftHandSkeleton(OVRSkeleton value)
    // Offset: 0x28C810
    void set_LeftHandSkeleton(::GlobalNamespace::OVRSkeleton* value);
    // public OVRSkeletonRenderer get_LeftHandSkeletonRenderer()
    // Offset: 0x28C440
    ::GlobalNamespace::OVRSkeletonRenderer* get_LeftHandSkeletonRenderer();
    // private System.Void set_LeftHandSkeletonRenderer(OVRSkeletonRenderer value)
    // Offset: 0x28C790
    void set_LeftHandSkeletonRenderer(::GlobalNamespace::OVRSkeletonRenderer* value);
    // public OVRMesh get_LeftHandMesh()
    // Offset: 0x28C400
    ::GlobalNamespace::OVRMesh* get_LeftHandMesh();
    // private System.Void set_LeftHandMesh(OVRMesh value)
    // Offset: 0x28C710
    void set_LeftHandMesh(::GlobalNamespace::OVRMesh* value);
    // public OVRMeshRenderer get_LeftHandMeshRenderer()
    // Offset: 0x28C3C0
    ::GlobalNamespace::OVRMeshRenderer* get_LeftHandMeshRenderer();
    // private System.Void set_LeftHandMeshRenderer(OVRMeshRenderer value)
    // Offset: 0x28C690
    void set_LeftHandMeshRenderer(::GlobalNamespace::OVRMeshRenderer* value);
    // static public OculusSampleFramework.HandsManager get_Instance()
    // Offset: 0x28C340
    static ::OculusSampleFramework::HandsManager* get_Instance();
    // static private System.Void set_Instance(OculusSampleFramework.HandsManager value)
    // Offset: 0x28C640
    static void set_Instance(::OculusSampleFramework::HandsManager* value);
    // private System.Void Awake()
    // Offset: 0x28B200
    void Awake();
    // private System.Void Update()
    // Offset: 0x28C1C0
    void Update();
    // private System.Collections.IEnumerator FindSkeletonVisualGameObjects()
    // Offset: 0x28B950
    ::System::Collections::IEnumerator* FindSkeletonVisualGameObjects();
    // public System.Void SwitchVisualization()
    // Offset: 0x28C100
    void SwitchVisualization();
    // private System.Void SetToCurrentVisualMode()
    // Offset: 0x28BE10
    void SetToCurrentVisualMode();
    // static public System.Collections.Generic.List`1<OVRBoneCapsule> GetCapsulesPerBone(OVRSkeleton skeleton, OVRSkeleton/BoneId boneId)
    // Offset: 0x28B9C0
    static ::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* GetCapsulesPerBone(::GlobalNamespace::OVRSkeleton* skeleton, ::GlobalNamespace::OVRSkeleton::BoneId boneId);
    // public System.Boolean IsInitialized()
    // Offset: 0x28BB90
    bool IsInitialized();
    // public System.Void .ctor()
    // Offset: 0x28C250
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::HandsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandsManager*, creationType>()));
    }
  }; // OculusSampleFramework.HandsManager
  #pragma pack(pop)
  static check_size<sizeof(HandsManager), 124 + sizeof(int)> __OculusSampleFramework_HandsManagerSizeCheck;
  static_assert(sizeof(HandsManager) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::HandsManager::HandsVisualMode, "OculusSampleFramework", "HandsManager/HandsVisualMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_RightHand
// Il2CppName: get_RightHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_RightHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_RightHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_RightHand
// Il2CppName: set_RightHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRHand*)>(&OculusSampleFramework::HandsManager::set_RightHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_RightHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_RightHandSkeleton
// Il2CppName: get_RightHandSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_RightHandSkeleton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_RightHandSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_RightHandSkeleton
// Il2CppName: set_RightHandSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRSkeleton*)>(&OculusSampleFramework::HandsManager::set_RightHandSkeleton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_RightHandSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_RightHandSkeletonRenderer
// Il2CppName: get_RightHandSkeletonRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_RightHandSkeletonRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_RightHandSkeletonRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_RightHandSkeletonRenderer
// Il2CppName: set_RightHandSkeletonRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRSkeletonRenderer*)>(&OculusSampleFramework::HandsManager::set_RightHandSkeletonRenderer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_RightHandSkeletonRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_RightHandMesh
// Il2CppName: get_RightHandMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMesh* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_RightHandMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_RightHandMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_RightHandMesh
// Il2CppName: set_RightHandMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRMesh*)>(&OculusSampleFramework::HandsManager::set_RightHandMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_RightHandMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_RightHandMeshRenderer
// Il2CppName: get_RightHandMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshRenderer* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_RightHandMeshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_RightHandMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_RightHandMeshRenderer
// Il2CppName: set_RightHandMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRMeshRenderer*)>(&OculusSampleFramework::HandsManager::set_RightHandMeshRenderer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRMeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_RightHandMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_LeftHand
// Il2CppName: get_LeftHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRHand* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_LeftHand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_LeftHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_LeftHand
// Il2CppName: set_LeftHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRHand*)>(&OculusSampleFramework::HandsManager::set_LeftHand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_LeftHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_LeftHandSkeleton
// Il2CppName: get_LeftHandSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeleton* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_LeftHandSkeleton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_LeftHandSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_LeftHandSkeleton
// Il2CppName: set_LeftHandSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRSkeleton*)>(&OculusSampleFramework::HandsManager::set_LeftHandSkeleton)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_LeftHandSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_LeftHandSkeletonRenderer
// Il2CppName: get_LeftHandSkeletonRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSkeletonRenderer* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_LeftHandSkeletonRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_LeftHandSkeletonRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_LeftHandSkeletonRenderer
// Il2CppName: set_LeftHandSkeletonRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRSkeletonRenderer*)>(&OculusSampleFramework::HandsManager::set_LeftHandSkeletonRenderer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRSkeletonRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_LeftHandSkeletonRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_LeftHandMesh
// Il2CppName: get_LeftHandMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMesh* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_LeftHandMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_LeftHandMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_LeftHandMesh
// Il2CppName: set_LeftHandMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRMesh*)>(&OculusSampleFramework::HandsManager::set_LeftHandMesh)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_LeftHandMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_LeftHandMeshRenderer
// Il2CppName: get_LeftHandMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshRenderer* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::get_LeftHandMeshRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_LeftHandMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_LeftHandMeshRenderer
// Il2CppName: set_LeftHandMeshRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)(::GlobalNamespace::OVRMeshRenderer*)>(&OculusSampleFramework::HandsManager::set_LeftHandMeshRenderer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRMeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_LeftHandMeshRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::HandsManager* (*)()>(&OculusSampleFramework::HandsManager::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::set_Instance
// Il2CppName: set_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::OculusSampleFramework::HandsManager*)>(&OculusSampleFramework::HandsManager::set_Instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "HandsManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "set_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::FindSkeletonVisualGameObjects
// Il2CppName: FindSkeletonVisualGameObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::FindSkeletonVisualGameObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "FindSkeletonVisualGameObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::SwitchVisualization
// Il2CppName: SwitchVisualization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::SwitchVisualization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "SwitchVisualization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::SetToCurrentVisualMode
// Il2CppName: SetToCurrentVisualMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::SetToCurrentVisualMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "SetToCurrentVisualMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::GetCapsulesPerBone
// Il2CppName: GetCapsulesPerBone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::OVRBoneCapsule*>* (*)(::GlobalNamespace::OVRSkeleton*, ::GlobalNamespace::OVRSkeleton::BoneId)>(&OculusSampleFramework::HandsManager::GetCapsulesPerBone)> {
  static const MethodInfo* get() {
    static auto* skeleton = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton")->byval_arg;
    static auto* boneId = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/BoneId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "GetCapsulesPerBone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skeleton, boneId});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::IsInitialized
// Il2CppName: IsInitialized
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::HandsManager::*)()>(&OculusSampleFramework::HandsManager::IsInitialized)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::HandsManager*), "IsInitialized", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::HandsManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

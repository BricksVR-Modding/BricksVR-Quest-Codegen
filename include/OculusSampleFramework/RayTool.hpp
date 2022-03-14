// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusSampleFramework.InteractableTool
#include "OculusSampleFramework/InteractableTool.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: RayToolView
  class RayToolView;
  // Forward declaring type: PinchStateModule
  class PinchStateModule;
  // Forward declaring type: Interactable
  class Interactable;
  // Forward declaring type: InteractableToolTags
  struct InteractableToolTags;
  // Forward declaring type: ToolInputState
  struct ToolInputState;
  // Forward declaring type: InteractableCollisionInfo
  class InteractableCollisionInfo;
  // Forward declaring type: ColliderZone
  class ColliderZone;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Skipping declaration: Vector3 because it is already included!
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
  // Forward declaring type: RayTool
  class RayTool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::RayTool);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::RayTool*, "OculusSampleFramework", "RayTool");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0xB1
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.RayTool
  // [TokenAttribute] Offset: FFFFFFFF
  class RayTool : public ::OculusSampleFramework::InteractableTool {
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
    // private OculusSampleFramework.RayToolView _rayToolView
    // Size: 0x8
    // Offset: 0x68
    ::OculusSampleFramework::RayToolView* rayToolView;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::RayToolView*) == 0x8);
    // [RangeAttribute] Offset: 0x720DF0
    // private System.Single _coneAngleDegrees
    // Size: 0x4
    // Offset: 0x70
    float coneAngleDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _farFieldMaxDistance
    // Size: 0x4
    // Offset: 0x74
    float farFieldMaxDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private OculusSampleFramework.PinchStateModule _pinchStateModule
    // Size: 0x8
    // Offset: 0x78
    ::OculusSampleFramework::PinchStateModule* pinchStateModule;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::PinchStateModule*) == 0x8);
    // private OculusSampleFramework.Interactable _focusedInteractable
    // Size: 0x8
    // Offset: 0x80
    ::OculusSampleFramework::Interactable* focusedInteractable;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::Interactable*) == 0x8);
    // private UnityEngine.Collider[] _collidersOverlapped
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<::UnityEngine::Collider*> collidersOverlapped;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private OculusSampleFramework.Interactable _currInteractableCastedAgainst
    // Size: 0x8
    // Offset: 0x90
    ::OculusSampleFramework::Interactable* currInteractableCastedAgainst;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::Interactable*) == 0x8);
    // private System.Single _coneAngleReleaseDegrees
    // Size: 0x4
    // Offset: 0x98
    float coneAngleReleaseDegrees;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: coneAngleReleaseDegrees and: primaryHits
    char __padding7[0x4] = {};
    // private UnityEngine.RaycastHit[] _primaryHits
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::UnityEngine::RaycastHit> primaryHits;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::RaycastHit>) == 0x8);
    // private UnityEngine.Collider[] _secondaryOverlapResults
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<::UnityEngine::Collider*> secondaryOverlapResults;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Collider*>) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0xB0
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // static field const value: static private System.Single MINIMUM_RAY_CAST_DISTANCE
    static constexpr const float MINIMUM_RAY_CAST_DISTANCE = 0.8;
    // Get static field: static private System.Single MINIMUM_RAY_CAST_DISTANCE
    static float _get_MINIMUM_RAY_CAST_DISTANCE();
    // Set static field: static private System.Single MINIMUM_RAY_CAST_DISTANCE
    static void _set_MINIMUM_RAY_CAST_DISTANCE(float value);
    // static field const value: static private System.Single COLLIDER_RADIUS
    static constexpr const float COLLIDER_RADIUS = 0.01;
    // Get static field: static private System.Single COLLIDER_RADIUS
    static float _get_COLLIDER_RADIUS();
    // Set static field: static private System.Single COLLIDER_RADIUS
    static void _set_COLLIDER_RADIUS(float value);
    // static field const value: static private System.Int32 NUM_MAX_PRIMARY_HITS
    static constexpr const int NUM_MAX_PRIMARY_HITS = 10;
    // Get static field: static private System.Int32 NUM_MAX_PRIMARY_HITS
    static int _get_NUM_MAX_PRIMARY_HITS();
    // Set static field: static private System.Int32 NUM_MAX_PRIMARY_HITS
    static void _set_NUM_MAX_PRIMARY_HITS(int value);
    // static field const value: static private System.Int32 NUM_MAX_SECONDARY_HITS
    static constexpr const int NUM_MAX_SECONDARY_HITS = 25;
    // Get static field: static private System.Int32 NUM_MAX_SECONDARY_HITS
    static int _get_NUM_MAX_SECONDARY_HITS();
    // Set static field: static private System.Int32 NUM_MAX_SECONDARY_HITS
    static void _set_NUM_MAX_SECONDARY_HITS(int value);
    // static field const value: static private System.Int32 NUM_COLLIDERS_TO_TEST
    static constexpr const int NUM_COLLIDERS_TO_TEST = 20;
    // Get static field: static private System.Int32 NUM_COLLIDERS_TO_TEST
    static int _get_NUM_COLLIDERS_TO_TEST();
    // Set static field: static private System.Int32 NUM_COLLIDERS_TO_TEST
    static void _set_NUM_COLLIDERS_TO_TEST(int value);
    // Get instance field reference: private OculusSampleFramework.RayToolView _rayToolView
    ::OculusSampleFramework::RayToolView*& dyn__rayToolView();
    // Get instance field reference: private System.Single _coneAngleDegrees
    float& dyn__coneAngleDegrees();
    // Get instance field reference: private System.Single _farFieldMaxDistance
    float& dyn__farFieldMaxDistance();
    // Get instance field reference: private OculusSampleFramework.PinchStateModule _pinchStateModule
    ::OculusSampleFramework::PinchStateModule*& dyn__pinchStateModule();
    // Get instance field reference: private OculusSampleFramework.Interactable _focusedInteractable
    ::OculusSampleFramework::Interactable*& dyn__focusedInteractable();
    // Get instance field reference: private UnityEngine.Collider[] _collidersOverlapped
    ::ArrayW<::UnityEngine::Collider*>& dyn__collidersOverlapped();
    // Get instance field reference: private OculusSampleFramework.Interactable _currInteractableCastedAgainst
    ::OculusSampleFramework::Interactable*& dyn__currInteractableCastedAgainst();
    // Get instance field reference: private System.Single _coneAngleReleaseDegrees
    float& dyn__coneAngleReleaseDegrees();
    // Get instance field reference: private UnityEngine.RaycastHit[] _primaryHits
    ::ArrayW<::UnityEngine::RaycastHit>& dyn__primaryHits();
    // Get instance field reference: private UnityEngine.Collider[] _secondaryOverlapResults
    ::ArrayW<::UnityEngine::Collider*>& dyn__secondaryOverlapResults();
    // Get instance field reference: private System.Boolean _initialized
    bool& dyn__initialized();
    // private System.Void OnDestroy()
    // Offset: 0xFE6E98
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0xFE6F34
    void Update();
    // private UnityEngine.Vector3 GetRayCastOrigin()
    // Offset: 0xFE723C
    ::UnityEngine::Vector3 GetRayCastOrigin();
    // private System.Boolean HasRayReleasedInteractable(OculusSampleFramework.Interactable focusedInteractable)
    // Offset: 0xFE769C
    bool HasRayReleasedInteractable(::OculusSampleFramework::Interactable* focusedInteractable);
    // private OculusSampleFramework.Interactable FindTargetInteractable()
    // Offset: 0xFE7840
    ::OculusSampleFramework::Interactable* FindTargetInteractable();
    // private OculusSampleFramework.Interactable FindPrimaryRaycastHit(UnityEngine.Vector3 rayOrigin, UnityEngine.Vector3 rayDirection)
    // Offset: 0xFE7968
    ::OculusSampleFramework::Interactable* FindPrimaryRaycastHit(::UnityEngine::Vector3 rayOrigin, ::UnityEngine::Vector3 rayDirection);
    // private OculusSampleFramework.Interactable FindInteractableViaConeTest(UnityEngine.Vector3 rayOrigin, UnityEngine.Vector3 rayDirection)
    // Offset: 0xFE7CA0
    ::OculusSampleFramework::Interactable* FindInteractableViaConeTest(::UnityEngine::Vector3 rayOrigin, ::UnityEngine::Vector3 rayDirection);
    // public override OculusSampleFramework.InteractableToolTags get_ToolTags()
    // Offset: 0xFE6D10
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: OculusSampleFramework.InteractableToolTags InteractableTool::get_ToolTags()
    ::OculusSampleFramework::InteractableToolTags get_ToolTags();
    // public override OculusSampleFramework.ToolInputState get_ToolInputState()
    // Offset: 0xFE6D18
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: OculusSampleFramework.ToolInputState InteractableTool::get_ToolInputState()
    ::OculusSampleFramework::ToolInputState get_ToolInputState();
    // public override System.Boolean get_IsFarFieldTool()
    // Offset: 0xFE6D80
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Boolean InteractableTool::get_IsFarFieldTool()
    bool get_IsFarFieldTool();
    // public override System.Boolean get_EnableState()
    // Offset: 0xFE6D88
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Boolean InteractableTool::get_EnableState()
    bool get_EnableState();
    // public override System.Void set_EnableState(System.Boolean value)
    // Offset: 0xFE6DCC
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Void InteractableTool::set_EnableState(System.Boolean value)
    void set_EnableState(bool value);
    // public System.Void .ctor()
    // Offset: 0xFE81B8
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Void InteractableTool::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RayTool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::RayTool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RayTool*, creationType>()));
    }
    // public override System.Void Initialize()
    // Offset: 0xFE6E40
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Void InteractableTool::Initialize()
    void Initialize();
    // public override System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> GetNextIntersectingObjects()
    // Offset: 0xFE7338
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Collections.Generic.List`1<OculusSampleFramework.InteractableCollisionInfo> InteractableTool::GetNextIntersectingObjects()
    ::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* GetNextIntersectingObjects();
    // public override System.Void FocusOnInteractable(OculusSampleFramework.Interactable focusedInteractable, OculusSampleFramework.ColliderZone colliderZone)
    // Offset: 0xFE80B0
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Void InteractableTool::FocusOnInteractable(OculusSampleFramework.Interactable focusedInteractable, OculusSampleFramework.ColliderZone colliderZone)
    void FocusOnInteractable(::OculusSampleFramework::Interactable* focusedInteractable, ::OculusSampleFramework::ColliderZone* colliderZone);
    // public override System.Void DeFocus()
    // Offset: 0xFE8184
    // Implemented from: OculusSampleFramework.InteractableTool
    // Base method: System.Void InteractableTool::DeFocus()
    void DeFocus();
  }; // OculusSampleFramework.RayTool
  #pragma pack(pop)
  static check_size<sizeof(RayTool), 176 + sizeof(bool)> __OculusSampleFramework_RayToolSizeCheck;
  static_assert(sizeof(RayTool) == 0xB1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::GetRayCastOrigin
// Il2CppName: GetRayCastOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::GetRayCastOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "GetRayCastOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::HasRayReleasedInteractable
// Il2CppName: HasRayReleasedInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::RayTool::*)(::OculusSampleFramework::Interactable*)>(&OculusSampleFramework::RayTool::HasRayReleasedInteractable)> {
  static const MethodInfo* get() {
    static auto* focusedInteractable = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "Interactable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "HasRayReleasedInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusedInteractable});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::FindTargetInteractable
// Il2CppName: FindTargetInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::Interactable* (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::FindTargetInteractable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "FindTargetInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::FindPrimaryRaycastHit
// Il2CppName: FindPrimaryRaycastHit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::Interactable* (OculusSampleFramework::RayTool::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&OculusSampleFramework::RayTool::FindPrimaryRaycastHit)> {
  static const MethodInfo* get() {
    static auto* rayOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rayDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "FindPrimaryRaycastHit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rayOrigin, rayDirection});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::FindInteractableViaConeTest
// Il2CppName: FindInteractableViaConeTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::Interactable* (OculusSampleFramework::RayTool::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&OculusSampleFramework::RayTool::FindInteractableViaConeTest)> {
  static const MethodInfo* get() {
    static auto* rayOrigin = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rayDirection = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "FindInteractableViaConeTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rayOrigin, rayDirection});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::get_ToolTags
// Il2CppName: get_ToolTags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::InteractableToolTags (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::get_ToolTags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "get_ToolTags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::get_ToolInputState
// Il2CppName: get_ToolInputState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::ToolInputState (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::get_ToolInputState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "get_ToolInputState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::get_IsFarFieldTool
// Il2CppName: get_IsFarFieldTool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::get_IsFarFieldTool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "get_IsFarFieldTool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::get_EnableState
// Il2CppName: get_EnableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::get_EnableState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "get_EnableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::set_EnableState
// Il2CppName: set_EnableState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)(bool)>(&OculusSampleFramework::RayTool::set_EnableState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "set_EnableState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::GetNextIntersectingObjects
// Il2CppName: GetNextIntersectingObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::OculusSampleFramework::InteractableCollisionInfo*>* (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::GetNextIntersectingObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "GetNextIntersectingObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::FocusOnInteractable
// Il2CppName: FocusOnInteractable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)(::OculusSampleFramework::Interactable*, ::OculusSampleFramework::ColliderZone*)>(&OculusSampleFramework::RayTool::FocusOnInteractable)> {
  static const MethodInfo* get() {
    static auto* focusedInteractable = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "Interactable")->byval_arg;
    static auto* colliderZone = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "ColliderZone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "FocusOnInteractable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{focusedInteractable, colliderZone});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::RayTool::DeFocus
// Il2CppName: DeFocus
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::RayTool::*)()>(&OculusSampleFramework::RayTool::DeFocus)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::RayTool*), "DeFocus", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

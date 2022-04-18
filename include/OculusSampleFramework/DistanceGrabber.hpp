// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRGrabber
#include "GlobalNamespace/OVRGrabber.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: DistanceGrabbable
  class DistanceGrabbable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: RaycastHit
  struct RaycastHit;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRGrabbable
  class OVRGrabbable;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: DistanceGrabber
  class DistanceGrabber;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::DistanceGrabber);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::DistanceGrabber*, "OculusSampleFramework", "DistanceGrabber");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x118
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.DistanceGrabber
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 105CB0
  class DistanceGrabber : public ::GlobalNamespace::OVRGrabber {
    public:
    // Writing base type padding for base size: 0xC1 to desired offset: 0xC8
    char ___base_padding[0x7] = {};
    public:
    // public UnityEngine.Color m_focusColor
    // Size: 0x10
    // Offset: 0xC8
    ::UnityEngine::Color m_focusColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single m_spherecastRadius
    // Size: 0x4
    // Offset: 0xD8
    float m_spherecastRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_noSnapThreshhold
    // Size: 0x4
    // Offset: 0xDC
    float m_noSnapThreshhold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_useSpherecast
    // Size: 0x1
    // Offset: 0xE0
    bool m_useSpherecast;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean m_preventGrabThroughWalls
    // Size: 0x1
    // Offset: 0xE1
    bool m_preventGrabThroughWalls;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_preventGrabThroughWalls and: m_objectPullVelocity
    char __padding4[0x2] = {};
    // private System.Single m_objectPullVelocity
    // Size: 0x4
    // Offset: 0xE4
    float m_objectPullVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_objectPullMaxRotationRate
    // Size: 0x4
    // Offset: 0xE8
    float m_objectPullMaxRotationRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean m_movingObjectToHand
    // Size: 0x1
    // Offset: 0xEC
    bool m_movingObjectToHand;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_movingObjectToHand and: m_maxGrabDistance
    char __padding7[0x3] = {};
    // private System.Single m_maxGrabDistance
    // Size: 0x4
    // Offset: 0xF0
    float m_maxGrabDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_grabObjectsInLayer
    // Size: 0x4
    // Offset: 0xF4
    int m_grabObjectsInLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_obstructionLayer
    // Size: 0x4
    // Offset: 0xF8
    int m_obstructionLayer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_obstructionLayer and: m_otherHand
    char __padding10[0x4] = {};
    // private OculusSampleFramework.DistanceGrabber m_otherHand
    // Size: 0x8
    // Offset: 0x100
    ::OculusSampleFramework::DistanceGrabber* m_otherHand;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::DistanceGrabber*) == 0x8);
    // protected OculusSampleFramework.DistanceGrabbable m_target
    // Size: 0x8
    // Offset: 0x108
    ::OculusSampleFramework::DistanceGrabbable* m_target;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::DistanceGrabbable*) == 0x8);
    // protected UnityEngine.Collider m_targetCollider
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::Collider* m_targetCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Color m_focusColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_m_focusColor();
    // Get instance field reference: private System.Single m_spherecastRadius
    [[deprecated("Use field access instead!")]] float& dyn_m_spherecastRadius();
    // Get instance field reference: private System.Single m_noSnapThreshhold
    [[deprecated("Use field access instead!")]] float& dyn_m_noSnapThreshhold();
    // Get instance field reference: private System.Boolean m_useSpherecast
    [[deprecated("Use field access instead!")]] bool& dyn_m_useSpherecast();
    // Get instance field reference: public System.Boolean m_preventGrabThroughWalls
    [[deprecated("Use field access instead!")]] bool& dyn_m_preventGrabThroughWalls();
    // Get instance field reference: private System.Single m_objectPullVelocity
    [[deprecated("Use field access instead!")]] float& dyn_m_objectPullVelocity();
    // Get instance field reference: private System.Single m_objectPullMaxRotationRate
    [[deprecated("Use field access instead!")]] float& dyn_m_objectPullMaxRotationRate();
    // Get instance field reference: private System.Boolean m_movingObjectToHand
    [[deprecated("Use field access instead!")]] bool& dyn_m_movingObjectToHand();
    // Get instance field reference: private System.Single m_maxGrabDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_maxGrabDistance();
    // Get instance field reference: private System.Int32 m_grabObjectsInLayer
    [[deprecated("Use field access instead!")]] int& dyn_m_grabObjectsInLayer();
    // Get instance field reference: private System.Int32 m_obstructionLayer
    [[deprecated("Use field access instead!")]] int& dyn_m_obstructionLayer();
    // Get instance field reference: private OculusSampleFramework.DistanceGrabber m_otherHand
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::DistanceGrabber*& dyn_m_otherHand();
    // Get instance field reference: protected OculusSampleFramework.DistanceGrabbable m_target
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::DistanceGrabbable*& dyn_m_target();
    // Get instance field reference: protected UnityEngine.Collider m_targetCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_m_targetCollider();
    // public System.Boolean get_UseSpherecast()
    // Offset: 0x202F70
    bool get_UseSpherecast();
    // public System.Void set_UseSpherecast(System.Boolean value)
    // Offset: 0x2894F0
    void set_UseSpherecast(bool value);
    // public System.Void .ctor()
    // Offset: 0x2894C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceGrabber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::DistanceGrabber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceGrabber*, creationType>()));
    }
    // static private OculusSampleFramework.DistanceGrabbable HitInfoToGrabbable(UnityEngine.RaycastHit hitInfo)
    // Offset: 0x288A30
    static ::OculusSampleFramework::DistanceGrabbable* HitInfoToGrabbable(::UnityEngine::RaycastHit hitInfo);
    // protected System.Boolean FindTarget(out OculusSampleFramework.DistanceGrabbable dgOut, out UnityEngine.Collider collOut)
    // Offset: 0x287AF0
    bool FindTarget(ByRef<::OculusSampleFramework::DistanceGrabbable*> dgOut, ByRef<::UnityEngine::Collider*> collOut);
    // protected System.Boolean FindTargetWithSpherecast(out OculusSampleFramework.DistanceGrabbable dgOut, out UnityEngine.Collider collOut)
    // Offset: 0x2875D0
    bool FindTargetWithSpherecast(ByRef<::OculusSampleFramework::DistanceGrabbable*> dgOut, ByRef<::UnityEngine::Collider*> collOut);
    // protected override System.Void Start()
    // Offset: 0x288F60
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::Start()
    void Start();
    // public override System.Void Update()
    // Offset: 0x289100
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::Update()
    void Update();
    // protected override System.Void GrabBegin()
    // Offset: 0x288350
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::GrabBegin()
    void GrabBegin();
    // protected override System.Void MoveGrabbedObject(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Boolean forceTeleport)
    // Offset: 0x288B00
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::MoveGrabbedObject(UnityEngine.Vector3 pos, UnityEngine.Quaternion rot, System.Boolean forceTeleport)
    void MoveGrabbedObject(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, bool forceTeleport);
    // protected override System.Void GrabVolumeEnable(System.Boolean enabled)
    // Offset: 0x288A10
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::GrabVolumeEnable(System.Boolean enabled)
    void GrabVolumeEnable(bool enabled);
    // protected override System.Void OffhandGrabbed(OVRGrabbable grabbable)
    // Offset: 0x288F50
    // Implemented from: OVRGrabber
    // Base method: System.Void OVRGrabber::OffhandGrabbed(OVRGrabbable grabbable)
    void OffhandGrabbed(::GlobalNamespace::OVRGrabbable* grabbable);
  }; // OculusSampleFramework.DistanceGrabber
  #pragma pack(pop)
  static check_size<sizeof(DistanceGrabber), 272 + sizeof(::UnityEngine::Collider*)> __OculusSampleFramework_DistanceGrabberSizeCheck;
  static_assert(sizeof(DistanceGrabber) == 0x118);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::get_UseSpherecast
// Il2CppName: get_UseSpherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabber::*)()>(&OculusSampleFramework::DistanceGrabber::get_UseSpherecast)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "get_UseSpherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::set_UseSpherecast
// Il2CppName: set_UseSpherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)(bool)>(&OculusSampleFramework::DistanceGrabber::set_UseSpherecast)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "set_UseSpherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::HitInfoToGrabbable
// Il2CppName: HitInfoToGrabbable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::DistanceGrabbable* (*)(::UnityEngine::RaycastHit)>(&OculusSampleFramework::DistanceGrabber::HitInfoToGrabbable)> {
  static const MethodInfo* get() {
    static auto* hitInfo = &::il2cpp_utils::GetClassFromName("UnityEngine", "RaycastHit")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "HitInfoToGrabbable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitInfo});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::FindTarget
// Il2CppName: FindTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabber::*)(ByRef<::OculusSampleFramework::DistanceGrabbable*>, ByRef<::UnityEngine::Collider*>)>(&OculusSampleFramework::DistanceGrabber::FindTarget)> {
  static const MethodInfo* get() {
    static auto* dgOut = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "DistanceGrabbable")->this_arg;
    static auto* collOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "FindTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dgOut, collOut});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::FindTargetWithSpherecast
// Il2CppName: FindTargetWithSpherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabber::*)(ByRef<::OculusSampleFramework::DistanceGrabbable*>, ByRef<::UnityEngine::Collider*>)>(&OculusSampleFramework::DistanceGrabber::FindTargetWithSpherecast)> {
  static const MethodInfo* get() {
    static auto* dgOut = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "DistanceGrabbable")->this_arg;
    static auto* collOut = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "FindTargetWithSpherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dgOut, collOut});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)()>(&OculusSampleFramework::DistanceGrabber::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)()>(&OculusSampleFramework::DistanceGrabber::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::GrabBegin
// Il2CppName: GrabBegin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)()>(&OculusSampleFramework::DistanceGrabber::GrabBegin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "GrabBegin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::MoveGrabbedObject
// Il2CppName: MoveGrabbedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&OculusSampleFramework::DistanceGrabber::MoveGrabbedObject)> {
  static const MethodInfo* get() {
    static auto* pos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rot = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* forceTeleport = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "MoveGrabbedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pos, rot, forceTeleport});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::GrabVolumeEnable
// Il2CppName: GrabVolumeEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)(bool)>(&OculusSampleFramework::DistanceGrabber::GrabVolumeEnable)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "GrabVolumeEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabber::OffhandGrabbed
// Il2CppName: OffhandGrabbed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabber::*)(::GlobalNamespace::OVRGrabbable*)>(&OculusSampleFramework::DistanceGrabber::OffhandGrabbed)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("", "OVRGrabbable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabber*), "OffhandGrabbed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable});
  }
};

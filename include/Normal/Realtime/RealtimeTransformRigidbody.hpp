// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Normal.Realtime.IRealtimeTransformStrategy
#include "Normal/Realtime/IRealtimeTransformStrategy.hpp"
// Including type: Normal.Realtime.RigidbodyPhysicsBodyFrame
#include "Normal/Realtime/RigidbodyPhysicsBodyFrame.hpp"
// Including type: Normal.Realtime.RigidbodyPhysicsStateFrame
#include "Normal/Realtime/RigidbodyPhysicsStateFrame.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeTransform
  class RealtimeTransform;
  // Forward declaring type: Timeline`1<T>
  template<typename T>
  class Timeline_1;
  // Forward declaring type: InterpolationDelay
  class InterpolationDelay;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Skipping declaration: Quaternion because it is already included!
  // Forward declaring type: Collision
  class Collision;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeTransformRigidbody
  class RealtimeTransformRigidbody;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeTransformRigidbody);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeTransformRigidbody*, "Normal.Realtime", "RealtimeTransformRigidbody");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeTransformRigidbody
  // [TokenAttribute] Offset: FFFFFFFF
  class RealtimeTransformRigidbody : public ::Il2CppObject/*, public ::Normal::Realtime::IRealtimeTransformStrategy*/ {
    public:
    public:
    // private readonly Normal.Realtime.RealtimeTransform _component
    // Size: 0x8
    // Offset: 0x10
    ::Normal::Realtime::RealtimeTransform* component;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeTransform*) == 0x8);
    // private readonly UnityEngine.Rigidbody _rigidbody
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // private readonly Normal.Realtime.Timeline`1<Normal.Realtime.RigidbodyPhysicsBodyFrame> _physicsBodyTimeline
    // Size: 0x8
    // Offset: 0x20
    ::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsBodyFrame>* physicsBodyTimeline;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsBodyFrame>*) == 0x8);
    // private readonly Normal.Realtime.Timeline`1<Normal.Realtime.RigidbodyPhysicsStateFrame> _physicsStateTimeline
    // Size: 0x8
    // Offset: 0x28
    ::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsStateFrame>* physicsStateTimeline;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsStateFrame>*) == 0x8);
    // private readonly Normal.Realtime.InterpolationDelay _delay
    // Size: 0x8
    // Offset: 0x30
    ::Normal::Realtime::InterpolationDelay* delay;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::InterpolationDelay*) == 0x8);
    // private System.Double _fixedRoomTime
    // Size: 0x8
    // Offset: 0x38
    double fixedRoomTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean _fixedRoomTimeInitialized
    // Size: 0x1
    // Offset: 0x40
    bool fixedRoomTimeInitialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fixedRoomTimeInitialized and: velocityPrevWrite
    char __padding6[0x3] = {};
    // private UnityEngine.Vector3 _velocityPrevWrite
    // Size: 0xC
    // Offset: 0x44
    ::UnityEngine::Vector3 velocityPrevWrite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _angularVelocityPrevWrite
    // Size: 0xC
    // Offset: 0x50
    ::UnityEngine::Vector3 angularVelocityPrevWrite;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Normal::Realtime::IRealtimeTransformStrategy
    operator ::Normal::Realtime::IRealtimeTransformStrategy() noexcept {
      return *reinterpret_cast<::Normal::Realtime::IRealtimeTransformStrategy*>(this);
    }
    // Get instance field reference: private readonly Normal.Realtime.RealtimeTransform _component
    [[deprecated]] ::Normal::Realtime::RealtimeTransform*& dyn__component();
    // Get instance field reference: private readonly UnityEngine.Rigidbody _rigidbody
    [[deprecated]] ::UnityEngine::Rigidbody*& dyn__rigidbody();
    // Get instance field reference: private readonly Normal.Realtime.Timeline`1<Normal.Realtime.RigidbodyPhysicsBodyFrame> _physicsBodyTimeline
    [[deprecated]] ::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsBodyFrame>*& dyn__physicsBodyTimeline();
    // Get instance field reference: private readonly Normal.Realtime.Timeline`1<Normal.Realtime.RigidbodyPhysicsStateFrame> _physicsStateTimeline
    [[deprecated]] ::Normal::Realtime::Timeline_1<::Normal::Realtime::RigidbodyPhysicsStateFrame>*& dyn__physicsStateTimeline();
    // Get instance field reference: private readonly Normal.Realtime.InterpolationDelay _delay
    [[deprecated]] ::Normal::Realtime::InterpolationDelay*& dyn__delay();
    // Get instance field reference: private System.Double _fixedRoomTime
    [[deprecated]] double& dyn__fixedRoomTime();
    // Get instance field reference: private System.Boolean _fixedRoomTimeInitialized
    [[deprecated]] bool& dyn__fixedRoomTimeInitialized();
    // Get instance field reference: private UnityEngine.Vector3 _velocityPrevWrite
    [[deprecated]] ::UnityEngine::Vector3& dyn__velocityPrevWrite();
    // Get instance field reference: private UnityEngine.Vector3 _angularVelocityPrevWrite
    [[deprecated]] ::UnityEngine::Vector3& dyn__angularVelocityPrevWrite();
    // private System.Double get_roomTime()
    // Offset: 0x8C8170
    double get_roomTime();
    // public System.Boolean get_isInterpolationWarmedUp()
    // Offset: 0x8C80D0
    bool get_isInterpolationWarmedUp();
    // public System.Void .ctor(Normal.Realtime.RealtimeTransform realtimeTransform)
    // Offset: 0x8C7EF0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeTransformRigidbody* New_ctor(::Normal::Realtime::RealtimeTransform* realtimeTransform) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeTransformRigidbody::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeTransformRigidbody*, creationType>(realtimeTransform)));
    }
    // private System.Void ResetFixedRoomTime()
    // Offset: 0x8C6F90
    void ResetFixedRoomTime();
    // private System.Void InitializeFixedRoomTime()
    // Offset: 0x8C62F0
    void InitializeFixedRoomTime();
    // private System.Void IncrementFixedRoomTime()
    // Offset: 0x8C62B0
    void IncrementFixedRoomTime();
    // private System.Void CorrectFixedRoomTimeDrift()
    // Offset: 0x8C5E70
    void CorrectFixedRoomTimeDrift();
    // static private System.Double ReconstructFixedTimestamp(System.Double packetRoomTime, System.Single fixedTimeOffset)
    // Offset: 0x8C6990
    static double ReconstructFixedTimestamp(double packetRoomTime, float fixedTimeOffset);
    // public System.Void Reset(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C70D0
    void Reset(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void Update(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C5E70
    void Update(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void FixedUpdate(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C6240
    void FixedUpdate(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void OnLocalModelWillWrite(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C6460
    void OnLocalModelWillWrite(::Normal::Realtime::RealtimeTransformModel* model);
    // public System.Void OnRemoteModelDidRead(Normal.Realtime.RealtimeTransformModel model, Normal.Realtime.RealtimeTransformModel/Normal.Realtime.PropertyChangeSet changes)
    // Offset: 0x8C65F0
    void OnRemoteModelDidRead(::Normal::Realtime::RealtimeTransformModel* model, ::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet* changes);
    // private System.Void ResetWithLocalModel(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C6FA0
    void ResetWithLocalModel(::Normal::Realtime::RealtimeTransformModel* model);
    // private System.Void ResetWithRemoteModel(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C6FB0
    void ResetWithRemoteModel(::Normal::Realtime::RealtimeTransformModel* model);
    // private System.Void RemoteFixedUpdate(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C69A0
    void RemoteFixedUpdate(::Normal::Realtime::RealtimeTransformModel* model);
    // private System.Void ClearTimelines()
    // Offset: 0x8C5E10
    void ClearTimelines();
    // static private System.Boolean IsPhysicsBodyChanged(Normal.Realtime.RealtimeTransformModel/Normal.Realtime.PropertyChangeSet changes)
    // Offset: 0x8C6320
    static bool IsPhysicsBodyChanged(::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet* changes);
    // static private System.Boolean IsPhysicsStateChanged(Normal.Realtime.RealtimeTransformModel/Normal.Realtime.PropertyChangeSet changes)
    // Offset: 0x8C63D0
    static bool IsPhysicsStateChanged(::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet* changes);
    // private System.Void SetPhysicsBodyValues(UnityEngine.Vector3 position, UnityEngine.Quaternion rotation, UnityEngine.Vector3 scale, UnityEngine.Vector3 velocity, UnityEngine.Vector3 angularVelocity)
    // Offset: 0x8C7990
    void SetPhysicsBodyValues(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::UnityEngine::Vector3 velocity, ::UnityEngine::Vector3 angularVelocity);
    // private System.Void SetPhysicsStateValues(System.Boolean useGravity, System.Boolean isKinematic, System.Boolean isSleeping)
    // Offset: 0x8C7AF0
    void SetPhysicsStateValues(bool useGravity, bool isKinematic, bool isSleeping);
    // private System.Void ClearOwnershipIfSleeping(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C5CD0
    void ClearOwnershipIfSleeping(::Normal::Realtime::RealtimeTransformModel* model);
    // private System.Void AddPhysicsBodyFrame(Normal.Realtime.RealtimeTransformModel model, System.Double timestamp, System.Boolean useModelVelocity, System.Boolean useModelAngularVelocity)
    // Offset: 0x8C53D0
    void AddPhysicsBodyFrame(::Normal::Realtime::RealtimeTransformModel* model, double timestamp, bool useModelVelocity, bool useModelAngularVelocity);
    // private System.Void AddPhysicsStateFrame(Normal.Realtime.RealtimeTransformModel model, System.Double timestamp)
    // Offset: 0x8C5B80
    void AddPhysicsStateFrame(::Normal::Realtime::RealtimeTransformModel* model, double timestamp);
    // private System.Void SetModelFromRigidbody(Normal.Realtime.RealtimeTransformModel model)
    // Offset: 0x8C72A0
    void SetModelFromRigidbody(::Normal::Realtime::RealtimeTransformModel* model);
    // private System.Boolean ShouldSendVelocity()
    // Offset: 0x8C7C50
    bool ShouldSendVelocity();
    // private System.Boolean ShouldSendAngularVelocity()
    // Offset: 0x8C7B60
    bool ShouldSendAngularVelocity();
    // public System.Void OnCollisionEnter(UnityEngine.Collision collision)
    // Offset: 0x8C6420
    void OnCollisionEnter(::UnityEngine::Collision* collision);
    // public System.Void OnCollisionExit(UnityEngine.Collision collision)
    // Offset: 0x8C6420
    void OnCollisionExit(::UnityEngine::Collision* collision);
    // public System.Void OnCollisionStay(UnityEngine.Collision collision)
    // Offset: 0x8C6420
    void OnCollisionStay(::UnityEngine::Collision* collision);
    // private System.Void TakeOverCollidingRigidbodyIfOwnedByWorld(UnityEngine.Rigidbody otherRigidbody)
    // Offset: 0x8C7D40
    void TakeOverCollidingRigidbodyIfOwnedByWorld(::UnityEngine::Rigidbody* otherRigidbody);
    // static private UnityEngine.Vector3 DeriveVelocity(UnityEngine.Vector3 start, UnityEngine.Vector3 end, System.Single dt)
    // Offset: 0x8C6100
    static ::UnityEngine::Vector3 DeriveVelocity(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float dt);
    // static private UnityEngine.Vector3 DeriveAngularVelocity(UnityEngine.Quaternion start, UnityEngine.Quaternion end, System.Single dt)
    // Offset: 0x8C5F20
    static ::UnityEngine::Vector3 DeriveAngularVelocity(::UnityEngine::Quaternion start, ::UnityEngine::Quaternion end, float dt);
  }; // Normal.Realtime.RealtimeTransformRigidbody
  #pragma pack(pop)
  static check_size<sizeof(RealtimeTransformRigidbody), 80 + sizeof(::UnityEngine::Vector3)> __Normal_Realtime_RealtimeTransformRigidbodySizeCheck;
  static_assert(sizeof(RealtimeTransformRigidbody) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::get_roomTime
// Il2CppName: get_roomTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::get_roomTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "get_roomTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::get_isInterpolationWarmedUp
// Il2CppName: get_isInterpolationWarmedUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::get_isInterpolationWarmedUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "get_isInterpolationWarmedUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ResetFixedRoomTime
// Il2CppName: ResetFixedRoomTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::ResetFixedRoomTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ResetFixedRoomTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::InitializeFixedRoomTime
// Il2CppName: InitializeFixedRoomTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::InitializeFixedRoomTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "InitializeFixedRoomTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::IncrementFixedRoomTime
// Il2CppName: IncrementFixedRoomTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::IncrementFixedRoomTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "IncrementFixedRoomTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::CorrectFixedRoomTimeDrift
// Il2CppName: CorrectFixedRoomTimeDrift
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::CorrectFixedRoomTimeDrift)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "CorrectFixedRoomTimeDrift", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ReconstructFixedTimestamp
// Il2CppName: ReconstructFixedTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(double, float)>(&Normal::Realtime::RealtimeTransformRigidbody::ReconstructFixedTimestamp)> {
  static const MethodInfo* get() {
    static auto* packetRoomTime = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* fixedTimeOffset = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ReconstructFixedTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packetRoomTime, fixedTimeOffset});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::Reset)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::Update)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::FixedUpdate)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::OnLocalModelWillWrite
// Il2CppName: OnLocalModelWillWrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::OnLocalModelWillWrite)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "OnLocalModelWillWrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::OnRemoteModelDidRead
// Il2CppName: OnRemoteModelDidRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*, ::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet*)>(&Normal::Realtime::RealtimeTransformRigidbody::OnRemoteModelDidRead)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    static auto* changes = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel/PropertyChangeSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "OnRemoteModelDidRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, changes});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ResetWithLocalModel
// Il2CppName: ResetWithLocalModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::ResetWithLocalModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ResetWithLocalModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ResetWithRemoteModel
// Il2CppName: ResetWithRemoteModel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::ResetWithRemoteModel)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ResetWithRemoteModel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::RemoteFixedUpdate
// Il2CppName: RemoteFixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::RemoteFixedUpdate)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "RemoteFixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ClearTimelines
// Il2CppName: ClearTimelines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::ClearTimelines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ClearTimelines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::IsPhysicsBodyChanged
// Il2CppName: IsPhysicsBodyChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet*)>(&Normal::Realtime::RealtimeTransformRigidbody::IsPhysicsBodyChanged)> {
  static const MethodInfo* get() {
    static auto* changes = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel/PropertyChangeSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "IsPhysicsBodyChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changes});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::IsPhysicsStateChanged
// Il2CppName: IsPhysicsStateChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Normal::Realtime::RealtimeTransformModel::PropertyChangeSet*)>(&Normal::Realtime::RealtimeTransformRigidbody::IsPhysicsStateChanged)> {
  static const MethodInfo* get() {
    static auto* changes = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel/PropertyChangeSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "IsPhysicsStateChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changes});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::SetPhysicsBodyValues
// Il2CppName: SetPhysicsBodyValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&Normal::Realtime::RealtimeTransformRigidbody::SetPhysicsBodyValues)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* velocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* angularVelocity = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "SetPhysicsBodyValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, rotation, scale, velocity, angularVelocity});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::SetPhysicsStateValues
// Il2CppName: SetPhysicsStateValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(bool, bool, bool)>(&Normal::Realtime::RealtimeTransformRigidbody::SetPhysicsStateValues)> {
  static const MethodInfo* get() {
    static auto* useGravity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isKinematic = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isSleeping = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "SetPhysicsStateValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{useGravity, isKinematic, isSleeping});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ClearOwnershipIfSleeping
// Il2CppName: ClearOwnershipIfSleeping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::ClearOwnershipIfSleeping)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ClearOwnershipIfSleeping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::AddPhysicsBodyFrame
// Il2CppName: AddPhysicsBodyFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*, double, bool, bool)>(&Normal::Realtime::RealtimeTransformRigidbody::AddPhysicsBodyFrame)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* useModelVelocity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* useModelAngularVelocity = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "AddPhysicsBodyFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, timestamp, useModelVelocity, useModelAngularVelocity});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::AddPhysicsStateFrame
// Il2CppName: AddPhysicsStateFrame
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*, double)>(&Normal::Realtime::RealtimeTransformRigidbody::AddPhysicsStateFrame)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    static auto* timestamp = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "AddPhysicsStateFrame", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model, timestamp});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::SetModelFromRigidbody
// Il2CppName: SetModelFromRigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::Normal::Realtime::RealtimeTransformModel*)>(&Normal::Realtime::RealtimeTransformRigidbody::SetModelFromRigidbody)> {
  static const MethodInfo* get() {
    static auto* model = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeTransformModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "SetModelFromRigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{model});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ShouldSendVelocity
// Il2CppName: ShouldSendVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::ShouldSendVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ShouldSendVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::ShouldSendAngularVelocity
// Il2CppName: ShouldSendAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Normal::Realtime::RealtimeTransformRigidbody::*)()>(&Normal::Realtime::RealtimeTransformRigidbody::ShouldSendAngularVelocity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "ShouldSendAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::OnCollisionEnter
// Il2CppName: OnCollisionEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::UnityEngine::Collision*)>(&Normal::Realtime::RealtimeTransformRigidbody::OnCollisionEnter)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "OnCollisionEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::OnCollisionExit
// Il2CppName: OnCollisionExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::UnityEngine::Collision*)>(&Normal::Realtime::RealtimeTransformRigidbody::OnCollisionExit)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "OnCollisionExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::OnCollisionStay
// Il2CppName: OnCollisionStay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::UnityEngine::Collision*)>(&Normal::Realtime::RealtimeTransformRigidbody::OnCollisionStay)> {
  static const MethodInfo* get() {
    static auto* collision = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collision")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "OnCollisionStay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collision});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::TakeOverCollidingRigidbodyIfOwnedByWorld
// Il2CppName: TakeOverCollidingRigidbodyIfOwnedByWorld
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeTransformRigidbody::*)(::UnityEngine::Rigidbody*)>(&Normal::Realtime::RealtimeTransformRigidbody::TakeOverCollidingRigidbodyIfOwnedByWorld)> {
  static const MethodInfo* get() {
    static auto* otherRigidbody = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "TakeOverCollidingRigidbodyIfOwnedByWorld", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{otherRigidbody});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::DeriveVelocity
// Il2CppName: DeriveVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Normal::Realtime::RealtimeTransformRigidbody::DeriveVelocity)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "DeriveVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, dt});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeTransformRigidbody::DeriveAngularVelocity
// Il2CppName: DeriveAngularVelocity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, float)>(&Normal::Realtime::RealtimeTransformRigidbody::DeriveAngularVelocity)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    static auto* dt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeTransformRigidbody*), "DeriveAngularVelocity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, dt});
  }
};

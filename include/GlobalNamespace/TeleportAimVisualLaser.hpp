// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TeleportSupport
#include "GlobalNamespace/TeleportSupport.hpp"
// Including type: LocomotionTeleport
#include "GlobalNamespace/LocomotionTeleport.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TeleportAimVisualLaser
  class TeleportAimVisualLaser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TeleportAimVisualLaser);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TeleportAimVisualLaser*, "", "TeleportAimVisualLaser");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: TeleportAimVisualLaser
  // [TokenAttribute] Offset: FFFFFFFF
  class TeleportAimVisualLaser : public ::GlobalNamespace::TeleportSupport {
    public:
    // Writing base type padding for base size: 0x21 to desired offset: 0x28
    char ___base_padding[0x7] = {};
    public:
    // [TooltipAttribute] Offset: 0xFFC60
    // public UnityEngine.LineRenderer LaserPrefab
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::LineRenderer* LaserPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private readonly System.Action _enterAimStateAction
    // Size: 0x8
    // Offset: 0x30
    ::System::Action* enterAimStateAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Action _exitAimStateAction
    // Size: 0x8
    // Offset: 0x38
    ::System::Action* exitAimStateAction;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private readonly System.Action`1<LocomotionTeleport/AimData> _updateAimDataAction
    // Size: 0x8
    // Offset: 0x40
    ::System::Action_1<::GlobalNamespace::LocomotionTeleport::AimData*>* updateAimDataAction;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::LocomotionTeleport::AimData*>*) == 0x8);
    // private UnityEngine.LineRenderer _lineRenderer
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::LineRenderer* lineRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.Vector3[] _linePoints
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::Vector3> linePoints;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.LineRenderer LaserPrefab
    [[deprecated]] ::UnityEngine::LineRenderer*& dyn_LaserPrefab();
    // Get instance field reference: private readonly System.Action _enterAimStateAction
    [[deprecated]] ::System::Action*& dyn__enterAimStateAction();
    // Get instance field reference: private readonly System.Action _exitAimStateAction
    [[deprecated]] ::System::Action*& dyn__exitAimStateAction();
    // Get instance field reference: private readonly System.Action`1<LocomotionTeleport/AimData> _updateAimDataAction
    [[deprecated]] ::System::Action_1<::GlobalNamespace::LocomotionTeleport::AimData*>*& dyn__updateAimDataAction();
    // Get instance field reference: private UnityEngine.LineRenderer _lineRenderer
    [[deprecated]] ::UnityEngine::LineRenderer*& dyn__lineRenderer();
    // Get instance field reference: private UnityEngine.Vector3[] _linePoints
    [[deprecated]] ::ArrayW<::UnityEngine::Vector3>& dyn__linePoints();
    // private System.Void EnterAimState()
    // Offset: 0x616810
    void EnterAimState();
    // private System.Void ExitAimState()
    // Offset: 0x616840
    void ExitAimState();
    // private System.Void Awake()
    // Offset: 0x616770
    void Awake();
    // private System.Void UpdateAimData(LocomotionTeleport/AimData obj)
    // Offset: 0x6168D0
    void UpdateAimData(::GlobalNamespace::LocomotionTeleport::AimData* obj);
    // public System.Void .ctor()
    // Offset: 0x616A00
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TeleportAimVisualLaser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TeleportAimVisualLaser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TeleportAimVisualLaser*, creationType>()));
    }
    // protected override System.Void AddEventHandlers()
    // Offset: 0x616710
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::AddEventHandlers()
    void AddEventHandlers();
    // protected override System.Void RemoveEventHandlers()
    // Offset: 0x616870
    // Implemented from: TeleportSupport
    // Base method: System.Void TeleportSupport::RemoveEventHandlers()
    void RemoveEventHandlers();
  }; // TeleportAimVisualLaser
  #pragma pack(pop)
  static check_size<sizeof(TeleportAimVisualLaser), 80 + sizeof(::ArrayW<::UnityEngine::Vector3>)> __GlobalNamespace_TeleportAimVisualLaserSizeCheck;
  static_assert(sizeof(TeleportAimVisualLaser) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::EnterAimState
// Il2CppName: EnterAimState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)()>(&GlobalNamespace::TeleportAimVisualLaser::EnterAimState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "EnterAimState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::ExitAimState
// Il2CppName: ExitAimState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)()>(&GlobalNamespace::TeleportAimVisualLaser::ExitAimState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "ExitAimState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)()>(&GlobalNamespace::TeleportAimVisualLaser::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::UpdateAimData
// Il2CppName: UpdateAimData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)(::GlobalNamespace::LocomotionTeleport::AimData*)>(&GlobalNamespace::TeleportAimVisualLaser::UpdateAimData)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("", "LocomotionTeleport/AimData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "UpdateAimData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::AddEventHandlers
// Il2CppName: AddEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)()>(&GlobalNamespace::TeleportAimVisualLaser::AddEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "AddEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TeleportAimVisualLaser::RemoveEventHandlers
// Il2CppName: RemoveEventHandlers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TeleportAimVisualLaser::*)()>(&GlobalNamespace::TeleportAimVisualLaser::RemoveEventHandlers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TeleportAimVisualLaser*), "RemoveEventHandlers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

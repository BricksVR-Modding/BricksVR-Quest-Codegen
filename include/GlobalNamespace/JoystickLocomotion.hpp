// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: KeepPlayerOutOfWalls
  class KeepPlayerOutOfWalls;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: JoystickLocomotion
  class JoystickLocomotion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::JoystickLocomotion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::JoystickLocomotion*, "", "JoystickLocomotion");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x64
  #pragma pack(push, 1)
  // Autogenerated type: JoystickLocomotion
  // [TokenAttribute] Offset: FFFFFFFF
  class JoystickLocomotion : public ::UnityEngine::MonoBehaviour {
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
    // public UnityEngine.GameObject head
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* head;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public KeepPlayerOutOfWalls keepPlayerOutOfWalls
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::KeepPlayerOutOfWalls* keepPlayerOutOfWalls;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KeepPlayerOutOfWalls*) == 0x8);
    // private UnityEngine.Vector2 _currentLeftJoystickDirection
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 currentLeftJoystickDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 _currentRightJoystickDirection
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Vector2 currentRightJoystickDirection;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private System.Single minY
    // Size: 0x4
    // Offset: 0x38
    float minY;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single lateralMovementMultiplier
    // Size: 0x4
    // Offset: 0x3C
    float lateralMovementMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single verticalMovementMultiplier
    // Size: 0x4
    // Offset: 0x40
    float verticalMovementMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single joystickDeadzone
    // Size: 0x4
    // Offset: 0x44
    float joystickDeadzone;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _movementSpeedSetting
    // Size: 0x4
    // Offset: 0x48
    float movementSpeedSetting;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: movementSpeedSetting and: headTransform
    char __padding8[0x4] = {};
    // private UnityEngine.Transform _headTransform
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* headTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public System.Int32 lateralMovementIndex
    // Size: 0x4
    // Offset: 0x58
    int lateralMovementIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 verticalMovementIndex
    // Size: 0x4
    // Offset: 0x5C
    int verticalMovementIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single playerScaleMultiplier
    // Size: 0x4
    // Offset: 0x60
    float playerScaleMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public UnityEngine.GameObject head
    ::UnityEngine::GameObject*& dyn_head();
    // Get instance field reference: public KeepPlayerOutOfWalls keepPlayerOutOfWalls
    ::GlobalNamespace::KeepPlayerOutOfWalls*& dyn_keepPlayerOutOfWalls();
    // Get instance field reference: private UnityEngine.Vector2 _currentLeftJoystickDirection
    ::UnityEngine::Vector2& dyn__currentLeftJoystickDirection();
    // Get instance field reference: private UnityEngine.Vector2 _currentRightJoystickDirection
    ::UnityEngine::Vector2& dyn__currentRightJoystickDirection();
    // Get instance field reference: private System.Single minY
    float& dyn_minY();
    // Get instance field reference: public System.Single lateralMovementMultiplier
    float& dyn_lateralMovementMultiplier();
    // Get instance field reference: public System.Single verticalMovementMultiplier
    float& dyn_verticalMovementMultiplier();
    // Get instance field reference: public System.Single joystickDeadzone
    float& dyn_joystickDeadzone();
    // Get instance field reference: private System.Single _movementSpeedSetting
    float& dyn__movementSpeedSetting();
    // Get instance field reference: private UnityEngine.Transform _headTransform
    ::UnityEngine::Transform*& dyn__headTransform();
    // Get instance field reference: public System.Int32 lateralMovementIndex
    int& dyn_lateralMovementIndex();
    // Get instance field reference: public System.Int32 verticalMovementIndex
    int& dyn_verticalMovementIndex();
    // Get instance field reference: public System.Single playerScaleMultiplier
    float& dyn_playerScaleMultiplier();
    // private System.Void Start()
    // Offset: 0x10AB23C
    void Start();
    // public System.Void SetMovementSpeedSetting(System.Single value)
    // Offset: 0x10AB28C
    void SetMovementSpeedSetting(float value);
    // private System.Void Update()
    // Offset: 0x10AB294
    void Update();
    // private System.Void MovePlayer()
    // Offset: 0x10AB38C
    void MovePlayer();
    // public System.Void .ctor()
    // Offset: 0x10AB768
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JoystickLocomotion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JoystickLocomotion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JoystickLocomotion*, creationType>()));
    }
  }; // JoystickLocomotion
  #pragma pack(pop)
  static check_size<sizeof(JoystickLocomotion), 96 + sizeof(float)> __GlobalNamespace_JoystickLocomotionSizeCheck;
  static_assert(sizeof(JoystickLocomotion) == 0x64);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::JoystickLocomotion::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoystickLocomotion::*)()>(&GlobalNamespace::JoystickLocomotion::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoystickLocomotion*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoystickLocomotion::SetMovementSpeedSetting
// Il2CppName: SetMovementSpeedSetting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoystickLocomotion::*)(float)>(&GlobalNamespace::JoystickLocomotion::SetMovementSpeedSetting)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoystickLocomotion*), "SetMovementSpeedSetting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoystickLocomotion::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoystickLocomotion::*)()>(&GlobalNamespace::JoystickLocomotion::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoystickLocomotion*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoystickLocomotion::MovePlayer
// Il2CppName: MovePlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::JoystickLocomotion::*)()>(&GlobalNamespace::JoystickLocomotion::MovePlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::JoystickLocomotion*), "MovePlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::JoystickLocomotion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

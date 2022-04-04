// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Skipping declaration: CrosshairState because it is already included!
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: GrabbableCrosshair
  class GrabbableCrosshair;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::GrabbableCrosshair);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::GrabbableCrosshair*, "OculusSampleFramework", "GrabbableCrosshair");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.GrabbableCrosshair
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabbableCrosshair : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::GrabbableCrosshair::CrosshairState
    struct CrosshairState;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState
    // [TokenAttribute] Offset: FFFFFFFF
    struct CrosshairState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CrosshairState
      constexpr CrosshairState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Disabled
      static constexpr const int Disabled = 0;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Disabled
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Disabled();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Disabled
      static void _set_Disabled(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Enabled
      static constexpr const int Enabled = 1;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Enabled
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Enabled();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Enabled
      static void _set_Enabled(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // static field const value: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Targeted
      static constexpr const int Targeted = 2;
      // Get static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Targeted
      static ::OculusSampleFramework::GrabbableCrosshair::CrosshairState _get_Targeted();
      // Set static field: static public OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState Targeted
      static void _set_Targeted(::OculusSampleFramework::GrabbableCrosshair::CrosshairState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated]] int& dyn_value__();
    }; // OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState
    #pragma pack(pop)
    static check_size<sizeof(GrabbableCrosshair::CrosshairState), 0 + sizeof(int)> __OculusSampleFramework_GrabbableCrosshair_CrosshairStateSizeCheck;
    static_assert(sizeof(GrabbableCrosshair::CrosshairState) == 0x4);
    public:
    // private OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState m_state
    // Size: 0x4
    // Offset: 0x18
    ::OculusSampleFramework::GrabbableCrosshair::CrosshairState m_state;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::GrabbableCrosshair::CrosshairState) == 0x4);
    // Padding between fields: m_state and: m_centerEyeAnchor
    char __padding0[0x4] = {};
    // private UnityEngine.Transform m_centerEyeAnchor
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* m_centerEyeAnchor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.GameObject m_targetedCrosshair
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* m_targetedCrosshair;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private UnityEngine.GameObject m_enabledCrosshair
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* m_enabledCrosshair;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState m_state
    [[deprecated]] ::OculusSampleFramework::GrabbableCrosshair::CrosshairState& dyn_m_state();
    // Get instance field reference: private UnityEngine.Transform m_centerEyeAnchor
    [[deprecated]] ::UnityEngine::Transform*& dyn_m_centerEyeAnchor();
    // Get instance field reference: private UnityEngine.GameObject m_targetedCrosshair
    [[deprecated]] ::UnityEngine::GameObject*& dyn_m_targetedCrosshair();
    // Get instance field reference: private UnityEngine.GameObject m_enabledCrosshair
    [[deprecated]] ::UnityEngine::GameObject*& dyn_m_enabledCrosshair();
    // private System.Void Start()
    // Offset: 0x28A770
    void Start();
    // public System.Void SetState(OculusSampleFramework.GrabbableCrosshair/OculusSampleFramework.CrosshairState cs)
    // Offset: 0x28A6E0
    void SetState(::OculusSampleFramework::GrabbableCrosshair::CrosshairState cs);
    // private System.Void Update()
    // Offset: 0x28A7D0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabbableCrosshair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::GrabbableCrosshair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabbableCrosshair*, creationType>()));
    }
  }; // OculusSampleFramework.GrabbableCrosshair
  #pragma pack(pop)
  static check_size<sizeof(GrabbableCrosshair), 48 + sizeof(::UnityEngine::GameObject*)> __OculusSampleFramework_GrabbableCrosshairSizeCheck;
  static_assert(sizeof(GrabbableCrosshair) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::GrabbableCrosshair::CrosshairState, "OculusSampleFramework", "GrabbableCrosshair/CrosshairState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)()>(&OculusSampleFramework::GrabbableCrosshair::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::SetState
// Il2CppName: SetState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)(::OculusSampleFramework::GrabbableCrosshair::CrosshairState)>(&OculusSampleFramework::GrabbableCrosshair::SetState)> {
  static const MethodInfo* get() {
    static auto* cs = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "GrabbableCrosshair/CrosshairState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "SetState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cs});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::GrabbableCrosshair::*)()>(&OculusSampleFramework::GrabbableCrosshair::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::GrabbableCrosshair*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::GrabbableCrosshair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

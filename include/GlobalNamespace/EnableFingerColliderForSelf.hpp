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
// Forward declaring namespace: Normal::Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatar
  class RealtimeAvatar;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EnableFingerColliderForSelf
  class EnableFingerColliderForSelf;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EnableFingerColliderForSelf);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnableFingerColliderForSelf*, "", "EnableFingerColliderForSelf");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableFingerColliderForSelf
  // [TokenAttribute] Offset: FFFFFFFF
  class EnableFingerColliderForSelf : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Normal.Realtime.RealtimeAvatar realtimeAvatar
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::RealtimeAvatar* realtimeAvatar;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatar*) == 0x8);
    // public UnityEngine.Collider fingerCollider
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Collider* fingerCollider;
    // Field size check
    static_assert(sizeof(::UnityEngine::Collider*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Normal.Realtime.RealtimeAvatar realtimeAvatar
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatar*& dyn_realtimeAvatar();
    // Get instance field reference: public UnityEngine.Collider fingerCollider
    [[deprecated("Use field access instead!")]] ::UnityEngine::Collider*& dyn_fingerCollider();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableFingerColliderForSelf* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EnableFingerColliderForSelf::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableFingerColliderForSelf*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6B3680
    void Start();
  }; // EnableFingerColliderForSelf
  #pragma pack(pop)
  static check_size<sizeof(EnableFingerColliderForSelf), 32 + sizeof(::UnityEngine::Collider*)> __GlobalNamespace_EnableFingerColliderForSelfSizeCheck;
  static_assert(sizeof(EnableFingerColliderForSelf) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EnableFingerColliderForSelf::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::EnableFingerColliderForSelf::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableFingerColliderForSelf::*)()>(&GlobalNamespace::EnableFingerColliderForSelf::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::EnableFingerColliderForSelf*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

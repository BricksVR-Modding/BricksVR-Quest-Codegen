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
  // Forward declaring type: Realtime
  class Realtime;
  // Forward declaring type: RealtimeAvatarManager
  class RealtimeAvatarManager;
  // Forward declaring type: RealtimeAvatar
  class RealtimeAvatar;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DisableLoadingScreenWhenConnected
  class DisableLoadingScreenWhenConnected;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DisableLoadingScreenWhenConnected);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableLoadingScreenWhenConnected*, "", "DisableLoadingScreenWhenConnected");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: DisableLoadingScreenWhenConnected
  // [TokenAttribute] Offset: FFFFFFFF
  class DisableLoadingScreenWhenConnected : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public Normal.Realtime.Realtime realtime
    // Size: 0x8
    // Offset: 0x18
    ::Normal::Realtime::Realtime* realtime;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Realtime*) == 0x8);
    // public UnityEngine.GameObject canvas
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* canvas;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public Normal.Realtime.Realtime realtime
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Realtime*& dyn_realtime();
    // Get instance field reference: public UnityEngine.GameObject canvas
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_canvas();
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DisableLoadingScreenWhenConnected* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DisableLoadingScreenWhenConnected::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DisableLoadingScreenWhenConnected*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x6B2D10
    void Start();
    // private System.Void HideLoadingScreen(Normal.Realtime.RealtimeAvatarManager avatarManager, Normal.Realtime.RealtimeAvatar avatar, System.Boolean isLocalAvatar)
    // Offset: 0x6B2CE0
    void HideLoadingScreen(::Normal::Realtime::RealtimeAvatarManager* avatarManager, ::Normal::Realtime::RealtimeAvatar* avatar, bool isLocalAvatar);
  }; // DisableLoadingScreenWhenConnected
  #pragma pack(pop)
  static check_size<sizeof(DisableLoadingScreenWhenConnected), 32 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_DisableLoadingScreenWhenConnectedSizeCheck;
  static_assert(sizeof(DisableLoadingScreenWhenConnected) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DisableLoadingScreenWhenConnected::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DisableLoadingScreenWhenConnected::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableLoadingScreenWhenConnected::*)()>(&GlobalNamespace::DisableLoadingScreenWhenConnected::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableLoadingScreenWhenConnected*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DisableLoadingScreenWhenConnected::HideLoadingScreen
// Il2CppName: HideLoadingScreen
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DisableLoadingScreenWhenConnected::*)(::Normal::Realtime::RealtimeAvatarManager*, ::Normal::Realtime::RealtimeAvatar*, bool)>(&GlobalNamespace::DisableLoadingScreenWhenConnected::HideLoadingScreen)> {
  static const MethodInfo* get() {
    static auto* avatarManager = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar")->byval_arg;
    static auto* isLocalAvatar = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DisableLoadingScreenWhenConnected*), "HideLoadingScreen", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarManager, avatar, isLocalAvatar});
  }
};

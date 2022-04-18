// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Normal.Realtime.RealtimeAvatar
#include "Normal/Realtime/RealtimeAvatar.hpp"
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
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Forward declaring type: RealtimeAvatarManager
  class RealtimeAvatarManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::RealtimeAvatarManager);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::RealtimeAvatarManager*, "Normal.Realtime", "RealtimeAvatarManager");
// Type namespace: Normal.Realtime
namespace Normal::Realtime {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.RealtimeAvatarManager
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: F6240
  class RealtimeAvatarManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed
    class AvatarCreatedDestroyed;
    // Nested type: ::Normal::Realtime::RealtimeAvatarManager::$$c__DisplayClass28_0
    class $$c__DisplayClass28_0;
    public:
    // [FormerlySerializedAsAttribute] Offset: 0xF62D0
    // private UnityEngine.GameObject _localAvatarPrefab
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::GameObject* localAvatarPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private Normal.Realtime.RealtimeAvatar/Normal.Realtime.LocalPlayer _localPlayer
    // Size: 0x8
    // Offset: 0x20
    ::Normal::Realtime::RealtimeAvatar::LocalPlayer* localPlayer;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatar::LocalPlayer*) == 0x8);
    // private Normal.Realtime.RealtimeAvatar <localAvatar>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Normal::Realtime::RealtimeAvatar* localAvatar;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatar*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,Normal.Realtime.RealtimeAvatar> <avatars>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>* avatars;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>*) == 0x8);
    // private Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed avatarCreated
    // Size: 0x8
    // Offset: 0x38
    ::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* avatarCreated;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*) == 0x8);
    // private Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed avatarDestroyed
    // Size: 0x8
    // Offset: 0x40
    ::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* avatarDestroyed;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*) == 0x8);
    // private Normal.Realtime.Realtime _realtime
    // Size: 0x8
    // Offset: 0x48
    ::Normal::Realtime::Realtime* realtime;
    // Field size check
    static_assert(sizeof(::Normal::Realtime::Realtime*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.GameObject _localAvatarPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__localAvatarPrefab();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatar/Normal.Realtime.LocalPlayer _localPlayer
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatar::LocalPlayer*& dyn__localPlayer();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatar <localAvatar>k__BackingField
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatar*& dyn_$localAvatar$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Int32,Normal.Realtime.RealtimeAvatar> <avatars>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>*& dyn_$avatars$k__BackingField();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed avatarCreated
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*& dyn_avatarCreated();
    // Get instance field reference: private Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed avatarDestroyed
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*& dyn_avatarDestroyed();
    // Get instance field reference: private Normal.Realtime.Realtime _realtime
    [[deprecated("Use field access instead!")]] ::Normal::Realtime::Realtime*& dyn__realtime();
    // public UnityEngine.GameObject get_localAvatarPrefab()
    // Offset: 0x1E1520
    ::UnityEngine::GameObject* get_localAvatarPrefab();
    // public System.Void set_localAvatarPrefab(UnityEngine.GameObject value)
    // Offset: 0xBDCCA0
    void set_localAvatarPrefab(::UnityEngine::GameObject* value);
    // public Normal.Realtime.RealtimeAvatar get_localAvatar()
    // Offset: 0x1E1930
    ::Normal::Realtime::RealtimeAvatar* get_localAvatar();
    // private System.Void set_localAvatar(Normal.Realtime.RealtimeAvatar value)
    // Offset: 0x217290
    void set_localAvatar(::Normal::Realtime::RealtimeAvatar* value);
    // public System.Collections.Generic.Dictionary`2<System.Int32,Normal.Realtime.RealtimeAvatar> get_avatars()
    // Offset: 0x1E0EB0
    ::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>* get_avatars();
    // private System.Void set_avatars(System.Collections.Generic.Dictionary`2<System.Int32,Normal.Realtime.RealtimeAvatar> value)
    // Offset: 0x2322D0
    void set_avatars(::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>* value);
    // public System.Void add_avatarCreated(Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed value)
    // Offset: 0xBDD140
    void add_avatarCreated(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* value);
    // public System.Void remove_avatarCreated(Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed value)
    // Offset: 0xBDD280
    void remove_avatarCreated(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* value);
    // public System.Void add_avatarDestroyed(Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed value)
    // Offset: 0xBDD1E0
    void add_avatarDestroyed(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* value);
    // public System.Void remove_avatarDestroyed(Normal.Realtime.RealtimeAvatarManager/Normal.Realtime.AvatarCreatedDestroyed value)
    // Offset: 0xBDD320
    void remove_avatarDestroyed(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed* value);
    // public System.Void .ctor()
    // Offset: 0x1DDE30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeAvatarManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::RealtimeAvatarManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeAvatarManager*, creationType>()));
    }
    // private System.Void Awake()
    // Offset: 0xBDC440
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xBDCC60
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xBDCC50
    void OnDisable();
    // private System.Void OnDestroy()
    // Offset: 0xBDCBD0
    void OnDestroy();
    // private System.Void DidConnectToRoom(Normal.Realtime.Realtime room)
    // Offset: 0xBDCB10
    void DidConnectToRoom(::Normal::Realtime::Realtime* room);
    // static public Normal.Realtime.RealtimeAvatar/Normal.Realtime.DeviceType GetRealtimeAvatarDeviceTypeForLocalPlayer()
    // Offset: 0xBDCB60
    static ::Normal::Realtime::RealtimeAvatar::DeviceType GetRealtimeAvatarDeviceTypeForLocalPlayer();
    // public System.Void _RegisterAvatar(System.Int32 clientID, Normal.Realtime.RealtimeAvatar avatar)
    // Offset: 0xBDCD80
    void _RegisterAvatar(int clientID, ::Normal::Realtime::RealtimeAvatar* avatar);
    // public System.Void _UnregisterAvatar(Normal.Realtime.RealtimeAvatar avatar)
    // Offset: 0xBDCEF0
    void _UnregisterAvatar(::Normal::Realtime::RealtimeAvatar* avatar);
    // private System.Void SetLocalAvatarPrefab(UnityEngine.GameObject localAvatarPrefab)
    // Offset: 0xBDCCA0
    void SetLocalAvatarPrefab(::UnityEngine::GameObject* localAvatarPrefab);
    // public System.Void CreateAvatarIfNeeded()
    // Offset: 0xBDC540
    void CreateAvatarIfNeeded();
    // public System.Void DestroyAvatarIfNeeded()
    // Offset: 0xBDCA50
    void DestroyAvatarIfNeeded();
  }; // Normal.Realtime.RealtimeAvatarManager
  #pragma pack(pop)
  static check_size<sizeof(RealtimeAvatarManager), 72 + sizeof(::Normal::Realtime::Realtime*)> __Normal_Realtime_RealtimeAvatarManagerSizeCheck;
  static_assert(sizeof(RealtimeAvatarManager) == 0x50);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::get_localAvatarPrefab
// Il2CppName: get_localAvatarPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::get_localAvatarPrefab)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "get_localAvatarPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::set_localAvatarPrefab
// Il2CppName: set_localAvatarPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::UnityEngine::GameObject*)>(&Normal::Realtime::RealtimeAvatarManager::set_localAvatarPrefab)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "set_localAvatarPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::get_localAvatar
// Il2CppName: get_localAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeAvatar* (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::get_localAvatar)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "get_localAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::set_localAvatar
// Il2CppName: set_localAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatar*)>(&Normal::Realtime::RealtimeAvatarManager::set_localAvatar)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "set_localAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::get_avatars
// Il2CppName: get_avatars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>* (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::get_avatars)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "get_avatars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::set_avatars
// Il2CppName: set_avatars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::System::Collections::Generic::Dictionary_2<int, ::Normal::Realtime::RealtimeAvatar*>*)>(&Normal::Realtime::RealtimeAvatarManager::set_avatars)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "set_avatars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::add_avatarCreated
// Il2CppName: add_avatarCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*)>(&Normal::Realtime::RealtimeAvatarManager::add_avatarCreated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager/AvatarCreatedDestroyed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "add_avatarCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::remove_avatarCreated
// Il2CppName: remove_avatarCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*)>(&Normal::Realtime::RealtimeAvatarManager::remove_avatarCreated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager/AvatarCreatedDestroyed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "remove_avatarCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::add_avatarDestroyed
// Il2CppName: add_avatarDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*)>(&Normal::Realtime::RealtimeAvatarManager::add_avatarDestroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager/AvatarCreatedDestroyed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "add_avatarDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::remove_avatarDestroyed
// Il2CppName: remove_avatarDestroyed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatarManager::AvatarCreatedDestroyed*)>(&Normal::Realtime::RealtimeAvatarManager::remove_avatarDestroyed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatarManager/AvatarCreatedDestroyed")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "remove_avatarDestroyed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::DidConnectToRoom
// Il2CppName: DidConnectToRoom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::Realtime*)>(&Normal::Realtime::RealtimeAvatarManager::DidConnectToRoom)> {
  static const MethodInfo* get() {
    static auto* room = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "Realtime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "DidConnectToRoom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{room});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::GetRealtimeAvatarDeviceTypeForLocalPlayer
// Il2CppName: GetRealtimeAvatarDeviceTypeForLocalPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::RealtimeAvatar::DeviceType (*)()>(&Normal::Realtime::RealtimeAvatarManager::GetRealtimeAvatarDeviceTypeForLocalPlayer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "GetRealtimeAvatarDeviceTypeForLocalPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::_RegisterAvatar
// Il2CppName: _RegisterAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(int, ::Normal::Realtime::RealtimeAvatar*)>(&Normal::Realtime::RealtimeAvatarManager::_RegisterAvatar)> {
  static const MethodInfo* get() {
    static auto* clientID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* avatar = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "_RegisterAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{clientID, avatar});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::_UnregisterAvatar
// Il2CppName: _UnregisterAvatar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::Normal::Realtime::RealtimeAvatar*)>(&Normal::Realtime::RealtimeAvatarManager::_UnregisterAvatar)> {
  static const MethodInfo* get() {
    static auto* avatar = &::il2cpp_utils::GetClassFromName("Normal.Realtime", "RealtimeAvatar")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "_UnregisterAvatar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatar});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::SetLocalAvatarPrefab
// Il2CppName: SetLocalAvatarPrefab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)(::UnityEngine::GameObject*)>(&Normal::Realtime::RealtimeAvatarManager::SetLocalAvatarPrefab)> {
  static const MethodInfo* get() {
    static auto* localAvatarPrefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "SetLocalAvatarPrefab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localAvatarPrefab});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::CreateAvatarIfNeeded
// Il2CppName: CreateAvatarIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::CreateAvatarIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "CreateAvatarIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::RealtimeAvatarManager::DestroyAvatarIfNeeded
// Il2CppName: DestroyAvatarIfNeeded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Normal::Realtime::RealtimeAvatarManager::*)()>(&Normal::Realtime::RealtimeAvatarManager::DestroyAvatarIfNeeded)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::RealtimeAvatarManager*), "DestroyAvatarIfNeeded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

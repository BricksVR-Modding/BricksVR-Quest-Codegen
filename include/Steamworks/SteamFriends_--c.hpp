// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamFriends
#include "Steamworks/SteamFriends.hpp"
// Including type: Steamworks.Data.PersonaStateChange_t
#include "Steamworks/Data/PersonaStateChange_t.hpp"
// Including type: Steamworks.Data.GameRichPresenceJoinRequested_t
#include "Steamworks/Data/GameRichPresenceJoinRequested_t.hpp"
// Including type: Steamworks.Data.GameOverlayActivated_t
#include "Steamworks/Data/GameOverlayActivated_t.hpp"
// Including type: Steamworks.Data.GameServerChangeRequested_t
#include "Steamworks/Data/GameServerChangeRequested_t.hpp"
// Including type: Steamworks.Data.GameLobbyJoinRequested_t
#include "Steamworks/Data/GameLobbyJoinRequested_t.hpp"
// Including type: Steamworks.Data.FriendRichPresenceUpdate_t
#include "Steamworks/Data/FriendRichPresenceUpdate_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamFriends::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamFriends::$$c*, "Steamworks", "SteamFriends/<>c");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamFriends/Steamworks.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamFriends::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Steamworks.SteamFriends/Steamworks.<>c <>9
    static ::Steamworks::SteamFriends::$$c* _get_$$9();
    // Set static field: static public readonly Steamworks.SteamFriends/Steamworks.<>c <>9
    static void _set_$$9(::Steamworks::SteamFriends::$$c* value);
    // Get static field: static public System.Action`1<Steamworks.Data.PersonaStateChange_t> <>9__4_0
    static ::System::Action_1<::Steamworks::Data::PersonaStateChange_t>* _get_$$9__4_0();
    // Set static field: static public System.Action`1<Steamworks.Data.PersonaStateChange_t> <>9__4_0
    static void _set_$$9__4_0(::System::Action_1<::Steamworks::Data::PersonaStateChange_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.GameRichPresenceJoinRequested_t> <>9__4_1
    static ::System::Action_1<::Steamworks::Data::GameRichPresenceJoinRequested_t>* _get_$$9__4_1();
    // Set static field: static public System.Action`1<Steamworks.Data.GameRichPresenceJoinRequested_t> <>9__4_1
    static void _set_$$9__4_1(::System::Action_1<::Steamworks::Data::GameRichPresenceJoinRequested_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.GameOverlayActivated_t> <>9__4_2
    static ::System::Action_1<::Steamworks::Data::GameOverlayActivated_t>* _get_$$9__4_2();
    // Set static field: static public System.Action`1<Steamworks.Data.GameOverlayActivated_t> <>9__4_2
    static void _set_$$9__4_2(::System::Action_1<::Steamworks::Data::GameOverlayActivated_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.GameServerChangeRequested_t> <>9__4_3
    static ::System::Action_1<::Steamworks::Data::GameServerChangeRequested_t>* _get_$$9__4_3();
    // Set static field: static public System.Action`1<Steamworks.Data.GameServerChangeRequested_t> <>9__4_3
    static void _set_$$9__4_3(::System::Action_1<::Steamworks::Data::GameServerChangeRequested_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.GameLobbyJoinRequested_t> <>9__4_4
    static ::System::Action_1<::Steamworks::Data::GameLobbyJoinRequested_t>* _get_$$9__4_4();
    // Set static field: static public System.Action`1<Steamworks.Data.GameLobbyJoinRequested_t> <>9__4_4
    static void _set_$$9__4_4(::System::Action_1<::Steamworks::Data::GameLobbyJoinRequested_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.FriendRichPresenceUpdate_t> <>9__4_5
    static ::System::Action_1<::Steamworks::Data::FriendRichPresenceUpdate_t>* _get_$$9__4_5();
    // Set static field: static public System.Action`1<Steamworks.Data.FriendRichPresenceUpdate_t> <>9__4_5
    static void _set_$$9__4_5(::System::Action_1<::Steamworks::Data::FriendRichPresenceUpdate_t>* value);
    // static private System.Void .cctor()
    // Offset: 0xE3A594
    static void _cctor();
    // System.Void <InstallEvents>b__4_0(Steamworks.Data.PersonaStateChange_t x)
    // Offset: 0xE3A600
    void $InstallEvents$b__4_0(::Steamworks::Data::PersonaStateChange_t x);
    // System.Void <InstallEvents>b__4_1(Steamworks.Data.GameRichPresenceJoinRequested_t x)
    // Offset: 0xE3A674
    void $InstallEvents$b__4_1(::Steamworks::Data::GameRichPresenceJoinRequested_t x);
    // System.Void <InstallEvents>b__4_2(Steamworks.Data.GameOverlayActivated_t x)
    // Offset: 0xE3A700
    void $InstallEvents$b__4_2(::Steamworks::Data::GameOverlayActivated_t x);
    // System.Void <InstallEvents>b__4_3(Steamworks.Data.GameServerChangeRequested_t x)
    // Offset: 0xE3A778
    void $InstallEvents$b__4_3(::Steamworks::Data::GameServerChangeRequested_t x);
    // System.Void <InstallEvents>b__4_4(Steamworks.Data.GameLobbyJoinRequested_t x)
    // Offset: 0xE3A810
    void $InstallEvents$b__4_4(::Steamworks::Data::GameLobbyJoinRequested_t x);
    // System.Void <InstallEvents>b__4_5(Steamworks.Data.FriendRichPresenceUpdate_t x)
    // Offset: 0xE3A8A4
    void $InstallEvents$b__4_5(::Steamworks::Data::FriendRichPresenceUpdate_t x);
    // public System.Void .ctor()
    // Offset: 0xE3A5F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamFriends::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamFriends::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamFriends::$$c*, creationType>()));
    }
  }; // Steamworks.SteamFriends/Steamworks.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamFriends::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_0
// Il2CppName: <InstallEvents>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::PersonaStateChange_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "PersonaStateChange_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_1
// Il2CppName: <InstallEvents>b__4_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::GameRichPresenceJoinRequested_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GameRichPresenceJoinRequested_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_2
// Il2CppName: <InstallEvents>b__4_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::GameOverlayActivated_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GameOverlayActivated_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_3
// Il2CppName: <InstallEvents>b__4_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::GameServerChangeRequested_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GameServerChangeRequested_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_4
// Il2CppName: <InstallEvents>b__4_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::GameLobbyJoinRequested_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GameLobbyJoinRequested_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::$InstallEvents$b__4_5
// Il2CppName: <InstallEvents>b__4_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::$$c::*)(::Steamworks::Data::FriendRichPresenceUpdate_t)>(&Steamworks::SteamFriends::$$c::$InstallEvents$b__4_5)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "FriendRichPresenceUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends::$$c*), "<InstallEvents>b__4_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
// Including type: Steamworks.Friend
#include "Steamworks/Friend.hpp"
// Including type: Steamworks.Data.Lobby
#include "Steamworks/Data/Lobby.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamMatchmaking
  class ISteamMatchmaking;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`4<T1, T2, T3, T4>
  template<typename T1, typename T2, typename T3, typename T4>
  class Action_4;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: Steamworks::Data
namespace Steamworks::Data {
  // Forward declaring type: LobbyChatMsg_t
  struct LobbyChatMsg_t;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamMatchmaking
  class SteamMatchmaking;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamMatchmaking);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamMatchmaking*, "Steamworks", "SteamMatchmaking");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamMatchmaking
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamMatchmaking : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamMatchmaking*> {
    public:
    // Nested type: ::Steamworks::SteamMatchmaking::$$c
    class $$c;
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`2<Steamworks.Friend,Steamworks.Data.Lobby> OnLobbyInvite
    static ::System::Action_2<::Steamworks::Friend, ::Steamworks::Data::Lobby>* _get_OnLobbyInvite();
    // Set static field: static private System.Action`2<Steamworks.Friend,Steamworks.Data.Lobby> OnLobbyInvite
    static void _set_OnLobbyInvite(::System::Action_2<::Steamworks::Friend, ::Steamworks::Data::Lobby>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.Data.Lobby> OnLobbyEntered
    static ::System::Action_1<::Steamworks::Data::Lobby>* _get_OnLobbyEntered();
    // Set static field: static private System.Action`1<Steamworks.Data.Lobby> OnLobbyEntered
    static void _set_OnLobbyEntered(::System::Action_1<::Steamworks::Data::Lobby>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.Result,Steamworks.Data.Lobby> OnLobbyCreated
    static ::System::Action_2<::Steamworks::Result, ::Steamworks::Data::Lobby>* _get_OnLobbyCreated();
    // Set static field: static private System.Action`2<Steamworks.Result,Steamworks.Data.Lobby> OnLobbyCreated
    static void _set_OnLobbyCreated(::System::Action_2<::Steamworks::Result, ::Steamworks::Data::Lobby>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`4<Steamworks.Data.Lobby,System.UInt32,System.UInt16,Steamworks.SteamId> OnLobbyGameCreated
    static ::System::Action_4<::Steamworks::Data::Lobby, uint, uint16_t, ::Steamworks::SteamId>* _get_OnLobbyGameCreated();
    // Set static field: static private System.Action`4<Steamworks.Data.Lobby,System.UInt32,System.UInt16,Steamworks.SteamId> OnLobbyGameCreated
    static void _set_OnLobbyGameCreated(::System::Action_4<::Steamworks::Data::Lobby, uint, uint16_t, ::Steamworks::SteamId>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`1<Steamworks.Data.Lobby> OnLobbyDataChanged
    static ::System::Action_1<::Steamworks::Data::Lobby>* _get_OnLobbyDataChanged();
    // Set static field: static private System.Action`1<Steamworks.Data.Lobby> OnLobbyDataChanged
    static void _set_OnLobbyDataChanged(::System::Action_1<::Steamworks::Data::Lobby>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberDataChanged
    static ::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* _get_OnLobbyMemberDataChanged();
    // Set static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberDataChanged
    static void _set_OnLobbyMemberDataChanged(::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberJoined
    static ::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* _get_OnLobbyMemberJoined();
    // Set static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberJoined
    static void _set_OnLobbyMemberJoined(::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberLeave
    static ::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* _get_OnLobbyMemberLeave();
    // Set static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberLeave
    static void _set_OnLobbyMemberLeave(::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberDisconnected
    static ::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* _get_OnLobbyMemberDisconnected();
    // Set static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.Friend> OnLobbyMemberDisconnected
    static void _set_OnLobbyMemberDisconnected(::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,Steamworks.Friend> OnLobbyMemberKicked
    static ::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::Steamworks::Friend>* _get_OnLobbyMemberKicked();
    // Set static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,Steamworks.Friend> OnLobbyMemberKicked
    static void _set_OnLobbyMemberKicked(::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,Steamworks.Friend> OnLobbyMemberBanned
    static ::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::Steamworks::Friend>* _get_OnLobbyMemberBanned();
    // Set static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,Steamworks.Friend> OnLobbyMemberBanned
    static void _set_OnLobbyMemberBanned(::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,System.String> OnChatMessage
    static ::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::StringW>* _get_OnChatMessage();
    // Set static field: static private System.Action`3<Steamworks.Data.Lobby,Steamworks.Friend,System.String> OnChatMessage
    static void _set_OnChatMessage(::System::Action_3<::Steamworks::Data::Lobby, ::Steamworks::Friend, ::StringW>* value);
    // static Steamworks.ISteamMatchmaking get_Internal()
    // Offset: 0x5C32F0
    static ::Steamworks::ISteamMatchmaking* get_Internal();
    // static System.Void InstallEvents()
    // Offset: 0x5C2B10
    static void InstallEvents();
    // static private System.Void OnLobbyChatMessageRecievedAPI(Steamworks.Data.LobbyChatMsg_t callback)
    // Offset: 0x5C3060
    static void OnLobbyChatMessageRecievedAPI(::Steamworks::Data::LobbyChatMsg_t callback);
    // public System.Void .ctor()
    // Offset: 0x5C32B0
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamMatchmaking* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamMatchmaking::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamMatchmaking*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C2A80
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamMatchmaking
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::ISteamMatchmaking* (*)()>(&Steamworks::SteamMatchmaking::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamMatchmaking::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::OnLobbyChatMessageRecievedAPI
// Il2CppName: OnLobbyChatMessageRecievedAPI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Steamworks::Data::LobbyChatMsg_t)>(&Steamworks::SteamMatchmaking::OnLobbyChatMessageRecievedAPI)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyChatMsg_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking*), "OnLobbyChatMessageRecievedAPI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::*)(bool)>(&Steamworks::SteamMatchmaking::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};

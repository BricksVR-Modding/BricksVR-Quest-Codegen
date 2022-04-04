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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamFriends
  class ISteamFriends;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Steamworks::Data
namespace Steamworks::Data {
  // Forward declaring type: GameConnectedFriendChatMsg_t
  struct GameConnectedFriendChatMsg_t;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamFriends
  class SteamFriends;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamFriends);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamFriends*, "Steamworks", "SteamFriends");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamFriends
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamFriends : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamFriends*> {
    public:
    // Nested type: ::Steamworks::SteamFriends::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> richPresence
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _get_richPresence();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> richPresence
    static void _set_richPresence(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`3<Steamworks.Friend,System.String,System.String> OnChatMessage
    static ::System::Action_3<::Steamworks::Friend, ::StringW, ::StringW>* _get_OnChatMessage();
    // Set static field: static private System.Action`3<Steamworks.Friend,System.String,System.String> OnChatMessage
    static void _set_OnChatMessage(::System::Action_3<::Steamworks::Friend, ::StringW, ::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.Friend> OnPersonaStateChange
    static ::System::Action_1<::Steamworks::Friend>* _get_OnPersonaStateChange();
    // Set static field: static private System.Action`1<Steamworks.Friend> OnPersonaStateChange
    static void _set_OnPersonaStateChange(::System::Action_1<::Steamworks::Friend>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<Steamworks.Friend,System.String> OnGameRichPresenceJoinRequested
    static ::System::Action_2<::Steamworks::Friend, ::StringW>* _get_OnGameRichPresenceJoinRequested();
    // Set static field: static private System.Action`2<Steamworks.Friend,System.String> OnGameRichPresenceJoinRequested
    static void _set_OnGameRichPresenceJoinRequested(::System::Action_2<::Steamworks::Friend, ::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`1<System.Boolean> OnGameOverlayActivated
    static ::System::Action_1<bool>* _get_OnGameOverlayActivated();
    // Set static field: static private System.Action`1<System.Boolean> OnGameOverlayActivated
    static void _set_OnGameOverlayActivated(::System::Action_1<bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`2<System.String,System.String> OnGameServerChangeRequested
    static ::System::Action_2<::StringW, ::StringW>* _get_OnGameServerChangeRequested();
    // Set static field: static private System.Action`2<System.String,System.String> OnGameServerChangeRequested
    static void _set_OnGameServerChangeRequested(::System::Action_2<::StringW, ::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.SteamId> OnGameLobbyJoinRequested
    static ::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::SteamId>* _get_OnGameLobbyJoinRequested();
    // Set static field: static private System.Action`2<Steamworks.Data.Lobby,Steamworks.SteamId> OnGameLobbyJoinRequested
    static void _set_OnGameLobbyJoinRequested(::System::Action_2<::Steamworks::Data::Lobby, ::Steamworks::SteamId>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`1<Steamworks.Friend> OnFriendRichPresenceUpdate
    static ::System::Action_1<::Steamworks::Friend>* _get_OnFriendRichPresenceUpdate();
    // Set static field: static private System.Action`1<Steamworks.Friend> OnFriendRichPresenceUpdate
    static void _set_OnFriendRichPresenceUpdate(::System::Action_1<::Steamworks::Friend>* value);
    // static Steamworks.ISteamFriends get_Internal()
    // Offset: 0x5C1D30
    static ::Steamworks::ISteamFriends* get_Internal();
    // System.Void InstallEvents()
    // Offset: 0x5C1570
    void InstallEvents();
    // static private System.Void OnFriendChatMessage(Steamworks.Data.GameConnectedFriendChatMsg_t data)
    // Offset: 0x5C1AC0
    static void OnFriendChatMessage(::Steamworks::Data::GameConnectedFriendChatMsg_t data);
    // public System.Void .ctor()
    // Offset: 0x5C1CF0
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamFriends* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamFriends::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamFriends*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C14A0
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamFriends
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamFriends::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::ISteamFriends* (*)()>(&Steamworks::SteamFriends::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::*)()>(&Steamworks::SteamFriends::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::OnFriendChatMessage
// Il2CppName: OnFriendChatMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Steamworks::Data::GameConnectedFriendChatMsg_t)>(&Steamworks::SteamFriends::OnFriendChatMessage)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "GameConnectedFriendChatMsg_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends*), "OnFriendChatMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamFriends::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamFriends::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamFriends::*)(bool)>(&Steamworks::SteamFriends::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamFriends*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};

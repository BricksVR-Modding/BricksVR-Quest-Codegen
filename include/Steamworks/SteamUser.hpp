// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamClientClass`1
#include "Steamworks/SteamClientClass_1.hpp"
// Including type: Steamworks.SteamId
#include "Steamworks/SteamId.hpp"
// Including type: Steamworks.AuthResponse
#include "Steamworks/AuthResponse.hpp"
// Including type: Steamworks.Data.GetAuthSessionTicketResponse_t
#include "Steamworks/Data/GetAuthSessionTicketResponse_t.hpp"
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
// Including type: Steamworks.Data.DurationControl
#include "Steamworks/Data/DurationControl.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ISteamUser
  class ISteamUser;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: SteamUser
  class SteamUser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Steamworks::SteamUser);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamUser*, "Steamworks", "SteamUser");
// Type namespace: Steamworks
namespace Steamworks {
  // WARNING Size may be invalid!
  // Autogenerated type: Steamworks.SteamUser
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamUser : public ::Steamworks::SteamClientClass_1<::Steamworks::SteamUser*> {
    public:
    // Nested type: ::Steamworks::SteamUser::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> richPresence
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _get_richPresence();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> richPresence
    static void _set_richPresence(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action OnSteamServersConnected
    static ::System::Action* _get_OnSteamServersConnected();
    // Set static field: static private System.Action OnSteamServersConnected
    static void _set_OnSteamServersConnected(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action OnSteamServerConnectFailure
    static ::System::Action* _get_OnSteamServerConnectFailure();
    // Set static field: static private System.Action OnSteamServerConnectFailure
    static void _set_OnSteamServerConnectFailure(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action OnSteamServersDisconnected
    static ::System::Action* _get_OnSteamServersDisconnected();
    // Set static field: static private System.Action OnSteamServersDisconnected
    static void _set_OnSteamServersDisconnected(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action OnClientGameServerDeny
    static ::System::Action* _get_OnClientGameServerDeny();
    // Set static field: static private System.Action OnClientGameServerDeny
    static void _set_OnClientGameServerDeny(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action OnLicensesUpdated
    static ::System::Action* _get_OnLicensesUpdated();
    // Set static field: static private System.Action OnLicensesUpdated
    static void _set_OnLicensesUpdated(::System::Action* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`3<Steamworks.SteamId,Steamworks.SteamId,Steamworks.AuthResponse> OnValidateAuthTicketResponse
    static ::System::Action_3<::Steamworks::SteamId, ::Steamworks::SteamId, ::Steamworks::AuthResponse>* _get_OnValidateAuthTicketResponse();
    // Set static field: static private System.Action`3<Steamworks.SteamId,Steamworks.SteamId,Steamworks.AuthResponse> OnValidateAuthTicketResponse
    static void _set_OnValidateAuthTicketResponse(::System::Action_3<::Steamworks::SteamId, ::Steamworks::SteamId, ::Steamworks::AuthResponse>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<Steamworks.Data.GetAuthSessionTicketResponse_t> OnGetAuthSessionTicketResponse
    static ::System::Action_1<::Steamworks::Data::GetAuthSessionTicketResponse_t>* _get_OnGetAuthSessionTicketResponse();
    // Set static field: static private System.Action`1<Steamworks.Data.GetAuthSessionTicketResponse_t> OnGetAuthSessionTicketResponse
    static void _set_OnGetAuthSessionTicketResponse(::System::Action_1<::Steamworks::Data::GetAuthSessionTicketResponse_t>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`3<Steamworks.AppId,System.UInt64,System.Boolean> OnMicroTxnAuthorizationResponse
    static ::System::Action_3<::Steamworks::AppId, uint64_t, bool>* _get_OnMicroTxnAuthorizationResponse();
    // Set static field: static private System.Action`3<Steamworks.AppId,System.UInt64,System.Boolean> OnMicroTxnAuthorizationResponse
    static void _set_OnMicroTxnAuthorizationResponse(::System::Action_3<::Steamworks::AppId, uint64_t, bool>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBBA20
    // Get static field: static private System.Action`1<System.String> OnGameWebCallback
    static ::System::Action_1<::StringW>* _get_OnGameWebCallback();
    // Set static field: static private System.Action`1<System.String> OnGameWebCallback
    static void _set_OnGameWebCallback(::System::Action_1<::StringW>* value);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // Get static field: static private System.Action`1<Steamworks.Data.DurationControl> OnDurationControl
    static ::System::Action_1<::Steamworks::Data::DurationControl>* _get_OnDurationControl();
    // Set static field: static private System.Action`1<Steamworks.Data.DurationControl> OnDurationControl
    static void _set_OnDurationControl(::System::Action_1<::Steamworks::Data::DurationControl>* value);
    // Get static field: static private System.Byte[] readBuffer
    static ::ArrayW<uint8_t> _get_readBuffer();
    // Set static field: static private System.Byte[] readBuffer
    static void _set_readBuffer(::ArrayW<uint8_t> value);
    // Get static field: static private System.UInt32 sampleRate
    static uint _get_sampleRate();
    // Set static field: static private System.UInt32 sampleRate
    static void _set_sampleRate(uint value);
    // static Steamworks.ISteamUser get_Internal()
    // Offset: 0x5C6DC0
    static ::Steamworks::ISteamUser* get_Internal();
    // static public System.UInt32 get_SampleRate()
    // Offset: 0x5C6F20
    static uint get_SampleRate();
    // static public System.Void set_SampleRate(System.UInt32 value)
    // Offset: 0x5C6F80
    static void set_SampleRate(uint value);
    // static public System.UInt32 get_OptimalSampleRate()
    // Offset: 0x5C6E50
    static uint get_OptimalSampleRate();
    // static private System.Void .cctor()
    // Offset: 0x5C6D10
    static void _cctor();
    // static System.Void InstallEvents()
    // Offset: 0x5C64C0
    static void InstallEvents();
    // public System.Void .ctor()
    // Offset: 0x5C6D80
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::.ctor()
    // Base method: System.Void SteamClass::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamUser* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamUser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamUser*, creationType>()));
    }
    // override System.Void InitializeInterface(System.Boolean server)
    // Offset: 0x5C6190
    // Implemented from: Steamworks.SteamClientClass`1
    // Base method: System.Void SteamClientClass_1::InitializeInterface(System.Boolean server)
    void InitializeInterface(bool server);
  }; // Steamworks.SteamUser
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamUser::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::ISteamUser* (*)()>(&Steamworks::SteamUser::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::get_SampleRate
// Il2CppName: get_SampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&Steamworks::SteamUser::get_SampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "get_SampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::set_SampleRate
// Il2CppName: set_SampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint)>(&Steamworks::SteamUser::set_SampleRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "set_SampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::get_OptimalSampleRate
// Il2CppName: get_OptimalSampleRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)()>(&Steamworks::SteamUser::get_OptimalSampleRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "get_OptimalSampleRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamUser::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::InstallEvents
// Il2CppName: InstallEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamUser::InstallEvents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "InstallEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamUser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Steamworks::SteamUser::InitializeInterface
// Il2CppName: InitializeInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamUser::*)(bool)>(&Steamworks::SteamUser::InitializeInterface)> {
  static const MethodInfo* get() {
    static auto* server = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamUser*), "InitializeInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{server});
  }
};

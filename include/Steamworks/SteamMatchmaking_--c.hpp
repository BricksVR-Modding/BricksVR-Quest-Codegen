// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.SteamMatchmaking
#include "Steamworks/SteamMatchmaking.hpp"
// Including type: Steamworks.Data.LobbyInvite_t
#include "Steamworks/Data/LobbyInvite_t.hpp"
// Including type: Steamworks.Data.LobbyEnter_t
#include "Steamworks/Data/LobbyEnter_t.hpp"
// Including type: Steamworks.Data.LobbyCreated_t
#include "Steamworks/Data/LobbyCreated_t.hpp"
// Including type: Steamworks.Data.LobbyGameCreated_t
#include "Steamworks/Data/LobbyGameCreated_t.hpp"
// Including type: Steamworks.Data.LobbyDataUpdate_t
#include "Steamworks/Data/LobbyDataUpdate_t.hpp"
// Including type: Steamworks.Data.LobbyChatUpdate_t
#include "Steamworks/Data/LobbyChatUpdate_t.hpp"
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
NEED_NO_BOX(::Steamworks::SteamMatchmaking::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamMatchmaking::$$c*, "Steamworks", "SteamMatchmaking/<>c");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamMatchmaking/Steamworks.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SteamMatchmaking::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Steamworks.SteamMatchmaking/Steamworks.<>c <>9
    static ::Steamworks::SteamMatchmaking::$$c* _get_$$9();
    // Set static field: static public readonly Steamworks.SteamMatchmaking/Steamworks.<>c <>9
    static void _set_$$9(::Steamworks::SteamMatchmaking::$$c* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyInvite_t> <>9__5_0
    static ::System::Action_1<::Steamworks::Data::LobbyInvite_t>* _get_$$9__5_0();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyInvite_t> <>9__5_0
    static void _set_$$9__5_0(::System::Action_1<::Steamworks::Data::LobbyInvite_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyEnter_t> <>9__5_1
    static ::System::Action_1<::Steamworks::Data::LobbyEnter_t>* _get_$$9__5_1();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyEnter_t> <>9__5_1
    static void _set_$$9__5_1(::System::Action_1<::Steamworks::Data::LobbyEnter_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyCreated_t> <>9__5_2
    static ::System::Action_1<::Steamworks::Data::LobbyCreated_t>* _get_$$9__5_2();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyCreated_t> <>9__5_2
    static void _set_$$9__5_2(::System::Action_1<::Steamworks::Data::LobbyCreated_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyGameCreated_t> <>9__5_3
    static ::System::Action_1<::Steamworks::Data::LobbyGameCreated_t>* _get_$$9__5_3();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyGameCreated_t> <>9__5_3
    static void _set_$$9__5_3(::System::Action_1<::Steamworks::Data::LobbyGameCreated_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyDataUpdate_t> <>9__5_4
    static ::System::Action_1<::Steamworks::Data::LobbyDataUpdate_t>* _get_$$9__5_4();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyDataUpdate_t> <>9__5_4
    static void _set_$$9__5_4(::System::Action_1<::Steamworks::Data::LobbyDataUpdate_t>* value);
    // Get static field: static public System.Action`1<Steamworks.Data.LobbyChatUpdate_t> <>9__5_5
    static ::System::Action_1<::Steamworks::Data::LobbyChatUpdate_t>* _get_$$9__5_5();
    // Set static field: static public System.Action`1<Steamworks.Data.LobbyChatUpdate_t> <>9__5_5
    static void _set_$$9__5_5(::System::Action_1<::Steamworks::Data::LobbyChatUpdate_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x5C9B40
    static void _cctor();
    // System.Void <InstallEvents>b__5_0(Steamworks.Data.LobbyInvite_t x)
    // Offset: 0x5C8D80
    void $InstallEvents$b__5_0(::Steamworks::Data::LobbyInvite_t x);
    // System.Void <InstallEvents>b__5_1(Steamworks.Data.LobbyEnter_t x)
    // Offset: 0x5C8E10
    void $InstallEvents$b__5_1(::Steamworks::Data::LobbyEnter_t x);
    // System.Void <InstallEvents>b__5_2(Steamworks.Data.LobbyCreated_t x)
    // Offset: 0x5C8E90
    void $InstallEvents$b__5_2(::Steamworks::Data::LobbyCreated_t x);
    // System.Void <InstallEvents>b__5_3(Steamworks.Data.LobbyGameCreated_t x)
    // Offset: 0x5C8F20
    void $InstallEvents$b__5_3(::Steamworks::Data::LobbyGameCreated_t x);
    // System.Void <InstallEvents>b__5_4(Steamworks.Data.LobbyDataUpdate_t x)
    // Offset: 0x5C8FF0
    void $InstallEvents$b__5_4(::Steamworks::Data::LobbyDataUpdate_t x);
    // System.Void <InstallEvents>b__5_5(Steamworks.Data.LobbyChatUpdate_t x)
    // Offset: 0x5C90E0
    void $InstallEvents$b__5_5(::Steamworks::Data::LobbyChatUpdate_t x);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamMatchmaking::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Steamworks::SteamMatchmaking::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamMatchmaking::$$c*, creationType>()));
    }
  }; // Steamworks.SteamMatchmaking/Steamworks.<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::SteamMatchmaking::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_0
// Il2CppName: <InstallEvents>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyInvite_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyInvite_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_1
// Il2CppName: <InstallEvents>b__5_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyEnter_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyEnter_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_2
// Il2CppName: <InstallEvents>b__5_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyCreated_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyCreated_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_3
// Il2CppName: <InstallEvents>b__5_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyGameCreated_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyGameCreated_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_4
// Il2CppName: <InstallEvents>b__5_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyDataUpdate_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_4)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyDataUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_5
// Il2CppName: <InstallEvents>b__5_5
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Steamworks::SteamMatchmaking::$$c::*)(::Steamworks::Data::LobbyChatUpdate_t)>(&Steamworks::SteamMatchmaking::$$c::$InstallEvents$b__5_5)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "LobbyChatUpdate_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::SteamMatchmaking::$$c*), "<InstallEvents>b__5_5", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Steamworks::SteamMatchmaking::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

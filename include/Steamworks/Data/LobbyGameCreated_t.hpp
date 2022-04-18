// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackType
  struct CallbackType;
}
// Completed forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: LobbyGameCreated_t
  struct LobbyGameCreated_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::LobbyGameCreated_t, "Steamworks.Data", "LobbyGameCreated_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x16
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.LobbyGameCreated_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct LobbyGameCreated_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDLobby
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDLobby;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDGameServer
    // Size: 0x8
    // Offset: 0x8
    uint64_t SteamIDGameServer;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt32 IP
    // Size: 0x4
    // Offset: 0x10
    uint IP;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt16 Port
    // Size: 0x2
    // Offset: 0x14
    uint16_t Port;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: LobbyGameCreated_t
    constexpr LobbyGameCreated_t(uint64_t SteamIDLobby_ = {}, uint64_t SteamIDGameServer_ = {}, uint IP_ = {}, uint16_t Port_ = {}) noexcept : SteamIDLobby{SteamIDLobby_}, SteamIDGameServer{SteamIDGameServer_}, IP{IP_}, Port{Port_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.UInt64 SteamIDLobby
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDLobby();
    // Get instance field reference: System.UInt64 SteamIDGameServer
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDGameServer();
    // Get instance field reference: System.UInt32 IP
    [[deprecated("Use field access instead!")]] uint& dyn_IP();
    // Get instance field reference: System.UInt16 Port
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Port();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x462FE0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x462F40
    static void _cctor();
  }; // Steamworks.Data.LobbyGameCreated_t
  #pragma pack(pop)
  static check_size<sizeof(LobbyGameCreated_t), 20 + sizeof(uint16_t)> __Steamworks_Data_LobbyGameCreated_tSizeCheck;
  static_assert(sizeof(LobbyGameCreated_t) == 0x16);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::LobbyGameCreated_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::LobbyGameCreated_t::*)()>(&Steamworks::Data::LobbyGameCreated_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LobbyGameCreated_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::LobbyGameCreated_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::LobbyGameCreated_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LobbyGameCreated_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

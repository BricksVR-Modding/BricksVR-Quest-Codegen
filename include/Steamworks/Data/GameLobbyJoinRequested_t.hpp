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
  // Forward declaring type: GameLobbyJoinRequested_t
  struct GameLobbyJoinRequested_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GameLobbyJoinRequested_t, "Steamworks.Data", "GameLobbyJoinRequested_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GameLobbyJoinRequested_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameLobbyJoinRequested_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDLobby
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDLobby;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDFriend
    // Size: 0x8
    // Offset: 0x8
    uint64_t SteamIDFriend;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: GameLobbyJoinRequested_t
    constexpr GameLobbyJoinRequested_t(uint64_t SteamIDLobby_ = {}, uint64_t SteamIDFriend_ = {}) noexcept : SteamIDLobby{SteamIDLobby_}, SteamIDFriend{SteamIDFriend_} {}
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
    // Get instance field reference: System.UInt64 SteamIDFriend
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDFriend();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x460430
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x460390
    static void _cctor();
  }; // Steamworks.Data.GameLobbyJoinRequested_t
  #pragma pack(pop)
  static check_size<sizeof(GameLobbyJoinRequested_t), 8 + sizeof(uint64_t)> __Steamworks_Data_GameLobbyJoinRequested_tSizeCheck;
  static_assert(sizeof(GameLobbyJoinRequested_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GameLobbyJoinRequested_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GameLobbyJoinRequested_t::*)()>(&Steamworks::Data::GameLobbyJoinRequested_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GameLobbyJoinRequested_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GameLobbyJoinRequested_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GameLobbyJoinRequested_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GameLobbyJoinRequested_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

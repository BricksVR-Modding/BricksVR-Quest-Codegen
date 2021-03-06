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
  // Forward declaring type: GameConnectedClanChatMsg_t
  struct GameConnectedClanChatMsg_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GameConnectedClanChatMsg_t, "Steamworks.Data", "GameConnectedClanChatMsg_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GameConnectedClanChatMsg_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameConnectedClanChatMsg_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDClanChat
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDClanChat;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDUser
    // Size: 0x8
    // Offset: 0x8
    uint64_t SteamIDUser;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Int32 MessageID
    // Size: 0x4
    // Offset: 0x10
    int MessageID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GameConnectedClanChatMsg_t
    constexpr GameConnectedClanChatMsg_t(uint64_t SteamIDClanChat_ = {}, uint64_t SteamIDUser_ = {}, int MessageID_ = {}) noexcept : SteamIDClanChat{SteamIDClanChat_}, SteamIDUser{SteamIDUser_}, MessageID{MessageID_} {}
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
    // Get instance field reference: System.UInt64 SteamIDClanChat
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDClanChat();
    // Get instance field reference: System.UInt64 SteamIDUser
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDUser();
    // Get instance field reference: System.Int32 MessageID
    [[deprecated("Use field access instead!")]] int& dyn_MessageID();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4602D0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x460230
    static void _cctor();
  }; // Steamworks.Data.GameConnectedClanChatMsg_t
  #pragma pack(pop)
  static check_size<sizeof(GameConnectedClanChatMsg_t), 16 + sizeof(int)> __Steamworks_Data_GameConnectedClanChatMsg_tSizeCheck;
  static_assert(sizeof(GameConnectedClanChatMsg_t) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GameConnectedClanChatMsg_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GameConnectedClanChatMsg_t::*)()>(&Steamworks::Data::GameConnectedClanChatMsg_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GameConnectedClanChatMsg_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GameConnectedClanChatMsg_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GameConnectedClanChatMsg_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GameConnectedClanChatMsg_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: ChatEntryType
  struct ChatEntryType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::ChatEntryType, "Steamworks", "ChatEntryType");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.ChatEntryType
  // [TokenAttribute] Offset: FFFFFFFF
  struct ChatEntryType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ChatEntryType
    constexpr ChatEntryType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.ChatEntryType Invalid
    static constexpr const int Invalid = 0;
    // Get static field: static public Steamworks.ChatEntryType Invalid
    static ::Steamworks::ChatEntryType _get_Invalid();
    // Set static field: static public Steamworks.ChatEntryType Invalid
    static void _set_Invalid(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType ChatMsg
    static constexpr const int ChatMsg = 1;
    // Get static field: static public Steamworks.ChatEntryType ChatMsg
    static ::Steamworks::ChatEntryType _get_ChatMsg();
    // Set static field: static public Steamworks.ChatEntryType ChatMsg
    static void _set_ChatMsg(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType Typing
    static constexpr const int Typing = 2;
    // Get static field: static public Steamworks.ChatEntryType Typing
    static ::Steamworks::ChatEntryType _get_Typing();
    // Set static field: static public Steamworks.ChatEntryType Typing
    static void _set_Typing(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType InviteGame
    static constexpr const int InviteGame = 3;
    // Get static field: static public Steamworks.ChatEntryType InviteGame
    static ::Steamworks::ChatEntryType _get_InviteGame();
    // Set static field: static public Steamworks.ChatEntryType InviteGame
    static void _set_InviteGame(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType Emote
    static constexpr const int Emote = 4;
    // Get static field: static public Steamworks.ChatEntryType Emote
    static ::Steamworks::ChatEntryType _get_Emote();
    // Set static field: static public Steamworks.ChatEntryType Emote
    static void _set_Emote(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType LeftConversation
    static constexpr const int LeftConversation = 6;
    // Get static field: static public Steamworks.ChatEntryType LeftConversation
    static ::Steamworks::ChatEntryType _get_LeftConversation();
    // Set static field: static public Steamworks.ChatEntryType LeftConversation
    static void _set_LeftConversation(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType Entered
    static constexpr const int Entered = 7;
    // Get static field: static public Steamworks.ChatEntryType Entered
    static ::Steamworks::ChatEntryType _get_Entered();
    // Set static field: static public Steamworks.ChatEntryType Entered
    static void _set_Entered(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType WasKicked
    static constexpr const int WasKicked = 8;
    // Get static field: static public Steamworks.ChatEntryType WasKicked
    static ::Steamworks::ChatEntryType _get_WasKicked();
    // Set static field: static public Steamworks.ChatEntryType WasKicked
    static void _set_WasKicked(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType WasBanned
    static constexpr const int WasBanned = 9;
    // Get static field: static public Steamworks.ChatEntryType WasBanned
    static ::Steamworks::ChatEntryType _get_WasBanned();
    // Set static field: static public Steamworks.ChatEntryType WasBanned
    static void _set_WasBanned(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType Disconnected
    static constexpr const int Disconnected = 10;
    // Get static field: static public Steamworks.ChatEntryType Disconnected
    static ::Steamworks::ChatEntryType _get_Disconnected();
    // Set static field: static public Steamworks.ChatEntryType Disconnected
    static void _set_Disconnected(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType HistoricalChat
    static constexpr const int HistoricalChat = 11;
    // Get static field: static public Steamworks.ChatEntryType HistoricalChat
    static ::Steamworks::ChatEntryType _get_HistoricalChat();
    // Set static field: static public Steamworks.ChatEntryType HistoricalChat
    static void _set_HistoricalChat(::Steamworks::ChatEntryType value);
    // static field const value: static public Steamworks.ChatEntryType LinkBlocked
    static constexpr const int LinkBlocked = 14;
    // Get static field: static public Steamworks.ChatEntryType LinkBlocked
    static ::Steamworks::ChatEntryType _get_LinkBlocked();
    // Set static field: static public Steamworks.ChatEntryType LinkBlocked
    static void _set_LinkBlocked(::Steamworks::ChatEntryType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.ChatEntryType
  #pragma pack(pop)
  static check_size<sizeof(ChatEntryType), 0 + sizeof(int)> __Steamworks_ChatEntryTypeSizeCheck;
  static_assert(sizeof(ChatEntryType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

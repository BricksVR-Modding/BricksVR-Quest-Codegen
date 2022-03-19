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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: RoomJoinPolicy
  struct RoomJoinPolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::RoomJoinPolicy, "Oculus.Platform", "RoomJoinPolicy");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.RoomJoinPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomJoinPolicy/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RoomJoinPolicy
    constexpr RoomJoinPolicy(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0x72D5D4
    // static field const value: static public Oculus.Platform.RoomJoinPolicy None
    static constexpr const int None = 0;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy None
    static ::Oculus::Platform::RoomJoinPolicy _get_None();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy None
    static void _set_None(::Oculus::Platform::RoomJoinPolicy value);
    // [DescriptionAttribute] Offset: 0x72D60C
    // static field const value: static public Oculus.Platform.RoomJoinPolicy Everyone
    static constexpr const int Everyone = 1;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy Everyone
    static ::Oculus::Platform::RoomJoinPolicy _get_Everyone();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy Everyone
    static void _set_Everyone(::Oculus::Platform::RoomJoinPolicy value);
    // [DescriptionAttribute] Offset: 0x72D644
    // static field const value: static public Oculus.Platform.RoomJoinPolicy FriendsOfMembers
    static constexpr const int FriendsOfMembers = 2;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy FriendsOfMembers
    static ::Oculus::Platform::RoomJoinPolicy _get_FriendsOfMembers();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy FriendsOfMembers
    static void _set_FriendsOfMembers(::Oculus::Platform::RoomJoinPolicy value);
    // [DescriptionAttribute] Offset: 0x72D67C
    // static field const value: static public Oculus.Platform.RoomJoinPolicy FriendsOfOwner
    static constexpr const int FriendsOfOwner = 3;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy FriendsOfOwner
    static ::Oculus::Platform::RoomJoinPolicy _get_FriendsOfOwner();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy FriendsOfOwner
    static void _set_FriendsOfOwner(::Oculus::Platform::RoomJoinPolicy value);
    // [DescriptionAttribute] Offset: 0x72D6B4
    // static field const value: static public Oculus.Platform.RoomJoinPolicy InvitedUsers
    static constexpr const int InvitedUsers = 4;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy InvitedUsers
    static ::Oculus::Platform::RoomJoinPolicy _get_InvitedUsers();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy InvitedUsers
    static void _set_InvitedUsers(::Oculus::Platform::RoomJoinPolicy value);
    // [DescriptionAttribute] Offset: 0x72D6EC
    // static field const value: static public Oculus.Platform.RoomJoinPolicy Unknown
    static constexpr const int Unknown = 5;
    // Get static field: static public Oculus.Platform.RoomJoinPolicy Unknown
    static ::Oculus::Platform::RoomJoinPolicy _get_Unknown();
    // Set static field: static public Oculus.Platform.RoomJoinPolicy Unknown
    static void _set_Unknown(::Oculus::Platform::RoomJoinPolicy value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Oculus.Platform.RoomJoinPolicy
  #pragma pack(pop)
  static check_size<sizeof(RoomJoinPolicy), 0 + sizeof(int)> __Oculus_Platform_RoomJoinPolicySizeCheck;
  static_assert(sizeof(RoomJoinPolicy) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

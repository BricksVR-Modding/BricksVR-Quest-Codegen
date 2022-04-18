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
  // Forward declaring type: AuthResponse
  struct AuthResponse;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::AuthResponse, "Steamworks", "AuthResponse");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.AuthResponse
  // [TokenAttribute] Offset: FFFFFFFF
  struct AuthResponse/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AuthResponse
    constexpr AuthResponse(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.AuthResponse OK
    static constexpr const int OK = 0;
    // Get static field: static public Steamworks.AuthResponse OK
    static ::Steamworks::AuthResponse _get_OK();
    // Set static field: static public Steamworks.AuthResponse OK
    static void _set_OK(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse UserNotConnectedToSteam
    static constexpr const int UserNotConnectedToSteam = 1;
    // Get static field: static public Steamworks.AuthResponse UserNotConnectedToSteam
    static ::Steamworks::AuthResponse _get_UserNotConnectedToSteam();
    // Set static field: static public Steamworks.AuthResponse UserNotConnectedToSteam
    static void _set_UserNotConnectedToSteam(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse NoLicenseOrExpired
    static constexpr const int NoLicenseOrExpired = 2;
    // Get static field: static public Steamworks.AuthResponse NoLicenseOrExpired
    static ::Steamworks::AuthResponse _get_NoLicenseOrExpired();
    // Set static field: static public Steamworks.AuthResponse NoLicenseOrExpired
    static void _set_NoLicenseOrExpired(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse VACBanned
    static constexpr const int VACBanned = 3;
    // Get static field: static public Steamworks.AuthResponse VACBanned
    static ::Steamworks::AuthResponse _get_VACBanned();
    // Set static field: static public Steamworks.AuthResponse VACBanned
    static void _set_VACBanned(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse LoggedInElseWhere
    static constexpr const int LoggedInElseWhere = 4;
    // Get static field: static public Steamworks.AuthResponse LoggedInElseWhere
    static ::Steamworks::AuthResponse _get_LoggedInElseWhere();
    // Set static field: static public Steamworks.AuthResponse LoggedInElseWhere
    static void _set_LoggedInElseWhere(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse VACCheckTimedOut
    static constexpr const int VACCheckTimedOut = 5;
    // Get static field: static public Steamworks.AuthResponse VACCheckTimedOut
    static ::Steamworks::AuthResponse _get_VACCheckTimedOut();
    // Set static field: static public Steamworks.AuthResponse VACCheckTimedOut
    static void _set_VACCheckTimedOut(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse AuthTicketCanceled
    static constexpr const int AuthTicketCanceled = 6;
    // Get static field: static public Steamworks.AuthResponse AuthTicketCanceled
    static ::Steamworks::AuthResponse _get_AuthTicketCanceled();
    // Set static field: static public Steamworks.AuthResponse AuthTicketCanceled
    static void _set_AuthTicketCanceled(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse AuthTicketInvalidAlreadyUsed
    static constexpr const int AuthTicketInvalidAlreadyUsed = 7;
    // Get static field: static public Steamworks.AuthResponse AuthTicketInvalidAlreadyUsed
    static ::Steamworks::AuthResponse _get_AuthTicketInvalidAlreadyUsed();
    // Set static field: static public Steamworks.AuthResponse AuthTicketInvalidAlreadyUsed
    static void _set_AuthTicketInvalidAlreadyUsed(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse AuthTicketInvalid
    static constexpr const int AuthTicketInvalid = 8;
    // Get static field: static public Steamworks.AuthResponse AuthTicketInvalid
    static ::Steamworks::AuthResponse _get_AuthTicketInvalid();
    // Set static field: static public Steamworks.AuthResponse AuthTicketInvalid
    static void _set_AuthTicketInvalid(::Steamworks::AuthResponse value);
    // static field const value: static public Steamworks.AuthResponse PublisherIssuedBan
    static constexpr const int PublisherIssuedBan = 9;
    // Get static field: static public Steamworks.AuthResponse PublisherIssuedBan
    static ::Steamworks::AuthResponse _get_PublisherIssuedBan();
    // Set static field: static public Steamworks.AuthResponse PublisherIssuedBan
    static void _set_PublisherIssuedBan(::Steamworks::AuthResponse value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.AuthResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthResponse), 0 + sizeof(int)> __Steamworks_AuthResponseSizeCheck;
  static_assert(sizeof(AuthResponse) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

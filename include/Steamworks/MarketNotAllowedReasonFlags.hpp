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
  // Forward declaring type: MarketNotAllowedReasonFlags
  struct MarketNotAllowedReasonFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::MarketNotAllowedReasonFlags, "Steamworks", "MarketNotAllowedReasonFlags");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.MarketNotAllowedReasonFlags
  // [TokenAttribute] Offset: FFFFFFFF
  struct MarketNotAllowedReasonFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MarketNotAllowedReasonFlags
    constexpr MarketNotAllowedReasonFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags None
    static constexpr const int None = 0;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags None
    static ::Steamworks::MarketNotAllowedReasonFlags _get_None();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags None
    static void _set_None(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags TemporaryFailure
    static constexpr const int TemporaryFailure = 1;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags TemporaryFailure
    static ::Steamworks::MarketNotAllowedReasonFlags _get_TemporaryFailure();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags TemporaryFailure
    static void _set_TemporaryFailure(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags AccountDisabled
    static constexpr const int AccountDisabled = 2;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags AccountDisabled
    static ::Steamworks::MarketNotAllowedReasonFlags _get_AccountDisabled();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags AccountDisabled
    static void _set_AccountDisabled(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags AccountLockedDown
    static constexpr const int AccountLockedDown = 4;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags AccountLockedDown
    static ::Steamworks::MarketNotAllowedReasonFlags _get_AccountLockedDown();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags AccountLockedDown
    static void _set_AccountLockedDown(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags AccountLimited
    static constexpr const int AccountLimited = 8;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags AccountLimited
    static ::Steamworks::MarketNotAllowedReasonFlags _get_AccountLimited();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags AccountLimited
    static void _set_AccountLimited(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags TradeBanned
    static constexpr const int TradeBanned = 16;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags TradeBanned
    static ::Steamworks::MarketNotAllowedReasonFlags _get_TradeBanned();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags TradeBanned
    static void _set_TradeBanned(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags AccountNotTrusted
    static constexpr const int AccountNotTrusted = 32;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags AccountNotTrusted
    static ::Steamworks::MarketNotAllowedReasonFlags _get_AccountNotTrusted();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags AccountNotTrusted
    static void _set_AccountNotTrusted(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardNotEnabled
    static constexpr const int SteamGuardNotEnabled = 64;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardNotEnabled
    static ::Steamworks::MarketNotAllowedReasonFlags _get_SteamGuardNotEnabled();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardNotEnabled
    static void _set_SteamGuardNotEnabled(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardOnlyRecentlyEnabled
    static constexpr const int SteamGuardOnlyRecentlyEnabled = 128;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardOnlyRecentlyEnabled
    static ::Steamworks::MarketNotAllowedReasonFlags _get_SteamGuardOnlyRecentlyEnabled();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags SteamGuardOnlyRecentlyEnabled
    static void _set_SteamGuardOnlyRecentlyEnabled(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags RecentPasswordReset
    static constexpr const int RecentPasswordReset = 256;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags RecentPasswordReset
    static ::Steamworks::MarketNotAllowedReasonFlags _get_RecentPasswordReset();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags RecentPasswordReset
    static void _set_RecentPasswordReset(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethod
    static constexpr const int NewPaymentMethod = 512;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethod
    static ::Steamworks::MarketNotAllowedReasonFlags _get_NewPaymentMethod();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethod
    static void _set_NewPaymentMethod(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags InvalidCookie
    static constexpr const int InvalidCookie = 1024;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags InvalidCookie
    static ::Steamworks::MarketNotAllowedReasonFlags _get_InvalidCookie();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags InvalidCookie
    static void _set_InvalidCookie(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags UsingNewDevice
    static constexpr const int UsingNewDevice = 2048;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags UsingNewDevice
    static ::Steamworks::MarketNotAllowedReasonFlags _get_UsingNewDevice();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags UsingNewDevice
    static void _set_UsingNewDevice(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags RecentSelfRefund
    static constexpr const int RecentSelfRefund = 4096;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags RecentSelfRefund
    static ::Steamworks::MarketNotAllowedReasonFlags _get_RecentSelfRefund();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags RecentSelfRefund
    static void _set_RecentSelfRefund(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethodCannotBeVerified
    static constexpr const int NewPaymentMethodCannotBeVerified = 8192;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethodCannotBeVerified
    static ::Steamworks::MarketNotAllowedReasonFlags _get_NewPaymentMethodCannotBeVerified();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags NewPaymentMethodCannotBeVerified
    static void _set_NewPaymentMethodCannotBeVerified(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags NoRecentPurchases
    static constexpr const int NoRecentPurchases = 16384;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags NoRecentPurchases
    static ::Steamworks::MarketNotAllowedReasonFlags _get_NoRecentPurchases();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags NoRecentPurchases
    static void _set_NoRecentPurchases(::Steamworks::MarketNotAllowedReasonFlags value);
    // static field const value: static public Steamworks.MarketNotAllowedReasonFlags AcceptedWalletGift
    static constexpr const int AcceptedWalletGift = 32768;
    // Get static field: static public Steamworks.MarketNotAllowedReasonFlags AcceptedWalletGift
    static ::Steamworks::MarketNotAllowedReasonFlags _get_AcceptedWalletGift();
    // Set static field: static public Steamworks.MarketNotAllowedReasonFlags AcceptedWalletGift
    static void _set_AcceptedWalletGift(::Steamworks::MarketNotAllowedReasonFlags value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Steamworks.MarketNotAllowedReasonFlags
  #pragma pack(pop)
  static check_size<sizeof(MarketNotAllowedReasonFlags), 0 + sizeof(int)> __Steamworks_MarketNotAllowedReasonFlagsSizeCheck;
  static_assert(sizeof(MarketNotAllowedReasonFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

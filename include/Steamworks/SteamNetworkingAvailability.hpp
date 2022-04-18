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
  // Forward declaring type: SteamNetworkingAvailability
  struct SteamNetworkingAvailability;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::SteamNetworkingAvailability, "Steamworks", "SteamNetworkingAvailability");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.SteamNetworkingAvailability
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamNetworkingAvailability/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SteamNetworkingAvailability
    constexpr SteamNetworkingAvailability(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.SteamNetworkingAvailability CannotTry
    static constexpr const int CannotTry = -102;
    // Get static field: static public Steamworks.SteamNetworkingAvailability CannotTry
    static ::Steamworks::SteamNetworkingAvailability _get_CannotTry();
    // Set static field: static public Steamworks.SteamNetworkingAvailability CannotTry
    static void _set_CannotTry(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Failed
    static constexpr const int Failed = -101;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Failed
    static ::Steamworks::SteamNetworkingAvailability _get_Failed();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Failed
    static void _set_Failed(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Previously
    static constexpr const int Previously = -100;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Previously
    static ::Steamworks::SteamNetworkingAvailability _get_Previously();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Previously
    static void _set_Previously(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Retrying
    static constexpr const int Retrying = -10;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Retrying
    static ::Steamworks::SteamNetworkingAvailability _get_Retrying();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Retrying
    static void _set_Retrying(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability NeverTried
    static constexpr const int NeverTried = 1;
    // Get static field: static public Steamworks.SteamNetworkingAvailability NeverTried
    static ::Steamworks::SteamNetworkingAvailability _get_NeverTried();
    // Set static field: static public Steamworks.SteamNetworkingAvailability NeverTried
    static void _set_NeverTried(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Waiting
    static constexpr const int Waiting = 2;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Waiting
    static ::Steamworks::SteamNetworkingAvailability _get_Waiting();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Waiting
    static void _set_Waiting(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Attempting
    static constexpr const int Attempting = 3;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Attempting
    static ::Steamworks::SteamNetworkingAvailability _get_Attempting();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Attempting
    static void _set_Attempting(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Current
    static constexpr const int Current = 100;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Current
    static ::Steamworks::SteamNetworkingAvailability _get_Current();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Current
    static void _set_Current(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Unknown
    static ::Steamworks::SteamNetworkingAvailability _get_Unknown();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Unknown
    static void _set_Unknown(::Steamworks::SteamNetworkingAvailability value);
    // static field const value: static public Steamworks.SteamNetworkingAvailability Force32bit
    static constexpr const int Force32bit = 2147483647;
    // Get static field: static public Steamworks.SteamNetworkingAvailability Force32bit
    static ::Steamworks::SteamNetworkingAvailability _get_Force32bit();
    // Set static field: static public Steamworks.SteamNetworkingAvailability Force32bit
    static void _set_Force32bit(::Steamworks::SteamNetworkingAvailability value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.SteamNetworkingAvailability
  #pragma pack(pop)
  static check_size<sizeof(SteamNetworkingAvailability), 0 + sizeof(int)> __Steamworks_SteamNetworkingAvailabilitySizeCheck;
  static_assert(sizeof(SteamNetworkingAvailability) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
  // Forward declaring type: P2PSessionError
  struct P2PSessionError;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::P2PSessionError, "Steamworks", "P2PSessionError");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.P2PSessionError
  // [TokenAttribute] Offset: FFFFFFFF
  struct P2PSessionError/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: P2PSessionError
    constexpr P2PSessionError(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.P2PSessionError None
    static constexpr const int None = 0;
    // Get static field: static public Steamworks.P2PSessionError None
    static ::Steamworks::P2PSessionError _get_None();
    // Set static field: static public Steamworks.P2PSessionError None
    static void _set_None(::Steamworks::P2PSessionError value);
    // static field const value: static public Steamworks.P2PSessionError NotRunningApp
    static constexpr const int NotRunningApp = 1;
    // Get static field: static public Steamworks.P2PSessionError NotRunningApp
    static ::Steamworks::P2PSessionError _get_NotRunningApp();
    // Set static field: static public Steamworks.P2PSessionError NotRunningApp
    static void _set_NotRunningApp(::Steamworks::P2PSessionError value);
    // static field const value: static public Steamworks.P2PSessionError NoRightsToApp
    static constexpr const int NoRightsToApp = 2;
    // Get static field: static public Steamworks.P2PSessionError NoRightsToApp
    static ::Steamworks::P2PSessionError _get_NoRightsToApp();
    // Set static field: static public Steamworks.P2PSessionError NoRightsToApp
    static void _set_NoRightsToApp(::Steamworks::P2PSessionError value);
    // static field const value: static public Steamworks.P2PSessionError DestinationNotLoggedIn
    static constexpr const int DestinationNotLoggedIn = 3;
    // Get static field: static public Steamworks.P2PSessionError DestinationNotLoggedIn
    static ::Steamworks::P2PSessionError _get_DestinationNotLoggedIn();
    // Set static field: static public Steamworks.P2PSessionError DestinationNotLoggedIn
    static void _set_DestinationNotLoggedIn(::Steamworks::P2PSessionError value);
    // static field const value: static public Steamworks.P2PSessionError Timeout
    static constexpr const int Timeout = 4;
    // Get static field: static public Steamworks.P2PSessionError Timeout
    static ::Steamworks::P2PSessionError _get_Timeout();
    // Set static field: static public Steamworks.P2PSessionError Timeout
    static void _set_Timeout(::Steamworks::P2PSessionError value);
    // static field const value: static public Steamworks.P2PSessionError Max
    static constexpr const int Max = 5;
    // Get static field: static public Steamworks.P2PSessionError Max
    static ::Steamworks::P2PSessionError _get_Max();
    // Set static field: static public Steamworks.P2PSessionError Max
    static void _set_Max(::Steamworks::P2PSessionError value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Steamworks.P2PSessionError
  #pragma pack(pop)
  static check_size<sizeof(P2PSessionError), 0 + sizeof(int)> __Steamworks_P2PSessionErrorSizeCheck;
  static_assert(sizeof(P2PSessionError) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

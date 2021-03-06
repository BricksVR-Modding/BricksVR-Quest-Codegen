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
  // Forward declaring type: ConnectionState
  struct ConnectionState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::ConnectionState, "Steamworks", "ConnectionState");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.ConnectionState
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConnectionState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConnectionState
    constexpr ConnectionState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.ConnectionState None
    static constexpr const int None = 0;
    // Get static field: static public Steamworks.ConnectionState None
    static ::Steamworks::ConnectionState _get_None();
    // Set static field: static public Steamworks.ConnectionState None
    static void _set_None(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState Connecting
    static constexpr const int Connecting = 1;
    // Get static field: static public Steamworks.ConnectionState Connecting
    static ::Steamworks::ConnectionState _get_Connecting();
    // Set static field: static public Steamworks.ConnectionState Connecting
    static void _set_Connecting(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState FindingRoute
    static constexpr const int FindingRoute = 2;
    // Get static field: static public Steamworks.ConnectionState FindingRoute
    static ::Steamworks::ConnectionState _get_FindingRoute();
    // Set static field: static public Steamworks.ConnectionState FindingRoute
    static void _set_FindingRoute(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState Connected
    static constexpr const int Connected = 3;
    // Get static field: static public Steamworks.ConnectionState Connected
    static ::Steamworks::ConnectionState _get_Connected();
    // Set static field: static public Steamworks.ConnectionState Connected
    static void _set_Connected(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState ClosedByPeer
    static constexpr const int ClosedByPeer = 4;
    // Get static field: static public Steamworks.ConnectionState ClosedByPeer
    static ::Steamworks::ConnectionState _get_ClosedByPeer();
    // Set static field: static public Steamworks.ConnectionState ClosedByPeer
    static void _set_ClosedByPeer(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState ProblemDetectedLocally
    static constexpr const int ProblemDetectedLocally = 5;
    // Get static field: static public Steamworks.ConnectionState ProblemDetectedLocally
    static ::Steamworks::ConnectionState _get_ProblemDetectedLocally();
    // Set static field: static public Steamworks.ConnectionState ProblemDetectedLocally
    static void _set_ProblemDetectedLocally(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState FinWait
    static constexpr const int FinWait = -1;
    // Get static field: static public Steamworks.ConnectionState FinWait
    static ::Steamworks::ConnectionState _get_FinWait();
    // Set static field: static public Steamworks.ConnectionState FinWait
    static void _set_FinWait(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState Linger
    static constexpr const int Linger = -2;
    // Get static field: static public Steamworks.ConnectionState Linger
    static ::Steamworks::ConnectionState _get_Linger();
    // Set static field: static public Steamworks.ConnectionState Linger
    static void _set_Linger(::Steamworks::ConnectionState value);
    // static field const value: static public Steamworks.ConnectionState Dead
    static constexpr const int Dead = -3;
    // Get static field: static public Steamworks.ConnectionState Dead
    static ::Steamworks::ConnectionState _get_Dead();
    // Set static field: static public Steamworks.ConnectionState Dead
    static void _set_Dead(::Steamworks::ConnectionState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.ConnectionState
  #pragma pack(pop)
  static check_size<sizeof(ConnectionState), 0 + sizeof(int)> __Steamworks_ConnectionStateSizeCheck;
  static_assert(sizeof(ConnectionState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

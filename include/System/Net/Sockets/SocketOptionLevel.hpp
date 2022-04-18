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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Forward declaring type: SocketOptionLevel
  struct SocketOptionLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SocketOptionLevel, "System.Net.Sockets", "SocketOptionLevel");
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.Sockets.SocketOptionLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct SocketOptionLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SocketOptionLevel
    constexpr SocketOptionLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Socket
    static constexpr const int Socket = 65535;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Socket
    static ::System::Net::Sockets::SocketOptionLevel _get_Socket();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Socket
    static void _set_Socket(::System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel IP
    static constexpr const int IP = 0;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel IP
    static ::System::Net::Sockets::SocketOptionLevel _get_IP();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel IP
    static void _set_IP(::System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel IPv6
    static constexpr const int IPv6 = 41;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel IPv6
    static ::System::Net::Sockets::SocketOptionLevel _get_IPv6();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel IPv6
    static void _set_IPv6(::System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Tcp
    static constexpr const int Tcp = 6;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Tcp
    static ::System::Net::Sockets::SocketOptionLevel _get_Tcp();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Tcp
    static void _set_Tcp(::System::Net::Sockets::SocketOptionLevel value);
    // static field const value: static public System.Net.Sockets.SocketOptionLevel Udp
    static constexpr const int Udp = 17;
    // Get static field: static public System.Net.Sockets.SocketOptionLevel Udp
    static ::System::Net::Sockets::SocketOptionLevel _get_Udp();
    // Set static field: static public System.Net.Sockets.SocketOptionLevel Udp
    static void _set_Udp(::System::Net::Sockets::SocketOptionLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.Sockets.SocketOptionLevel
  #pragma pack(pop)
  static check_size<sizeof(SocketOptionLevel), 0 + sizeof(int)> __System_Net_Sockets_SocketOptionLevelSizeCheck;
  static_assert(sizeof(SocketOptionLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
  // Forward declaring type: NetDebugOutput
  struct NetDebugOutput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::NetDebugOutput, "Steamworks", "NetDebugOutput");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.NetDebugOutput
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetDebugOutput/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetDebugOutput
    constexpr NetDebugOutput(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.NetDebugOutput None
    static constexpr const int None = 0;
    // Get static field: static public Steamworks.NetDebugOutput None
    static ::Steamworks::NetDebugOutput _get_None();
    // Set static field: static public Steamworks.NetDebugOutput None
    static void _set_None(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Bug
    static constexpr const int Bug = 1;
    // Get static field: static public Steamworks.NetDebugOutput Bug
    static ::Steamworks::NetDebugOutput _get_Bug();
    // Set static field: static public Steamworks.NetDebugOutput Bug
    static void _set_Bug(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Error
    static constexpr const int Error = 2;
    // Get static field: static public Steamworks.NetDebugOutput Error
    static ::Steamworks::NetDebugOutput _get_Error();
    // Set static field: static public Steamworks.NetDebugOutput Error
    static void _set_Error(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Important
    static constexpr const int Important = 3;
    // Get static field: static public Steamworks.NetDebugOutput Important
    static ::Steamworks::NetDebugOutput _get_Important();
    // Set static field: static public Steamworks.NetDebugOutput Important
    static void _set_Important(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Warning
    static constexpr const int Warning = 4;
    // Get static field: static public Steamworks.NetDebugOutput Warning
    static ::Steamworks::NetDebugOutput _get_Warning();
    // Set static field: static public Steamworks.NetDebugOutput Warning
    static void _set_Warning(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Msg
    static constexpr const int Msg = 5;
    // Get static field: static public Steamworks.NetDebugOutput Msg
    static ::Steamworks::NetDebugOutput _get_Msg();
    // Set static field: static public Steamworks.NetDebugOutput Msg
    static void _set_Msg(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Verbose
    static constexpr const int Verbose = 6;
    // Get static field: static public Steamworks.NetDebugOutput Verbose
    static ::Steamworks::NetDebugOutput _get_Verbose();
    // Set static field: static public Steamworks.NetDebugOutput Verbose
    static void _set_Verbose(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Debug
    static constexpr const int Debug = 7;
    // Get static field: static public Steamworks.NetDebugOutput Debug
    static ::Steamworks::NetDebugOutput _get_Debug();
    // Set static field: static public Steamworks.NetDebugOutput Debug
    static void _set_Debug(::Steamworks::NetDebugOutput value);
    // static field const value: static public Steamworks.NetDebugOutput Everything
    static constexpr const int Everything = 8;
    // Get static field: static public Steamworks.NetDebugOutput Everything
    static ::Steamworks::NetDebugOutput _get_Everything();
    // Set static field: static public Steamworks.NetDebugOutput Everything
    static void _set_Everything(::Steamworks::NetDebugOutput value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Steamworks.NetDebugOutput
  #pragma pack(pop)
  static check_size<sizeof(NetDebugOutput), 0 + sizeof(int)> __Steamworks_NetDebugOutputSizeCheck;
  static_assert(sizeof(NetDebugOutput) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

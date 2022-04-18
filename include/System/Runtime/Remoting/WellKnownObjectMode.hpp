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
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: WellKnownObjectMode
  struct WellKnownObjectMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::WellKnownObjectMode, "System.Runtime.Remoting", "WellKnownObjectMode");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.WellKnownObjectMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  struct WellKnownObjectMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WellKnownObjectMode
    constexpr WellKnownObjectMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Remoting.WellKnownObjectMode Singleton
    static constexpr const int Singleton = 1;
    // Get static field: static public System.Runtime.Remoting.WellKnownObjectMode Singleton
    static ::System::Runtime::Remoting::WellKnownObjectMode _get_Singleton();
    // Set static field: static public System.Runtime.Remoting.WellKnownObjectMode Singleton
    static void _set_Singleton(::System::Runtime::Remoting::WellKnownObjectMode value);
    // static field const value: static public System.Runtime.Remoting.WellKnownObjectMode SingleCall
    static constexpr const int SingleCall = 2;
    // Get static field: static public System.Runtime.Remoting.WellKnownObjectMode SingleCall
    static ::System::Runtime::Remoting::WellKnownObjectMode _get_SingleCall();
    // Set static field: static public System.Runtime.Remoting.WellKnownObjectMode SingleCall
    static void _set_SingleCall(::System::Runtime::Remoting::WellKnownObjectMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Runtime.Remoting.WellKnownObjectMode
  #pragma pack(pop)
  static check_size<sizeof(WellKnownObjectMode), 0 + sizeof(int)> __System_Runtime_Remoting_WellKnownObjectModeSizeCheck;
  static_assert(sizeof(WellKnownObjectMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

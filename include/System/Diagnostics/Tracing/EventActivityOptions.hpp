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
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventActivityOptions
  struct EventActivityOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventActivityOptions, "System.Diagnostics.Tracing", "EventActivityOptions");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventActivityOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventActivityOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventActivityOptions
    constexpr EventActivityOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventActivityOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventActivityOptions None
    static ::System::Diagnostics::Tracing::EventActivityOptions _get_None();
    // Set static field: static public System.Diagnostics.Tracing.EventActivityOptions None
    static void _set_None(::System::Diagnostics::Tracing::EventActivityOptions value);
    // static field const value: static public System.Diagnostics.Tracing.EventActivityOptions Disable
    static constexpr const int Disable = 2;
    // Get static field: static public System.Diagnostics.Tracing.EventActivityOptions Disable
    static ::System::Diagnostics::Tracing::EventActivityOptions _get_Disable();
    // Set static field: static public System.Diagnostics.Tracing.EventActivityOptions Disable
    static void _set_Disable(::System::Diagnostics::Tracing::EventActivityOptions value);
    // static field const value: static public System.Diagnostics.Tracing.EventActivityOptions Recursive
    static constexpr const int Recursive = 4;
    // Get static field: static public System.Diagnostics.Tracing.EventActivityOptions Recursive
    static ::System::Diagnostics::Tracing::EventActivityOptions _get_Recursive();
    // Set static field: static public System.Diagnostics.Tracing.EventActivityOptions Recursive
    static void _set_Recursive(::System::Diagnostics::Tracing::EventActivityOptions value);
    // static field const value: static public System.Diagnostics.Tracing.EventActivityOptions Detachable
    static constexpr const int Detachable = 8;
    // Get static field: static public System.Diagnostics.Tracing.EventActivityOptions Detachable
    static ::System::Diagnostics::Tracing::EventActivityOptions _get_Detachable();
    // Set static field: static public System.Diagnostics.Tracing.EventActivityOptions Detachable
    static void _set_Detachable(::System::Diagnostics::Tracing::EventActivityOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.Tracing.EventActivityOptions
  #pragma pack(pop)
  static check_size<sizeof(EventActivityOptions), 0 + sizeof(int)> __System_Diagnostics_Tracing_EventActivityOptionsSizeCheck;
  static_assert(sizeof(EventActivityOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
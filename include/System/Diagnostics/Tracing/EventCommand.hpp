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
  // Forward declaring type: EventCommand
  struct EventCommand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventCommand, "System.Diagnostics.Tracing", "EventCommand");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventCommand
  // [TokenAttribute] Offset: FFFFFFFF
  struct EventCommand/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EventCommand
    constexpr EventCommand(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventCommand Update
    static constexpr const int Update = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventCommand Update
    static ::System::Diagnostics::Tracing::EventCommand _get_Update();
    // Set static field: static public System.Diagnostics.Tracing.EventCommand Update
    static void _set_Update(::System::Diagnostics::Tracing::EventCommand value);
    // static field const value: static public System.Diagnostics.Tracing.EventCommand SendManifest
    static constexpr const int SendManifest = -1;
    // Get static field: static public System.Diagnostics.Tracing.EventCommand SendManifest
    static ::System::Diagnostics::Tracing::EventCommand _get_SendManifest();
    // Set static field: static public System.Diagnostics.Tracing.EventCommand SendManifest
    static void _set_SendManifest(::System::Diagnostics::Tracing::EventCommand value);
    // static field const value: static public System.Diagnostics.Tracing.EventCommand Enable
    static constexpr const int Enable = -2;
    // Get static field: static public System.Diagnostics.Tracing.EventCommand Enable
    static ::System::Diagnostics::Tracing::EventCommand _get_Enable();
    // Set static field: static public System.Diagnostics.Tracing.EventCommand Enable
    static void _set_Enable(::System::Diagnostics::Tracing::EventCommand value);
    // static field const value: static public System.Diagnostics.Tracing.EventCommand Disable
    static constexpr const int Disable = -3;
    // Get static field: static public System.Diagnostics.Tracing.EventCommand Disable
    static ::System::Diagnostics::Tracing::EventCommand _get_Disable();
    // Set static field: static public System.Diagnostics.Tracing.EventCommand Disable
    static void _set_Disable(::System::Diagnostics::Tracing::EventCommand value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Diagnostics.Tracing.EventCommand
  #pragma pack(pop)
  static check_size<sizeof(EventCommand), 0 + sizeof(int)> __System_Diagnostics_Tracing_EventCommandSizeCheck;
  static_assert(sizeof(EventCommand) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
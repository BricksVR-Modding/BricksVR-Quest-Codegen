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
  // Forward declaring type: EventKeywords
  struct EventKeywords;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventKeywords, "System.Diagnostics.Tracing", "EventKeywords");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x8
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventKeywords
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventKeywords/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int64 value__
    // Size: 0x8
    // Offset: 0x0
    int64_t value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: EventKeywords
    constexpr EventKeywords(int64_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int64_t
    constexpr operator int64_t() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords None
    static constexpr const int64_t None = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords None
    static ::System::Diagnostics::Tracing::EventKeywords _get_None();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords None
    static void _set_None(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords All
    static constexpr const int64_t All = -1;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords All
    static ::System::Diagnostics::Tracing::EventKeywords _get_All();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords All
    static void _set_All(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords MicrosoftTelemetry
    static constexpr const int64_t MicrosoftTelemetry = 562949953421312;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords MicrosoftTelemetry
    static ::System::Diagnostics::Tracing::EventKeywords _get_MicrosoftTelemetry();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords MicrosoftTelemetry
    static void _set_MicrosoftTelemetry(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords WdiContext
    static constexpr const int64_t WdiContext = 562949953421312;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords WdiContext
    static ::System::Diagnostics::Tracing::EventKeywords _get_WdiContext();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords WdiContext
    static void _set_WdiContext(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords WdiDiagnostic
    static constexpr const int64_t WdiDiagnostic = 1125899906842624;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords WdiDiagnostic
    static ::System::Diagnostics::Tracing::EventKeywords _get_WdiDiagnostic();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords WdiDiagnostic
    static void _set_WdiDiagnostic(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords Sqm
    static constexpr const int64_t Sqm = 2251799813685248;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords Sqm
    static ::System::Diagnostics::Tracing::EventKeywords _get_Sqm();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords Sqm
    static void _set_Sqm(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords AuditFailure
    static constexpr const int64_t AuditFailure = 4503599627370496;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords AuditFailure
    static ::System::Diagnostics::Tracing::EventKeywords _get_AuditFailure();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords AuditFailure
    static void _set_AuditFailure(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords AuditSuccess
    static constexpr const int64_t AuditSuccess = 9007199254740992;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords AuditSuccess
    static ::System::Diagnostics::Tracing::EventKeywords _get_AuditSuccess();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords AuditSuccess
    static void _set_AuditSuccess(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords CorrelationHint
    static constexpr const int64_t CorrelationHint = 4503599627370496;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords CorrelationHint
    static ::System::Diagnostics::Tracing::EventKeywords _get_CorrelationHint();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords CorrelationHint
    static void _set_CorrelationHint(::System::Diagnostics::Tracing::EventKeywords value);
    // static field const value: static public System.Diagnostics.Tracing.EventKeywords EventLogClassic
    static constexpr const int64_t EventLogClassic = 36028797018963968;
    // Get static field: static public System.Diagnostics.Tracing.EventKeywords EventLogClassic
    static ::System::Diagnostics::Tracing::EventKeywords _get_EventLogClassic();
    // Set static field: static public System.Diagnostics.Tracing.EventKeywords EventLogClassic
    static void _set_EventLogClassic(::System::Diagnostics::Tracing::EventKeywords value);
    // Get instance field reference: public System.Int64 value__
    [[deprecated("Use field access instead!")]] int64_t& dyn_value__();
  }; // System.Diagnostics.Tracing.EventKeywords
  #pragma pack(pop)
  static check_size<sizeof(EventKeywords), 0 + sizeof(int64_t)> __System_Diagnostics_Tracing_EventKeywordsSizeCheck;
  static_assert(sizeof(EventKeywords) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
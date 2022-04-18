// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Uri
#include "System/Uri.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Uri::Check, "System", "Uri/Check");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Uri/System.Check
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct Uri::Check/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Check
    constexpr Check(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Uri/System.Check None
    static constexpr const int None = 0;
    // Get static field: static public System.Uri/System.Check None
    static ::System::Uri::Check _get_None();
    // Set static field: static public System.Uri/System.Check None
    static void _set_None(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check EscapedCanonical
    static constexpr const int EscapedCanonical = 1;
    // Get static field: static public System.Uri/System.Check EscapedCanonical
    static ::System::Uri::Check _get_EscapedCanonical();
    // Set static field: static public System.Uri/System.Check EscapedCanonical
    static void _set_EscapedCanonical(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check DisplayCanonical
    static constexpr const int DisplayCanonical = 2;
    // Get static field: static public System.Uri/System.Check DisplayCanonical
    static ::System::Uri::Check _get_DisplayCanonical();
    // Set static field: static public System.Uri/System.Check DisplayCanonical
    static void _set_DisplayCanonical(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check DotSlashAttn
    static constexpr const int DotSlashAttn = 4;
    // Get static field: static public System.Uri/System.Check DotSlashAttn
    static ::System::Uri::Check _get_DotSlashAttn();
    // Set static field: static public System.Uri/System.Check DotSlashAttn
    static void _set_DotSlashAttn(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check DotSlashEscaped
    static constexpr const int DotSlashEscaped = 128;
    // Get static field: static public System.Uri/System.Check DotSlashEscaped
    static ::System::Uri::Check _get_DotSlashEscaped();
    // Set static field: static public System.Uri/System.Check DotSlashEscaped
    static void _set_DotSlashEscaped(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check BackslashInPath
    static constexpr const int BackslashInPath = 16;
    // Get static field: static public System.Uri/System.Check BackslashInPath
    static ::System::Uri::Check _get_BackslashInPath();
    // Set static field: static public System.Uri/System.Check BackslashInPath
    static void _set_BackslashInPath(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check ReservedFound
    static constexpr const int ReservedFound = 32;
    // Get static field: static public System.Uri/System.Check ReservedFound
    static ::System::Uri::Check _get_ReservedFound();
    // Set static field: static public System.Uri/System.Check ReservedFound
    static void _set_ReservedFound(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check NotIriCanonical
    static constexpr const int NotIriCanonical = 64;
    // Get static field: static public System.Uri/System.Check NotIriCanonical
    static ::System::Uri::Check _get_NotIriCanonical();
    // Set static field: static public System.Uri/System.Check NotIriCanonical
    static void _set_NotIriCanonical(::System::Uri::Check value);
    // static field const value: static public System.Uri/System.Check FoundNonAscii
    static constexpr const int FoundNonAscii = 8;
    // Get static field: static public System.Uri/System.Check FoundNonAscii
    static ::System::Uri::Check _get_FoundNonAscii();
    // Set static field: static public System.Uri/System.Check FoundNonAscii
    static void _set_FoundNonAscii(::System::Uri::Check value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Uri/System.Check
  #pragma pack(pop)
  static check_size<sizeof(Uri::Check), 0 + sizeof(int)> __System_Uri_CheckSizeCheck;
  static_assert(sizeof(Uri::Check) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

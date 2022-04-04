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
// Type namespace: System
namespace System {
  // Forward declaring type: StringComparison
  struct StringComparison;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::StringComparison, "System", "StringComparison");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.StringComparison
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  struct StringComparison/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StringComparison
    constexpr StringComparison(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.StringComparison CurrentCulture
    static constexpr const int CurrentCulture = 0;
    // Get static field: static public System.StringComparison CurrentCulture
    static ::System::StringComparison _get_CurrentCulture();
    // Set static field: static public System.StringComparison CurrentCulture
    static void _set_CurrentCulture(::System::StringComparison value);
    // static field const value: static public System.StringComparison CurrentCultureIgnoreCase
    static constexpr const int CurrentCultureIgnoreCase = 1;
    // Get static field: static public System.StringComparison CurrentCultureIgnoreCase
    static ::System::StringComparison _get_CurrentCultureIgnoreCase();
    // Set static field: static public System.StringComparison CurrentCultureIgnoreCase
    static void _set_CurrentCultureIgnoreCase(::System::StringComparison value);
    // static field const value: static public System.StringComparison InvariantCulture
    static constexpr const int InvariantCulture = 2;
    // Get static field: static public System.StringComparison InvariantCulture
    static ::System::StringComparison _get_InvariantCulture();
    // Set static field: static public System.StringComparison InvariantCulture
    static void _set_InvariantCulture(::System::StringComparison value);
    // static field const value: static public System.StringComparison InvariantCultureIgnoreCase
    static constexpr const int InvariantCultureIgnoreCase = 3;
    // Get static field: static public System.StringComparison InvariantCultureIgnoreCase
    static ::System::StringComparison _get_InvariantCultureIgnoreCase();
    // Set static field: static public System.StringComparison InvariantCultureIgnoreCase
    static void _set_InvariantCultureIgnoreCase(::System::StringComparison value);
    // static field const value: static public System.StringComparison Ordinal
    static constexpr const int Ordinal = 4;
    // Get static field: static public System.StringComparison Ordinal
    static ::System::StringComparison _get_Ordinal();
    // Set static field: static public System.StringComparison Ordinal
    static void _set_Ordinal(::System::StringComparison value);
    // static field const value: static public System.StringComparison OrdinalIgnoreCase
    static constexpr const int OrdinalIgnoreCase = 5;
    // Get static field: static public System.StringComparison OrdinalIgnoreCase
    static ::System::StringComparison _get_OrdinalIgnoreCase();
    // Set static field: static public System.StringComparison OrdinalIgnoreCase
    static void _set_OrdinalIgnoreCase(::System::StringComparison value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.StringComparison
  #pragma pack(pop)
  static check_size<sizeof(StringComparison), 0 + sizeof(int)> __System_StringComparisonSizeCheck;
  static_assert(sizeof(StringComparison) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

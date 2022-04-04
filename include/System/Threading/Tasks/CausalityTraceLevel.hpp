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
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: CausalityTraceLevel
  struct CausalityTraceLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::CausalityTraceLevel, "System.Threading.Tasks", "CausalityTraceLevel");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.CausalityTraceLevel
  // [TokenAttribute] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: BB1F0
  struct CausalityTraceLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CausalityTraceLevel
    constexpr CausalityTraceLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.CausalityTraceLevel Required
    static constexpr const int Required = 0;
    // Get static field: static public System.Threading.Tasks.CausalityTraceLevel Required
    static ::System::Threading::Tasks::CausalityTraceLevel _get_Required();
    // Set static field: static public System.Threading.Tasks.CausalityTraceLevel Required
    static void _set_Required(::System::Threading::Tasks::CausalityTraceLevel value);
    // static field const value: static public System.Threading.Tasks.CausalityTraceLevel Important
    static constexpr const int Important = 1;
    // Get static field: static public System.Threading.Tasks.CausalityTraceLevel Important
    static ::System::Threading::Tasks::CausalityTraceLevel _get_Important();
    // Set static field: static public System.Threading.Tasks.CausalityTraceLevel Important
    static void _set_Important(::System::Threading::Tasks::CausalityTraceLevel value);
    // static field const value: static public System.Threading.Tasks.CausalityTraceLevel Verbose
    static constexpr const int Verbose = 2;
    // Get static field: static public System.Threading.Tasks.CausalityTraceLevel Verbose
    static ::System::Threading::Tasks::CausalityTraceLevel _get_Verbose();
    // Set static field: static public System.Threading.Tasks.CausalityTraceLevel Verbose
    static void _set_Verbose(::System::Threading::Tasks::CausalityTraceLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Threading.Tasks.CausalityTraceLevel
  #pragma pack(pop)
  static check_size<sizeof(CausalityTraceLevel), 0 + sizeof(int)> __System_Threading_Tasks_CausalityTraceLevelSizeCheck;
  static_assert(sizeof(CausalityTraceLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

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
  // Forward declaring type: UriIdnScope
  struct UriIdnScope;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UriIdnScope, "System", "UriIdnScope");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriIdnScope
  // [TokenAttribute] Offset: FFFFFFFF
  struct UriIdnScope/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UriIdnScope
    constexpr UriIdnScope(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriIdnScope None
    static constexpr const int None = 0;
    // Get static field: static public System.UriIdnScope None
    static ::System::UriIdnScope _get_None();
    // Set static field: static public System.UriIdnScope None
    static void _set_None(::System::UriIdnScope value);
    // static field const value: static public System.UriIdnScope AllExceptIntranet
    static constexpr const int AllExceptIntranet = 1;
    // Get static field: static public System.UriIdnScope AllExceptIntranet
    static ::System::UriIdnScope _get_AllExceptIntranet();
    // Set static field: static public System.UriIdnScope AllExceptIntranet
    static void _set_AllExceptIntranet(::System::UriIdnScope value);
    // static field const value: static public System.UriIdnScope All
    static constexpr const int All = 2;
    // Get static field: static public System.UriIdnScope All
    static ::System::UriIdnScope _get_All();
    // Set static field: static public System.UriIdnScope All
    static void _set_All(::System::UriIdnScope value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UriIdnScope
  #pragma pack(pop)
  static check_size<sizeof(UriIdnScope), 0 + sizeof(int)> __System_UriIdnScopeSizeCheck;
  static_assert(sizeof(UriIdnScope) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

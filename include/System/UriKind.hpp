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
  // Forward declaring type: UriKind
  struct UriKind;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::UriKind, "System", "UriKind");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.UriKind
  // [TokenAttribute] Offset: FFFFFFFF
  struct UriKind/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UriKind
    constexpr UriKind(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.UriKind RelativeOrAbsolute
    static constexpr const int RelativeOrAbsolute = 0;
    // Get static field: static public System.UriKind RelativeOrAbsolute
    static ::System::UriKind _get_RelativeOrAbsolute();
    // Set static field: static public System.UriKind RelativeOrAbsolute
    static void _set_RelativeOrAbsolute(::System::UriKind value);
    // static field const value: static public System.UriKind Absolute
    static constexpr const int Absolute = 1;
    // Get static field: static public System.UriKind Absolute
    static ::System::UriKind _get_Absolute();
    // Set static field: static public System.UriKind Absolute
    static void _set_Absolute(::System::UriKind value);
    // static field const value: static public System.UriKind Relative
    static constexpr const int Relative = 2;
    // Get static field: static public System.UriKind Relative
    static ::System::UriKind _get_Relative();
    // Set static field: static public System.UriKind Relative
    static void _set_Relative(::System::UriKind value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.UriKind
  #pragma pack(pop)
  static check_size<sizeof(UriKind), 0 + sizeof(int)> __System_UriKindSizeCheck;
  static_assert(sizeof(UriKind) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

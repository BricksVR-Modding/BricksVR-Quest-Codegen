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
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Forward declaring type: RegistryValueOptions
  struct RegistryValueOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::RegistryValueOptions, "Microsoft.Win32", "RegistryValueOptions");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.RegistryValueOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: BB1F0
  struct RegistryValueOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RegistryValueOptions
    constexpr RegistryValueOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Microsoft.Win32.RegistryValueOptions None
    static constexpr const int None = 0;
    // Get static field: static public Microsoft.Win32.RegistryValueOptions None
    static ::Microsoft::Win32::RegistryValueOptions _get_None();
    // Set static field: static public Microsoft.Win32.RegistryValueOptions None
    static void _set_None(::Microsoft::Win32::RegistryValueOptions value);
    // static field const value: static public Microsoft.Win32.RegistryValueOptions DoNotExpandEnvironmentNames
    static constexpr const int DoNotExpandEnvironmentNames = 1;
    // Get static field: static public Microsoft.Win32.RegistryValueOptions DoNotExpandEnvironmentNames
    static ::Microsoft::Win32::RegistryValueOptions _get_DoNotExpandEnvironmentNames();
    // Set static field: static public Microsoft.Win32.RegistryValueOptions DoNotExpandEnvironmentNames
    static void _set_DoNotExpandEnvironmentNames(::Microsoft::Win32::RegistryValueOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Microsoft.Win32.RegistryValueOptions
  #pragma pack(pop)
  static check_size<sizeof(RegistryValueOptions), 0 + sizeof(int)> __Microsoft_Win32_RegistryValueOptionsSizeCheck;
  static_assert(sizeof(RegistryValueOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

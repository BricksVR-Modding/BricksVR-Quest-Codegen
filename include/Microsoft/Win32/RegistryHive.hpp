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
  // Forward declaring type: RegistryHive
  struct RegistryHive;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::RegistryHive, "Microsoft.Win32", "RegistryHive");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.RegistryHive
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C6290
  struct RegistryHive/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RegistryHive
    constexpr RegistryHive(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Microsoft.Win32.RegistryHive ClassesRoot
    static constexpr const int ClassesRoot = -2147483648;
    // Get static field: static public Microsoft.Win32.RegistryHive ClassesRoot
    static ::Microsoft::Win32::RegistryHive _get_ClassesRoot();
    // Set static field: static public Microsoft.Win32.RegistryHive ClassesRoot
    static void _set_ClassesRoot(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive CurrentConfig
    static constexpr const int CurrentConfig = -2147483643;
    // Get static field: static public Microsoft.Win32.RegistryHive CurrentConfig
    static ::Microsoft::Win32::RegistryHive _get_CurrentConfig();
    // Set static field: static public Microsoft.Win32.RegistryHive CurrentConfig
    static void _set_CurrentConfig(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive CurrentUser
    static constexpr const int CurrentUser = -2147483647;
    // Get static field: static public Microsoft.Win32.RegistryHive CurrentUser
    static ::Microsoft::Win32::RegistryHive _get_CurrentUser();
    // Set static field: static public Microsoft.Win32.RegistryHive CurrentUser
    static void _set_CurrentUser(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive DynData
    static constexpr const int DynData = -2147483642;
    // Get static field: static public Microsoft.Win32.RegistryHive DynData
    static ::Microsoft::Win32::RegistryHive _get_DynData();
    // Set static field: static public Microsoft.Win32.RegistryHive DynData
    static void _set_DynData(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive LocalMachine
    static constexpr const int LocalMachine = -2147483646;
    // Get static field: static public Microsoft.Win32.RegistryHive LocalMachine
    static ::Microsoft::Win32::RegistryHive _get_LocalMachine();
    // Set static field: static public Microsoft.Win32.RegistryHive LocalMachine
    static void _set_LocalMachine(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive PerformanceData
    static constexpr const int PerformanceData = -2147483644;
    // Get static field: static public Microsoft.Win32.RegistryHive PerformanceData
    static ::Microsoft::Win32::RegistryHive _get_PerformanceData();
    // Set static field: static public Microsoft.Win32.RegistryHive PerformanceData
    static void _set_PerformanceData(::Microsoft::Win32::RegistryHive value);
    // static field const value: static public Microsoft.Win32.RegistryHive Users
    static constexpr const int Users = -2147483645;
    // Get static field: static public Microsoft.Win32.RegistryHive Users
    static ::Microsoft::Win32::RegistryHive _get_Users();
    // Set static field: static public Microsoft.Win32.RegistryHive Users
    static void _set_Users(::Microsoft::Win32::RegistryHive value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Microsoft.Win32.RegistryHive
  #pragma pack(pop)
  static check_size<sizeof(RegistryHive), 0 + sizeof(int)> __Microsoft_Win32_RegistryHiveSizeCheck;
  static_assert(sizeof(RegistryHive) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

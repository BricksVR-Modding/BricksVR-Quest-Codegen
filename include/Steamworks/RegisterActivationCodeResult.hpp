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
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: RegisterActivationCodeResult
  struct RegisterActivationCodeResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::RegisterActivationCodeResult, "Steamworks", "RegisterActivationCodeResult");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.RegisterActivationCodeResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct RegisterActivationCodeResult/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RegisterActivationCodeResult
    constexpr RegisterActivationCodeResult(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.RegisterActivationCodeResult ResultOK
    static constexpr const int ResultOK = 0;
    // Get static field: static public Steamworks.RegisterActivationCodeResult ResultOK
    static ::Steamworks::RegisterActivationCodeResult _get_ResultOK();
    // Set static field: static public Steamworks.RegisterActivationCodeResult ResultOK
    static void _set_ResultOK(::Steamworks::RegisterActivationCodeResult value);
    // static field const value: static public Steamworks.RegisterActivationCodeResult ResultFail
    static constexpr const int ResultFail = 1;
    // Get static field: static public Steamworks.RegisterActivationCodeResult ResultFail
    static ::Steamworks::RegisterActivationCodeResult _get_ResultFail();
    // Set static field: static public Steamworks.RegisterActivationCodeResult ResultFail
    static void _set_ResultFail(::Steamworks::RegisterActivationCodeResult value);
    // static field const value: static public Steamworks.RegisterActivationCodeResult ResultAlreadyRegistered
    static constexpr const int ResultAlreadyRegistered = 2;
    // Get static field: static public Steamworks.RegisterActivationCodeResult ResultAlreadyRegistered
    static ::Steamworks::RegisterActivationCodeResult _get_ResultAlreadyRegistered();
    // Set static field: static public Steamworks.RegisterActivationCodeResult ResultAlreadyRegistered
    static void _set_ResultAlreadyRegistered(::Steamworks::RegisterActivationCodeResult value);
    // static field const value: static public Steamworks.RegisterActivationCodeResult ResultTimeout
    static constexpr const int ResultTimeout = 3;
    // Get static field: static public Steamworks.RegisterActivationCodeResult ResultTimeout
    static ::Steamworks::RegisterActivationCodeResult _get_ResultTimeout();
    // Set static field: static public Steamworks.RegisterActivationCodeResult ResultTimeout
    static void _set_ResultTimeout(::Steamworks::RegisterActivationCodeResult value);
    // static field const value: static public Steamworks.RegisterActivationCodeResult AlreadyOwned
    static constexpr const int AlreadyOwned = 4;
    // Get static field: static public Steamworks.RegisterActivationCodeResult AlreadyOwned
    static ::Steamworks::RegisterActivationCodeResult _get_AlreadyOwned();
    // Set static field: static public Steamworks.RegisterActivationCodeResult AlreadyOwned
    static void _set_AlreadyOwned(::Steamworks::RegisterActivationCodeResult value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Steamworks.RegisterActivationCodeResult
  #pragma pack(pop)
  static check_size<sizeof(RegisterActivationCodeResult), 0 + sizeof(int)> __Steamworks_RegisterActivationCodeResultSizeCheck;
  static_assert(sizeof(RegisterActivationCodeResult) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

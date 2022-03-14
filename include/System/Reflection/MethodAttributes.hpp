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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodAttributes, "System.Reflection", "MethodAttributes");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MethodAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 6C809C
  struct MethodAttributes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MethodAttributes
    constexpr MethodAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.MethodAttributes MemberAccessMask
    static constexpr const int MemberAccessMask = 7;
    // Get static field: static public System.Reflection.MethodAttributes MemberAccessMask
    static ::System::Reflection::MethodAttributes _get_MemberAccessMask();
    // Set static field: static public System.Reflection.MethodAttributes MemberAccessMask
    static void _set_MemberAccessMask(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes PrivateScope
    static constexpr const int PrivateScope = 0;
    // Get static field: static public System.Reflection.MethodAttributes PrivateScope
    static ::System::Reflection::MethodAttributes _get_PrivateScope();
    // Set static field: static public System.Reflection.MethodAttributes PrivateScope
    static void _set_PrivateScope(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Private
    static constexpr const int Private = 1;
    // Get static field: static public System.Reflection.MethodAttributes Private
    static ::System::Reflection::MethodAttributes _get_Private();
    // Set static field: static public System.Reflection.MethodAttributes Private
    static void _set_Private(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes FamANDAssem
    static constexpr const int FamANDAssem = 2;
    // Get static field: static public System.Reflection.MethodAttributes FamANDAssem
    static ::System::Reflection::MethodAttributes _get_FamANDAssem();
    // Set static field: static public System.Reflection.MethodAttributes FamANDAssem
    static void _set_FamANDAssem(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Assembly
    static constexpr const int Assembly = 3;
    // Get static field: static public System.Reflection.MethodAttributes Assembly
    static ::System::Reflection::MethodAttributes _get_Assembly();
    // Set static field: static public System.Reflection.MethodAttributes Assembly
    static void _set_Assembly(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Family
    static constexpr const int Family = 4;
    // Get static field: static public System.Reflection.MethodAttributes Family
    static ::System::Reflection::MethodAttributes _get_Family();
    // Set static field: static public System.Reflection.MethodAttributes Family
    static void _set_Family(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes FamORAssem
    static constexpr const int FamORAssem = 5;
    // Get static field: static public System.Reflection.MethodAttributes FamORAssem
    static ::System::Reflection::MethodAttributes _get_FamORAssem();
    // Set static field: static public System.Reflection.MethodAttributes FamORAssem
    static void _set_FamORAssem(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Public
    static constexpr const int Public = 6;
    // Get static field: static public System.Reflection.MethodAttributes Public
    static ::System::Reflection::MethodAttributes _get_Public();
    // Set static field: static public System.Reflection.MethodAttributes Public
    static void _set_Public(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Static
    static constexpr const int Static = 16;
    // Get static field: static public System.Reflection.MethodAttributes Static
    static ::System::Reflection::MethodAttributes _get_Static();
    // Set static field: static public System.Reflection.MethodAttributes Static
    static void _set_Static(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Final
    static constexpr const int Final = 32;
    // Get static field: static public System.Reflection.MethodAttributes Final
    static ::System::Reflection::MethodAttributes _get_Final();
    // Set static field: static public System.Reflection.MethodAttributes Final
    static void _set_Final(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Virtual
    static constexpr const int Virtual = 64;
    // Get static field: static public System.Reflection.MethodAttributes Virtual
    static ::System::Reflection::MethodAttributes _get_Virtual();
    // Set static field: static public System.Reflection.MethodAttributes Virtual
    static void _set_Virtual(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes HideBySig
    static constexpr const int HideBySig = 128;
    // Get static field: static public System.Reflection.MethodAttributes HideBySig
    static ::System::Reflection::MethodAttributes _get_HideBySig();
    // Set static field: static public System.Reflection.MethodAttributes HideBySig
    static void _set_HideBySig(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes CheckAccessOnOverride
    static constexpr const int CheckAccessOnOverride = 512;
    // Get static field: static public System.Reflection.MethodAttributes CheckAccessOnOverride
    static ::System::Reflection::MethodAttributes _get_CheckAccessOnOverride();
    // Set static field: static public System.Reflection.MethodAttributes CheckAccessOnOverride
    static void _set_CheckAccessOnOverride(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes VtableLayoutMask
    static constexpr const int VtableLayoutMask = 256;
    // Get static field: static public System.Reflection.MethodAttributes VtableLayoutMask
    static ::System::Reflection::MethodAttributes _get_VtableLayoutMask();
    // Set static field: static public System.Reflection.MethodAttributes VtableLayoutMask
    static void _set_VtableLayoutMask(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes ReuseSlot
    static constexpr const int ReuseSlot = 0;
    // Get static field: static public System.Reflection.MethodAttributes ReuseSlot
    static ::System::Reflection::MethodAttributes _get_ReuseSlot();
    // Set static field: static public System.Reflection.MethodAttributes ReuseSlot
    static void _set_ReuseSlot(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes NewSlot
    static constexpr const int NewSlot = 256;
    // Get static field: static public System.Reflection.MethodAttributes NewSlot
    static ::System::Reflection::MethodAttributes _get_NewSlot();
    // Set static field: static public System.Reflection.MethodAttributes NewSlot
    static void _set_NewSlot(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes Abstract
    static constexpr const int Abstract = 1024;
    // Get static field: static public System.Reflection.MethodAttributes Abstract
    static ::System::Reflection::MethodAttributes _get_Abstract();
    // Set static field: static public System.Reflection.MethodAttributes Abstract
    static void _set_Abstract(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes SpecialName
    static constexpr const int SpecialName = 2048;
    // Get static field: static public System.Reflection.MethodAttributes SpecialName
    static ::System::Reflection::MethodAttributes _get_SpecialName();
    // Set static field: static public System.Reflection.MethodAttributes SpecialName
    static void _set_SpecialName(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes PinvokeImpl
    static constexpr const int PinvokeImpl = 8192;
    // Get static field: static public System.Reflection.MethodAttributes PinvokeImpl
    static ::System::Reflection::MethodAttributes _get_PinvokeImpl();
    // Set static field: static public System.Reflection.MethodAttributes PinvokeImpl
    static void _set_PinvokeImpl(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes UnmanagedExport
    static constexpr const int UnmanagedExport = 8;
    // Get static field: static public System.Reflection.MethodAttributes UnmanagedExport
    static ::System::Reflection::MethodAttributes _get_UnmanagedExport();
    // Set static field: static public System.Reflection.MethodAttributes UnmanagedExport
    static void _set_UnmanagedExport(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes RTSpecialName
    static constexpr const int RTSpecialName = 4096;
    // Get static field: static public System.Reflection.MethodAttributes RTSpecialName
    static ::System::Reflection::MethodAttributes _get_RTSpecialName();
    // Set static field: static public System.Reflection.MethodAttributes RTSpecialName
    static void _set_RTSpecialName(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes ReservedMask
    static constexpr const int ReservedMask = 53248;
    // Get static field: static public System.Reflection.MethodAttributes ReservedMask
    static ::System::Reflection::MethodAttributes _get_ReservedMask();
    // Set static field: static public System.Reflection.MethodAttributes ReservedMask
    static void _set_ReservedMask(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes HasSecurity
    static constexpr const int HasSecurity = 16384;
    // Get static field: static public System.Reflection.MethodAttributes HasSecurity
    static ::System::Reflection::MethodAttributes _get_HasSecurity();
    // Set static field: static public System.Reflection.MethodAttributes HasSecurity
    static void _set_HasSecurity(::System::Reflection::MethodAttributes value);
    // static field const value: static public System.Reflection.MethodAttributes RequireSecObject
    static constexpr const int RequireSecObject = 32768;
    // Get static field: static public System.Reflection.MethodAttributes RequireSecObject
    static ::System::Reflection::MethodAttributes _get_RequireSecObject();
    // Set static field: static public System.Reflection.MethodAttributes RequireSecObject
    static void _set_RequireSecObject(::System::Reflection::MethodAttributes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Reflection.MethodAttributes
  #pragma pack(pop)
  static check_size<sizeof(MethodAttributes), 0 + sizeof(int)> __System_Reflection_MethodAttributesSizeCheck;
  static_assert(sizeof(MethodAttributes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw
#include "Microsoft/Win32/UnsafeNativeMethods_ManifestEtw.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_ENABLE_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_ENABLE_INFO");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.TRACE_ENABLE_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnsafeNativeMethods_ManifestEtw::TRACE_ENABLE_INFO/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 IsEnabled
    // Size: 0x4
    // Offset: 0x0
    int IsEnabled;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Byte Level
    // Size: 0x1
    // Offset: 0x4
    uint8_t Level;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte Reserved1
    // Size: 0x1
    // Offset: 0x5
    uint8_t Reserved1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.UInt16 LoggerId
    // Size: 0x2
    // Offset: 0x6
    uint16_t LoggerId;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Int32 EnableProperty
    // Size: 0x4
    // Offset: 0x8
    int EnableProperty;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Reserved2
    // Size: 0x4
    // Offset: 0xC
    int Reserved2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int64 MatchAnyKeyword
    // Size: 0x8
    // Offset: 0x10
    int64_t MatchAnyKeyword;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 MatchAllKeyword
    // Size: 0x8
    // Offset: 0x18
    int64_t MatchAllKeyword;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: TRACE_ENABLE_INFO
    constexpr TRACE_ENABLE_INFO(int IsEnabled_ = {}, uint8_t Level_ = {}, uint8_t Reserved1_ = {}, uint16_t LoggerId_ = {}, int EnableProperty_ = {}, int Reserved2_ = {}, int64_t MatchAnyKeyword_ = {}, int64_t MatchAllKeyword_ = {}) noexcept : IsEnabled{IsEnabled_}, Level{Level_}, Reserved1{Reserved1_}, LoggerId{LoggerId_}, EnableProperty{EnableProperty_}, Reserved2{Reserved2_}, MatchAnyKeyword{MatchAnyKeyword_}, MatchAllKeyword{MatchAllKeyword_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 IsEnabled
    [[deprecated]] int& dyn_IsEnabled();
    // Get instance field reference: public System.Byte Level
    [[deprecated]] uint8_t& dyn_Level();
    // Get instance field reference: public System.Byte Reserved1
    [[deprecated]] uint8_t& dyn_Reserved1();
    // Get instance field reference: public System.UInt16 LoggerId
    [[deprecated]] uint16_t& dyn_LoggerId();
    // Get instance field reference: public System.Int32 EnableProperty
    [[deprecated]] int& dyn_EnableProperty();
    // Get instance field reference: public System.Int32 Reserved2
    [[deprecated]] int& dyn_Reserved2();
    // Get instance field reference: public System.Int64 MatchAnyKeyword
    [[deprecated]] int64_t& dyn_MatchAnyKeyword();
    // Get instance field reference: public System.Int64 MatchAllKeyword
    [[deprecated]] int64_t& dyn_MatchAllKeyword();
  }; // Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.TRACE_ENABLE_INFO
  #pragma pack(pop)
  static check_size<sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_ENABLE_INFO), 24 + sizeof(int64_t)> __Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_TRACE_ENABLE_INFOSizeCheck;
  static_assert(sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_ENABLE_INFO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

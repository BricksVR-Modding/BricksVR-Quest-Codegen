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
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::UnsafeNativeMethods_ManifestEtw::TRACE_PROVIDER_INSTANCE_INFO, "Microsoft.Win32", "UnsafeNativeMethods/ManifestEtw/TRACE_PROVIDER_INSTANCE_INFO");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.TRACE_PROVIDER_INSTANCE_INFO
  // [TokenAttribute] Offset: FFFFFFFF
  struct UnsafeNativeMethods_ManifestEtw::TRACE_PROVIDER_INSTANCE_INFO/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 NextOffset
    // Size: 0x4
    // Offset: 0x0
    int NextOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 EnableCount
    // Size: 0x4
    // Offset: 0x4
    int EnableCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Pid
    // Size: 0x4
    // Offset: 0x8
    int Pid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 Flags
    // Size: 0x4
    // Offset: 0xC
    int Flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TRACE_PROVIDER_INSTANCE_INFO
    constexpr TRACE_PROVIDER_INSTANCE_INFO(int NextOffset_ = {}, int EnableCount_ = {}, int Pid_ = {}, int Flags_ = {}) noexcept : NextOffset{NextOffset_}, EnableCount{EnableCount_}, Pid{Pid_}, Flags{Flags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 NextOffset
    [[deprecated]] int& dyn_NextOffset();
    // Get instance field reference: public System.Int32 EnableCount
    [[deprecated]] int& dyn_EnableCount();
    // Get instance field reference: public System.Int32 Pid
    [[deprecated]] int& dyn_Pid();
    // Get instance field reference: public System.Int32 Flags
    [[deprecated]] int& dyn_Flags();
  }; // Microsoft.Win32.UnsafeNativeMethods/Microsoft.Win32.ManifestEtw/Microsoft.Win32.TRACE_PROVIDER_INSTANCE_INFO
  #pragma pack(pop)
  static check_size<sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_PROVIDER_INSTANCE_INFO), 12 + sizeof(int)> __Microsoft_Win32_UnsafeNativeMethods_ManifestEtw_TRACE_PROVIDER_INSTANCE_INFOSizeCheck;
  static_assert(sizeof(UnsafeNativeMethods_ManifestEtw::TRACE_PROVIDER_INSTANCE_INFO) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

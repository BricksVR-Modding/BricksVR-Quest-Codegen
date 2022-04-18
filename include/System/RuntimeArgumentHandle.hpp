// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: RuntimeArgumentHandle
  struct RuntimeArgumentHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeArgumentHandle, "System", "RuntimeArgumentHandle");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeArgumentHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  struct RuntimeArgumentHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // System.IntPtr args
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr args;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeArgumentHandle
    constexpr RuntimeArgumentHandle(::System::IntPtr args_ = {}) noexcept : args{args_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return args;
    }
    // Get instance field reference: System.IntPtr args
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_args();
  }; // System.RuntimeArgumentHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeArgumentHandle), 0 + sizeof(::System::IntPtr)> __System_RuntimeArgumentHandleSizeCheck;
  static_assert(sizeof(RuntimeArgumentHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

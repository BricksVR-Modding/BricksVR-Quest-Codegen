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
  // Forward declaring type: TaskContinuationOptions
  struct TaskContinuationOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskContinuationOptions, "System.Threading.Tasks", "TaskContinuationOptions");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskContinuationOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct TaskContinuationOptions/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TaskContinuationOptions
    constexpr TaskContinuationOptions(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions None
    static constexpr const int None = 0;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions None
    static ::System::Threading::Tasks::TaskContinuationOptions _get_None();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions None
    static void _set_None(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions PreferFairness
    static constexpr const int PreferFairness = 1;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions PreferFairness
    static ::System::Threading::Tasks::TaskContinuationOptions _get_PreferFairness();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions PreferFairness
    static void _set_PreferFairness(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions LongRunning
    static constexpr const int LongRunning = 2;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions LongRunning
    static ::System::Threading::Tasks::TaskContinuationOptions _get_LongRunning();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions LongRunning
    static void _set_LongRunning(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions AttachedToParent
    static constexpr const int AttachedToParent = 4;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions AttachedToParent
    static ::System::Threading::Tasks::TaskContinuationOptions _get_AttachedToParent();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions AttachedToParent
    static void _set_AttachedToParent(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions DenyChildAttach
    static constexpr const int DenyChildAttach = 8;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions DenyChildAttach
    static ::System::Threading::Tasks::TaskContinuationOptions _get_DenyChildAttach();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions DenyChildAttach
    static void _set_DenyChildAttach(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions HideScheduler
    static constexpr const int HideScheduler = 16;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions HideScheduler
    static ::System::Threading::Tasks::TaskContinuationOptions _get_HideScheduler();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions HideScheduler
    static void _set_HideScheduler(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions LazyCancellation
    static constexpr const int LazyCancellation = 32;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions LazyCancellation
    static ::System::Threading::Tasks::TaskContinuationOptions _get_LazyCancellation();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions LazyCancellation
    static void _set_LazyCancellation(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions RunContinuationsAsynchronously
    static constexpr const int RunContinuationsAsynchronously = 64;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions RunContinuationsAsynchronously
    static ::System::Threading::Tasks::TaskContinuationOptions _get_RunContinuationsAsynchronously();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions RunContinuationsAsynchronously
    static void _set_RunContinuationsAsynchronously(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions NotOnRanToCompletion
    static constexpr const int NotOnRanToCompletion = 65536;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnRanToCompletion
    static ::System::Threading::Tasks::TaskContinuationOptions _get_NotOnRanToCompletion();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnRanToCompletion
    static void _set_NotOnRanToCompletion(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions NotOnFaulted
    static constexpr const int NotOnFaulted = 131072;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnFaulted
    static ::System::Threading::Tasks::TaskContinuationOptions _get_NotOnFaulted();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnFaulted
    static void _set_NotOnFaulted(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions NotOnCanceled
    static constexpr const int NotOnCanceled = 262144;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnCanceled
    static ::System::Threading::Tasks::TaskContinuationOptions _get_NotOnCanceled();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions NotOnCanceled
    static void _set_NotOnCanceled(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnRanToCompletion
    static constexpr const int OnlyOnRanToCompletion = 393216;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnRanToCompletion
    static ::System::Threading::Tasks::TaskContinuationOptions _get_OnlyOnRanToCompletion();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnRanToCompletion
    static void _set_OnlyOnRanToCompletion(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnFaulted
    static constexpr const int OnlyOnFaulted = 327680;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnFaulted
    static ::System::Threading::Tasks::TaskContinuationOptions _get_OnlyOnFaulted();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnFaulted
    static void _set_OnlyOnFaulted(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnCanceled
    static constexpr const int OnlyOnCanceled = 196608;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnCanceled
    static ::System::Threading::Tasks::TaskContinuationOptions _get_OnlyOnCanceled();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions OnlyOnCanceled
    static void _set_OnlyOnCanceled(::System::Threading::Tasks::TaskContinuationOptions value);
    // static field const value: static public System.Threading.Tasks.TaskContinuationOptions ExecuteSynchronously
    static constexpr const int ExecuteSynchronously = 524288;
    // Get static field: static public System.Threading.Tasks.TaskContinuationOptions ExecuteSynchronously
    static ::System::Threading::Tasks::TaskContinuationOptions _get_ExecuteSynchronously();
    // Set static field: static public System.Threading.Tasks.TaskContinuationOptions ExecuteSynchronously
    static void _set_ExecuteSynchronously(::System::Threading::Tasks::TaskContinuationOptions value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // System.Threading.Tasks.TaskContinuationOptions
  #pragma pack(pop)
  static check_size<sizeof(TaskContinuationOptions), 0 + sizeof(int)> __System_Threading_Tasks_TaskContinuationOptionsSizeCheck;
  static_assert(sizeof(TaskContinuationOptions) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

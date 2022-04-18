// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: TimerCallback
  class TimerCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: Timer
  class Timer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Timer*, "System.Threading", "Timer");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x41
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Timer
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class Timer : public ::System::MarshalByRefObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::System::Threading::Timer::TimerComparer
    class TimerComparer;
    // Nested type: ::System::Threading::Timer::Scheduler
    class Scheduler;
    public:
    // private System.Threading.TimerCallback callback
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::TimerCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Threading::TimerCallback*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int64 due_time_ms
    // Size: 0x8
    // Offset: 0x28
    int64_t due_time_ms;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 period_ms
    // Size: 0x8
    // Offset: 0x30
    int64_t period_ms;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 next_run
    // Size: 0x8
    // Offset: 0x38
    int64_t next_run;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x40
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept = delete;
    // Get static field: static private readonly System.Threading.Timer/System.Threading.Scheduler scheduler
    static ::System::Threading::Timer::Scheduler* _get_scheduler();
    // Set static field: static private readonly System.Threading.Timer/System.Threading.Scheduler scheduler
    static void _set_scheduler(::System::Threading::Timer::Scheduler* value);
    // static field const value: static private System.Int64 MaxValue
    static constexpr const int64_t MaxValue = 4294967294;
    // Get static field: static private System.Int64 MaxValue
    static int64_t _get_MaxValue();
    // Set static field: static private System.Int64 MaxValue
    static void _set_MaxValue(int64_t value);
    // Get instance field reference: private System.Threading.TimerCallback callback
    [[deprecated("Use field access instead!")]] ::System::Threading::TimerCallback*& dyn_callback();
    // Get instance field reference: private System.Object state
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_state();
    // Get instance field reference: private System.Int64 due_time_ms
    [[deprecated("Use field access instead!")]] int64_t& dyn_due_time_ms();
    // Get instance field reference: private System.Int64 period_ms
    [[deprecated("Use field access instead!")]] int64_t& dyn_period_ms();
    // Get instance field reference: private System.Int64 next_run
    [[deprecated("Use field access instead!")]] int64_t& dyn_next_run();
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // public System.Void .ctor(System.Threading.TimerCallback callback, System.Object state, System.Int32 dueTime, System.Int32 period)
    // Offset: 0x435190
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Timer* New_ctor(::System::Threading::TimerCallback* callback, ::Il2CppObject* state, int dueTime, int period) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Timer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Timer*, creationType>(callback, state, dueTime, period)));
    }
    // public System.Void .ctor(System.Threading.TimerCallback callback, System.Object state, System.TimeSpan dueTime, System.TimeSpan period)
    // Offset: 0x435260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Timer* New_ctor(::System::Threading::TimerCallback* callback, ::Il2CppObject* state, ::System::TimeSpan dueTime, ::System::TimeSpan period) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Timer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Timer*, creationType>(callback, state, dueTime, period)));
    }
    // static private System.Void .cctor()
    // Offset: 0x4350E0
    static void _cctor();
    // private System.Void Init(System.Threading.TimerCallback callback, System.Object state, System.Int64 dueTime, System.Int64 period)
    // Offset: 0x435020
    void Init(::System::Threading::TimerCallback* callback, ::Il2CppObject* state, int64_t dueTime, int64_t period);
    // public System.Boolean Change(System.TimeSpan dueTime, System.TimeSpan period)
    // Offset: 0x434F00
    bool Change(::System::TimeSpan dueTime, ::System::TimeSpan period);
    // public System.Void Dispose()
    // Offset: 0x434F80
    void Dispose();
    // private System.Boolean Change(System.Int64 dueTime, System.Int64 period, System.Boolean first)
    // Offset: 0x434CC0
    bool Change(int64_t dueTime, int64_t period, bool first);
    // System.Void KeepRootedWhileScheduled()
    // Offset: 0x1DDF00
    void KeepRootedWhileScheduled();
    // static private System.Int64 GetTimeMonotonic()
    // Offset: 0x435010
    static int64_t GetTimeMonotonic();
  }; // System.Threading.Timer
  #pragma pack(pop)
  static check_size<sizeof(Timer), 64 + sizeof(bool)> __System_Threading_TimerSizeCheck;
  static_assert(sizeof(Timer) == 0x41);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Timer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Timer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::Timer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Timer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)(::System::Threading::TimerCallback*, ::Il2CppObject*, int64_t, int64_t)>(&System::Threading::Timer::Init)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System.Threading", "TimerCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* dueTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* period = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, state, dueTime, period});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Change
// Il2CppName: Change
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Timer::*)(::System::TimeSpan, ::System::TimeSpan)>(&System::Threading::Timer::Change)> {
  static const MethodInfo* get() {
    static auto* dueTime = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    static auto* period = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "Change", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dueTime, period});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)()>(&System::Threading::Timer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::Change
// Il2CppName: Change
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::Timer::*)(int64_t, int64_t, bool)>(&System::Threading::Timer::Change)> {
  static const MethodInfo* get() {
    static auto* dueTime = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* period = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* first = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "Change", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dueTime, period, first});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::KeepRootedWhileScheduled
// Il2CppName: KeepRootedWhileScheduled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Timer::*)()>(&System::Threading::Timer::KeepRootedWhileScheduled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "KeepRootedWhileScheduled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Timer::GetTimeMonotonic
// Il2CppName: GetTimeMonotonic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&System::Threading::Timer::GetTimeMonotonic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Timer*), "GetTimeMonotonic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

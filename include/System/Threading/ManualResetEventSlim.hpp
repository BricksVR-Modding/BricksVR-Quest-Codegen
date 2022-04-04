// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEventSlim
  class ManualResetEventSlim;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::ManualResetEventSlim);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ManualResetEventSlim*, "System.Threading", "ManualResetEventSlim");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ManualResetEventSlim
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FAE00
  // [DebuggerDisplayAttribute] Offset: FAE00
  class ManualResetEventSlim : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Object m_lock
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* m_lock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent m_eventObj
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ManualResetEvent* m_eventObj;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Int32 m_combinedState
    // Size: 0x4
    // Offset: 0x20
    int m_combinedState;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // static field const value: static private System.Int32 DEFAULT_SPIN_SP
    static constexpr const int DEFAULT_SPIN_SP = 1;
    // Get static field: static private System.Int32 DEFAULT_SPIN_SP
    static int _get_DEFAULT_SPIN_SP();
    // Set static field: static private System.Int32 DEFAULT_SPIN_SP
    static void _set_DEFAULT_SPIN_SP(int value);
    // static field const value: static private System.Int32 DEFAULT_SPIN_MP
    static constexpr const int DEFAULT_SPIN_MP = 10;
    // Get static field: static private System.Int32 DEFAULT_SPIN_MP
    static int _get_DEFAULT_SPIN_MP();
    // Set static field: static private System.Int32 DEFAULT_SPIN_MP
    static void _set_DEFAULT_SPIN_MP(int value);
    // static field const value: static private System.Int32 SignalledState_BitMask
    static constexpr const int SignalledState_BitMask = -2147483648;
    // Get static field: static private System.Int32 SignalledState_BitMask
    static int _get_SignalledState_BitMask();
    // Set static field: static private System.Int32 SignalledState_BitMask
    static void _set_SignalledState_BitMask(int value);
    // static field const value: static private System.Int32 SignalledState_ShiftCount
    static constexpr const int SignalledState_ShiftCount = 31;
    // Get static field: static private System.Int32 SignalledState_ShiftCount
    static int _get_SignalledState_ShiftCount();
    // Set static field: static private System.Int32 SignalledState_ShiftCount
    static void _set_SignalledState_ShiftCount(int value);
    // static field const value: static private System.Int32 Dispose_BitMask
    static constexpr const int Dispose_BitMask = 1073741824;
    // Get static field: static private System.Int32 Dispose_BitMask
    static int _get_Dispose_BitMask();
    // Set static field: static private System.Int32 Dispose_BitMask
    static void _set_Dispose_BitMask(int value);
    // static field const value: static private System.Int32 SpinCountState_BitMask
    static constexpr const int SpinCountState_BitMask = 1073217536;
    // Get static field: static private System.Int32 SpinCountState_BitMask
    static int _get_SpinCountState_BitMask();
    // Set static field: static private System.Int32 SpinCountState_BitMask
    static void _set_SpinCountState_BitMask(int value);
    // static field const value: static private System.Int32 SpinCountState_ShiftCount
    static constexpr const int SpinCountState_ShiftCount = 19;
    // Get static field: static private System.Int32 SpinCountState_ShiftCount
    static int _get_SpinCountState_ShiftCount();
    // Set static field: static private System.Int32 SpinCountState_ShiftCount
    static void _set_SpinCountState_ShiftCount(int value);
    // static field const value: static private System.Int32 SpinCountState_MaxValue
    static constexpr const int SpinCountState_MaxValue = 2047;
    // Get static field: static private System.Int32 SpinCountState_MaxValue
    static int _get_SpinCountState_MaxValue();
    // Set static field: static private System.Int32 SpinCountState_MaxValue
    static void _set_SpinCountState_MaxValue(int value);
    // static field const value: static private System.Int32 NumWaitersState_BitMask
    static constexpr const int NumWaitersState_BitMask = 524287;
    // Get static field: static private System.Int32 NumWaitersState_BitMask
    static int _get_NumWaitersState_BitMask();
    // Set static field: static private System.Int32 NumWaitersState_BitMask
    static void _set_NumWaitersState_BitMask(int value);
    // static field const value: static private System.Int32 NumWaitersState_ShiftCount
    static constexpr const int NumWaitersState_ShiftCount = 0;
    // Get static field: static private System.Int32 NumWaitersState_ShiftCount
    static int _get_NumWaitersState_ShiftCount();
    // Set static field: static private System.Int32 NumWaitersState_ShiftCount
    static void _set_NumWaitersState_ShiftCount(int value);
    // static field const value: static private System.Int32 NumWaitersState_MaxValue
    static constexpr const int NumWaitersState_MaxValue = 524287;
    // Get static field: static private System.Int32 NumWaitersState_MaxValue
    static int _get_NumWaitersState_MaxValue();
    // Set static field: static private System.Int32 NumWaitersState_MaxValue
    static void _set_NumWaitersState_MaxValue(int value);
    // Get static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
    static ::System::Action_1<::Il2CppObject*>* _get_s_cancellationTokenCallback();
    // Set static field: static private System.Action`1<System.Object> s_cancellationTokenCallback
    static void _set_s_cancellationTokenCallback(::System::Action_1<::Il2CppObject*>* value);
    // Get instance field reference: private System.Object m_lock
    [[deprecated]] ::Il2CppObject*& dyn_m_lock();
    // Get instance field reference: private System.Threading.ManualResetEvent m_eventObj
    [[deprecated]] ::System::Threading::ManualResetEvent*& dyn_m_eventObj();
    // Get instance field reference: private System.Int32 m_combinedState
    [[deprecated]] int& dyn_m_combinedState();
    // public System.Threading.WaitHandle get_WaitHandle()
    // Offset: 0x347EB0
    ::System::Threading::WaitHandle* get_WaitHandle();
    // public System.Boolean get_IsSet()
    // Offset: 0x347DF0
    bool get_IsSet();
    // private System.Void set_IsSet(System.Boolean value)
    // Offset: 0x347F60
    void set_IsSet(bool value);
    // public System.Int32 get_SpinCount()
    // Offset: 0x347E50
    int get_SpinCount();
    // private System.Void set_SpinCount(System.Int32 value)
    // Offset: 0x347F90
    void set_SpinCount(int value);
    // private System.Int32 get_Waiters()
    // Offset: 0x347F00
    int get_Waiters();
    // private System.Void set_Waiters(System.Int32 value)
    // Offset: 0x347FD0
    void set_Waiters(int value);
    // public System.Void .ctor(System.Boolean initialState)
    // Offset: 0x347C20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualResetEventSlim* New_ctor(bool initialState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::ManualResetEventSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualResetEventSlim*, creationType>(initialState)));
    }
    // public System.Void .ctor(System.Boolean initialState, System.Int32 spinCount)
    // Offset: 0x347CA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManualResetEventSlim* New_ctor(bool initialState, int spinCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::ManualResetEventSlim::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManualResetEventSlim*, creationType>(initialState, spinCount)));
    }
    // static private System.Void .cctor()
    // Offset: 0x347BB0
    static void _cctor();
    // private System.Void Initialize(System.Boolean initialState, System.Int32 spinCount)
    // Offset: 0x346D30
    void Initialize(bool initialState, int spinCount);
    // private System.Void EnsureLockObjectCreated()
    // Offset: 0x346CA0
    void EnsureLockObjectCreated();
    // private System.Boolean LazyInitializeEvent()
    // Offset: 0x346DB0
    bool LazyInitializeEvent();
    // public System.Void Set()
    // Offset: 0x346FD0
    void Set();
    // private System.Void Set(System.Boolean duringCancellation)
    // Offset: 0x346FE0
    void Set(bool duringCancellation);
    // public System.Boolean Wait(System.Int32 millisecondsTimeout, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x3474F0
    bool Wait(int millisecondsTimeout, ::System::Threading::CancellationToken cancellationToken);
    // public System.Void Dispose()
    // Offset: 0x346C30
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x346B10
    void Dispose(bool disposing);
    // private System.Void ThrowIfDisposed()
    // Offset: 0x347330
    void ThrowIfDisposed();
    // static private System.Void CancellationTokenCallback(System.Object obj)
    // Offset: 0x346910
    static void CancellationTokenCallback(::Il2CppObject* obj);
    // private System.Void UpdateStateAtomically(System.Int32 newBits, System.Int32 updateBitsMask)
    // Offset: 0x3473B0
    void UpdateStateAtomically(int newBits, int updateBitsMask);
    // static private System.Int32 ExtractStatePortionAndShiftRight(System.Int32 state, System.Int32 mask, System.Int32 rightBitShiftCount)
    // Offset: 0x346D10
    static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount);
    // static private System.Int32 ExtractStatePortion(System.Int32 state, System.Int32 mask)
    // Offset: 0x346D20
    static int ExtractStatePortion(int state, int mask);
  }; // System.Threading.ManualResetEventSlim
  #pragma pack(pop)
  static check_size<sizeof(ManualResetEventSlim), 32 + sizeof(int)> __System_Threading_ManualResetEventSlimSizeCheck;
  static_assert(sizeof(ManualResetEventSlim) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::get_WaitHandle
// Il2CppName: get_WaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::get_WaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "get_WaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::get_IsSet
// Il2CppName: get_IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::get_IsSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "get_IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::set_IsSet
// Il2CppName: set_IsSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(bool)>(&System::Threading::ManualResetEventSlim::set_IsSet)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "set_IsSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::get_SpinCount
// Il2CppName: get_SpinCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::get_SpinCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "get_SpinCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::set_SpinCount
// Il2CppName: set_SpinCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(int)>(&System::Threading::ManualResetEventSlim::set_SpinCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "set_SpinCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::get_Waiters
// Il2CppName: get_Waiters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::get_Waiters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "get_Waiters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::set_Waiters
// Il2CppName: set_Waiters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(int)>(&System::Threading::ManualResetEventSlim::set_Waiters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "set_Waiters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::ManualResetEventSlim::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(bool, int)>(&System::Threading::ManualResetEventSlim::Initialize)> {
  static const MethodInfo* get() {
    static auto* initialState = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* spinCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialState, spinCount});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::EnsureLockObjectCreated
// Il2CppName: EnsureLockObjectCreated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::EnsureLockObjectCreated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "EnsureLockObjectCreated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::LazyInitializeEvent
// Il2CppName: LazyInitializeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::LazyInitializeEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "LazyInitializeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::Set)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(bool)>(&System::Threading::ManualResetEventSlim::Set)> {
  static const MethodInfo* get() {
    static auto* duringCancellation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{duringCancellation});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::ManualResetEventSlim::*)(int, ::System::Threading::CancellationToken)>(&System::Threading::ManualResetEventSlim::Wait)> {
  static const MethodInfo* get() {
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{millisecondsTimeout, cancellationToken});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(bool)>(&System::Threading::ManualResetEventSlim::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)()>(&System::Threading::ManualResetEventSlim::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::CancellationTokenCallback
// Il2CppName: CancellationTokenCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::ManualResetEventSlim::CancellationTokenCallback)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "CancellationTokenCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::UpdateStateAtomically
// Il2CppName: UpdateStateAtomically
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ManualResetEventSlim::*)(int, int)>(&System::Threading::ManualResetEventSlim::UpdateStateAtomically)> {
  static const MethodInfo* get() {
    static auto* newBits = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* updateBitsMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "UpdateStateAtomically", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newBits, updateBitsMask});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::ExtractStatePortionAndShiftRight
// Il2CppName: ExtractStatePortionAndShiftRight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&System::Threading::ManualResetEventSlim::ExtractStatePortionAndShiftRight)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* rightBitShiftCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "ExtractStatePortionAndShiftRight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, mask, rightBitShiftCount});
  }
};
// Writing MetadataGetter for method: System::Threading::ManualResetEventSlim::ExtractStatePortion
// Il2CppName: ExtractStatePortion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&System::Threading::ManualResetEventSlim::ExtractStatePortion)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* mask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ManualResetEventSlim*), "ExtractStatePortion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state, mask});
  }
};

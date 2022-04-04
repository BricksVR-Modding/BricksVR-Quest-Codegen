// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: AsyncVoidMethodBuilder
  struct AsyncVoidMethodBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder, "System.Runtime.CompilerServices", "AsyncVoidMethodBuilder");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  struct AsyncVoidMethodBuilder/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Threading.SynchronizationContext m_synchronizationContext
    // Size: 0x8
    // Offset: 0x0
    ::System::Threading::SynchronizationContext* m_synchronizationContext;
    // Field size check
    static_assert(sizeof(::System::Threading::SynchronizationContext*) == 0x8);
    // private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState
    // Size: 0x10
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::AsyncMethodBuilderCore) == 0x10);
    // private System.Threading.Tasks.Task m_task
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::Tasks::Task* m_task;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Creating value type constructor for type: AsyncVoidMethodBuilder
    constexpr AsyncVoidMethodBuilder(::System::Threading::SynchronizationContext* m_synchronizationContext_ = {}, ::System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState_ = {}, ::System::Threading::Tasks::Task* m_task_ = {}) noexcept : m_synchronizationContext{m_synchronizationContext_}, m_coreState{m_coreState_}, m_task{m_task_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Threading.SynchronizationContext m_synchronizationContext
    [[deprecated]] ::System::Threading::SynchronizationContext*& dyn_m_synchronizationContext();
    // Get instance field reference: private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState
    [[deprecated]] ::System::Runtime::CompilerServices::AsyncMethodBuilderCore& dyn_m_coreState();
    // Get instance field reference: private System.Threading.Tasks.Task m_task
    [[deprecated]] ::System::Threading::Tasks::Task*& dyn_m_task();
    // private System.Threading.Tasks.Task get_Task()
    // Offset: 0x49A350
    ::System::Threading::Tasks::Task* get_Task();
    // static public System.Runtime.CompilerServices.AsyncVoidMethodBuilder Create()
    // Offset: 0x49A0B0
    static ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder Create();
    // public System.Void Start(ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TStateMachine>
    void Start(ByRef<TStateMachine> stateMachine) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TStateMachine>, ::System::Runtime::CompilerServices::IAsyncStateMachine>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Start");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Start", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateMachine)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, byref(stateMachine));
    }
    // public System.Void AwaitUnsafeOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitUnsafeOnCompleted(ByRef<TAwaiter> awaiter, ByRef<TStateMachine> stateMachine) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<TAwaiter>, ::System::Runtime::CompilerServices::ICriticalNotifyCompletion>);
      static_assert(std::is_convertible_v<std::remove_pointer_t<TStateMachine>, ::System::Runtime::CompilerServices::IAsyncStateMachine>);
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AwaitUnsafeOnCompleted", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(awaiter), ::il2cpp_utils::ExtractType(stateMachine)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, byref(awaiter), byref(stateMachine));
    }
    // public System.Void SetResult()
    // Offset: 0x49A2F0
    void SetResult();
    // public System.Void SetException(System.Exception exception)
    // Offset: 0x49A1A0
    void SetException(::System::Exception* exception);
    // private System.Void NotifySynchronizationContextOfCompletion()
    // Offset: 0x49A120
    void NotifySynchronizationContextOfCompletion();
  }; // System.Runtime.CompilerServices.AsyncVoidMethodBuilder
  #pragma pack(pop)
  static check_size<sizeof(AsyncVoidMethodBuilder), 24 + sizeof(::System::Threading::Tasks::Task*)> __System_Runtime_CompilerServices_AsyncVoidMethodBuilderSizeCheck;
  static_assert(sizeof(AsyncVoidMethodBuilder) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task
// Il2CppName: get_Task
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(&System::Runtime::CompilerServices::AsyncVoidMethodBuilder::get_Task)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder), "get_Task", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::AsyncVoidMethodBuilder (*)()>(&System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::Start
// Il2CppName: Start
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted
// Il2CppName: AwaitUnsafeOnCompleted
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult
// Il2CppName: SetResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(&System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetResult)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder), "SetResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException
// Il2CppName: SetException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)(::System::Exception*)>(&System::Runtime::CompilerServices::AsyncVoidMethodBuilder::SetException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder), "SetException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion
// Il2CppName: NotifySynchronizationContextOfCompletion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncVoidMethodBuilder::*)()>(&System::Runtime::CompilerServices::AsyncVoidMethodBuilder::NotifySynchronizationContextOfCompletion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder), "NotifySynchronizationContextOfCompletion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

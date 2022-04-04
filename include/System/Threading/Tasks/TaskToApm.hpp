// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskToApm
  class TaskToApm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskToApm);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskToApm*, "System.Threading.Tasks", "TaskToApm");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskToApm
  // [TokenAttribute] Offset: FFFFFFFF
  class TaskToApm : public ::Il2CppObject {
    public:
    // Nested type: ::System::Threading::Tasks::TaskToApm::TaskWrapperAsyncResult
    class TaskWrapperAsyncResult;
    // Nested type: ::System::Threading::Tasks::TaskToApm::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // static public System.IAsyncResult Begin(System.Threading.Tasks.Task task, System.AsyncCallback callback, System.Object state)
    // Offset: 0x4247E0
    static ::System::IAsyncResult* Begin(::System::Threading::Tasks::Task* task, ::System::AsyncCallback* callback, ::Il2CppObject* state);
    // static public System.Void End(System.IAsyncResult asyncResult)
    // Offset: 0x4249A0
    static void End(::System::IAsyncResult* asyncResult);
    // static public TResult End(System.IAsyncResult asyncResult)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResult>
    static TResult End(::System::IAsyncResult* asyncResult) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::TaskToApm::End");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Threading.Tasks", "TaskToApm", "End", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(asyncResult)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<TResult, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, asyncResult);
    }
    // static private System.Void InvokeCallbackWhenTaskCompletes(System.Threading.Tasks.Task antecedent, System.AsyncCallback callback, System.IAsyncResult asyncResult)
    // Offset: 0x424A60
    static void InvokeCallbackWhenTaskCompletes(::System::Threading::Tasks::Task* antecedent, ::System::AsyncCallback* callback, ::System::IAsyncResult* asyncResult);
  }; // System.Threading.Tasks.TaskToApm
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::Begin
// Il2CppName: Begin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::Tasks::TaskToApm::Begin)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm*), "Begin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task, callback, state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::End
// Il2CppName: End
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::Threading::Tasks::TaskToApm::End)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm*), "End", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::End
// Il2CppName: End
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes
// Il2CppName: InvokeCallbackWhenTaskCompletes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::Tasks::Task*, ::System::AsyncCallback*, ::System::IAsyncResult*)>(&System::Threading::Tasks::TaskToApm::InvokeCallbackWhenTaskCompletes)> {
  static const MethodInfo* get() {
    static auto* antecedent = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskToApm*), "InvokeCallbackWhenTaskCompletes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{antecedent, callback, asyncResult});
  }
};

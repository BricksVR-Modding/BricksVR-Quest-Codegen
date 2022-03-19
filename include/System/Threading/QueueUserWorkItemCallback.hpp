// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: WaitCallback
  class WaitCallback;
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: QueueUserWorkItemCallback
  class QueueUserWorkItemCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::QueueUserWorkItemCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::QueueUserWorkItemCallback*, "System.Threading", "QueueUserWorkItemCallback");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.QueueUserWorkItemCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class QueueUserWorkItemCallback : public ::Il2CppObject/*, public ::System::Threading::IThreadPoolWorkItem*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Threading.WaitCallback callback
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::WaitCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Threading::WaitCallback*) == 0x8);
    // private System.Threading.ExecutionContext context
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ExecutionContext* context;
    // Field size check
    static_assert(sizeof(::System::Threading::ExecutionContext*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Threading::IThreadPoolWorkItem
    operator ::System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<::System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get static field: static System.Threading.ContextCallback ccb
    static ::System::Threading::ContextCallback* _get_ccb();
    // Set static field: static System.Threading.ContextCallback ccb
    static void _set_ccb(::System::Threading::ContextCallback* value);
    // Get instance field reference: private System.Threading.WaitCallback callback
    ::System::Threading::WaitCallback*& dyn_callback();
    // Get instance field reference: private System.Threading.ExecutionContext context
    ::System::Threading::ExecutionContext*& dyn_context();
    // Get instance field reference: private System.Object state
    ::Il2CppObject*& dyn_state();
    // static private System.Void .cctor()
    // Offset: 0xB362FC
    static void _cctor();
    // System.Void .ctor(System.Threading.WaitCallback waitCallback, System.Object stateObj, System.Boolean compressStack, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xB36374
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QueueUserWorkItemCallback* New_ctor(::System::Threading::WaitCallback* waitCallback, ::Il2CppObject* stateObj, bool compressStack, ByRef<::System::Threading::StackCrawlMark> stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::QueueUserWorkItemCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QueueUserWorkItemCallback*, creationType>(waitCallback, stateObj, compressStack, byref(stackMark))));
    }
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0xB36434
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xB3650C
    void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException* tae);
    // static private System.Void WaitCallback_Context(System.Object state)
    // Offset: 0xB36510
    static void WaitCallback_Context(::Il2CppObject* state);
  }; // System.Threading.QueueUserWorkItemCallback
  #pragma pack(pop)
  static check_size<sizeof(QueueUserWorkItemCallback), 32 + sizeof(::Il2CppObject*)> __System_Threading_QueueUserWorkItemCallbackSizeCheck;
  static_assert(sizeof(QueueUserWorkItemCallback) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::QueueUserWorkItemCallback::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::QueueUserWorkItemCallback::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::QueueUserWorkItemCallback*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::QueueUserWorkItemCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem
// Il2CppName: System.Threading.IThreadPoolWorkItem.ExecuteWorkItem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::QueueUserWorkItemCallback::*)()>(&System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_ExecuteWorkItem)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::QueueUserWorkItemCallback*), "System.Threading.IThreadPoolWorkItem.ExecuteWorkItem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted
// Il2CppName: System.Threading.IThreadPoolWorkItem.MarkAborted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::QueueUserWorkItemCallback::*)(::System::Threading::ThreadAbortException*)>(&System::Threading::QueueUserWorkItemCallback::System_Threading_IThreadPoolWorkItem_MarkAborted)> {
  static const MethodInfo* get() {
    static auto* tae = &::il2cpp_utils::GetClassFromName("System.Threading", "ThreadAbortException")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::QueueUserWorkItemCallback*), "System.Threading.IThreadPoolWorkItem.MarkAborted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tae});
  }
};
// Writing MetadataGetter for method: System::Threading::QueueUserWorkItemCallback::WaitCallback_Context
// Il2CppName: WaitCallback_Context
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::QueueUserWorkItemCallback::WaitCallback_Context)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::QueueUserWorkItemCallback*), "WaitCallback_Context", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: OSSpecificSynchronizationContext
  class OSSpecificSynchronizationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::OSSpecificSynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::OSSpecificSynchronizationContext*, "System.Threading", "OSSpecificSynchronizationContext");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class OSSpecificSynchronizationContext : public ::System::Threading::SynchronizationContext {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // Nested type: ::System::Threading::OSSpecificSynchronizationContext::InvocationEntryDelegate
    class InvocationEntryDelegate;
    // Nested type: ::System::Threading::OSSpecificSynchronizationContext::MonoPInvokeCallbackAttribute
    class MonoPInvokeCallbackAttribute;
    // Nested type: ::System::Threading::OSSpecificSynchronizationContext::InvocationContext
    class InvocationContext;
    // Nested type: ::System::Threading::OSSpecificSynchronizationContext::$$c
    class $$c;
    public:
    // private System.Object m_OSSynchronizationContext
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_OSSynchronizationContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::Threading::SynchronizationContextProperties
    constexpr operator ::System::Threading::SynchronizationContextProperties() const noexcept = delete;
    // Get static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext> s_ContextCache
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Threading::OSSpecificSynchronizationContext*>* _get_s_ContextCache();
    // Set static field: static private readonly System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Threading.OSSpecificSynchronizationContext> s_ContextCache
    static void _set_s_ContextCache(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Threading::OSSpecificSynchronizationContext*>* value);
    // Get instance field reference: private System.Object m_OSSynchronizationContext
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_OSSynchronizationContext();
    // private System.Void .ctor(System.Object osContext)
    // Offset: 0x309F20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OSSpecificSynchronizationContext* New_ctor(::Il2CppObject* osContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::OSSpecificSynchronizationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OSSpecificSynchronizationContext*, creationType>(osContext)));
    }
    // static private System.Void .cctor()
    // Offset: 0x348EB0
    static void _cctor();
    // static public System.Threading.OSSpecificSynchronizationContext Get()
    // Offset: 0x348AA0
    static ::System::Threading::OSSpecificSynchronizationContext* Get();
    // static private System.Void InvocationEntry(System.IntPtr arg)
    // Offset: 0x348C10
    static void InvocationEntry(::System::IntPtr arg);
    // static private System.Object GetOSContext()
    // Offset: 0x348A90
    static ::Il2CppObject* GetOSContext();
    // static private System.Void PostInternal(System.Object osSynchronizationContext, System.IntPtr callback, System.IntPtr arg)
    // Offset: 0x348D10
    static void PostInternal(::Il2CppObject* osSynchronizationContext, ::System::IntPtr callback, ::System::IntPtr arg);
    // public override System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0x348A20
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Threading.SynchronizationContext SynchronizationContext::CreateCopy()
    ::System::Threading::SynchronizationContext* CreateCopy();
    // public override System.Void Send(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x348E60
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Send(System.Threading.SendOrPostCallback d, System.Object state)
    void Send(::System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public override System.Void Post(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x348D20
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Post(System.Threading.SendOrPostCallback d, System.Object state)
    void Post(::System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
  }; // System.Threading.OSSpecificSynchronizationContext
  #pragma pack(pop)
  static check_size<sizeof(OSSpecificSynchronizationContext), 24 + sizeof(::Il2CppObject*)> __System_Threading_OSSpecificSynchronizationContextSizeCheck;
  static_assert(sizeof(OSSpecificSynchronizationContext) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::OSSpecificSynchronizationContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (*)()>(&System::Threading::OSSpecificSynchronizationContext::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::InvocationEntry
// Il2CppName: InvocationEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&System::Threading::OSSpecificSynchronizationContext::InvocationEntry)> {
  static const MethodInfo* get() {
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "InvocationEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::GetOSContext
// Il2CppName: GetOSContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)()>(&System::Threading::OSSpecificSynchronizationContext::GetOSContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "GetOSContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::PostInternal
// Il2CppName: PostInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::System::IntPtr, ::System::IntPtr)>(&System::Threading::OSSpecificSynchronizationContext::PostInternal)> {
  static const MethodInfo* get() {
    static auto* osSynchronizationContext = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* arg = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "PostInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{osSynchronizationContext, callback, arg});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::CreateCopy
// Il2CppName: CreateCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (System::Threading::OSSpecificSynchronizationContext::*)()>(&System::Threading::OSSpecificSynchronizationContext::CreateCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "CreateCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::OSSpecificSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&System::Threading::OSSpecificSynchronizationContext::Send)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d, state});
  }
};
// Writing MetadataGetter for method: System::Threading::OSSpecificSynchronizationContext::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::OSSpecificSynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&System::Threading::OSSpecificSynchronizationContext::Post)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::OSSpecificSynchronizationContext*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d, state});
  }
};

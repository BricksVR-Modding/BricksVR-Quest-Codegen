// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.YieldInstruction
#include "UnityEngine/YieldInstruction.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::AsyncOperation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AsyncOperation*, "UnityEngine", "AsyncOperation");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AsyncOperation
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6D8B0C
  // [NativeHeaderAttribute] Offset: 6D8B0C
  // [RequiredByNativeCodeAttribute] Offset: 6D8B0C
  class AsyncOperation : public ::UnityEngine::YieldInstruction {
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
    // System.IntPtr m_Ptr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_Ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Action`1<UnityEngine.AsyncOperation> m_completeCallback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::UnityEngine::AsyncOperation*>* m_completeCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::UnityEngine::AsyncOperation*>*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr m_Ptr
    ::System::IntPtr& dyn_m_Ptr();
    // Get instance field reference: private System.Action`1<UnityEngine.AsyncOperation> m_completeCallback
    ::System::Action_1<::UnityEngine::AsyncOperation*>*& dyn_m_completeCallback();
    // public System.Boolean get_isDone()
    // Offset: 0xC96548
    bool get_isDone();
    // public System.Single get_progress()
    // Offset: 0xC96588
    float get_progress();
    // public System.Void add_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0xC966C4
    void add_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);
    // public System.Void remove_completed(System.Action`1<UnityEngine.AsyncOperation> value)
    // Offset: 0xC9679C
    void remove_completed(::System::Action_1<::UnityEngine::AsyncOperation*>* value);
    // static private System.Void InternalDestroy(System.IntPtr ptr)
    // Offset: 0xC96508
    static void InternalDestroy(::System::IntPtr ptr);
    // System.Void InvokeCompletionEvent()
    // Offset: 0xC96664
    void InvokeCompletionEvent();
    // public System.Void .ctor()
    // Offset: 0xC9681C
    // Implemented from: UnityEngine.YieldInstruction
    // Base method: System.Void YieldInstruction::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncOperation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::AsyncOperation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncOperation*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0xC965C8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.AsyncOperation
  #pragma pack(pop)
  static check_size<sizeof(AsyncOperation), 24 + sizeof(::System::Action_1<::UnityEngine::AsyncOperation*>*)> __UnityEngine_AsyncOperationSizeCheck;
  static_assert(sizeof(AsyncOperation) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::get_isDone
// Il2CppName: get_isDone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::get_isDone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "get_isDone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::get_progress
// Il2CppName: get_progress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::get_progress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "get_progress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::add_completed
// Il2CppName: add_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&UnityEngine::AsyncOperation::add_completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "add_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::remove_completed
// Il2CppName: remove_completed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)(::System::Action_1<::UnityEngine::AsyncOperation*>*)>(&UnityEngine::AsyncOperation::remove_completed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AsyncOperation")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "remove_completed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::InternalDestroy
// Il2CppName: InternalDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&UnityEngine::AsyncOperation::InternalDestroy)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "InternalDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::InvokeCompletionEvent
// Il2CppName: InvokeCompletionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::InvokeCompletionEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "InvokeCompletionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::AsyncOperation::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::AsyncOperation::*)()>(&UnityEngine::AsyncOperation::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::AsyncOperation*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

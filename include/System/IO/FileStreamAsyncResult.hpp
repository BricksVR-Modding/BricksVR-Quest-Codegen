// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
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
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileStreamAsyncResult
  class FileStreamAsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileStreamAsyncResult*, "System.IO", "FileStreamAsyncResult");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileStreamAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class FileStreamAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    public:
    // private System.Object state
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent wh
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ManualResetEvent* wh;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.AsyncCallback cb
    // Size: 0x8
    // Offset: 0x20
    ::System::AsyncCallback* cb;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // private System.Boolean completedSynch
    // Size: 0x1
    // Offset: 0x28
    bool completedSynch;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completedSynch and: Count
    char __padding3[0x3] = {};
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x2C
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 OriginalCount
    // Size: 0x4
    // Offset: 0x30
    int OriginalCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 BytesRead
    // Size: 0x4
    // Offset: 0x34
    int BytesRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.AsyncCallback realcb
    // Size: 0x8
    // Offset: 0x38
    ::System::AsyncCallback* realcb;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get instance field reference: private System.Object state
    [[deprecated]] ::Il2CppObject*& dyn_state();
    // Get instance field reference: private System.Threading.ManualResetEvent wh
    [[deprecated]] ::System::Threading::ManualResetEvent*& dyn_wh();
    // Get instance field reference: private System.AsyncCallback cb
    [[deprecated]] ::System::AsyncCallback*& dyn_cb();
    // Get instance field reference: private System.Boolean completedSynch
    [[deprecated]] bool& dyn_completedSynch();
    // Get instance field reference: public System.Int32 Count
    [[deprecated]] int& dyn_Count();
    // Get instance field reference: public System.Int32 OriginalCount
    [[deprecated]] int& dyn_OriginalCount();
    // Get instance field reference: public System.Int32 BytesRead
    [[deprecated]] int& dyn_BytesRead();
    // Get instance field reference: private System.AsyncCallback realcb
    [[deprecated]] ::System::AsyncCallback*& dyn_realcb();
    // public System.Object get_AsyncState()
    // Offset: 0x1E1920
    ::Il2CppObject* get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x21B7D0
    bool get_CompletedSynchronously();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1E1520
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Void .ctor(System.AsyncCallback cb, System.Object state)
    // Offset: 0x3E59B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileStreamAsyncResult* New_ctor(::System::AsyncCallback* cb, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileStreamAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileStreamAsyncResult*, creationType>(cb, state)));
    }
    // static private System.Void CBWrapper(System.IAsyncResult ares)
    // Offset: 0x3E5920
    static void CBWrapper(::System::IAsyncResult* ares);
  }; // System.IO.FileStreamAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(FileStreamAsyncResult), 56 + sizeof(::System::AsyncCallback*)> __System_IO_FileStreamAsyncResultSizeCheck;
  static_assert(sizeof(FileStreamAsyncResult) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::IO::FileStreamAsyncResult::*)()>(&System::IO::FileStreamAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileStreamAsyncResult::CBWrapper
// Il2CppName: CBWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IAsyncResult*)>(&System::IO::FileStreamAsyncResult::CBWrapper)> {
  static const MethodInfo* get() {
    static auto* ares = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileStreamAsyncResult*), "CBWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ares});
  }
};

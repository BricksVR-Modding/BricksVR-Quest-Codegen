// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
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
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0*, "System.Runtime.CompilerServices", "AsyncMethodBuilderCore/<>c__DisplayClass4_0");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: BB1F0
  class AsyncMethodBuilderCore::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Threading.Tasks.Task innerTask
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* innerTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    // public System.Action continuation
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* continuation;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Get instance field reference: public System.Threading.Tasks.Task innerTask
    [[deprecated]] ::System::Threading::Tasks::Task*& dyn_innerTask();
    // Get instance field reference: public System.Action continuation
    [[deprecated]] ::System::Action*& dyn_continuation();
    // System.Void <OutputAsyncCausalityEvents>b__0()
    // Offset: 0x4B0D20
    void $OutputAsyncCausalityEvents$b__0();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncMethodBuilderCore::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncMethodBuilderCore::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.AsyncMethodBuilderCore/System.Runtime.CompilerServices.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(AsyncMethodBuilderCore::$$c__DisplayClass4_0), 24 + sizeof(::System::Action*)> __System_Runtime_CompilerServices_AsyncMethodBuilderCore_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(AsyncMethodBuilderCore::$$c__DisplayClass4_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::$OutputAsyncCausalityEvents$b__0
// Il2CppName: <OutputAsyncCausalityEvents>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::*)()>(&System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::$OutputAsyncCausalityEvents$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0*), "<OutputAsyncCausalityEvents>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncMethodBuilderCore::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

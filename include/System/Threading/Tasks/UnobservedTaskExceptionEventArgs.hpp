// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AggregateException
  class AggregateException;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: UnobservedTaskExceptionEventArgs
  class UnobservedTaskExceptionEventArgs;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.UnobservedTaskExceptionEventArgs
  // [TokenAttribute] Offset: FFFFFFFF
  class UnobservedTaskExceptionEventArgs : public ::System::EventArgs {
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
    // private System.AggregateException m_exception
    // Size: 0x8
    // Offset: 0x10
    ::System::AggregateException* m_exception;
    // Field size check
    static_assert(sizeof(::System::AggregateException*) == 0x8);
    // System.Boolean m_observed
    // Size: 0x1
    // Offset: 0x18
    bool m_observed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.AggregateException m_exception
    ::System::AggregateException*& dyn_m_exception();
    // Get instance field reference: System.Boolean m_observed
    bool& dyn_m_observed();
    // public System.Void .ctor(System.AggregateException exception)
    // Offset: 0xB4237C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnobservedTaskExceptionEventArgs* New_ctor(::System::AggregateException* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::UnobservedTaskExceptionEventArgs::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnobservedTaskExceptionEventArgs*, creationType>(exception)));
    }
  }; // System.Threading.Tasks.UnobservedTaskExceptionEventArgs
  #pragma pack(pop)
  static check_size<sizeof(UnobservedTaskExceptionEventArgs), 24 + sizeof(bool)> __System_Threading_Tasks_UnobservedTaskExceptionEventArgsSizeCheck;
  static_assert(sizeof(UnobservedTaskExceptionEventArgs) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::UnobservedTaskExceptionEventArgs::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

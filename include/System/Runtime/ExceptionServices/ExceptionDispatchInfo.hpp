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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::ExceptionServices::ExceptionDispatchInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, "System.Runtime.ExceptionServices", "ExceptionDispatchInfo");
// Type namespace: System.Runtime.ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ExceptionServices.ExceptionDispatchInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class ExceptionDispatchInfo : public ::Il2CppObject {
    public:
    public:
    // private System.Exception m_Exception
    // Size: 0x8
    // Offset: 0x10
    ::System::Exception* m_Exception;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    // private System.Object m_stackTrace
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* m_stackTrace;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Exception m_Exception
    [[deprecated]] ::System::Exception*& dyn_m_Exception();
    // Get instance field reference: private System.Object m_stackTrace
    [[deprecated]] ::Il2CppObject*& dyn_m_stackTrace();
    // System.Object get_BinaryStackTraceArray()
    // Offset: 0x1E1520
    ::Il2CppObject* get_BinaryStackTraceArray();
    // public System.Exception get_SourceException()
    // Offset: 0x1E1920
    ::System::Exception* get_SourceException();
    // private System.Void .ctor(System.Exception exception)
    // Offset: 0x49ECD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionDispatchInfo* New_ctor(::System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::ExceptionServices::ExceptionDispatchInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionDispatchInfo*, creationType>(exception)));
    }
    // static public System.Runtime.ExceptionServices.ExceptionDispatchInfo Capture(System.Exception source)
    // Offset: 0x49EA80
    static ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* Capture(::System::Exception* source);
    // public System.Void Throw()
    // Offset: 0x49EC60
    void Throw();
  }; // System.Runtime.ExceptionServices.ExceptionDispatchInfo
  #pragma pack(pop)
  static check_size<sizeof(ExceptionDispatchInfo), 24 + sizeof(::Il2CppObject*)> __System_Runtime_ExceptionServices_ExceptionDispatchInfoSizeCheck;
  static_assert(sizeof(ExceptionDispatchInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray
// Il2CppName: get_BinaryStackTraceArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_BinaryStackTraceArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*), "get_BinaryStackTraceArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException
// Il2CppName: get_SourceException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::get_SourceException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*), "get_SourceException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture
// Il2CppName: Capture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (*)(::System::Exception*)>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::Capture)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*), "Capture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw
// Il2CppName: Throw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::ExceptionServices::ExceptionDispatchInfo::*)()>(&System::Runtime::ExceptionServices::ExceptionDispatchInfo::Throw)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*), "Throw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

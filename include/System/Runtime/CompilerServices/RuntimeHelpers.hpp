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
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: RuntimeHelpers
  class RuntimeHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::RuntimeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::RuntimeHelpers*, "System.Runtime.CompilerServices", "RuntimeHelpers");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.RuntimeHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeHelpers : public ::Il2CppObject {
    public:
    // static public System.Int32 get_OffsetToStringData()
    // Offset: 0x4AD330
    static int get_OffsetToStringData();
    // static private System.Void InitializeArray(System.Array array, System.IntPtr fldHandle)
    // Offset: 0x4AD320
    static void InitializeArray(::System::Array* array, ::System::IntPtr fldHandle);
    // static public System.Void InitializeArray(System.Array array, System.RuntimeFieldHandle fldHandle)
    // Offset: 0x4AD2A0
    static void InitializeArray(::System::Array* array, ::System::RuntimeFieldHandle fldHandle);
    // static public System.Int32 GetHashCode(System.Object o)
    // Offset: 0x38AB50
    static int GetHashCode(::Il2CppObject* o);
    // static public System.Void PrepareConstrainedRegions()
    // Offset: 0x1DDF00
    static void PrepareConstrainedRegions();
    // static public System.Boolean IsReferenceOrContainsReferences()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool IsReferenceOrContainsReferences() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "RuntimeHelpers", "IsReferenceOrContainsReferences", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
  }; // System.Runtime.CompilerServices.RuntimeHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData
// Il2CppName: get_OffsetToStringData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Runtime::CompilerServices::RuntimeHelpers::get_OffsetToStringData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "get_OffsetToStringData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray
// Il2CppName: InitializeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Array*, ::System::IntPtr)>(&System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* fldHandle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "InitializeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, fldHandle});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray
// Il2CppName: InitializeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Array*, ::System::RuntimeFieldHandle)>(&System::Runtime::CompilerServices::RuntimeHelpers::InitializeArray)> {
  static const MethodInfo* get() {
    static auto* array = &::il2cpp_utils::GetClassFromName("System", "Array")->byval_arg;
    static auto* fldHandle = &::il2cpp_utils::GetClassFromName("System", "RuntimeFieldHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "InitializeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, fldHandle});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*)>(&System::Runtime::CompilerServices::RuntimeHelpers::GetHashCode)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions
// Il2CppName: PrepareConstrainedRegions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::RuntimeHelpers::PrepareConstrainedRegions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::RuntimeHelpers*), "PrepareConstrainedRegions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::RuntimeHelpers::IsReferenceOrContainsReferences
// Il2CppName: IsReferenceOrContainsReferences
// Cannot write MetadataGetter for generic methods!

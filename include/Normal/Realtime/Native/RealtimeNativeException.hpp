// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: RealtimeNativeException
  class RealtimeNativeException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Normal::Realtime::Native::RealtimeNativeException);
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::RealtimeNativeException*, "Normal.Realtime.Native", "RealtimeNativeException");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Normal.Realtime.Native.RealtimeNativeException
  // [TokenAttribute] Offset: FFFFFFFF
  class RealtimeNativeException : public ::System::Exception {
    public:
    // static public Normal.Realtime.Native.RealtimeNativeException NativePointerIsNull(System.String className)
    // Offset: 0xAE9CD4
    static ::Normal::Realtime::Native::RealtimeNativeException* NativePointerIsNull(::StringW className);
    // public System.Void .ctor(System.String message)
    // Offset: 0xAF13C8
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RealtimeNativeException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Normal::Realtime::Native::RealtimeNativeException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RealtimeNativeException*, creationType>(message)));
    }
  }; // Normal.Realtime.Native.RealtimeNativeException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Native::RealtimeNativeException::NativePointerIsNull
// Il2CppName: NativePointerIsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Normal::Realtime::Native::RealtimeNativeException* (*)(::StringW)>(&Normal::Realtime::Native::RealtimeNativeException::NativePointerIsNull)> {
  static const MethodInfo* get() {
    static auto* className = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Normal::Realtime::Native::RealtimeNativeException*), "NativePointerIsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{className});
  }
};
// Writing MetadataGetter for method: Normal::Realtime::Native::RealtimeNativeException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

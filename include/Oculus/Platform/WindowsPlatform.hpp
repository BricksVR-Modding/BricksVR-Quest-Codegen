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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: WindowsPlatform
  class WindowsPlatform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::WindowsPlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::WindowsPlatform*, "Oculus.Platform", "WindowsPlatform");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.WindowsPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  class WindowsPlatform : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::WindowsPlatform::UnityLogDelegate
    class UnityLogDelegate;
    // private System.Void CPPLogCallback(System.IntPtr tag, System.IntPtr message)
    // Offset: 0x7EE2B0
    void CPPLogCallback(::System::IntPtr tag, ::System::IntPtr message);
    // private System.IntPtr getCallbackPointer()
    // Offset: 0x7EE410
    ::System::IntPtr getCallbackPointer();
    // public System.Boolean Initialize(System.String appId)
    // Offset: 0x7EE360
    bool Initialize(::StringW appId);
    // public Oculus.Platform.Request`1<Oculus.Platform.Models.PlatformInitialize> AsyncInitialize(System.String appId)
    // Offset: 0x7EE1D0
    ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::WindowsPlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsPlatform*, creationType>()));
    }
  }; // Oculus.Platform.WindowsPlatform
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::WindowsPlatform::CPPLogCallback
// Il2CppName: CPPLogCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::WindowsPlatform::*)(::System::IntPtr, ::System::IntPtr)>(&Oculus::Platform::WindowsPlatform::CPPLogCallback)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::WindowsPlatform*), "CPPLogCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, message});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::WindowsPlatform::getCallbackPointer
// Il2CppName: getCallbackPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Oculus::Platform::WindowsPlatform::*)()>(&Oculus::Platform::WindowsPlatform::getCallbackPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::WindowsPlatform*), "getCallbackPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::WindowsPlatform::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Platform::WindowsPlatform::*)(::StringW)>(&Oculus::Platform::WindowsPlatform::Initialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::WindowsPlatform*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::WindowsPlatform::AsyncInitialize
// Il2CppName: AsyncInitialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (Oculus::Platform::WindowsPlatform::*)(::StringW)>(&Oculus::Platform::WindowsPlatform::AsyncInitialize)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::WindowsPlatform*), "AsyncInitialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::WindowsPlatform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

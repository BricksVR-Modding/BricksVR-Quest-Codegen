// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ResolveEventArgs
  class ResolveEventArgs;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: ResolveEventHandler
  class ResolveEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ResolveEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::ResolveEventHandler*, "System", "ResolveEventHandler");
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.ResolveEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class ResolveEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ResolveEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ResolveEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ResolveEventHandler*, creationType>(object, method)));
    }
    // public System.Reflection.Assembly Invoke(System.Object sender, System.ResolveEventArgs args)
    // Offset: 0x4A41F0
    ::System::Reflection::Assembly* Invoke(::Il2CppObject* sender, ::System::ResolveEventArgs* args);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ResolveEventArgs args, System.AsyncCallback callback, System.Object object)
    // Offset: 0x2E55B0
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ResolveEventArgs* args, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Reflection.Assembly EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    ::System::Reflection::Assembly* EndInvoke(::System::IAsyncResult* result);
  }; // System.ResolveEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ResolveEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ResolveEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::ResolveEventHandler::*)(::Il2CppObject*, ::System::ResolveEventArgs*)>(&System::ResolveEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "ResolveEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ResolveEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
// Writing MetadataGetter for method: System::ResolveEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::ResolveEventHandler::*)(::Il2CppObject*, ::System::ResolveEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::ResolveEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "ResolveEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ResolveEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args, callback, object});
  }
};
// Writing MetadataGetter for method: System::ResolveEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::ResolveEventHandler::*)(::System::IAsyncResult*)>(&System::ResolveEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ResolveEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

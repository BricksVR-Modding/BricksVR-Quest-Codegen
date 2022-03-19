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
// Forward declaring namespace: UnityEngineInternal::Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputUpdateType
  struct NativeInputUpdateType;
  // Forward declaring type: NativeInputEventBuffer
  struct NativeInputEventBuffer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeUpdateCallback
  class NativeUpdateCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngineInternal::Input::NativeUpdateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeUpdateCallback*, "UnityEngineInternal.Input", "NativeUpdateCallback");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngineInternal.Input.NativeUpdateCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeUpdateCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1052A30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeUpdateCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngineInternal::Input::NativeUpdateCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeUpdateCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer)
    // Offset: 0x1052660
    void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::UnityEngineInternal::Input::NativeInputEventBuffer* buffer);
    // public System.IAsyncResult BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType updateType, UnityEngineInternal.Input.NativeInputEventBuffer* buffer, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1052A40
    ::System::IAsyncResult* BeginInvoke(::UnityEngineInternal::Input::NativeInputUpdateType updateType, ::UnityEngineInternal::Input::NativeInputEventBuffer* buffer, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1052AD8
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngineInternal.Input.NativeUpdateCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeUpdateCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeUpdateCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngineInternal::Input::NativeUpdateCallback::*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*)>(&UnityEngineInternal::Input::NativeUpdateCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputEventBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeUpdateCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, buffer});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeUpdateCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngineInternal::Input::NativeUpdateCallback::*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngineInternal::Input::NativeUpdateCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputUpdateType")->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("UnityEngineInternal.Input", "NativeInputEventBuffer"))->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeUpdateCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType, buffer, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngineInternal::Input::NativeUpdateCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngineInternal::Input::NativeUpdateCallback::*)(::System::IAsyncResult*)>(&UnityEngineInternal::Input::NativeUpdateCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngineInternal::Input::NativeUpdateCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

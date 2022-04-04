// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Windows.WebCam.PhotoCapture
#include "UnityEngine/Windows/WebCam/PhotoCapture.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnPhotoModeStartedCallback");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnPhotoModeStartedCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotoCapture::OnPhotoModeStartedCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotoCapture::OnPhotoModeStartedCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotoCapture::OnPhotoModeStartedCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.PhotoCaptureResult result)
    // Offset: 0xA392C0
    void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult result);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.PhotoCaptureResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xA39910
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult result, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnPhotoModeStartedCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/PhotoCaptureResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/PhotoCaptureResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Windows.WebCam.VideoCapture
#include "UnityEngine/Windows/WebCam/VideoCapture.hpp"
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
NEED_NO_BOX(::UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback*, "UnityEngine.Windows.WebCam", "VideoCapture/OnStartedRecordingVideoCallback");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.WebCam.VideoCapture/UnityEngine.Windows.WebCam.OnStartedRecordingVideoCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class VideoCapture::OnStartedRecordingVideoCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VideoCapture::OnStartedRecordingVideoCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VideoCapture::OnStartedRecordingVideoCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Windows.WebCam.VideoCapture/UnityEngine.Windows.WebCam.VideoCaptureResult result)
    // Offset: 0xA392C0
    void Invoke(::UnityEngine::Windows::WebCam::VideoCapture::VideoCaptureResult result);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Windows.WebCam.VideoCapture/UnityEngine.Windows.WebCam.VideoCaptureResult result, System.AsyncCallback callback, System.Object object)
    // Offset: 0xA39A10
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::VideoCapture::VideoCaptureResult result, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.WebCam.VideoCapture/UnityEngine.Windows.WebCam.OnStartedRecordingVideoCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture::VideoCaptureResult)>(&UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "VideoCapture/VideoCaptureResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::*)(::UnityEngine::Windows::WebCam::VideoCapture::VideoCaptureResult, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "VideoCapture/VideoCaptureResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::VideoCapture::OnStartedRecordingVideoCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

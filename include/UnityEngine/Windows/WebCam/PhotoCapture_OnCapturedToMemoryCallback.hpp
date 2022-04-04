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
// Forward declaring namespace: UnityEngine::Windows::WebCam
namespace UnityEngine::Windows::WebCam {
  // Forward declaring type: PhotoCaptureFrame
  class PhotoCaptureFrame;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback*, "UnityEngine.Windows.WebCam", "PhotoCapture/OnCapturedToMemoryCallback");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnCapturedToMemoryCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class PhotoCapture::OnCapturedToMemoryCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotoCapture::OnCapturedToMemoryCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotoCapture::OnCapturedToMemoryCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.PhotoCaptureResult result, UnityEngine.Windows.WebCam.PhotoCaptureFrame photoCaptureFrame)
    // Offset: 0xA395F0
    void Invoke(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* photoCaptureFrame);
    // public System.IAsyncResult BeginInvoke(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.PhotoCaptureResult result, UnityEngine.Windows.WebCam.PhotoCaptureFrame photoCaptureFrame, System.AsyncCallback callback, System.Object object)
    // Offset: 0xA39560
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult result, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame* photoCaptureFrame, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x299520
    void EndInvoke(::System::IAsyncResult* result);
  }; // UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnCapturedToMemoryCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/PhotoCaptureResult")->byval_arg;
    static auto* photoCaptureFrame = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCaptureFrame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, photoCaptureFrame});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::*)(::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult, ::UnityEngine::Windows::WebCam::PhotoCaptureFrame*, ::System::AsyncCallback*, ::Il2CppObject*)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/PhotoCaptureResult")->byval_arg;
    static auto* photoCaptureFrame = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCaptureFrame")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, photoCaptureFrame, callback, object});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::*)(::System::IAsyncResult*)>(&UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

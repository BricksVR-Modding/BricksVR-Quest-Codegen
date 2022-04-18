// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Windows::WebCam
namespace UnityEngine::Windows::WebCam {
}
// Completed forward declares
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Forward declaring type: PhotoCapture
  class PhotoCapture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::WebCam::PhotoCapture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::PhotoCapture*, "UnityEngine.Windows.WebCam", "PhotoCapture");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Windows.WebCam.PhotoCapture
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: C6830
  // [StaticAccessorAttribute] Offset: C6830
  // [MovedFromAttribute] Offset: C6830
  class PhotoCapture : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType
    struct CaptureResultType;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult
    struct PhotoCaptureResult;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::OnCaptureResourceCreatedCallback
    class OnCaptureResourceCreatedCallback;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback
    class OnPhotoModeStartedCallback;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStoppedCallback
    class OnPhotoModeStoppedCallback;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToDiskCallback
    class OnCapturedToDiskCallback;
    // Nested type: ::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback
    class OnCapturedToMemoryCallback;
    public:
    // System.IntPtr m_NativePtr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_NativePtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return m_NativePtr;
    }
    // Get static field: static private readonly System.Int64 HR_SUCCESS
    static int64_t _get_HR_SUCCESS();
    // Set static field: static private readonly System.Int64 HR_SUCCESS
    static void _set_HR_SUCCESS(int64_t value);
    // Get instance field reference: System.IntPtr m_NativePtr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_NativePtr();
    // private System.Void .ctor(System.IntPtr nativeCaptureObject)
    // Offset: 0x98B3D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotoCapture* New_ctor(::System::IntPtr nativeCaptureObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::WebCam::PhotoCapture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotoCapture*, creationType>(nativeCaptureObject)));
    }
    // static private System.Void .cctor()
    // Offset: 0xA3A750
    static void _cctor();
    // static private UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.PhotoCaptureResult MakeCaptureResult(System.Int64 hResult)
    // Offset: 0xA3A6B0
    static ::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult MakeCaptureResult(int64_t hResult);
    // static private System.Void InvokeOnCreatedResourceDelegate(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnCaptureResourceCreatedCallback callback, System.IntPtr nativePtr)
    // Offset: 0xA3A430
    static void InvokeOnCreatedResourceDelegate(::UnityEngine::Windows::WebCam::PhotoCapture::OnCaptureResourceCreatedCallback* callback, ::System::IntPtr nativePtr);
    // static private System.Void InvokeOnPhotoModeStartedDelegate(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnPhotoModeStartedCallback callback, System.Int64 hResult)
    // Offset: 0xA3A4D0
    static void InvokeOnPhotoModeStartedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback* callback, int64_t hResult);
    // static private System.Void InvokeOnPhotoModeStoppedDelegate(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnPhotoModeStoppedCallback callback, System.Int64 hResult)
    // Offset: 0xA3A5C0
    static void InvokeOnPhotoModeStoppedDelegate(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStoppedCallback* callback, int64_t hResult);
    // static private System.Void InvokeOnCapturedPhotoToDiskDelegate(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnCapturedToDiskCallback callback, System.Int64 hResult)
    // Offset: 0xA3A140
    static void InvokeOnCapturedPhotoToDiskDelegate(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToDiskCallback* callback, int64_t hResult);
    // static private System.Void InvokeOnCapturedPhotoToMemoryDelegate(UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.OnCapturedToMemoryCallback callback, System.Int64 hResult, System.IntPtr photoCaptureFramePtr)
    // Offset: 0xA3A230
    static void InvokeOnCapturedPhotoToMemoryDelegate(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback* callback, int64_t hResult, ::System::IntPtr photoCaptureFramePtr);
    // public System.Void Dispose()
    // Offset: 0xA39FF0
    void Dispose();
    // private System.Void Dispose_Internal()
    // Offset: 0xA39FB0
    void Dispose_Internal();
    // private System.Void DisposeThreaded_Internal()
    // Offset: 0xA39F70
    void DisposeThreaded_Internal();
    // protected override System.Void Finalize()
    // Offset: 0xA3A080
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Windows.WebCam.PhotoCapture
  #pragma pack(pop)
  static check_size<sizeof(PhotoCapture), 16 + sizeof(::System::IntPtr)> __UnityEngine_Windows_WebCam_PhotoCaptureSizeCheck;
  static_assert(sizeof(PhotoCapture) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Windows::WebCam::PhotoCapture::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::MakeCaptureResult
// Il2CppName: MakeCaptureResult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Windows::WebCam::PhotoCapture::PhotoCaptureResult (*)(int64_t)>(&UnityEngine::Windows::WebCam::PhotoCapture::MakeCaptureResult)> {
  static const MethodInfo* get() {
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "MakeCaptureResult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCreatedResourceDelegate
// Il2CppName: InvokeOnCreatedResourceDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture::OnCaptureResourceCreatedCallback*, ::System::IntPtr)>(&UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCreatedResourceDelegate)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/OnCaptureResourceCreatedCallback")->byval_arg;
    static auto* nativePtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "InvokeOnCreatedResourceDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, nativePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStartedDelegate
// Il2CppName: InvokeOnPhotoModeStartedDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStartedCallback*, int64_t)>(&UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStartedDelegate)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/OnPhotoModeStartedCallback")->byval_arg;
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "InvokeOnPhotoModeStartedDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, hResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStoppedDelegate
// Il2CppName: InvokeOnPhotoModeStoppedDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture::OnPhotoModeStoppedCallback*, int64_t)>(&UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnPhotoModeStoppedDelegate)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/OnPhotoModeStoppedCallback")->byval_arg;
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "InvokeOnPhotoModeStoppedDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, hResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate
// Il2CppName: InvokeOnCapturedPhotoToDiskDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToDiskCallback*, int64_t)>(&UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToDiskDelegate)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/OnCapturedToDiskCallback")->byval_arg;
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "InvokeOnCapturedPhotoToDiskDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, hResult});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate
// Il2CppName: InvokeOnCapturedPhotoToMemoryDelegate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Windows::WebCam::PhotoCapture::OnCapturedToMemoryCallback*, int64_t, ::System::IntPtr)>(&UnityEngine::Windows::WebCam::PhotoCapture::InvokeOnCapturedPhotoToMemoryDelegate)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "PhotoCapture/OnCapturedToMemoryCallback")->byval_arg;
    static auto* hResult = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* photoCaptureFramePtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "InvokeOnCapturedPhotoToMemoryDelegate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, hResult, photoCaptureFramePtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&UnityEngine::Windows::WebCam::PhotoCapture::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal
// Il2CppName: Dispose_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&UnityEngine::Windows::WebCam::PhotoCapture::Dispose_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "Dispose_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal
// Il2CppName: DisposeThreaded_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&UnityEngine::Windows::WebCam::PhotoCapture::DisposeThreaded_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "DisposeThreaded_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCapture::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCapture::*)()>(&UnityEngine::Windows::WebCam::PhotoCapture::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCapture*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

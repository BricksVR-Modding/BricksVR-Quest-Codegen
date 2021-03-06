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
// Including type: UnityEngine.Windows.WebCam.CapturePixelFormat
#include "UnityEngine/Windows/WebCam/CapturePixelFormat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Forward declaring type: PhotoCaptureFrame
  class PhotoCaptureFrame;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Windows::WebCam::PhotoCaptureFrame);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::PhotoCaptureFrame*, "UnityEngine.Windows.WebCam", "PhotoCaptureFrame");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.WebCam.PhotoCaptureFrame
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: C6C50
  // [MovedFromAttribute] Offset: C6C50
  // [NativeConditionalAttribute] Offset: C6C50
  class PhotoCaptureFrame : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr m_NativePtr
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr m_NativePtr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.Int32 <dataLength>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int dataLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private System.Boolean <hasLocationData>k__BackingField
    // Size: 0x1
    // Offset: 0x1C
    bool hasLocationData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLocationData and: pixelFormat
    char __padding2[0x3] = {};
    // [DebuggerBrowsableAttribute] Offset: 0xBB920
    // private UnityEngine.Windows.WebCam.CapturePixelFormat <pixelFormat>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Windows::WebCam::CapturePixelFormat pixelFormat;
    // Field size check
    static_assert(sizeof(::UnityEngine::Windows::WebCam::CapturePixelFormat) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.IntPtr m_NativePtr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_NativePtr();
    // Get instance field reference: private System.Int32 <dataLength>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$dataLength$k__BackingField();
    // Get instance field reference: private System.Boolean <hasLocationData>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$hasLocationData$k__BackingField();
    // Get instance field reference: private UnityEngine.Windows.WebCam.CapturePixelFormat <pixelFormat>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Windows::WebCam::CapturePixelFormat& dyn_$pixelFormat$k__BackingField();
    // public System.Int32 get_dataLength()
    // Offset: 0x1E1910
    int get_dataLength();
    // private System.Void set_dataLength(System.Int32 value)
    // Offset: 0x29F770
    void set_dataLength(int value);
    // private System.Void set_hasLocationData(System.Boolean value)
    // Offset: 0x3042E0
    void set_hasLocationData(bool value);
    // private System.Void set_pixelFormat(UnityEngine.Windows.WebCam.CapturePixelFormat value)
    // Offset: 0x2172B0
    void set_pixelFormat(::UnityEngine::Windows::WebCam::CapturePixelFormat value);
    // System.Void .ctor(System.IntPtr nativePtr)
    // Offset: 0xA39E80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhotoCaptureFrame* New_ctor(::System::IntPtr nativePtr) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Windows::WebCam::PhotoCaptureFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhotoCaptureFrame*, creationType>(nativePtr)));
    }
    // private System.Int32 GetDataLength()
    // Offset: 0xA39E00
    int GetDataLength();
    // private System.Boolean GetHasLocationData()
    // Offset: 0xA39E40
    bool GetHasLocationData();
    // private UnityEngine.Windows.WebCam.CapturePixelFormat GetCapturePixelFormat()
    // Offset: 0xA39DC0
    ::UnityEngine::Windows::WebCam::CapturePixelFormat GetCapturePixelFormat();
    // private System.Void Cleanup()
    // Offset: 0xA39C10
    void Cleanup();
    // private System.Void Dispose_Internal()
    // Offset: 0xA39CB0
    void Dispose_Internal();
    // public System.Void Dispose()
    // Offset: 0xA39CF0
    void Dispose();
    // protected override System.Void Finalize()
    // Offset: 0xA39D50
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // UnityEngine.Windows.WebCam.PhotoCaptureFrame
  #pragma pack(pop)
  static check_size<sizeof(PhotoCaptureFrame), 32 + sizeof(::UnityEngine::Windows::WebCam::CapturePixelFormat)> __UnityEngine_Windows_WebCam_PhotoCaptureFrameSizeCheck;
  static_assert(sizeof(PhotoCaptureFrame) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::get_dataLength
// Il2CppName: get_dataLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::get_dataLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "get_dataLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_dataLength
// Il2CppName: set_dataLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(int)>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_dataLength)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "set_dataLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_hasLocationData
// Il2CppName: set_hasLocationData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(bool)>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_hasLocationData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "set_hasLocationData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_pixelFormat
// Il2CppName: set_pixelFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)(::UnityEngine::Windows::WebCam::CapturePixelFormat)>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::set_pixelFormat)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Windows.WebCam", "CapturePixelFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "set_pixelFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength
// Il2CppName: GetDataLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetDataLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "GetDataLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData
// Il2CppName: GetHasLocationData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetHasLocationData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "GetHasLocationData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat
// Il2CppName: GetCapturePixelFormat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Windows::WebCam::CapturePixelFormat (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::GetCapturePixelFormat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "GetCapturePixelFormat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::Cleanup
// Il2CppName: Cleanup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::Cleanup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "Cleanup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal
// Il2CppName: Dispose_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "Dispose_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Windows::WebCam::PhotoCaptureFrame::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Windows::WebCam::PhotoCaptureFrame::*)()>(&UnityEngine::Windows::WebCam::PhotoCaptureFrame::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Windows::WebCam::PhotoCaptureFrame*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

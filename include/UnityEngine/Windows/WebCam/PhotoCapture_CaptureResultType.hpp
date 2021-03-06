// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Windows.WebCam.PhotoCapture
#include "UnityEngine/Windows/WebCam/PhotoCapture.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType, "UnityEngine.Windows.WebCam", "PhotoCapture/CaptureResultType");
// Type namespace: UnityEngine.Windows.WebCam
namespace UnityEngine::Windows::WebCam {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType
  // [TokenAttribute] Offset: FFFFFFFF
  struct PhotoCapture::CaptureResultType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CaptureResultType
    constexpr CaptureResultType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType Success
    static constexpr const int Success = 0;
    // Get static field: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType Success
    static ::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType _get_Success();
    // Set static field: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType Success
    static void _set_Success(::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType value);
    // static field const value: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType UnknownError
    static constexpr const int UnknownError = 1;
    // Get static field: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType UnknownError
    static ::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType _get_UnknownError();
    // Set static field: static public UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType UnknownError
    static void _set_UnknownError(::UnityEngine::Windows::WebCam::PhotoCapture::CaptureResultType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Windows.WebCam.PhotoCapture/UnityEngine.Windows.WebCam.CaptureResultType
  #pragma pack(pop)
  static check_size<sizeof(PhotoCapture::CaptureResultType), 0 + sizeof(int)> __UnityEngine_Windows_WebCam_PhotoCapture_CaptureResultTypeSizeCheck;
  static_assert(sizeof(PhotoCapture::CaptureResultType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

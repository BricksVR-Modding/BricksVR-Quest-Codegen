// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: MeshGenerationStatus
  struct MeshGenerationStatus;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshGenerationStatus, "UnityEngine.XR", "MeshGenerationStatus");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.MeshGenerationStatus
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 6EEC04
  // [RequiredByNativeCodeAttribute] Offset: 6EEC04
  struct MeshGenerationStatus/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MeshGenerationStatus
    constexpr MeshGenerationStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus Success
    static constexpr const int Success = 0;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus Success
    static ::UnityEngine::XR::MeshGenerationStatus _get_Success();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus Success
    static void _set_Success(::UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static constexpr const int InvalidMeshId = 1;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static ::UnityEngine::XR::MeshGenerationStatus _get_InvalidMeshId();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus InvalidMeshId
    static void _set_InvalidMeshId(::UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static constexpr const int GenerationAlreadyInProgress = 2;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static ::UnityEngine::XR::MeshGenerationStatus _get_GenerationAlreadyInProgress();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus GenerationAlreadyInProgress
    static void _set_GenerationAlreadyInProgress(::UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static constexpr const int Canceled = 3;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static ::UnityEngine::XR::MeshGenerationStatus _get_Canceled();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus Canceled
    static void _set_Canceled(::UnityEngine::XR::MeshGenerationStatus value);
    // static field const value: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static constexpr const int UnknownError = 4;
    // Get static field: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static ::UnityEngine::XR::MeshGenerationStatus _get_UnknownError();
    // Set static field: static public UnityEngine.XR.MeshGenerationStatus UnknownError
    static void _set_UnknownError(::UnityEngine::XR::MeshGenerationStatus value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.XR.MeshGenerationStatus
  #pragma pack(pop)
  static check_size<sizeof(MeshGenerationStatus), 0 + sizeof(int)> __UnityEngine_XR_MeshGenerationStatusSizeCheck;
  static_assert(sizeof(MeshGenerationStatus) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

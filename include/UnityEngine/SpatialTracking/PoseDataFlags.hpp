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
// Type namespace: UnityEngine.SpatialTracking
namespace UnityEngine::SpatialTracking {
  // Forward declaring type: PoseDataFlags
  struct PoseDataFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpatialTracking::PoseDataFlags, "UnityEngine.SpatialTracking", "PoseDataFlags");
// Type namespace: UnityEngine.SpatialTracking
namespace UnityEngine::SpatialTracking {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.SpatialTracking.PoseDataFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct PoseDataFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: PoseDataFlags
    constexpr PoseDataFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.SpatialTracking.PoseDataFlags NoData
    static constexpr const int NoData = 0;
    // Get static field: static public UnityEngine.SpatialTracking.PoseDataFlags NoData
    static ::UnityEngine::SpatialTracking::PoseDataFlags _get_NoData();
    // Set static field: static public UnityEngine.SpatialTracking.PoseDataFlags NoData
    static void _set_NoData(::UnityEngine::SpatialTracking::PoseDataFlags value);
    // static field const value: static public UnityEngine.SpatialTracking.PoseDataFlags Position
    static constexpr const int Position = 1;
    // Get static field: static public UnityEngine.SpatialTracking.PoseDataFlags Position
    static ::UnityEngine::SpatialTracking::PoseDataFlags _get_Position();
    // Set static field: static public UnityEngine.SpatialTracking.PoseDataFlags Position
    static void _set_Position(::UnityEngine::SpatialTracking::PoseDataFlags value);
    // static field const value: static public UnityEngine.SpatialTracking.PoseDataFlags Rotation
    static constexpr const int Rotation = 2;
    // Get static field: static public UnityEngine.SpatialTracking.PoseDataFlags Rotation
    static ::UnityEngine::SpatialTracking::PoseDataFlags _get_Rotation();
    // Set static field: static public UnityEngine.SpatialTracking.PoseDataFlags Rotation
    static void _set_Rotation(::UnityEngine::SpatialTracking::PoseDataFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.SpatialTracking.PoseDataFlags
  #pragma pack(pop)
  static check_size<sizeof(PoseDataFlags), 0 + sizeof(int)> __UnityEngine_SpatialTracking_PoseDataFlagsSizeCheck;
  static_assert(sizeof(PoseDataFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

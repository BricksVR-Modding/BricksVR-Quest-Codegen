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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ovrAvatarHandGesture
  struct ovrAvatarHandGesture;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarHandGesture, "", "ovrAvatarHandGesture");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarHandGesture
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarHandGesture/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarHandGesture
    constexpr ovrAvatarHandGesture(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarHandGesture Default
    static constexpr const int Default = 0;
    // Get static field: static public ovrAvatarHandGesture Default
    static ::GlobalNamespace::ovrAvatarHandGesture _get_Default();
    // Set static field: static public ovrAvatarHandGesture Default
    static void _set_Default(::GlobalNamespace::ovrAvatarHandGesture value);
    // static field const value: static public ovrAvatarHandGesture GripSphere
    static constexpr const int GripSphere = 1;
    // Get static field: static public ovrAvatarHandGesture GripSphere
    static ::GlobalNamespace::ovrAvatarHandGesture _get_GripSphere();
    // Set static field: static public ovrAvatarHandGesture GripSphere
    static void _set_GripSphere(::GlobalNamespace::ovrAvatarHandGesture value);
    // static field const value: static public ovrAvatarHandGesture GripCube
    static constexpr const int GripCube = 2;
    // Get static field: static public ovrAvatarHandGesture GripCube
    static ::GlobalNamespace::ovrAvatarHandGesture _get_GripCube();
    // Set static field: static public ovrAvatarHandGesture GripCube
    static void _set_GripCube(::GlobalNamespace::ovrAvatarHandGesture value);
    // static field const value: static public ovrAvatarHandGesture Count
    static constexpr const int Count = 3;
    // Get static field: static public ovrAvatarHandGesture Count
    static ::GlobalNamespace::ovrAvatarHandGesture _get_Count();
    // Set static field: static public ovrAvatarHandGesture Count
    static void _set_Count(::GlobalNamespace::ovrAvatarHandGesture value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ovrAvatarHandGesture
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarHandGesture), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarHandGestureSizeCheck;
  static_assert(sizeof(ovrAvatarHandGesture) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

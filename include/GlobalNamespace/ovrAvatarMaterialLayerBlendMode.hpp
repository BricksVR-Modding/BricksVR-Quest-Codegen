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
  // Forward declaring type: ovrAvatarMaterialLayerBlendMode
  struct ovrAvatarMaterialLayerBlendMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode, "", "ovrAvatarMaterialLayerBlendMode");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ovrAvatarMaterialLayerBlendMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarMaterialLayerBlendMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ovrAvatarMaterialLayerBlendMode
    constexpr ovrAvatarMaterialLayerBlendMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ovrAvatarMaterialLayerBlendMode Add
    static constexpr const int Add = 0;
    // Get static field: static public ovrAvatarMaterialLayerBlendMode Add
    static ::GlobalNamespace::ovrAvatarMaterialLayerBlendMode _get_Add();
    // Set static field: static public ovrAvatarMaterialLayerBlendMode Add
    static void _set_Add(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode value);
    // static field const value: static public ovrAvatarMaterialLayerBlendMode Multiply
    static constexpr const int Multiply = 1;
    // Get static field: static public ovrAvatarMaterialLayerBlendMode Multiply
    static ::GlobalNamespace::ovrAvatarMaterialLayerBlendMode _get_Multiply();
    // Set static field: static public ovrAvatarMaterialLayerBlendMode Multiply
    static void _set_Multiply(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode value);
    // static field const value: static public ovrAvatarMaterialLayerBlendMode Count
    static constexpr const int Count = 2;
    // Get static field: static public ovrAvatarMaterialLayerBlendMode Count
    static ::GlobalNamespace::ovrAvatarMaterialLayerBlendMode _get_Count();
    // Set static field: static public ovrAvatarMaterialLayerBlendMode Count
    static void _set_Count(::GlobalNamespace::ovrAvatarMaterialLayerBlendMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // ovrAvatarMaterialLayerBlendMode
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarMaterialLayerBlendMode), 0 + sizeof(int)> __GlobalNamespace_ovrAvatarMaterialLayerBlendModeSizeCheck;
  static_assert(sizeof(ovrAvatarMaterialLayerBlendMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

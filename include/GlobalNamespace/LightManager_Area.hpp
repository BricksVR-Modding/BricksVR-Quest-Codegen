// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightManager
#include "GlobalNamespace/LightManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightManager::Area, "", "LightManager/Area");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: LightManager/Area
  // [TokenAttribute] Offset: FFFFFFFF
  struct LightManager::Area/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Area
    constexpr Area(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public LightManager/Area Main
    static constexpr const int Main = 0;
    // Get static field: static public LightManager/Area Main
    static ::GlobalNamespace::LightManager::Area _get_Main();
    // Set static field: static public LightManager/Area Main
    static void _set_Main(::GlobalNamespace::LightManager::Area value);
    // static field const value: static public LightManager/Area Tutorial
    static constexpr const int Tutorial = 1;
    // Get static field: static public LightManager/Area Tutorial
    static ::GlobalNamespace::LightManager::Area _get_Tutorial();
    // Set static field: static public LightManager/Area Tutorial
    static void _set_Tutorial(::GlobalNamespace::LightManager::Area value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // LightManager/Area
  #pragma pack(pop)
  static check_size<sizeof(LightManager::Area), 0 + sizeof(int)> __GlobalNamespace_LightManager_AreaSizeCheck;
  static_assert(sizeof(LightManager::Area) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BuildingBrickModel
#include "GlobalNamespace/BuildingBrickModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuildingBrickModel::PropertyID, "", "BuildingBrickModel/PropertyID");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: BuildingBrickModel/PropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  struct BuildingBrickModel::PropertyID/*, public ::System::Enum*/ {
    public:
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: PropertyID
    constexpr PropertyID(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public BuildingBrickModel/PropertyID Attached
    static constexpr const uint Attached = 1u;
    // Get static field: static public BuildingBrickModel/PropertyID Attached
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_Attached();
    // Set static field: static public BuildingBrickModel/PropertyID Attached
    static void _set_Attached(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID Uuid
    static constexpr const uint Uuid = 5u;
    // Get static field: static public BuildingBrickModel/PropertyID Uuid
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_Uuid();
    // Set static field: static public BuildingBrickModel/PropertyID Uuid
    static void _set_Uuid(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID BricksAbove
    static constexpr const uint BricksAbove = 6u;
    // Get static field: static public BuildingBrickModel/PropertyID BricksAbove
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_BricksAbove();
    // Set static field: static public BuildingBrickModel/PropertyID BricksAbove
    static void _set_BricksAbove(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID BricksBelow
    static constexpr const uint BricksBelow = 7u;
    // Get static field: static public BuildingBrickModel/PropertyID BricksBelow
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_BricksBelow();
    // Set static field: static public BuildingBrickModel/PropertyID BricksBelow
    static void _set_BricksBelow(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID MatId
    static constexpr const uint MatId = 8u;
    // Get static field: static public BuildingBrickModel/PropertyID MatId
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_MatId();
    // Set static field: static public BuildingBrickModel/PropertyID MatId
    static void _set_MatId(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID Color
    static constexpr const uint Color = 9u;
    // Get static field: static public BuildingBrickModel/PropertyID Color
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_Color();
    // Set static field: static public BuildingBrickModel/PropertyID Color
    static void _set_Color(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // static field const value: static public BuildingBrickModel/PropertyID UsingNewColors
    static constexpr const uint UsingNewColors = 10u;
    // Get static field: static public BuildingBrickModel/PropertyID UsingNewColors
    static ::GlobalNamespace::BuildingBrickModel::PropertyID _get_UsingNewColors();
    // Set static field: static public BuildingBrickModel/PropertyID UsingNewColors
    static void _set_UsingNewColors(::GlobalNamespace::BuildingBrickModel::PropertyID value);
    // Get instance field reference: public System.UInt32 value__
    [[deprecated("Use field access instead!")]] uint& dyn_value__();
  }; // BuildingBrickModel/PropertyID
  #pragma pack(pop)
  static check_size<sizeof(BuildingBrickModel::PropertyID), 0 + sizeof(uint)> __GlobalNamespace_BuildingBrickModel_PropertyIDSizeCheck;
  static_assert(sizeof(BuildingBrickModel::PropertyID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

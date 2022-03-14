// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: RoomOwnershipModel
#include "GlobalNamespace/RoomOwnershipModel.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RoomOwnershipModel::PropertyID, "", "RoomOwnershipModel/PropertyID");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: RoomOwnershipModel/PropertyID
  // [TokenAttribute] Offset: FFFFFFFF
  struct RoomOwnershipModel::PropertyID/*, public ::System::Enum*/ {
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
    // static field const value: static public RoomOwnershipModel/PropertyID Locked
    static constexpr const uint Locked = 2u;
    // Get static field: static public RoomOwnershipModel/PropertyID Locked
    static ::GlobalNamespace::RoomOwnershipModel::PropertyID _get_Locked();
    // Set static field: static public RoomOwnershipModel/PropertyID Locked
    static void _set_Locked(::GlobalNamespace::RoomOwnershipModel::PropertyID value);
    // static field const value: static public RoomOwnershipModel/PropertyID LowGravity
    static constexpr const uint LowGravity = 3u;
    // Get static field: static public RoomOwnershipModel/PropertyID LowGravity
    static ::GlobalNamespace::RoomOwnershipModel::PropertyID _get_LowGravity();
    // Set static field: static public RoomOwnershipModel/PropertyID LowGravity
    static void _set_LowGravity(::GlobalNamespace::RoomOwnershipModel::PropertyID value);
    // static field const value: static public RoomOwnershipModel/PropertyID BlockedFromMovingThroughBricks
    static constexpr const uint BlockedFromMovingThroughBricks = 4u;
    // Get static field: static public RoomOwnershipModel/PropertyID BlockedFromMovingThroughBricks
    static ::GlobalNamespace::RoomOwnershipModel::PropertyID _get_BlockedFromMovingThroughBricks();
    // Set static field: static public RoomOwnershipModel/PropertyID BlockedFromMovingThroughBricks
    static void _set_BlockedFromMovingThroughBricks(::GlobalNamespace::RoomOwnershipModel::PropertyID value);
    // Get instance field reference: public System.UInt32 value__
    uint& dyn_value__();
  }; // RoomOwnershipModel/PropertyID
  #pragma pack(pop)
  static check_size<sizeof(RoomOwnershipModel::PropertyID), 0 + sizeof(uint)> __GlobalNamespace_RoomOwnershipModel_PropertyIDSizeCheck;
  static_assert(sizeof(RoomOwnershipModel::PropertyID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

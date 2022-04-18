// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.Data.InventoryItemId
#include "Steamworks/Data/InventoryItemId.hpp"
// Including type: Steamworks.Data.InventoryDefId
#include "Steamworks/Data/InventoryDefId.hpp"
// Completed includes
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: SteamItemDetails_t
  struct SteamItemDetails_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::SteamItemDetails_t, "Steamworks.Data", "SteamItemDetails_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.SteamItemDetails_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct SteamItemDetails_t/*, public ::System::ValueType*/ {
    public:
    public:
    // Steamworks.Data.InventoryItemId ItemId
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::Data::InventoryItemId ItemId;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::InventoryItemId) == 0x8);
    // Steamworks.Data.InventoryDefId Definition
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::Data::InventoryDefId Definition;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::InventoryDefId) == 0x4);
    // System.UInt16 Quantity
    // Size: 0x2
    // Offset: 0xC
    uint16_t Quantity;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // System.UInt16 Flags
    // Size: 0x2
    // Offset: 0xE
    uint16_t Flags;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    public:
    // Creating value type constructor for type: SteamItemDetails_t
    constexpr SteamItemDetails_t(::Steamworks::Data::InventoryItemId ItemId_ = {}, ::Steamworks::Data::InventoryDefId Definition_ = {}, uint16_t Quantity_ = {}, uint16_t Flags_ = {}) noexcept : ItemId{ItemId_}, Definition{Definition_}, Quantity{Quantity_}, Flags{Flags_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: Steamworks.Data.InventoryItemId ItemId
    [[deprecated("Use field access instead!")]] ::Steamworks::Data::InventoryItemId& dyn_ItemId();
    // Get instance field reference: Steamworks.Data.InventoryDefId Definition
    [[deprecated("Use field access instead!")]] ::Steamworks::Data::InventoryDefId& dyn_Definition();
    // Get instance field reference: System.UInt16 Quantity
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Quantity();
    // Get instance field reference: System.UInt16 Flags
    [[deprecated("Use field access instead!")]] uint16_t& dyn_Flags();
  }; // Steamworks.Data.SteamItemDetails_t
  #pragma pack(pop)
  static check_size<sizeof(SteamItemDetails_t), 14 + sizeof(uint16_t)> __Steamworks_Data_SteamItemDetails_tSizeCheck;
  static_assert(sizeof(SteamItemDetails_t) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

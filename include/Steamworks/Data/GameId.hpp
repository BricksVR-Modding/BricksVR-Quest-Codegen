// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: GameId
  struct GameId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GameId, "Steamworks.Data", "GameId");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GameId
  // [TokenAttribute] Offset: FFFFFFFF
  struct GameId/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt64 Value
    // Size: 0x8
    // Offset: 0x0
    uint64_t Value;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: GameId
    constexpr GameId(uint64_t Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.UInt64 Value
    [[deprecated("Use field access instead!")]] uint64_t& dyn_Value();
  }; // Steamworks.Data.GameId
  #pragma pack(pop)
  static check_size<sizeof(GameId), 0 + sizeof(uint64_t)> __Steamworks_Data_GameIdSizeCheck;
  static_assert(sizeof(GameId) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

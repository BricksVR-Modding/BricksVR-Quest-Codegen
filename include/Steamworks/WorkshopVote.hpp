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
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: WorkshopVote
  struct WorkshopVote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::WorkshopVote, "Steamworks", "WorkshopVote");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.WorkshopVote
  // [TokenAttribute] Offset: FFFFFFFF
  struct WorkshopVote/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WorkshopVote
    constexpr WorkshopVote(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.WorkshopVote Unvoted
    static constexpr const int Unvoted = 0;
    // Get static field: static public Steamworks.WorkshopVote Unvoted
    static ::Steamworks::WorkshopVote _get_Unvoted();
    // Set static field: static public Steamworks.WorkshopVote Unvoted
    static void _set_Unvoted(::Steamworks::WorkshopVote value);
    // static field const value: static public Steamworks.WorkshopVote For
    static constexpr const int For = 1;
    // Get static field: static public Steamworks.WorkshopVote For
    static ::Steamworks::WorkshopVote _get_For();
    // Set static field: static public Steamworks.WorkshopVote For
    static void _set_For(::Steamworks::WorkshopVote value);
    // static field const value: static public Steamworks.WorkshopVote Against
    static constexpr const int Against = 2;
    // Get static field: static public Steamworks.WorkshopVote Against
    static ::Steamworks::WorkshopVote _get_Against();
    // Set static field: static public Steamworks.WorkshopVote Against
    static void _set_Against(::Steamworks::WorkshopVote value);
    // static field const value: static public Steamworks.WorkshopVote Later
    static constexpr const int Later = 3;
    // Get static field: static public Steamworks.WorkshopVote Later
    static ::Steamworks::WorkshopVote _get_Later();
    // Set static field: static public Steamworks.WorkshopVote Later
    static void _set_Later(::Steamworks::WorkshopVote value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.WorkshopVote
  #pragma pack(pop)
  static check_size<sizeof(WorkshopVote), 0 + sizeof(int)> __Steamworks_WorkshopVoteSizeCheck;
  static_assert(sizeof(WorkshopVote) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

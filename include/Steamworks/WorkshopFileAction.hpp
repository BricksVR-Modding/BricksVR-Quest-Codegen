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
  // Forward declaring type: WorkshopFileAction
  struct WorkshopFileAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::WorkshopFileAction, "Steamworks", "WorkshopFileAction");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.WorkshopFileAction
  // [TokenAttribute] Offset: FFFFFFFF
  struct WorkshopFileAction/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WorkshopFileAction
    constexpr WorkshopFileAction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.WorkshopFileAction Played
    static constexpr const int Played = 0;
    // Get static field: static public Steamworks.WorkshopFileAction Played
    static ::Steamworks::WorkshopFileAction _get_Played();
    // Set static field: static public Steamworks.WorkshopFileAction Played
    static void _set_Played(::Steamworks::WorkshopFileAction value);
    // static field const value: static public Steamworks.WorkshopFileAction Completed
    static constexpr const int Completed = 1;
    // Get static field: static public Steamworks.WorkshopFileAction Completed
    static ::Steamworks::WorkshopFileAction _get_Completed();
    // Set static field: static public Steamworks.WorkshopFileAction Completed
    static void _set_Completed(::Steamworks::WorkshopFileAction value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.WorkshopFileAction
  #pragma pack(pop)
  static check_size<sizeof(WorkshopFileAction), 0 + sizeof(int)> __Steamworks_WorkshopFileActionSizeCheck;
  static_assert(sizeof(WorkshopFileAction) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

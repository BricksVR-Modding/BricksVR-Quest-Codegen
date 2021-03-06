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
  // Forward declaring type: RemoteStoragePublishedFileVisibility
  struct RemoteStoragePublishedFileVisibility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::RemoteStoragePublishedFileVisibility, "Steamworks", "RemoteStoragePublishedFileVisibility");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.RemoteStoragePublishedFileVisibility
  // [TokenAttribute] Offset: FFFFFFFF
  struct RemoteStoragePublishedFileVisibility/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RemoteStoragePublishedFileVisibility
    constexpr RemoteStoragePublishedFileVisibility(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.RemoteStoragePublishedFileVisibility Public
    static constexpr const int Public = 0;
    // Get static field: static public Steamworks.RemoteStoragePublishedFileVisibility Public
    static ::Steamworks::RemoteStoragePublishedFileVisibility _get_Public();
    // Set static field: static public Steamworks.RemoteStoragePublishedFileVisibility Public
    static void _set_Public(::Steamworks::RemoteStoragePublishedFileVisibility value);
    // static field const value: static public Steamworks.RemoteStoragePublishedFileVisibility FriendsOnly
    static constexpr const int FriendsOnly = 1;
    // Get static field: static public Steamworks.RemoteStoragePublishedFileVisibility FriendsOnly
    static ::Steamworks::RemoteStoragePublishedFileVisibility _get_FriendsOnly();
    // Set static field: static public Steamworks.RemoteStoragePublishedFileVisibility FriendsOnly
    static void _set_FriendsOnly(::Steamworks::RemoteStoragePublishedFileVisibility value);
    // static field const value: static public Steamworks.RemoteStoragePublishedFileVisibility Private
    static constexpr const int Private = 2;
    // Get static field: static public Steamworks.RemoteStoragePublishedFileVisibility Private
    static ::Steamworks::RemoteStoragePublishedFileVisibility _get_Private();
    // Set static field: static public Steamworks.RemoteStoragePublishedFileVisibility Private
    static void _set_Private(::Steamworks::RemoteStoragePublishedFileVisibility value);
    // static field const value: static public Steamworks.RemoteStoragePublishedFileVisibility Unlisted
    static constexpr const int Unlisted = 3;
    // Get static field: static public Steamworks.RemoteStoragePublishedFileVisibility Unlisted
    static ::Steamworks::RemoteStoragePublishedFileVisibility _get_Unlisted();
    // Set static field: static public Steamworks.RemoteStoragePublishedFileVisibility Unlisted
    static void _set_Unlisted(::Steamworks::RemoteStoragePublishedFileVisibility value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.RemoteStoragePublishedFileVisibility
  #pragma pack(pop)
  static check_size<sizeof(RemoteStoragePublishedFileVisibility), 0 + sizeof(int)> __Steamworks_RemoteStoragePublishedFileVisibilitySizeCheck;
  static_assert(sizeof(RemoteStoragePublishedFileVisibility) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

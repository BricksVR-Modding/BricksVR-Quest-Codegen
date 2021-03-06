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
  // Forward declaring type: CheckFileSignature
  struct CheckFileSignature;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::CheckFileSignature, "Steamworks", "CheckFileSignature");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Steamworks.CheckFileSignature
  // [TokenAttribute] Offset: FFFFFFFF
  struct CheckFileSignature/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CheckFileSignature
    constexpr CheckFileSignature(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Steamworks.CheckFileSignature InvalidSignature
    static constexpr const int InvalidSignature = 0;
    // Get static field: static public Steamworks.CheckFileSignature InvalidSignature
    static ::Steamworks::CheckFileSignature _get_InvalidSignature();
    // Set static field: static public Steamworks.CheckFileSignature InvalidSignature
    static void _set_InvalidSignature(::Steamworks::CheckFileSignature value);
    // static field const value: static public Steamworks.CheckFileSignature ValidSignature
    static constexpr const int ValidSignature = 1;
    // Get static field: static public Steamworks.CheckFileSignature ValidSignature
    static ::Steamworks::CheckFileSignature _get_ValidSignature();
    // Set static field: static public Steamworks.CheckFileSignature ValidSignature
    static void _set_ValidSignature(::Steamworks::CheckFileSignature value);
    // static field const value: static public Steamworks.CheckFileSignature FileNotFound
    static constexpr const int FileNotFound = 2;
    // Get static field: static public Steamworks.CheckFileSignature FileNotFound
    static ::Steamworks::CheckFileSignature _get_FileNotFound();
    // Set static field: static public Steamworks.CheckFileSignature FileNotFound
    static void _set_FileNotFound(::Steamworks::CheckFileSignature value);
    // static field const value: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisApp
    static constexpr const int NoSignaturesFoundForThisApp = 3;
    // Get static field: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisApp
    static ::Steamworks::CheckFileSignature _get_NoSignaturesFoundForThisApp();
    // Set static field: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisApp
    static void _set_NoSignaturesFoundForThisApp(::Steamworks::CheckFileSignature value);
    // static field const value: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisFile
    static constexpr const int NoSignaturesFoundForThisFile = 4;
    // Get static field: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisFile
    static ::Steamworks::CheckFileSignature _get_NoSignaturesFoundForThisFile();
    // Set static field: static public Steamworks.CheckFileSignature NoSignaturesFoundForThisFile
    static void _set_NoSignaturesFoundForThisFile(::Steamworks::CheckFileSignature value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Steamworks.CheckFileSignature
  #pragma pack(pop)
  static check_size<sizeof(CheckFileSignature), 0 + sizeof(int)> __Steamworks_CheckFileSignatureSizeCheck;
  static_assert(sizeof(CheckFileSignature) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

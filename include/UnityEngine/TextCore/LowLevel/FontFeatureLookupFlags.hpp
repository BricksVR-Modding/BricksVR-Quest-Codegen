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
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: FontFeatureLookupFlags
  struct FontFeatureLookupFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, "UnityEngine.TextCore.LowLevel", "FontFeatureLookupFlags");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FontFeatureLookupFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FontFeatureLookupFlags
    constexpr FontFeatureLookupFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags None
    static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags _get_None();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags None
    static void _set_None(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreLigatures
    static constexpr const int IgnoreLigatures = 4;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreLigatures
    static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags _get_IgnoreLigatures();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreLigatures
    static void _set_IgnoreLigatures(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags value);
    // static field const value: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static constexpr const int IgnoreSpacingAdjustments = 256;
    // Get static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags _get_IgnoreSpacingAdjustments();
    // Set static field: static public UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags IgnoreSpacingAdjustments
    static void _set_IgnoreSpacingAdjustments(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags
  #pragma pack(pop)
  static check_size<sizeof(FontFeatureLookupFlags), 0 + sizeof(int)> __UnityEngine_TextCore_LowLevel_FontFeatureLookupFlagsSizeCheck;
  static_assert(sizeof(FontFeatureLookupFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

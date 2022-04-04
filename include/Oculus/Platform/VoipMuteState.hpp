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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: VoipMuteState
  struct VoipMuteState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::VoipMuteState, "Oculus.Platform", "VoipMuteState");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.VoipMuteState
  // [TokenAttribute] Offset: FFFFFFFF
  struct VoipMuteState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VoipMuteState
    constexpr VoipMuteState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [DescriptionAttribute] Offset: 0xC0650
    // static field const value: static public Oculus.Platform.VoipMuteState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.VoipMuteState Unknown
    static ::Oculus::Platform::VoipMuteState _get_Unknown();
    // Set static field: static public Oculus.Platform.VoipMuteState Unknown
    static void _set_Unknown(::Oculus::Platform::VoipMuteState value);
    // [DescriptionAttribute] Offset: 0xCC580
    // static field const value: static public Oculus.Platform.VoipMuteState Muted
    static constexpr const int Muted = 1;
    // Get static field: static public Oculus.Platform.VoipMuteState Muted
    static ::Oculus::Platform::VoipMuteState _get_Muted();
    // Set static field: static public Oculus.Platform.VoipMuteState Muted
    static void _set_Muted(::Oculus::Platform::VoipMuteState value);
    // [DescriptionAttribute] Offset: 0xCC700
    // static field const value: static public Oculus.Platform.VoipMuteState Unmuted
    static constexpr const int Unmuted = 2;
    // Get static field: static public Oculus.Platform.VoipMuteState Unmuted
    static ::Oculus::Platform::VoipMuteState _get_Unmuted();
    // Set static field: static public Oculus.Platform.VoipMuteState Unmuted
    static void _set_Unmuted(::Oculus::Platform::VoipMuteState value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // Oculus.Platform.VoipMuteState
  #pragma pack(pop)
  static check_size<sizeof(VoipMuteState), 0 + sizeof(int)> __Oculus_Platform_VoipMuteStateSizeCheck;
  static_assert(sizeof(VoipMuteState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

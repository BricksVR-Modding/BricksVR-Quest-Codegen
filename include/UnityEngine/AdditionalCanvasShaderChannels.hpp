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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AdditionalCanvasShaderChannels
  struct AdditionalCanvasShaderChannels;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AdditionalCanvasShaderChannels, "UnityEngine", "AdditionalCanvasShaderChannels");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AdditionalCanvasShaderChannels
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct AdditionalCanvasShaderChannels/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AdditionalCanvasShaderChannels
    constexpr AdditionalCanvasShaderChannels(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels None
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_None();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels None
    static void _set_None(::UnityEngine::AdditionalCanvasShaderChannels value);
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord1
    static constexpr const int TexCoord1 = 1;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord1
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_TexCoord1();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord1
    static void _set_TexCoord1(::UnityEngine::AdditionalCanvasShaderChannels value);
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord2
    static constexpr const int TexCoord2 = 2;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord2
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_TexCoord2();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord2
    static void _set_TexCoord2(::UnityEngine::AdditionalCanvasShaderChannels value);
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord3
    static constexpr const int TexCoord3 = 4;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord3
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_TexCoord3();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels TexCoord3
    static void _set_TexCoord3(::UnityEngine::AdditionalCanvasShaderChannels value);
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels Normal
    static constexpr const int Normal = 8;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels Normal
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_Normal();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels Normal
    static void _set_Normal(::UnityEngine::AdditionalCanvasShaderChannels value);
    // static field const value: static public UnityEngine.AdditionalCanvasShaderChannels Tangent
    static constexpr const int Tangent = 16;
    // Get static field: static public UnityEngine.AdditionalCanvasShaderChannels Tangent
    static ::UnityEngine::AdditionalCanvasShaderChannels _get_Tangent();
    // Set static field: static public UnityEngine.AdditionalCanvasShaderChannels Tangent
    static void _set_Tangent(::UnityEngine::AdditionalCanvasShaderChannels value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.AdditionalCanvasShaderChannels
  #pragma pack(pop)
  static check_size<sizeof(AdditionalCanvasShaderChannels), 0 + sizeof(int)> __UnityEngine_AdditionalCanvasShaderChannelsSizeCheck;
  static_assert(sizeof(AdditionalCanvasShaderChannels) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

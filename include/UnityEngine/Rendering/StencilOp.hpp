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
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: StencilOp
  struct StencilOp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::StencilOp, "UnityEngine.Rendering", "StencilOp");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.StencilOp
  // [TokenAttribute] Offset: FFFFFFFF
  struct StencilOp/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: StencilOp
    constexpr StencilOp(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.StencilOp Keep
    static constexpr const int Keep = 0;
    // Get static field: static public UnityEngine.Rendering.StencilOp Keep
    static ::UnityEngine::Rendering::StencilOp _get_Keep();
    // Set static field: static public UnityEngine.Rendering.StencilOp Keep
    static void _set_Keep(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp Zero
    static constexpr const int Zero = 1;
    // Get static field: static public UnityEngine.Rendering.StencilOp Zero
    static ::UnityEngine::Rendering::StencilOp _get_Zero();
    // Set static field: static public UnityEngine.Rendering.StencilOp Zero
    static void _set_Zero(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp Replace
    static constexpr const int Replace = 2;
    // Get static field: static public UnityEngine.Rendering.StencilOp Replace
    static ::UnityEngine::Rendering::StencilOp _get_Replace();
    // Set static field: static public UnityEngine.Rendering.StencilOp Replace
    static void _set_Replace(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp IncrementSaturate
    static constexpr const int IncrementSaturate = 3;
    // Get static field: static public UnityEngine.Rendering.StencilOp IncrementSaturate
    static ::UnityEngine::Rendering::StencilOp _get_IncrementSaturate();
    // Set static field: static public UnityEngine.Rendering.StencilOp IncrementSaturate
    static void _set_IncrementSaturate(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp DecrementSaturate
    static constexpr const int DecrementSaturate = 4;
    // Get static field: static public UnityEngine.Rendering.StencilOp DecrementSaturate
    static ::UnityEngine::Rendering::StencilOp _get_DecrementSaturate();
    // Set static field: static public UnityEngine.Rendering.StencilOp DecrementSaturate
    static void _set_DecrementSaturate(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp Invert
    static constexpr const int Invert = 5;
    // Get static field: static public UnityEngine.Rendering.StencilOp Invert
    static ::UnityEngine::Rendering::StencilOp _get_Invert();
    // Set static field: static public UnityEngine.Rendering.StencilOp Invert
    static void _set_Invert(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp IncrementWrap
    static constexpr const int IncrementWrap = 6;
    // Get static field: static public UnityEngine.Rendering.StencilOp IncrementWrap
    static ::UnityEngine::Rendering::StencilOp _get_IncrementWrap();
    // Set static field: static public UnityEngine.Rendering.StencilOp IncrementWrap
    static void _set_IncrementWrap(::UnityEngine::Rendering::StencilOp value);
    // static field const value: static public UnityEngine.Rendering.StencilOp DecrementWrap
    static constexpr const int DecrementWrap = 7;
    // Get static field: static public UnityEngine.Rendering.StencilOp DecrementWrap
    static ::UnityEngine::Rendering::StencilOp _get_DecrementWrap();
    // Set static field: static public UnityEngine.Rendering.StencilOp DecrementWrap
    static void _set_DecrementWrap(::UnityEngine::Rendering::StencilOp value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated]] int& dyn_value__();
  }; // UnityEngine.Rendering.StencilOp
  #pragma pack(pop)
  static check_size<sizeof(StencilOp), 0 + sizeof(int)> __UnityEngine_Rendering_StencilOpSizeCheck;
  static_assert(sizeof(StencilOp) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

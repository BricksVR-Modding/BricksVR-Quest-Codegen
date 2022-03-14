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
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Forward declaring type: MeshVertexAttributes
  struct MeshVertexAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::MeshVertexAttributes, "UnityEngine.XR", "MeshVertexAttributes");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.MeshVertexAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: 6EEC9C
  // [NativeHeaderAttribute] Offset: 6EEC9C
  struct MeshVertexAttributes/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MeshVertexAttributes
    constexpr MeshVertexAttributes(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes None
    static ::UnityEngine::XR::MeshVertexAttributes _get_None();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes None
    static void _set_None(::UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Normals
    static constexpr const int Normals = 1;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Normals
    static ::UnityEngine::XR::MeshVertexAttributes _get_Normals();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Normals
    static void _set_Normals(::UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static constexpr const int Tangents = 2;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static ::UnityEngine::XR::MeshVertexAttributes _get_Tangents();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Tangents
    static void _set_Tangents(::UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes UVs
    static constexpr const int UVs = 4;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes UVs
    static ::UnityEngine::XR::MeshVertexAttributes _get_UVs();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes UVs
    static void _set_UVs(::UnityEngine::XR::MeshVertexAttributes value);
    // static field const value: static public UnityEngine.XR.MeshVertexAttributes Colors
    static constexpr const int Colors = 8;
    // Get static field: static public UnityEngine.XR.MeshVertexAttributes Colors
    static ::UnityEngine::XR::MeshVertexAttributes _get_Colors();
    // Set static field: static public UnityEngine.XR.MeshVertexAttributes Colors
    static void _set_Colors(::UnityEngine::XR::MeshVertexAttributes value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.XR.MeshVertexAttributes
  #pragma pack(pop)
  static check_size<sizeof(MeshVertexAttributes), 0 + sizeof(int)> __UnityEngine_XR_MeshVertexAttributesSizeCheck;
  static_assert(sizeof(MeshVertexAttributes) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

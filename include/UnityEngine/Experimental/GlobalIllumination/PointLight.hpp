// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LightMode
#include "UnityEngine/Experimental/GlobalIllumination/LightMode.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.LinearColor
#include "UnityEngine/Experimental/GlobalIllumination/LinearColor.hpp"
// Including type: UnityEngine.Experimental.GlobalIllumination.FalloffType
#include "UnityEngine/Experimental/GlobalIllumination/FalloffType.hpp"
// Completed includes
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: PointLight
  struct PointLight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::PointLight, "UnityEngine.Experimental.GlobalIllumination", "PointLight");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x3D
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.PointLight
  // [TokenAttribute] Offset: FFFFFFFF
  struct PointLight/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 instanceID
    // Size: 0x4
    // Offset: 0x0
    int instanceID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean shadow
    // Size: 0x1
    // Offset: 0x4
    bool shadow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    // Size: 0x1
    // Offset: 0x5
    ::UnityEngine::Experimental::GlobalIllumination::LightMode mode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::LightMode) == 0x1);
    // Padding between fields: mode and: position
    char __padding2[0x2] = {};
    // public UnityEngine.Vector3 position
    // Size: 0xC
    // Offset: 0x8
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    // Size: 0x10
    // Offset: 0x14
    ::UnityEngine::Experimental::GlobalIllumination::LinearColor color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::LinearColor) == 0x10);
    // public System.Single range
    // Size: 0x4
    // Offset: 0x34
    float range;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sphereRadius
    // Size: 0x4
    // Offset: 0x38
    float sphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    // Size: 0x1
    // Offset: 0x3C
    ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff;
    // Field size check
    static_assert(sizeof(::UnityEngine::Experimental::GlobalIllumination::FalloffType) == 0x1);
    public:
    // Creating value type constructor for type: PointLight
    constexpr PointLight(int instanceID_ = {}, bool shadow_ = {}, ::UnityEngine::Experimental::GlobalIllumination::LightMode mode_ = {}, ::UnityEngine::Vector3 position_ = {}, ::UnityEngine::Experimental::GlobalIllumination::LinearColor color_ = {}, ::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor_ = {}, float range_ = {}, float sphereRadius_ = {}, ::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff_ = {}) noexcept : instanceID{instanceID_}, shadow{shadow_}, mode{mode_}, position{position_}, color{color_}, indirectColor{indirectColor_}, range{range_}, sphereRadius{sphereRadius_}, falloff{falloff_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 instanceID
    [[deprecated]] int& dyn_instanceID();
    // Get instance field reference: public System.Boolean shadow
    [[deprecated]] bool& dyn_shadow();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LightMode mode
    [[deprecated]] ::UnityEngine::Experimental::GlobalIllumination::LightMode& dyn_mode();
    // Get instance field reference: public UnityEngine.Vector3 position
    [[deprecated]] ::UnityEngine::Vector3& dyn_position();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor color
    [[deprecated]] ::UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_color();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.LinearColor indirectColor
    [[deprecated]] ::UnityEngine::Experimental::GlobalIllumination::LinearColor& dyn_indirectColor();
    // Get instance field reference: public System.Single range
    [[deprecated]] float& dyn_range();
    // Get instance field reference: public System.Single sphereRadius
    [[deprecated]] float& dyn_sphereRadius();
    // Get instance field reference: public UnityEngine.Experimental.GlobalIllumination.FalloffType falloff
    [[deprecated]] ::UnityEngine::Experimental::GlobalIllumination::FalloffType& dyn_falloff();
  }; // UnityEngine.Experimental.GlobalIllumination.PointLight
  #pragma pack(pop)
  static check_size<sizeof(PointLight), 60 + sizeof(::UnityEngine::Experimental::GlobalIllumination::FalloffType)> __UnityEngine_Experimental_GlobalIllumination_PointLightSizeCheck;
  static_assert(sizeof(PointLight) == 0x3D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

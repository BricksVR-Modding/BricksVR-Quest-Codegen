// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Vector2i
#include "GlobalNamespace/OVRPlugin_Vector2i.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::Recti, "", "OVRPlugin/Recti");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/Recti
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Recti/*, public ::System::ValueType*/ {
    public:
    public:
    // private OVRPlugin/Vector2i Pos
    // Size: 0x8
    // Offset: 0x0
    ::GlobalNamespace::OVRPlugin::Vector2i Pos;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Vector2i) == 0x8);
    // private OVRPlugin/Sizei Size
    // Size: 0x8
    // Offset: 0x8
    ::GlobalNamespace::OVRPlugin::Sizei Size;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    public:
    // Creating value type constructor for type: Recti
    constexpr Recti(::GlobalNamespace::OVRPlugin::Vector2i Pos_ = {}, ::GlobalNamespace::OVRPlugin::Sizei Size_ = {}) noexcept : Pos{Pos_}, Size{Size_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private OVRPlugin/Vector2i Pos
    ::GlobalNamespace::OVRPlugin::Vector2i& dyn_Pos();
    // Get instance field reference: private OVRPlugin/Sizei Size
    ::GlobalNamespace::OVRPlugin::Sizei& dyn_Size();
  }; // OVRPlugin/Recti
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Recti), 8 + sizeof(::GlobalNamespace::OVRPlugin::Sizei)> __GlobalNamespace_OVRPlugin_RectiSizeCheck;
  static_assert(sizeof(OVRPlugin::Recti) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

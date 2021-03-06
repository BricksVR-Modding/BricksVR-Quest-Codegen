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
// Including type: OVRPlugin/Vector3f
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::BoneCapsule, "", "OVRPlugin/BoneCapsule");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/BoneCapsule
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::BoneCapsule/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int16 BoneIndex
    // Size: 0x2
    // Offset: 0x0
    int16_t BoneIndex;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // Padding between fields: BoneIndex and: Points
    char __padding0[0x6] = {};
    // public OVRPlugin/Vector3f[] Points
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f> Points;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>) == 0x8);
    // public System.Single Radius
    // Size: 0x4
    // Offset: 0x10
    float Radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: BoneCapsule
    constexpr BoneCapsule(int16_t BoneIndex_ = {}, ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f> Points_ = ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>(static_cast<void*>(nullptr)), float Radius_ = {}) noexcept : BoneIndex{BoneIndex_}, Points{Points_}, Radius{Radius_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int16 BoneIndex
    [[deprecated("Use field access instead!")]] int16_t& dyn_BoneIndex();
    // Get instance field reference: public OVRPlugin/Vector3f[] Points
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::OVRPlugin::Vector3f>& dyn_Points();
    // Get instance field reference: public System.Single Radius
    [[deprecated("Use field access instead!")]] float& dyn_Radius();
  }; // OVRPlugin/BoneCapsule
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::BoneCapsule), 16 + sizeof(float)> __GlobalNamespace_OVRPlugin_BoneCapsuleSizeCheck;
  static_assert(sizeof(OVRPlugin::BoneCapsule) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

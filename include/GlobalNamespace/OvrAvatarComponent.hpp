// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: ovrAvatarTransform
#include "GlobalNamespace/ovrAvatarTransform.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ovrAvatarComponent, "", "ovrAvatarComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: ovrAvatarComponent
  // [TokenAttribute] Offset: FFFFFFFF
  struct ovrAvatarComponent/*, public ::System::ValueType*/ {
    public:
    public:
    // public ovrAvatarTransform transform
    // Size: 0x28
    // Offset: 0x0
    ::GlobalNamespace::ovrAvatarTransform transform;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ovrAvatarTransform) == 0x28);
    // public System.UInt32 renderPartCount
    // Size: 0x4
    // Offset: 0x28
    uint renderPartCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: renderPartCount and: renderParts
    char __padding1[0x4] = {};
    // public System.IntPtr renderParts
    // Size: 0x8
    // Offset: 0x30
    ::System::IntPtr renderParts;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x38
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: ovrAvatarComponent
    constexpr ovrAvatarComponent(::GlobalNamespace::ovrAvatarTransform transform_ = {}, uint renderPartCount_ = {}, ::System::IntPtr renderParts_ = {}, ::StringW name_ = {}) noexcept : transform{transform_}, renderPartCount{renderPartCount_}, renderParts{renderParts_}, name{name_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public ovrAvatarTransform transform
    ::GlobalNamespace::ovrAvatarTransform& dyn_transform();
    // Get instance field reference: public System.UInt32 renderPartCount
    uint& dyn_renderPartCount();
    // Get instance field reference: public System.IntPtr renderParts
    ::System::IntPtr& dyn_renderParts();
    // Get instance field reference: public System.String name
    ::StringW& dyn_name();
  }; // ovrAvatarComponent
  #pragma pack(pop)
  static check_size<sizeof(ovrAvatarComponent), 56 + sizeof(::StringW)> __GlobalNamespace_ovrAvatarComponentSizeCheck;
  static_assert(sizeof(ovrAvatarComponent) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

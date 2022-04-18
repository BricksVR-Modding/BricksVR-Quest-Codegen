// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRInput/OVRControllerBase
#include "GlobalNamespace/OVRInput_OVRControllerBase.hpp"
// Including type: OVRInput/RawAxis2D
#include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*, "", "OVRInput/OVRControllerBase/VirtualAxis2DMap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/OVRControllerBase/VirtualAxis2DMap
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRInput::OVRControllerBase::VirtualAxis2DMap : public ::Il2CppObject {
    public:
    public:
    // public OVRInput/RawAxis2D None
    // Size: 0x4
    // Offset: 0x10
    ::GlobalNamespace::OVRInput::RawAxis2D None;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D PrimaryThumbstick
    // Size: 0x4
    // Offset: 0x14
    ::GlobalNamespace::OVRInput::RawAxis2D PrimaryThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D PrimaryTouchpad
    // Size: 0x4
    // Offset: 0x18
    ::GlobalNamespace::OVRInput::RawAxis2D PrimaryTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D SecondaryThumbstick
    // Size: 0x4
    // Offset: 0x1C
    ::GlobalNamespace::OVRInput::RawAxis2D SecondaryThumbstick;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    // public OVRInput/RawAxis2D SecondaryTouchpad
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::OVRInput::RawAxis2D SecondaryTouchpad;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRInput::RawAxis2D) == 0x4);
    public:
    // Get instance field reference: public OVRInput/RawAxis2D None
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawAxis2D& dyn_None();
    // Get instance field reference: public OVRInput/RawAxis2D PrimaryThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawAxis2D& dyn_PrimaryThumbstick();
    // Get instance field reference: public OVRInput/RawAxis2D PrimaryTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawAxis2D& dyn_PrimaryTouchpad();
    // Get instance field reference: public OVRInput/RawAxis2D SecondaryThumbstick
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawAxis2D& dyn_SecondaryThumbstick();
    // Get instance field reference: public OVRInput/RawAxis2D SecondaryTouchpad
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRInput::RawAxis2D& dyn_SecondaryTouchpad();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::OVRControllerBase::VirtualAxis2DMap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::OVRControllerBase::VirtualAxis2DMap*, creationType>()));
    }
    // public OVRInput/RawAxis2D ToRawMask(OVRInput/Axis2D virtualMask)
    // Offset: 0x3DE9E0
    ::GlobalNamespace::OVRInput::RawAxis2D ToRawMask(::GlobalNamespace::OVRInput::Axis2D virtualMask);
  }; // OVRInput/OVRControllerBase/VirtualAxis2DMap
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::OVRControllerBase::VirtualAxis2DMap), 32 + sizeof(::GlobalNamespace::OVRInput::RawAxis2D)> __GlobalNamespace_OVRInput_OVRControllerBase_VirtualAxis2DMapSizeCheck;
  static_assert(sizeof(OVRInput::OVRControllerBase::VirtualAxis2DMap) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::ToRawMask
// Il2CppName: ToRawMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRInput::RawAxis2D (GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::*)(::GlobalNamespace::OVRInput::Axis2D)>(&GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap::ToRawMask)> {
  static const MethodInfo* get() {
    static auto* virtualMask = &::il2cpp_utils::GetClassFromName("", "OVRInput/Axis2D")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRInput::OVRControllerBase::VirtualAxis2DMap*), "ToRawMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{virtualMask});
  }
};

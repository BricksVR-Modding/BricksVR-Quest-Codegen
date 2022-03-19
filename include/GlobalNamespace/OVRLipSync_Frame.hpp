// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRLipSync
#include "GlobalNamespace/OVRLipSync.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRLipSync::Frame);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLipSync::Frame*, "", "OVRLipSync/Frame");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRLipSync/Frame
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRLipSync::Frame : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public System.Int32 frameNumber
    // Size: 0x4
    // Offset: 0x10
    int frameNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 frameDelay
    // Size: 0x4
    // Offset: 0x14
    int frameDelay;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single[] Visemes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<float> Visemes;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // public System.Single laughterScore
    // Size: 0x4
    // Offset: 0x20
    float laughterScore;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Int32 frameNumber
    int& dyn_frameNumber();
    // Get instance field reference: public System.Int32 frameDelay
    int& dyn_frameDelay();
    // Get instance field reference: public System.Single[] Visemes
    ::ArrayW<float>& dyn_Visemes();
    // Get instance field reference: public System.Single laughterScore
    float& dyn_laughterScore();
    // public System.Void CopyInput(OVRLipSync/Frame input)
    // Offset: 0x10E22E8
    void CopyInput(::GlobalNamespace::OVRLipSync::Frame* input);
    // public System.Void Reset()
    // Offset: 0x10E2340
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x10E23D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRLipSync::Frame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRLipSync::Frame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRLipSync::Frame*, creationType>()));
    }
  }; // OVRLipSync/Frame
  #pragma pack(pop)
  static check_size<sizeof(OVRLipSync::Frame), 32 + sizeof(float)> __GlobalNamespace_OVRLipSync_FrameSizeCheck;
  static_assert(sizeof(OVRLipSync::Frame) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSync::Frame::CopyInput
// Il2CppName: CopyInput
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSync::Frame::*)(::GlobalNamespace::OVRLipSync::Frame*)>(&GlobalNamespace::OVRLipSync::Frame::CopyInput)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("", "OVRLipSync/Frame")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSync::Frame*), "CopyInput", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSync::Frame::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRLipSync::Frame::*)()>(&GlobalNamespace::OVRLipSync::Frame::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRLipSync::Frame*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRLipSync::Frame::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

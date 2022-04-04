// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPlugin::OVRP_1_2_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::OVRP_1_2_0*, "", "OVRPlugin/OVRP_1_2_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/OVRP_1_2_0
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPlugin::OVRP_1_2_0 : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version version
    static ::System::Version* _get_version();
    // Set static field: static public readonly System.Version version
    static void _set_version(::System::Version* value);
    // static private System.Void .cctor()
    // Offset: 0x398D00
    static void _cctor();
    // static public OVRPlugin/Bool ovrp_SetSystemVSyncCount(System.Int32 vsyncCount)
    // Offset: 0x398D70
    static ::GlobalNamespace::OVRPlugin::Bool ovrp_SetSystemVSyncCount(int vsyncCount);
    // static public OVRPlugin/Bool ovrpi_SetTrackingCalibratedOrigin()
    // Offset: 0x398DF0
    static ::GlobalNamespace::OVRPlugin::Bool ovrpi_SetTrackingCalibratedOrigin();
  }; // OVRPlugin/OVRP_1_2_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrp_SetSystemVSyncCount
// Il2CppName: ovrp_SetSystemVSyncCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)(int)>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrp_SetSystemVSyncCount)> {
  static const MethodInfo* get() {
    static auto* vsyncCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), "ovrp_SetSystemVSyncCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{vsyncCount});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrpi_SetTrackingCalibratedOrigin
// Il2CppName: ovrpi_SetTrackingCalibratedOrigin
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::Bool (*)()>(&GlobalNamespace::OVRPlugin::OVRP_1_2_0::ovrpi_SetTrackingCalibratedOrigin)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::OVRP_1_2_0*), "ovrpi_SetTrackingCalibratedOrigin", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

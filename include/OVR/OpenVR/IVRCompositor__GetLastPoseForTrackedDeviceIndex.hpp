// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, "OVR.OpenVR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetLastPoseForTrackedDeviceIndex
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 718F6C
  class IVRCompositor::_GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xD88168
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetLastPoseForTrackedDeviceIndex* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetLastPoseForTrackedDeviceIndex*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(System.UInt32 unDeviceIndex, ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pOutputGamePose)
    // Offset: 0xD88178
    ::OVR::OpenVR::EVRCompositorError Invoke(uint unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);
    // public System.IAsyncResult BeginInvoke(System.UInt32 unDeviceIndex, ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pOutputGamePose, System.AsyncCallback callback, System.Object object)
    // Offset: 0xD88418
    ::System::IAsyncResult* BeginInvoke(uint unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(ref OVR.OpenVR.TrackedDevicePose_t pOutputPose, ref OVR.OpenVR.TrackedDevicePose_t pOutputGamePose, System.IAsyncResult result)
    // Offset: 0xD884E4
    ::OVR::OpenVR::EVRCompositorError EndInvoke(ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetLastPoseForTrackedDeviceIndex
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(uint, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>)>(&OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::Invoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pOutputPose, pOutputGamePose});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(uint, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* unDeviceIndex = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unDeviceIndex, pOutputPose, pOutputGamePose, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::*)(ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ByRef<::OVR::OpenVR::TrackedDevicePose_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pOutputPose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* pOutputGamePose = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoseForTrackedDeviceIndex*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputPose, pOutputGamePose, result});
  }
};

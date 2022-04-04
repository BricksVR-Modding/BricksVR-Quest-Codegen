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
// Including type: OVR.OpenVR.TrackedDevicePose_t
#include "OVR/OpenVR/TrackedDevicePose_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRCompositorError
  struct EVRCompositorError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor::_GetLastPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor::_GetLastPoses*, "OVR.OpenVR", "IVRCompositor/_GetLastPoses");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetLastPoses
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D0F50
  class IVRCompositor::_GetLastPoses : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetLastPoses* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRCompositor::_GetLastPoses::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetLastPoses*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRCompositorError Invoke(in OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount)
    // Offset: 0x59EFA0
    ::OVR::OpenVR::EVRCompositorError Invoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint unGamePoseArrayCount);
    // public System.IAsyncResult BeginInvoke(in OVR.OpenVR.TrackedDevicePose_t[] pRenderPoseArray, System.UInt32 unRenderPoseArrayCount, in OVR.OpenVR.TrackedDevicePose_t[] pGamePoseArray, System.UInt32 unGamePoseArrayCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0x59EEF0
    ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pRenderPoseArray, uint unRenderPoseArrayCount, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>> pGamePoseArray, uint unGamePoseArrayCount, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRCompositorError EndInvoke(System.IAsyncResult result)
    // Offset: 0x2457D0
    ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetLastPoses
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoses::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoses::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_GetLastPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint)>(&OVR::OpenVR::IVRCompositor::_GetLastPoses::Invoke)> {
  static const MethodInfo* get() {
    static auto* pRenderPoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unRenderPoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pGamePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unGamePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoses*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoses::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_GetLastPoses::*)(ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint, ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>>, uint, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_GetLastPoses::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pRenderPoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unRenderPoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* pGamePoseArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "TrackedDevicePose_t"), 1)->this_arg;
    static auto* unGamePoseArrayCount = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoses*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pRenderPoseArray, unRenderPoseArrayCount, pGamePoseArray, unGamePoseArrayCount, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetLastPoses::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRCompositorError (OVR::OpenVR::IVRCompositor::_GetLastPoses::*)(::System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_GetLastPoses::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetLastPoses*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

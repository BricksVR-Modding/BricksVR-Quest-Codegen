// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
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
  // Forward declaring type: VROverlayIntersectionParams_t
  struct VROverlayIntersectionParams_t;
  // Forward declaring type: VROverlayIntersectionResults_t
  struct VROverlayIntersectionResults_t;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection*, "OVR.OpenVR", "IVROverlay/_ComputeOverlayIntersection");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._ComputeOverlayIntersection
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 719660
  class IVROverlay::_ComputeOverlayIntersection : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xD94CBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_ComputeOverlayIntersection* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_ComputeOverlayIntersection*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionParams_t pParams, ref OVR.OpenVR.VROverlayIntersectionResults_t pResults)
    // Offset: 0xD94CCC
    bool Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.VROverlayIntersectionParams_t pParams, ref OVR.OpenVR.VROverlayIntersectionResults_t pResults, System.AsyncCallback callback, System.Object object)
    // Offset: 0xD94F6C
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VROverlayIntersectionParams_t pParams, ref OVR.OpenVR.VROverlayIntersectionResults_t pResults, System.IAsyncResult result)
    // Offset: 0xD95040
    bool EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._ComputeOverlayIntersection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pParams = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionParams_t")->this_arg;
    static auto* pResults = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionResults_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pParams, pResults});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pParams = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionParams_t")->this_arg;
    static auto* pResults = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionResults_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, pParams, pResults, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::*)(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pParams = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionParams_t")->this_arg;
    static auto* pResults = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VROverlayIntersectionResults_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_ComputeOverlayIntersection*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pParams, pResults, result});
  }
};

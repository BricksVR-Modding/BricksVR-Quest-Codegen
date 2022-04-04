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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: EColorSpace
  struct EColorSpace;
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
NEED_NO_BOX(::OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace*, "OVR.OpenVR", "IVROverlay/_GetOverlayTextureColorSpace");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTextureColorSpace
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: D0F50
  class IVROverlay::_GetOverlayTextureColorSpace : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x229060
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTextureColorSpace* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTextureColorSpace*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.EColorSpace peTextureColorSpace)
    // Offset: 0x59DA70
    ::OVR::OpenVR::EVROverlayError Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref OVR.OpenVR.EColorSpace peTextureColorSpace, System.AsyncCallback callback, System.Object object)
    // Offset: 0x5A19F0
    ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVROverlayError EndInvoke(ref OVR.OpenVR.EColorSpace peTextureColorSpace, System.IAsyncResult result)
    // Offset: 0x243240
    ::OVR::OpenVR::EVROverlayError EndInvoke(ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/OVR.OpenVR._GetOverlayTextureColorSpace
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::*)(uint64_t, ByRef<::OVR::OpenVR::EColorSpace>)>(&OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* peTextureColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, peTextureColorSpace});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::*)(uint64_t, ByRef<::OVR::OpenVR::EColorSpace>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* peTextureColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, peTextureColorSpace, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::*)(ByRef<::OVR::OpenVR::EColorSpace>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* peTextureColorSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EColorSpace")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_GetOverlayTextureColorSpace*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{peTextureColorSpace, result});
  }
};

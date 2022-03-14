// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: ETextureType
  struct ETextureType;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetOutputDevice);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetOutputDevice*, "OVR.OpenVR", "IVRSystem/_GetOutputDevice");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetOutputDevice
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 718648
  class IVRSystem::_GetOutputDevice : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEA597C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetOutputDevice* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetOutputDevice::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetOutputDevice*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance)
    // Offset: 0xEA598C
    void Invoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance);
    // public System.IAsyncResult BeginInvoke(ref System.UInt64 pnDevice, OVR.OpenVR.ETextureType textureType, System.IntPtr pInstance, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEA5C14
    ::System::IAsyncResult* BeginInvoke(ByRef<uint64_t> pnDevice, ::OVR::OpenVR::ETextureType textureType, ::System::IntPtr pInstance, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.UInt64 pnDevice, System.IAsyncResult result)
    // Offset: 0xEA5CE4
    void EndInvoke(ByRef<uint64_t> pnDevice, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetOutputDevice
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::Invoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* textureType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETextureType")->byval_arg;
    static auto* pInstance = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, textureType, pInstance});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::OVR::OpenVR::ETextureType, ::System::IntPtr, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* textureType = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETextureType")->byval_arg;
    static auto* pInstance = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, textureType, pInstance, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetOutputDevice::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetOutputDevice::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetOutputDevice::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pnDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetOutputDevice*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pnDevice, result});
  }
};

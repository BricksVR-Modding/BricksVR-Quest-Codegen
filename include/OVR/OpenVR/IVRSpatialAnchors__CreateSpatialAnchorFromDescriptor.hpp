// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSpatialAnchors
#include "OVR/OpenVR/IVRSpatialAnchors.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRSpatialAnchorError
  struct EVRSpatialAnchorError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*, "OVR.OpenVR", "IVRSpatialAnchors/_CreateSpatialAnchorFromDescriptor");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 719E30
  class IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xEA0044
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EVRSpatialAnchorError Invoke(System.String pchDescriptor, ref System.UInt32 pHandleOut)
    // Offset: 0xEA0054
    ::OVR::OpenVR::EVRSpatialAnchorError Invoke(::StringW pchDescriptor, ByRef<uint> pHandleOut);
    // public System.IAsyncResult BeginInvoke(System.String pchDescriptor, ref System.UInt32 pHandleOut, System.AsyncCallback callback, System.Object object)
    // Offset: 0xEA0444
    ::System::IAsyncResult* BeginInvoke(::StringW pchDescriptor, ByRef<uint> pHandleOut, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EVRSpatialAnchorError EndInvoke(ref System.UInt32 pHandleOut, System.IAsyncResult result)
    // Offset: 0xEA04E0
    ::OVR::OpenVR::EVRSpatialAnchorError EndInvoke(ByRef<uint> pHandleOut, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSpatialAnchors/OVR.OpenVR._CreateSpatialAnchorFromDescriptor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::*)(::StringW, ByRef<uint>)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::Invoke)> {
  static const MethodInfo* get() {
    static auto* pchDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDescriptor, pHandleOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::*)(::StringW, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pchDescriptor = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchDescriptor, pHandleOut, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRSpatialAnchorError (OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::*)(ByRef<uint>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pHandleOut = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSpatialAnchors::_CreateSpatialAnchorFromDescriptor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pHandleOut, result});
  }
};

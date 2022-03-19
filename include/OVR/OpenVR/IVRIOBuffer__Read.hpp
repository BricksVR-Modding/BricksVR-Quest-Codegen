// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRIOBuffer
#include "OVR/OpenVR/IVRIOBuffer.hpp"
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
  // Forward declaring type: EIOBufferError
  struct EIOBufferError;
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
NEED_NO_BOX(::OVR::OpenVR::IVRIOBuffer::_Read);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRIOBuffer::_Read*, "OVR.OpenVR", "IVRIOBuffer/_Read");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Read
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 719DF4
  class IVRIOBuffer::_Read : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xD8EE70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRIOBuffer::_Read* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRIOBuffer::_Read::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRIOBuffer::_Read*, creationType>(object, method)));
    }
    // public OVR.OpenVR.EIOBufferError Invoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead)
    // Offset: 0xD8EE80
    ::OVR::OpenVR::EIOBufferError Invoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint unBytes, ByRef<uint> punRead);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulBuffer, System.IntPtr pDst, System.UInt32 unBytes, ref System.UInt32 punRead, System.AsyncCallback callback, System.Object object)
    // Offset: 0xD8F138
    ::System::IAsyncResult* BeginInvoke(uint64_t ulBuffer, ::System::IntPtr pDst, uint unBytes, ByRef<uint> punRead, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public OVR.OpenVR.EIOBufferError EndInvoke(ref System.UInt32 punRead, System.IAsyncResult result)
    // Offset: 0xD8F220
    ::OVR::OpenVR::EIOBufferError EndInvoke(ByRef<uint> punRead, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRIOBuffer/OVR.OpenVR._Read
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Read::*)(uint64_t, ::System::IntPtr, uint, ByRef<uint>)>(&OVR::OpenVR::IVRIOBuffer::_Read::Invoke)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pDst = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punRead = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Read*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pDst, unBytes, punRead});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRIOBuffer::_Read::*)(uint64_t, ::System::IntPtr, uint, ByRef<uint>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRIOBuffer::_Read::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ulBuffer = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pDst = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unBytes = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punRead = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Read*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulBuffer, pDst, unBytes, punRead, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRIOBuffer::_Read::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EIOBufferError (OVR::OpenVR::IVRIOBuffer::_Read::*)(ByRef<uint>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRIOBuffer::_Read::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* punRead = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRIOBuffer::_Read*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{punRead, result});
  }
};

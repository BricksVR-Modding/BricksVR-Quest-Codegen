// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRNativeBuffer
  class OVRNativeBuffer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRNativeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRNativeBuffer*, "", "OVRNativeBuffer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRNativeBuffer
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRNativeBuffer : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Boolean disposed
    // Size: 0x1
    // Offset: 0x10
    bool disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: disposed and: m_numBytes
    char __padding0[0x3] = {};
    // private System.Int32 m_numBytes
    // Size: 0x4
    // Offset: 0x14
    int m_numBytes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.IntPtr m_ptr
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr m_ptr;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Boolean disposed
    [[deprecated("Use field access instead!")]] bool& dyn_disposed();
    // Get instance field reference: private System.Int32 m_numBytes
    [[deprecated("Use field access instead!")]] int& dyn_m_numBytes();
    // Get instance field reference: private System.IntPtr m_ptr
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_m_ptr();
    // public System.Void .ctor(System.Int32 numBytes)
    // Offset: 0x370290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRNativeBuffer* New_ctor(int numBytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRNativeBuffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRNativeBuffer*, creationType>(numBytes)));
    }
    // public System.Void Reset(System.Int32 numBytes)
    // Offset: 0x370280
    void Reset(int numBytes);
    // public System.Int32 GetCapacity()
    // Offset: 0x217220
    int GetCapacity();
    // public System.IntPtr GetPointer(System.Int32 byteOffset)
    // Offset: 0x3700E0
    ::System::IntPtr GetPointer(int byteOffset);
    // public System.Void Dispose()
    // Offset: 0x36FFD0
    void Dispose();
    // private System.Void Dispose(System.Boolean disposing)
    // Offset: 0x370040
    void Dispose(bool disposing);
    // private System.Void Reallocate(System.Int32 numBytes)
    // Offset: 0x370170
    void Reallocate(int numBytes);
    // private System.Void Release()
    // Offset: 0x370200
    void Release();
    // protected override System.Void Finalize()
    // Offset: 0x370060
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // OVRNativeBuffer
  #pragma pack(pop)
  static check_size<sizeof(OVRNativeBuffer), 24 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRNativeBufferSizeCheck;
  static_assert(sizeof(OVRNativeBuffer) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)(int)>(&GlobalNamespace::OVRNativeBuffer::Reset)> {
  static const MethodInfo* get() {
    static auto* numBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numBytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::GetCapacity
// Il2CppName: GetCapacity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRNativeBuffer::*)()>(&GlobalNamespace::OVRNativeBuffer::GetCapacity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "GetCapacity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::GetPointer
// Il2CppName: GetPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (GlobalNamespace::OVRNativeBuffer::*)(int)>(&GlobalNamespace::OVRNativeBuffer::GetPointer)> {
  static const MethodInfo* get() {
    static auto* byteOffset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "GetPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{byteOffset});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)()>(&GlobalNamespace::OVRNativeBuffer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)(bool)>(&GlobalNamespace::OVRNativeBuffer::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Reallocate
// Il2CppName: Reallocate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)(int)>(&GlobalNamespace::OVRNativeBuffer::Reallocate)> {
  static const MethodInfo* get() {
    static auto* numBytes = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Reallocate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numBytes});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)()>(&GlobalNamespace::OVRNativeBuffer::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRNativeBuffer::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRNativeBuffer::*)()>(&GlobalNamespace::OVRNativeBuffer::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRNativeBuffer*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

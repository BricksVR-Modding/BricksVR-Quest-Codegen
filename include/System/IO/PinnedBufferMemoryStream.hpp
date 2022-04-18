// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.UnmanagedMemoryStream
#include "System/IO/UnmanagedMemoryStream.hpp"
// Including type: System.Runtime.InteropServices.GCHandle
#include "System/Runtime/InteropServices/GCHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: PinnedBufferMemoryStream
  class PinnedBufferMemoryStream;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::PinnedBufferMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PinnedBufferMemoryStream*, "System.IO", "PinnedBufferMemoryStream");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x74
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.PinnedBufferMemoryStream
  // [TokenAttribute] Offset: FFFFFFFF
  class PinnedBufferMemoryStream : public ::System::IO::UnmanagedMemoryStream {
    public:
    public:
    // private System.Byte[] _array
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint8_t> array;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Runtime.InteropServices.GCHandle _pinningHandle
    // Size: 0x4
    // Offset: 0x70
    ::System::Runtime::InteropServices::GCHandle pinningHandle;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::GCHandle) == 0x4);
    public:
    // Get instance field reference: private System.Byte[] _array
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__array();
    // Get instance field reference: private System.Runtime.InteropServices.GCHandle _pinningHandle
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::GCHandle& dyn__pinningHandle();
    // System.Void .ctor(System.Byte[] array)
    // Offset: 0x335280
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PinnedBufferMemoryStream* New_ctor(::ArrayW<uint8_t> array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::PinnedBufferMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PinnedBufferMemoryStream*, creationType>(array)));
    }
    // protected override System.Void Finalize()
    // Offset: 0x335200
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x3351C0
    // Implemented from: System.IO.UnmanagedMemoryStream
    // Base method: System.Void UnmanagedMemoryStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.IO.PinnedBufferMemoryStream
  #pragma pack(pop)
  static check_size<sizeof(PinnedBufferMemoryStream), 112 + sizeof(::System::Runtime::InteropServices::GCHandle)> __System_IO_PinnedBufferMemoryStreamSizeCheck;
  static_assert(sizeof(PinnedBufferMemoryStream) == 0x74);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::PinnedBufferMemoryStream::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::PinnedBufferMemoryStream::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)()>(&System::IO::PinnedBufferMemoryStream::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::PinnedBufferMemoryStream*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::PinnedBufferMemoryStream::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::PinnedBufferMemoryStream::*)(bool)>(&System::IO::PinnedBufferMemoryStream::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::PinnedBufferMemoryStream*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};

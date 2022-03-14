// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.DeflateStream
#include "System/IO/Compression/DeflateStream.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::DeflateStream::ReadMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStream::ReadMethod*, "System.IO.Compression", "DeflateStream/ReadMethod");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStream/System.IO.Compression.ReadMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class DeflateStream::ReadMethod : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xC7F6D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStream::ReadMethod* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStream::ReadMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStream::ReadMethod*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.Byte[] array, System.Int32 offset, System.Int32 count)
    // Offset: 0xC7FEFC
    int Invoke(::ArrayW<uint8_t> array, int offset, int count);
    // public System.IAsyncResult BeginInvoke(System.Byte[] array, System.Int32 offset, System.Int32 count, System.AsyncCallback callback, System.Object object)
    // Offset: 0xC7F6E0
    ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t> array, int offset, int count, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0xC7FBA8
    int EndInvoke(::System::IAsyncResult* result);
  }; // System.IO.Compression.DeflateStream/System.IO.Compression.ReadMethod
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::ReadMethod::*)(::ArrayW<uint8_t>, int, int)>(&System::IO::Compression::DeflateStream::ReadMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream::ReadMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadMethod::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IO::Compression::DeflateStream::ReadMethod::*)(::ArrayW<uint8_t>, int, int, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IO::Compression::DeflateStream::ReadMethod::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* array = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream::ReadMethod*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array, offset, count, callback, object});
  }
};
// Writing MetadataGetter for method: System::IO::Compression::DeflateStream::ReadMethod::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStream::ReadMethod::*)(::System::IAsyncResult*)>(&System::IO::Compression::DeflateStream::ReadMethod::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStream::ReadMethod*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};

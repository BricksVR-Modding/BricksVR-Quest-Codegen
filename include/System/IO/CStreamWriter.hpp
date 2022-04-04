// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.StreamWriter
#include "System/IO/StreamWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoDriver
  class TermInfoDriver;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: CStreamWriter
  class CStreamWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::CStreamWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::CStreamWriter*, "System.IO", "CStreamWriter");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.CStreamWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class CStreamWriter : public ::System::IO::StreamWriter {
    public:
    public:
    // private System.TermInfoDriver driver
    // Size: 0x8
    // Offset: 0x68
    ::System::TermInfoDriver* driver;
    // Field size check
    static_assert(sizeof(::System::TermInfoDriver*) == 0x8);
    public:
    // Get instance field reference: private System.TermInfoDriver driver
    [[deprecated]] ::System::TermInfoDriver*& dyn_driver();
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Boolean leaveOpen)
    // Offset: 0x3E23E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CStreamWriter* New_ctor(::System::IO::Stream* stream, ::System::Text::Encoding* encoding, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::CStreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CStreamWriter*, creationType>(stream, encoding, leaveOpen)));
    }
    // public System.Void InternalWriteString(System.String val)
    // Offset: 0x3E1F20
    void InternalWriteString(::StringW val);
    // public System.Void InternalWriteChar(System.Char val)
    // Offset: 0x3E1E40
    void InternalWriteChar(::Il2CppChar val);
    // public System.Void InternalWriteChars(System.Char[] buffer, System.Int32 n)
    // Offset: 0x3E1EA0
    void InternalWriteChars(::ArrayW<::Il2CppChar> buffer, int n);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x3E2030
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::ArrayW<::Il2CppChar> buffer, int index, int count);
    // public override System.Void Write(System.Char val)
    // Offset: 0x3E2280
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char val)
    void Write(::Il2CppChar val);
    // public override System.Void Write(System.Char[] val)
    // Offset: 0x3E23A0
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.Char[] val)
    void Write(::ArrayW<::Il2CppChar> val);
    // public override System.Void Write(System.String val)
    // Offset: 0x3E1F80
    // Implemented from: System.IO.StreamWriter
    // Base method: System.Void StreamWriter::Write(System.String val)
    void Write(::StringW val);
  }; // System.IO.CStreamWriter
  #pragma pack(pop)
  static check_size<sizeof(CStreamWriter), 104 + sizeof(::System::TermInfoDriver*)> __System_IO_CStreamWriterSizeCheck;
  static_assert(sizeof(CStreamWriter) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::CStreamWriter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::CStreamWriter::InternalWriteString
// Il2CppName: InternalWriteString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::StringW)>(&System::IO::CStreamWriter::InternalWriteString)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "InternalWriteString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::InternalWriteChar
// Il2CppName: InternalWriteChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::Il2CppChar)>(&System::IO::CStreamWriter::InternalWriteChar)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "InternalWriteChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::InternalWriteChars
// Il2CppName: InternalWriteChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::ArrayW<::Il2CppChar>, int)>(&System::IO::CStreamWriter::InternalWriteChars)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* n = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "InternalWriteChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, n});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::ArrayW<::Il2CppChar>, int, int)>(&System::IO::CStreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, index, count});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::Il2CppChar)>(&System::IO::CStreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::ArrayW<::Il2CppChar>)>(&System::IO::CStreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* val = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: System::IO::CStreamWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::CStreamWriter::*)(::StringW)>(&System::IO::CStreamWriter::Write)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::CStreamWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};

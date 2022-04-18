// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.FileSystemInfo
#include "System/IO/FileSystemInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: FileInfo
  class FileInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::FileInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::FileInfo*, "System.IO", "FileInfo");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class FileInfo : public ::System::IO::FileSystemInfo {
    public:
    public:
    // private System.String _name
    // Size: 0x8
    // Offset: 0x60
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // public System.Void .ctor(System.String fileName)
    // Offset: 0x3E48B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::StringW fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(fileName)));
    }
    // private System.Void Init(System.String fileName, System.Boolean checkHost)
    // Offset: 0x3E47C0
    void Init(::StringW fileName, bool checkHost);
    // private System.String GetDisplayPath(System.String originalPath)
    // Offset: 0x2E6720
    ::StringW GetDisplayPath(::StringW originalPath);
    // public override System.String get_Name()
    // Offset: 0x290600
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.String FileSystemInfo::get_Name()
    ::StringW get_Name();
    // public override System.Boolean get_Exists()
    // Offset: 0x3E4B00
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Boolean FileSystemInfo::get_Exists()
    bool get_Exists();
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x3E4A50
    // Implemented from: System.IO.FileSystemInfo
    // Base method: System.Void FileSystemInfo::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::FileInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileInfo*, creationType>(info, context)));
    }
    // public override System.String ToString()
    // Offset: 0x2321F0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.IO.FileInfo
  #pragma pack(pop)
  static check_size<sizeof(FileInfo), 96 + sizeof(::StringW)> __System_IO_FileInfoSizeCheck;
  static_assert(sizeof(FileInfo) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::FileInfo::*)(::StringW, bool)>(&System::IO::FileInfo::Init)> {
  static const MethodInfo* get() {
    static auto* fileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkHost = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fileName, checkHost});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::GetDisplayPath
// Il2CppName: GetDisplayPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileInfo::*)(::StringW)>(&System::IO::FileInfo::GetDisplayPath)> {
  static const MethodInfo* get() {
    static auto* originalPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "GetDisplayPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{originalPath});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::get_Exists
// Il2CppName: get_Exists
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::FileInfo::*)()>(&System::IO::FileInfo::get_Exists)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "get_Exists", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::FileInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::FileInfo::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::FileInfo::*)()>(&System::IO::FileInfo::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::FileInfo*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

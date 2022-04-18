// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.Win32Native
#include "Microsoft/Win32/Win32Native.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: SearchResult
  class SearchResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::SearchResult);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchResult*, "System.IO", "SearchResult");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchResult
  // [TokenAttribute] Offset: FFFFFFFF
  class SearchResult : public ::Il2CppObject {
    public:
    public:
    // private System.String fullPath
    // Size: 0x8
    // Offset: 0x10
    ::StringW fullPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String userPath
    // Size: 0x8
    // Offset: 0x18
    ::StringW userPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA findData
    // Size: 0x8
    // Offset: 0x20
    ::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData;
    // Field size check
    static_assert(sizeof(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*) == 0x8);
    public:
    // Get instance field reference: private System.String fullPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_fullPath();
    // Get instance field reference: private System.String userPath
    [[deprecated("Use field access instead!")]] ::StringW& dyn_userPath();
    // Get instance field reference: private Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA findData
    [[deprecated("Use field access instead!")]] ::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*& dyn_findData();
    // System.String get_UserPath()
    // Offset: 0x1E1520
    ::StringW get_UserPath();
    // Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA get_FindData()
    // Offset: 0x1E1950
    ::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* get_FindData();
    // System.Void .ctor(System.String fullPath, System.String userPath, Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA findData)
    // Offset: 0x335760
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchResult* New_ctor(::StringW fullPath, ::StringW userPath, ::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* findData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::SearchResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchResult*, creationType>(fullPath, userPath, findData)));
    }
  }; // System.IO.SearchResult
  #pragma pack(pop)
  static check_size<sizeof(SearchResult), 32 + sizeof(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*)> __System_IO_SearchResultSizeCheck;
  static_assert(sizeof(SearchResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::SearchResult::get_UserPath
// Il2CppName: get_UserPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IO::SearchResult::*)()>(&System::IO::SearchResult::get_UserPath)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchResult*), "get_UserPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::SearchResult::get_FindData
// Il2CppName: get_FindData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Microsoft::Win32::Win32Native::WIN32_FIND_DATA* (System::IO::SearchResult::*)()>(&System::IO::SearchResult::get_FindData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchResult*), "get_FindData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::SearchResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA);
DEFINE_IL2CPP_ARG_TYPE(::Microsoft::Win32::Win32Native::WIN32_FIND_DATA*, "Microsoft.Win32", "Win32Native/WIN32_FIND_DATA");
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA
  // [TokenAttribute] Offset: FFFFFFFF
  class Win32Native::WIN32_FIND_DATA : public ::Il2CppObject {
    public:
    public:
    // System.Int32 dwFileAttributes
    // Size: 0x4
    // Offset: 0x10
    int dwFileAttributes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: dwFileAttributes and: cFileName
    char __padding0[0x4] = {};
    // System.String cFileName
    // Size: 0x8
    // Offset: 0x18
    ::StringW cFileName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: System.Int32 dwFileAttributes
    [[deprecated("Use field access instead!")]] int& dyn_dwFileAttributes();
    // Get instance field reference: System.String cFileName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_cFileName();
    // public System.Void .ctor()
    // Offset: 0x1DD400
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Win32Native::WIN32_FIND_DATA* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Microsoft::Win32::Win32Native::WIN32_FIND_DATA::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Win32Native::WIN32_FIND_DATA*, creationType>()));
    }
  }; // Microsoft.Win32.Win32Native/Microsoft.Win32.WIN32_FIND_DATA
  #pragma pack(pop)
  static check_size<sizeof(Win32Native::WIN32_FIND_DATA), 24 + sizeof(::StringW)> __Microsoft_Win32_Win32Native_WIN32_FIND_DATASizeCheck;
  static_assert(sizeof(Win32Native::WIN32_FIND_DATA) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Microsoft::Win32::Win32Native::WIN32_FIND_DATA::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!

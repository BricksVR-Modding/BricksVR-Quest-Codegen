// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: SafeStringMarshal
  struct SafeStringMarshal;
  // Forward declaring type: MonoAssemblyName
  struct MonoAssemblyName;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeMarshal
  class RuntimeMarshal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::RuntimeMarshal);
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeMarshal*, "Mono", "RuntimeMarshal");
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.RuntimeMarshal
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeMarshal : public ::Il2CppObject {
    public:
    // static System.String PtrToUtf8String(System.IntPtr ptr)
    // Offset: 0x475640
    static ::StringW PtrToUtf8String(::System::IntPtr ptr);
    // static Mono.SafeStringMarshal MarshalString(System.String str)
    // Offset: 0x4755E0
    static ::Mono::SafeStringMarshal MarshalString(::StringW str);
    // static private System.Int32 DecodeBlobSize(System.IntPtr in_ptr, out System.IntPtr out_ptr)
    // Offset: 0x475550
    static int DecodeBlobSize(::System::IntPtr in_ptr, ByRef<::System::IntPtr> out_ptr);
    // static System.Byte[] DecodeBlobArray(System.IntPtr ptr)
    // Offset: 0x475460
    static ::ArrayW<uint8_t> DecodeBlobArray(::System::IntPtr ptr);
    // static System.Int32 AsciHexDigitValue(System.Int32 c)
    // Offset: 0x475440
    static int AsciHexDigitValue(int c);
    // static System.Void FreeAssemblyName(ref Mono.MonoAssemblyName name, System.Boolean freeStruct)
    // Offset: 0x4755D0
    static void FreeAssemblyName(ByRef<::Mono::MonoAssemblyName> name, bool freeStruct);
  }; // Mono.RuntimeMarshal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeMarshal::PtrToUtf8String
// Il2CppName: PtrToUtf8String
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&Mono::RuntimeMarshal::PtrToUtf8String)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "PtrToUtf8String", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeMarshal::MarshalString
// Il2CppName: MarshalString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::SafeStringMarshal (*)(::StringW)>(&Mono::RuntimeMarshal::MarshalString)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "MarshalString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeMarshal::DecodeBlobSize
// Il2CppName: DecodeBlobSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr, ByRef<::System::IntPtr>)>(&Mono::RuntimeMarshal::DecodeBlobSize)> {
  static const MethodInfo* get() {
    static auto* in_ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* out_ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "DecodeBlobSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{in_ptr, out_ptr});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeMarshal::DecodeBlobArray
// Il2CppName: DecodeBlobArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::System::IntPtr)>(&Mono::RuntimeMarshal::DecodeBlobArray)> {
  static const MethodInfo* get() {
    static auto* ptr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "DecodeBlobArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ptr});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeMarshal::AsciHexDigitValue
// Il2CppName: AsciHexDigitValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&Mono::RuntimeMarshal::AsciHexDigitValue)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "AsciHexDigitValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeMarshal::FreeAssemblyName
// Il2CppName: FreeAssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::MonoAssemblyName>, bool)>(&Mono::RuntimeMarshal::FreeAssemblyName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("Mono", "MonoAssemblyName")->this_arg;
    static auto* freeStruct = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeMarshal*), "FreeAssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, freeStruct});
  }
};

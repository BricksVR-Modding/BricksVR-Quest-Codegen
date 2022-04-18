// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: Mono.Security
namespace Mono::Security {
  // Forward declaring type: BitConverterLE
  class BitConverterLE_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::BitConverterLE_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::BitConverterLE_*, "Mono.Security", "BitConverterLE");
// Type namespace: Mono.Security
namespace Mono::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.BitConverterLE
  // [TokenAttribute] Offset: FFFFFFFF
  class BitConverterLE_ : public ::Il2CppObject {
    public:
    // static private System.Byte[] GetUIntBytes(System.Byte* bytes)
    // Offset: 0x46B750
    static ::ArrayW<uint8_t> GetUIntBytes(uint8_t* bytes);
    // static private System.Byte[] GetULongBytes(System.Byte* bytes)
    // Offset: 0x46B8C0
    static ::ArrayW<uint8_t> GetULongBytes(uint8_t* bytes);
    // static System.Byte[] GetBytes(System.Single value)
    // Offset: 0x46B730
    static ::ArrayW<uint8_t> GetBytes(float value);
    // static System.Byte[] GetBytes(System.Double value)
    // Offset: 0x46B710
    static ::ArrayW<uint8_t> GetBytes(double value);
    // static private System.Void UIntFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x46BC90
    static void UIntFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int startIndex);
    // static private System.Void ULongFromBytes(System.Byte* dst, System.Byte[] src, System.Int32 startIndex)
    // Offset: 0x46BE50
    static void ULongFromBytes(uint8_t* dst, ::ArrayW<uint8_t> src, int startIndex);
    // static System.Single ToSingle(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x46BC60
    static float ToSingle(::ArrayW<uint8_t> value, int startIndex);
    // static System.Double ToDouble(System.Byte[] value, System.Int32 startIndex)
    // Offset: 0x46BB60
    static double ToDouble(::ArrayW<uint8_t> value, int startIndex);
  }; // Mono.Security.BitConverterLE
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::GetUIntBytes
// Il2CppName: GetUIntBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&Mono::Security::BitConverterLE_::GetUIntBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "GetUIntBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::GetULongBytes
// Il2CppName: GetULongBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(uint8_t*)>(&Mono::Security::BitConverterLE_::GetULongBytes)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "GetULongBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(float)>(&Mono::Security::BitConverterLE_::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(double)>(&Mono::Security::BitConverterLE_::GetBytes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::UIntFromBytes
// Il2CppName: UIntFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE_::UIntFromBytes)> {
  static const MethodInfo* get() {
    static auto* dst = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "UIntFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dst, src, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::ULongFromBytes
// Il2CppName: ULongFromBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint8_t*, ::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE_::ULongFromBytes)> {
  static const MethodInfo* get() {
    static auto* dst = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "ULongFromBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dst, src, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE_::ToSingle)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};
// Writing MetadataGetter for method: Mono::Security::BitConverterLE_::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (*)(::ArrayW<uint8_t>, int)>(&Mono::Security::BitConverterLE_::ToDouble)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* startIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::BitConverterLE_*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, startIndex});
  }
};

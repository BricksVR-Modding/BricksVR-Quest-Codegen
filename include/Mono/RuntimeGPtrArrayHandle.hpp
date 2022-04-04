// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Mono.RuntimeStructs
#include "Mono/RuntimeStructs.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeGPtrArrayHandle
  struct RuntimeGPtrArrayHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGPtrArrayHandle, "Mono", "RuntimeGPtrArrayHandle");
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeGPtrArrayHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: BB570
  struct RuntimeGPtrArrayHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private Mono.RuntimeStructs/Mono.GPtrArray* value
    // Size: 0x8
    // Offset: 0x0
    ::Mono::RuntimeStructs::GPtrArray* value;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeStructs::GPtrArray*) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeGPtrArrayHandle
    constexpr RuntimeGPtrArrayHandle(::Mono::RuntimeStructs::GPtrArray* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Mono::RuntimeStructs::GPtrArray*
    constexpr operator ::Mono::RuntimeStructs::GPtrArray*() const noexcept {
      return value;
    }
    // Get instance field reference: private Mono.RuntimeStructs/Mono.GPtrArray* value
    [[deprecated]] ::Mono::RuntimeStructs::GPtrArray*& dyn_value();
    // System.Int32 get_Length()
    // Offset: 0x475290
    int get_Length();
    // System.IntPtr get_Item(System.Int32 i)
    // Offset: 0x475280
    ::System::IntPtr get_Item(int i);
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0x4750A0
    RuntimeGPtrArrayHandle(::System::IntPtr ptr);
    // System.IntPtr Lookup(System.Int32 i)
    // Offset: 0x475200
    ::System::IntPtr Lookup(int i);
    // static private System.Void GPtrArrayFree(Mono.RuntimeStructs/Mono.GPtrArray* value)
    // Offset: 0x4751F0
    static void GPtrArrayFree(::Mono::RuntimeStructs::GPtrArray* value);
    // static System.Void DestroyAndFree(ref Mono.RuntimeGPtrArrayHandle h)
    // Offset: 0x4751D0
    static void DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle> h);
  }; // Mono.RuntimeGPtrArrayHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeGPtrArrayHandle), 0 + sizeof(::Mono::RuntimeStructs::GPtrArray*)> __Mono_RuntimeGPtrArrayHandleSizeCheck;
  static_assert(sizeof(RuntimeGPtrArrayHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::RuntimeGPtrArrayHandle::*)()>(&Mono::RuntimeGPtrArrayHandle::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGPtrArrayHandle), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::RuntimeGPtrArrayHandle::*)(int)>(&Mono::RuntimeGPtrArrayHandle::get_Item)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGPtrArrayHandle), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::Lookup
// Il2CppName: Lookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::RuntimeGPtrArrayHandle::*)(int)>(&Mono::RuntimeGPtrArrayHandle::Lookup)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGPtrArrayHandle), "Lookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::GPtrArrayFree
// Il2CppName: GPtrArrayFree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::RuntimeStructs::GPtrArray*)>(&Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono", "RuntimeStructs/GPtrArray"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGPtrArrayHandle), "GPtrArrayFree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGPtrArrayHandle::DestroyAndFree
// Il2CppName: DestroyAndFree
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("Mono", "RuntimeGPtrArrayHandle")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGPtrArrayHandle), "DestroyAndFree", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};

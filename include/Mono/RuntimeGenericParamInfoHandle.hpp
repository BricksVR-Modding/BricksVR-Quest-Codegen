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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: GenericParameterAttributes
  struct GenericParameterAttributes;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeGenericParamInfoHandle
  struct RuntimeGenericParamInfoHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Mono::RuntimeGenericParamInfoHandle, "Mono", "RuntimeGenericParamInfoHandle");
// Type namespace: Mono
namespace Mono {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Mono.RuntimeGenericParamInfoHandle
  // [TokenAttribute] Offset: FFFFFFFF
  struct RuntimeGenericParamInfoHandle/*, public ::System::ValueType*/ {
    public:
    public:
    // private Mono.RuntimeStructs/Mono.GenericParamInfo* value
    // Size: 0x8
    // Offset: 0x0
    ::Mono::RuntimeStructs::GenericParamInfo* value;
    // Field size check
    static_assert(sizeof(::Mono::RuntimeStructs::GenericParamInfo*) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeGenericParamInfoHandle
    constexpr RuntimeGenericParamInfoHandle(::Mono::RuntimeStructs::GenericParamInfo* value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Mono::RuntimeStructs::GenericParamInfo*
    constexpr operator ::Mono::RuntimeStructs::GenericParamInfo*() const noexcept {
      return value;
    }
    // Get instance field reference: private Mono.RuntimeStructs/Mono.GenericParamInfo* value
    [[deprecated]] ::Mono::RuntimeStructs::GenericParamInfo*& dyn_value();
    // System.Type[] get_Constraints()
    // Offset: 0x475430
    ::ArrayW<::System::Type*> get_Constraints();
    // System.Reflection.GenericParameterAttributes get_Attributes()
    // Offset: 0x475410
    ::System::Reflection::GenericParameterAttributes get_Attributes();
    // System.Void .ctor(System.IntPtr ptr)
    // Offset: 0x4750A0
    RuntimeGenericParamInfoHandle(::System::IntPtr ptr);
    // private System.Type[] GetConstraints()
    // Offset: 0x4752E0
    ::ArrayW<::System::Type*> GetConstraints();
    // private System.Int32 GetConstraintsCount()
    // Offset: 0x4752B0
    int GetConstraintsCount();
  }; // Mono.RuntimeGenericParamInfoHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeGenericParamInfoHandle), 0 + sizeof(::Mono::RuntimeStructs::GenericParamInfo*)> __Mono_RuntimeGenericParamInfoHandleSizeCheck;
  static_assert(sizeof(RuntimeGenericParamInfoHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::RuntimeGenericParamInfoHandle::get_Constraints
// Il2CppName: get_Constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (Mono::RuntimeGenericParamInfoHandle::*)()>(&Mono::RuntimeGenericParamInfoHandle::get_Constraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGenericParamInfoHandle), "get_Constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGenericParamInfoHandle::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::GenericParameterAttributes (Mono::RuntimeGenericParamInfoHandle::*)()>(&Mono::RuntimeGenericParamInfoHandle::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGenericParamInfoHandle), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGenericParamInfoHandle::RuntimeGenericParamInfoHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::RuntimeGenericParamInfoHandle::GetConstraints
// Il2CppName: GetConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (Mono::RuntimeGenericParamInfoHandle::*)()>(&Mono::RuntimeGenericParamInfoHandle::GetConstraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGenericParamInfoHandle), "GetConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::RuntimeGenericParamInfoHandle::GetConstraintsCount
// Il2CppName: GetConstraintsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::RuntimeGenericParamInfoHandle::*)()>(&Mono::RuntimeGenericParamInfoHandle::GetConstraintsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::RuntimeGenericParamInfoHandle), "GetConstraintsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

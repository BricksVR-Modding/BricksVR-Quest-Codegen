// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.MethodBase
#include "System/Reflection/MethodBase.hpp"
// Including type: System.Runtime.InteropServices._MethodInfo
#include "System/Runtime/InteropServices/_MethodInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MethodInfo*, "System.Reflection", "MethodInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.MethodInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [ClassInterfaceAttribute] Offset: EC6F0
  // [ComDefaultInterfaceAttribute] Offset: EC6F0
  // [ComVisibleAttribute] Offset: EC6F0
  class MethodInfo : public ::System::Reflection::MethodBase/*, public ::System::Runtime::InteropServices::_MethodInfo*/ {
    public:
    // Creating interface conversion operator: operator ::System::Runtime::InteropServices::_MethodInfo
    operator ::System::Runtime::InteropServices::_MethodInfo() noexcept {
      return *reinterpret_cast<::System::Runtime::InteropServices::_MethodInfo*>(this);
    }
    // public System.Type get_ReturnType()
    // Offset: 0x543BC0
    ::System::Type* get_ReturnType();
    // public System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x543AE0
    ::System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x543B50
    ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*> typeArguments);
    // System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x2BB630
    ::System::Reflection::MethodInfo* GetBaseMethod();
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x325B80
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    ::System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0x1DDF00
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodInfo*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2C5C90
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x53B080
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetHashCode()
    int GetHashCode();
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x543A70
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Type[] MethodBase::GetGenericArguments()
    ::ArrayW<::System::Type*> GetGenericArguments();
  }; // System.Reflection.MethodInfo
  #pragma pack(pop)
  // static public System.Boolean op_Equality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x543C10
  bool operator ==(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.MethodInfo left, System.Reflection.MethodInfo right)
  // Offset: 0x543CD0
  bool operator !=(::System::Reflection::MethodInfo* left, ::System::Reflection::MethodInfo& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MethodInfo::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetGenericMethodDefinition
// Il2CppName: GetGenericMethodDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetGenericMethodDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetGenericMethodDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::MakeGenericMethod
// Il2CppName: MakeGenericMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)(::ArrayW<::System::Type*>)>(&System::Reflection::MethodInfo::MakeGenericMethod)> {
  static const MethodInfo* get() {
    static auto* typeArguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "MakeGenericMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeArguments});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetBaseMethod
// Il2CppName: GetBaseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetBaseMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetBaseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::get_MemberType
// Il2CppName: get_MemberType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::get_MemberType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "get_MemberType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MethodInfo::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MethodInfo::*)(::Il2CppObject*)>(&System::Reflection::MethodInfo::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::GetGenericArguments
// Il2CppName: GetGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Reflection::MethodInfo::*)()>(&System::Reflection::MethodInfo::GetGenericArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MethodInfo*), "GetGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MethodInfo::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: System::Reflection::MethodInfo::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeConstructorInfo
#include "System/Reflection/RuntimeConstructorInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
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
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodBody
  class MethodBody;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoCMethod
  class MonoCMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MonoCMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoCMethod*, "System.Reflection", "MonoCMethod");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoCMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoCMethod : public ::System::Reflection::RuntimeConstructorInfo {
    public:
    public:
    // System.IntPtr mhandle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr mhandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type reftype
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* reftype;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr mhandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_mhandle();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Type reftype
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_reftype();
    // System.Object InternalInvoke(System.Object obj, System.Object[] parameters, out System.Exception exc)
    // Offset: 0x544AF0
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> parameters, ByRef<::System::Exception*> exc);
    // private System.Object DoInvoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x5447B0
    ::Il2CppObject* DoInvoke(::Il2CppObject* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> parameters, ::System::Globalization::CultureInfo* culture);
    // public System.Object InternalInvoke(System.Object obj, System.Object[] parameters)
    // Offset: 0x544B00
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> parameters);
    // static private System.Int32 get_core_clr_security_level()
    // Offset: 0x23A0D0
    static int get_core_clr_security_level();
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x1E1920
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    ::System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x544F80
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    ::System::Reflection::MethodAttributes get_Attributes();
    // public override System.Reflection.CallingConventions get_CallingConvention()
    // Offset: 0x544F90
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.CallingConventions MethodBase::get_CallingConvention()
    ::System::Reflection::CallingConventions get_CallingConvention();
    // public override System.Boolean get_ContainsGenericParameters()
    // Offset: 0x544FC0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1E1950
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    ::System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x545000
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    ::System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x545030
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::StringW get_Name();
    // public override System.Boolean get_IsSecurityCritical()
    // Offset: 0x2188C0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsSecurityCritical()
    bool get_IsSecurityCritical();
    // public System.Void .ctor()
    // Offset: 0x544F70
    // Implemented from: System.Reflection.RuntimeConstructorInfo
    // Base method: System.Void RuntimeConstructorInfo::.ctor()
    // Base method: System.Void ConstructorInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoCMethod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoCMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoCMethod*, creationType>()));
    }
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x544A80
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x544AE0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::ArrayW<::System::Reflection::ParameterInfo*> GetParameters();
    // override System.Reflection.ParameterInfo[] GetParametersInternal()
    // Offset: 0x544AE0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParametersInternal()
    ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersInternal();
    // override System.Int32 GetParametersCount()
    // Offset: 0x544AB0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetParametersCount()
    int GetParametersCount();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x544C00
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> parameters, ::System::Globalization::CultureInfo* culture);
    // public override System.Object Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x544BD0
    // Implemented from: System.Reflection.ConstructorInfo
    // Base method: System.Object ConstructorInfo::Invoke(System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> parameters, ::System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x544D30
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x544A00
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x544980
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodBody GetMethodBody()
    // Offset: 0x544A70
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodBody MethodBase::GetMethodBody()
    ::System::Reflection::MethodBody* GetMethodBody();
    // public override System.String ToString()
    // Offset: 0x544DB0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x53CA50
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
  }; // System.Reflection.MonoCMethod
  #pragma pack(pop)
  static check_size<sizeof(MonoCMethod), 32 + sizeof(::System::Type*)> __System_Reflection_MonoCMethodSizeCheck;
  static_assert(sizeof(MonoCMethod) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::InternalInvoke
// Il2CppName: InternalInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoCMethod::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>, ByRef<::System::Exception*>)>(&System::Reflection::MonoCMethod::InternalInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "InternalInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, parameters, exc});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::DoInvoke
// Il2CppName: DoInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoCMethod::*)(::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::MonoCMethod::DoInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "DoInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::InternalInvoke
// Il2CppName: InternalInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoCMethod::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&System::Reflection::MonoCMethod::InternalInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "InternalInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, parameters});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_core_clr_security_level
// Il2CppName: get_core_clr_security_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Reflection::MonoCMethod::get_core_clr_security_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_core_clr_security_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_MethodHandle
// Il2CppName: get_MethodHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeMethodHandle (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_MethodHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_MethodHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodAttributes (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_CallingConvention
// Il2CppName: get_CallingConvention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CallingConventions (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_CallingConvention)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_CallingConvention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::get_IsSecurityCritical
// Il2CppName: get_IsSecurityCritical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::get_IsSecurityCritical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "get_IsSecurityCritical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetMethodImplementationFlags
// Il2CppName: GetMethodImplementationFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodImplAttributes (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetMethodImplementationFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetMethodImplementationFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetParameters
// Il2CppName: GetParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetParametersInternal
// Il2CppName: GetParametersInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetParametersInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetParametersInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetParametersCount
// Il2CppName: GetParametersCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetParametersCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetParametersCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoCMethod::*)(::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::MonoCMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoCMethod::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::MonoCMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoCMethod::*)(::System::Type*, bool)>(&System::Reflection::MonoCMethod::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoCMethod::*)(bool)>(&System::Reflection::MonoCMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoCMethod::*)(::System::Type*, bool)>(&System::Reflection::MonoCMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetMethodBody
// Il2CppName: GetMethodBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodBody* (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetMethodBody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetMethodBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoCMethod::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (System::Reflection::MonoCMethod::*)()>(&System::Reflection::MonoCMethod::GetCustomAttributesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoCMethod*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

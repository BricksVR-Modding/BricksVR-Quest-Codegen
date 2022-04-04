// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: RtFieldInfo
  class RtFieldInfo;
  // Forward declaring type: FieldAttributes
  struct FieldAttributes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: RuntimeFieldHandle
  struct RuntimeFieldHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::RuntimeFieldHandle, "System", "RuntimeFieldHandle");
// Type namespace: System
namespace System {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.RuntimeFieldHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  struct RuntimeFieldHandle/*, public ::System::ValueType, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private System.IntPtr value
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr value;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: RuntimeFieldHandle
    constexpr RuntimeFieldHandle(::System::IntPtr value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return value;
    }
    // Get instance field reference: private System.IntPtr value
    [[deprecated]] ::System::IntPtr& dyn_value();
    // public System.IntPtr get_Value()
    // Offset: 0x2BAE20
    ::System::IntPtr get_Value();
    // System.Void .ctor(System.IntPtr v)
    // Offset: 0x2BACA0
    // ABORTED: conflicts with another method.  RuntimeFieldHandle(::System::IntPtr v);
    // private System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2BACB0
    RuntimeFieldHandle(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2BAA70
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static private System.Void SetValueInternal(System.Reflection.FieldInfo fi, System.Object obj, System.Object value)
    // Offset: 0x2BAC90
    static void SetValueInternal(::System::Reflection::FieldInfo* fi, ::Il2CppObject* obj, ::Il2CppObject* value);
    // static System.Void SetValue(System.Reflection.RtFieldInfo field, System.Object obj, System.Object value, System.RuntimeType fieldType, System.Reflection.FieldAttributes fieldAttr, System.RuntimeType declaringType, ref System.Boolean domainInitialized)
    // Offset: 0x2BAC90
    static void SetValue(::System::Reflection::RtFieldInfo* field, ::Il2CppObject* obj, ::Il2CppObject* value, ::System::RuntimeType* fieldType, ::System::Reflection::FieldAttributes fieldAttr, ::System::RuntimeType* declaringType, ByRef<bool> domainInitialized);
    // static System.Void SetValueDirect(System.Reflection.RtFieldInfo field, System.RuntimeType fieldType, System.Void* pTypedRef, System.Object value, System.RuntimeType contextType)
    // Offset: 0x2BAC80
    static void SetValueDirect(::System::Reflection::RtFieldInfo* field, ::System::RuntimeType* fieldType, void* pTypedRef, ::Il2CppObject* value, ::System::RuntimeType* contextType);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2BA950
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2BAA60
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // System.RuntimeFieldHandle
  #pragma pack(pop)
  static check_size<sizeof(RuntimeFieldHandle), 0 + sizeof(::System::IntPtr)> __System_RuntimeFieldHandleSizeCheck;
  static_assert(sizeof(RuntimeFieldHandle) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::RuntimeFieldHandle::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::RuntimeFieldHandle::*)()>(&System::RuntimeFieldHandle::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::RuntimeFieldHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::RuntimeFieldHandle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::RuntimeFieldHandle::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::RuntimeFieldHandle::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::RuntimeFieldHandle::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValueInternal
// Il2CppName: SetValueInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::FieldInfo*, ::Il2CppObject*, ::Il2CppObject*)>(&System::RuntimeFieldHandle::SetValueInternal)> {
  static const MethodInfo* get() {
    static auto* fi = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "SetValueInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fi, obj, value});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::RtFieldInfo*, ::Il2CppObject*, ::Il2CppObject*, ::System::RuntimeType*, ::System::Reflection::FieldAttributes, ::System::RuntimeType*, ByRef<bool>)>(&System::RuntimeFieldHandle::SetValue)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "RtFieldInfo")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* fieldType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* fieldAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldAttributes")->byval_arg;
    static auto* declaringType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* domainInitialized = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field, obj, value, fieldType, fieldAttr, declaringType, domainInitialized});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::SetValueDirect
// Il2CppName: SetValueDirect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::RtFieldInfo*, ::System::RuntimeType*, void*, ::Il2CppObject*, ::System::RuntimeType*)>(&System::RuntimeFieldHandle::SetValueDirect)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "RtFieldInfo")->byval_arg;
    static auto* fieldType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    static auto* pTypedRef = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Void"))->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* contextType = &::il2cpp_utils::GetClassFromName("System", "RuntimeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "SetValueDirect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field, fieldType, pTypedRef, value, contextType});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::RuntimeFieldHandle::*)(::Il2CppObject*)>(&System::RuntimeFieldHandle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::RuntimeFieldHandle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::RuntimeFieldHandle::*)()>(&System::RuntimeFieldHandle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::RuntimeFieldHandle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

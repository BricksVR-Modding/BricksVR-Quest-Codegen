// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Delegate
#include "System/Delegate.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MulticastDelegate
  class MulticastDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MulticastDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::MulticastDelegate*, "System", "MulticastDelegate");
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MulticastDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: BB2A0
  class MulticastDelegate : public ::System::Delegate {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    public:
    // private System.Delegate[] delegates
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<::System::Delegate*> delegates;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Delegate*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::System::Delegate*>
    constexpr operator ::ArrayW<::System::Delegate*>() const noexcept {
      return delegates;
    }
    // Get instance field reference: private System.Delegate[] delegates
    [[deprecated]] ::ArrayW<::System::Delegate*>& dyn_delegates();
    // private System.Int32 LastIndexOf(System.Delegate[] haystack, System.Delegate[] needle)
    // Offset: 0x32B060
    int LastIndexOf(::ArrayW<::System::Delegate*> haystack, ::ArrayW<::System::Delegate*> needle);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x32B040
    // Implemented from: System.Delegate
    // Base method: System.Void Delegate::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x32AD90
    // Implemented from: System.Delegate
    // Base method: System.Boolean Delegate::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x32AEF0
    // Implemented from: System.Delegate
    // Base method: System.Int32 Delegate::GetHashCode()
    int GetHashCode();
    // protected override System.Reflection.MethodInfo GetMethodImpl()
    // Offset: 0x32AFF0
    // Implemented from: System.Delegate
    // Base method: System.Reflection.MethodInfo Delegate::GetMethodImpl()
    ::System::Reflection::MethodInfo* GetMethodImpl();
    // public override System.Delegate[] GetInvocationList()
    // Offset: 0x32AF00
    // Implemented from: System.Delegate
    // Base method: System.Delegate[] Delegate::GetInvocationList()
    ::ArrayW<::System::Delegate*> GetInvocationList();
    // protected override System.Delegate CombineImpl(System.Delegate follow)
    // Offset: 0x32A9E0
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::CombineImpl(System.Delegate follow)
    ::System::Delegate* CombineImpl(::System::Delegate* follow);
    // protected override System.Delegate RemoveImpl(System.Delegate value)
    // Offset: 0x32B1D0
    // Implemented from: System.Delegate
    // Base method: System.Delegate Delegate::RemoveImpl(System.Delegate value)
    ::System::Delegate* RemoveImpl(::System::Delegate* value);
  }; // System.MulticastDelegate
  #pragma pack(pop)
  static check_size<sizeof(MulticastDelegate), 104 + sizeof(::ArrayW<::System::Delegate*>)> __System_MulticastDelegateSizeCheck;
  static_assert(sizeof(MulticastDelegate) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MulticastDelegate::LastIndexOf
// Il2CppName: LastIndexOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::MulticastDelegate::*)(::ArrayW<::System::Delegate*>, ::ArrayW<::System::Delegate*>)>(&System::MulticastDelegate::LastIndexOf)> {
  static const MethodInfo* get() {
    static auto* haystack = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Delegate"), 1)->byval_arg;
    static auto* needle = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Delegate"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "LastIndexOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{haystack, needle});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MulticastDelegate::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::MulticastDelegate::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::MulticastDelegate::*)(::Il2CppObject*)>(&System::MulticastDelegate::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::MulticastDelegate::*)()>(&System::MulticastDelegate::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::GetMethodImpl
// Il2CppName: GetMethodImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::MulticastDelegate::*)()>(&System::MulticastDelegate::GetMethodImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "GetMethodImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::GetInvocationList
// Il2CppName: GetInvocationList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Delegate*> (System::MulticastDelegate::*)()>(&System::MulticastDelegate::GetInvocationList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "GetInvocationList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::CombineImpl
// Il2CppName: CombineImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (System::MulticastDelegate::*)(::System::Delegate*)>(&System::MulticastDelegate::CombineImpl)> {
  static const MethodInfo* get() {
    static auto* follow = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "CombineImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{follow});
  }
};
// Writing MetadataGetter for method: System::MulticastDelegate::RemoveImpl
// Il2CppName: RemoveImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (System::MulticastDelegate::*)(::System::Delegate*)>(&System::MulticastDelegate::RemoveImpl)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Delegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MulticastDelegate*), "RemoveImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};

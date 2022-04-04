// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConditionalWeakTable`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ConditionalWeakTable_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: HashHelpers
  class HashHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::HashHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashHelpers*, "System.Collections", "HashHelpers");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.HashHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  // [FriendAccessAllowedAttribute] Offset: FFFFFFFF
  class HashHelpers : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32[] primes
    static ::ArrayW<int> _get_primes();
    // Set static field: static public readonly System.Int32[] primes
    static void _set_primes(::ArrayW<int> value);
    // Get static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* _get_s_SerializationInfoTable();
    // Set static field: static private System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> s_SerializationInfoTable
    static void _set_s_SerializationInfoTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* value);
    // static System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> get_SerializationInfoTable()
    // Offset: 0x5778A0
    static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable();
    // static private System.Void .cctor()
    // Offset: 0x577830
    static void _cctor();
    // static public System.Boolean IsPrime(System.Int32 candidate)
    // Offset: 0x577780
    static bool IsPrime(int candidate);
    // static public System.Int32 GetPrime(System.Int32 min)
    // Offset: 0x5775E0
    static int GetPrime(int min);
    // static public System.Int32 ExpandPrime(System.Int32 oldSize)
    // Offset: 0x577560
    static int ExpandPrime(int oldSize);
  }; // System.Collections.HashHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::HashHelpers::get_SerializationInfoTable
// Il2CppName: get_SerializationInfoTable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::Il2CppObject*, ::System::Runtime::Serialization::SerializationInfo*>* (*)()>(&System::Collections::HashHelpers::get_SerializationInfoTable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::HashHelpers*), "get_SerializationInfoTable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::HashHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Collections::HashHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Collections::HashHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Collections::HashHelpers::IsPrime
// Il2CppName: IsPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Collections::HashHelpers::IsPrime)> {
  static const MethodInfo* get() {
    static auto* candidate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::HashHelpers*), "IsPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{candidate});
  }
};
// Writing MetadataGetter for method: System::Collections::HashHelpers::GetPrime
// Il2CppName: GetPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Collections::HashHelpers::GetPrime)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::HashHelpers*), "GetPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min});
  }
};
// Writing MetadataGetter for method: System::Collections::HashHelpers::ExpandPrime
// Il2CppName: ExpandPrime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Collections::HashHelpers::ExpandPrime)> {
  static const MethodInfo* get() {
    static auto* oldSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Collections::HashHelpers*), "ExpandPrime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{oldSize});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: HSteamNetPollGroup
  struct HSteamNetPollGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HSteamNetPollGroup, "Steamworks.Data", "HSteamNetPollGroup");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HSteamNetPollGroup
  // [TokenAttribute] Offset: FFFFFFFF
  struct HSteamNetPollGroup/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::Data::HSteamNetPollGroup>, public ::System::IComparable_1<::Steamworks::Data::HSteamNetPollGroup>*/ {
    public:
    public:
    // public System.UInt32 Value
    // Size: 0x4
    // Offset: 0x0
    uint Value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: HSteamNetPollGroup
    constexpr HSteamNetPollGroup(uint Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::Data::HSteamNetPollGroup>
    operator ::System::IEquatable_1<::Steamworks::Data::HSteamNetPollGroup>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::Data::HSteamNetPollGroup>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Steamworks::Data::HSteamNetPollGroup>
    operator ::System::IComparable_1<::Steamworks::Data::HSteamNetPollGroup>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Steamworks::Data::HSteamNetPollGroup>*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.UInt32 Value
    [[deprecated("Use field access instead!")]] uint& dyn_Value();
    // public System.Boolean Equals(Steamworks.Data.HSteamNetPollGroup p)
    // Offset: 0x460E90
    bool Equals(::Steamworks::Data::HSteamNetPollGroup p);
    // public System.Int32 CompareTo(Steamworks.Data.HSteamNetPollGroup other)
    // Offset: 0x460E80
    int CompareTo(::Steamworks::Data::HSteamNetPollGroup other);
    // public override System.String ToString()
    // Offset: 0x45A830
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2BAA60
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x460EA0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // Steamworks.Data.HSteamNetPollGroup
  #pragma pack(pop)
  static check_size<sizeof(HSteamNetPollGroup), 0 + sizeof(uint)> __Steamworks_Data_HSteamNetPollGroupSizeCheck;
  static_assert(sizeof(HSteamNetPollGroup) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HSteamNetPollGroup::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamNetPollGroup::*)(::Steamworks::Data::HSteamNetPollGroup)>(&Steamworks::Data::HSteamNetPollGroup::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamNetPollGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamNetPollGroup), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamNetPollGroup::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamNetPollGroup::*)(::Steamworks::Data::HSteamNetPollGroup)>(&Steamworks::Data::HSteamNetPollGroup::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamNetPollGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamNetPollGroup), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamNetPollGroup::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::HSteamNetPollGroup::*)()>(&Steamworks::Data::HSteamNetPollGroup::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamNetPollGroup), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamNetPollGroup::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamNetPollGroup::*)()>(&Steamworks::Data::HSteamNetPollGroup::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamNetPollGroup), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamNetPollGroup::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamNetPollGroup::*)(::Il2CppObject*)>(&Steamworks::Data::HSteamNetPollGroup::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamNetPollGroup), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};

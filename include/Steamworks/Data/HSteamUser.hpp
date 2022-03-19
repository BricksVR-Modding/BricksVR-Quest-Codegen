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
  // Forward declaring type: HSteamUser
  struct HSteamUser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::HSteamUser, "Steamworks.Data", "HSteamUser");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.HSteamUser
  // [TokenAttribute] Offset: FFFFFFFF
  struct HSteamUser/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::Data::HSteamUser>, public ::System::IComparable_1<::Steamworks::Data::HSteamUser>*/ {
    public:
    public:
    // public System.Int32 Value
    // Size: 0x4
    // Offset: 0x0
    int Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HSteamUser
    constexpr HSteamUser(int Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::Data::HSteamUser>
    operator ::System::IEquatable_1<::Steamworks::Data::HSteamUser>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::Data::HSteamUser>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Steamworks::Data::HSteamUser>
    operator ::System::IComparable_1<::Steamworks::Data::HSteamUser>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Steamworks::Data::HSteamUser>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.Int32 Value
    int& dyn_Value();
    // public System.Boolean Equals(Steamworks.Data.HSteamUser p)
    // Offset: 0xA53D5C
    bool Equals(::Steamworks::Data::HSteamUser p);
    // public System.Int32 CompareTo(Steamworks.Data.HSteamUser other)
    // Offset: 0xA53D6C
    int CompareTo(::Steamworks::Data::HSteamUser other);
    // public override System.String ToString()
    // Offset: 0xA53CBC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0xA53CC4
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0xA53CCC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // Steamworks.Data.HSteamUser
  #pragma pack(pop)
  static check_size<sizeof(HSteamUser), 0 + sizeof(int)> __Steamworks_Data_HSteamUserSizeCheck;
  static_assert(sizeof(HSteamUser) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::HSteamUser::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamUser::*)(::Steamworks::Data::HSteamUser)>(&Steamworks::Data::HSteamUser::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamUser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamUser), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamUser::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamUser::*)(::Steamworks::Data::HSteamUser)>(&Steamworks::Data::HSteamUser::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "HSteamUser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamUser), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamUser::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::HSteamUser::*)()>(&Steamworks::Data::HSteamUser::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamUser), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamUser::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::HSteamUser::*)()>(&Steamworks::Data::HSteamUser::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamUser), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::HSteamUser::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::HSteamUser::*)(::Il2CppObject*)>(&Steamworks::Data::HSteamUser::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::HSteamUser), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};

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
  // Forward declaring type: InventoryDefId
  struct InventoryDefId;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::InventoryDefId, "Steamworks.Data", "InventoryDefId");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.InventoryDefId
  // [TokenAttribute] Offset: FFFFFFFF
  struct InventoryDefId/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::Data::InventoryDefId>, public ::System::IComparable_1<::Steamworks::Data::InventoryDefId>*/ {
    public:
    public:
    // public System.Int32 Value
    // Size: 0x4
    // Offset: 0x0
    int Value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InventoryDefId
    constexpr InventoryDefId(int Value_ = {}) noexcept : Value{Value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::Data::InventoryDefId>
    operator ::System::IEquatable_1<::Steamworks::Data::InventoryDefId>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::Data::InventoryDefId>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<::Steamworks::Data::InventoryDefId>
    operator ::System::IComparable_1<::Steamworks::Data::InventoryDefId>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<::Steamworks::Data::InventoryDefId>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return Value;
    }
    // Get instance field reference: public System.Int32 Value
    [[deprecated("Use field access instead!")]] int& dyn_Value();
    // public System.Boolean Equals(Steamworks.Data.InventoryDefId p)
    // Offset: 0x460E90
    bool Equals(::Steamworks::Data::InventoryDefId p);
    // public System.Int32 CompareTo(Steamworks.Data.InventoryDefId other)
    // Offset: 0x460F10
    int CompareTo(::Steamworks::Data::InventoryDefId other);
    // public override System.String ToString()
    // Offset: 0x460F90
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x2BAA60
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x462570
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
  }; // Steamworks.Data.InventoryDefId
  #pragma pack(pop)
  static check_size<sizeof(InventoryDefId), 0 + sizeof(int)> __Steamworks_Data_InventoryDefIdSizeCheck;
  static_assert(sizeof(InventoryDefId) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::InventoryDefId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::InventoryDefId::*)(::Steamworks::Data::InventoryDefId)>(&Steamworks::Data::InventoryDefId::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "InventoryDefId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InventoryDefId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InventoryDefId::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::InventoryDefId::*)(::Steamworks::Data::InventoryDefId)>(&Steamworks::Data::InventoryDefId::CompareTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "InventoryDefId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InventoryDefId), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InventoryDefId::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::InventoryDefId::*)()>(&Steamworks::Data::InventoryDefId::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InventoryDefId), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InventoryDefId::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::Data::InventoryDefId::*)()>(&Steamworks::Data::InventoryDefId::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InventoryDefId), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::InventoryDefId::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::Data::InventoryDefId::*)(::Il2CppObject*)>(&Steamworks::Data::InventoryDefId::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::InventoryDefId), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};

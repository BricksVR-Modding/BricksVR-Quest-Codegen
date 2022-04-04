// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: Steamworks.Data.InventoryItemId
#include "Steamworks/Data/InventoryItemId.hpp"
// Including type: Steamworks.Data.InventoryDefId
#include "Steamworks/Data/InventoryDefId.hpp"
// Including type: Steamworks.SteamItemFlags
#include "Steamworks/SteamItemFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Steamworks::Data
namespace Steamworks::Data {
  // Forward declaring type: SteamItemDetails_t
  struct SteamItemDetails_t;
  // Forward declaring type: SteamInventoryResult_t
  struct SteamInventoryResult_t;
}
// Completed forward declares
// Type namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: InventoryItem
  struct InventoryItem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::InventoryItem, "Steamworks", "InventoryItem");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.InventoryItem
  // [TokenAttribute] Offset: FFFFFFFF
  struct InventoryItem/*, public ::System::ValueType, public ::System::IEquatable_1<::Steamworks::InventoryItem>*/ {
    public:
    public:
    // Steamworks.Data.InventoryItemId _id
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::Data::InventoryItemId id;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::InventoryItemId) == 0x8);
    // Steamworks.Data.InventoryDefId _def
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::Data::InventoryDefId def;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::InventoryDefId) == 0x4);
    // Steamworks.SteamItemFlags _flags
    // Size: 0x4
    // Offset: 0xC
    ::Steamworks::SteamItemFlags flags;
    // Field size check
    static_assert(sizeof(::Steamworks::SteamItemFlags) == 0x4);
    // System.UInt16 _quantity
    // Size: 0x2
    // Offset: 0x10
    uint16_t quantity;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: quantity and: properties
    char __padding3[0x6] = {};
    // System.Collections.Generic.Dictionary`2<System.String,System.String> _properties
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Creating value type constructor for type: InventoryItem
    constexpr InventoryItem(::Steamworks::Data::InventoryItemId id_ = {}, ::Steamworks::Data::InventoryDefId def_ = {}, ::Steamworks::SteamItemFlags flags_ = {}, uint16_t quantity_ = {}, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* properties_ = {}) noexcept : id{id_}, def{def_}, flags{flags_}, quantity{quantity_}, properties{properties_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::Steamworks::InventoryItem>
    operator ::System::IEquatable_1<::Steamworks::InventoryItem>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::Steamworks::InventoryItem>*>(this);
    }
    // Get instance field reference: Steamworks.Data.InventoryItemId _id
    [[deprecated]] ::Steamworks::Data::InventoryItemId& dyn__id();
    // Get instance field reference: Steamworks.Data.InventoryDefId _def
    [[deprecated]] ::Steamworks::Data::InventoryDefId& dyn__def();
    // Get instance field reference: Steamworks.SteamItemFlags _flags
    [[deprecated]] ::Steamworks::SteamItemFlags& dyn__flags();
    // Get instance field reference: System.UInt16 _quantity
    [[deprecated]] uint16_t& dyn__quantity();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.String,System.String> _properties
    [[deprecated]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn__properties();
    // static Steamworks.InventoryItem From(Steamworks.Data.SteamItemDetails_t details)
    // Offset: 0x5BFB50
    static ::Steamworks::InventoryItem From(::Steamworks::Data::SteamItemDetails_t details);
    // static System.Collections.Generic.Dictionary`2<System.String,System.String> GetProperties(Steamworks.Data.SteamInventoryResult_t result, System.Int32 index)
    // Offset: 0x5BFBE0
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetProperties(::Steamworks::Data::SteamInventoryResult_t result, int index);
    // public System.Boolean Equals(Steamworks.InventoryItem p)
    // Offset: 0x5BFB30
    bool Equals(::Steamworks::InventoryItem p);
    // public override System.Boolean Equals(System.Object p)
    // Offset: 0x5BFAB0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object p)
    bool Equals(::Il2CppObject* p);
    // public override System.Int32 GetHashCode()
    // Offset: 0x5BFBD0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Steamworks.InventoryItem
  #pragma pack(pop)
  static check_size<sizeof(InventoryItem), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __Steamworks_InventoryItemSizeCheck;
  static_assert(sizeof(InventoryItem) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::InventoryItem::From
// Il2CppName: From
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::InventoryItem (*)(::Steamworks::Data::SteamItemDetails_t)>(&Steamworks::InventoryItem::From)> {
  static const MethodInfo* get() {
    static auto* details = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamItemDetails_t")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryItem), "From", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{details});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryItem::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* (*)(::Steamworks::Data::SteamInventoryResult_t, int)>(&Steamworks::InventoryItem::GetProperties)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("Steamworks.Data", "SteamInventoryResult_t")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryItem), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result, index});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryItem::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::InventoryItem::*)(::Steamworks::InventoryItem)>(&Steamworks::InventoryItem::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("Steamworks", "InventoryItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryItem), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryItem::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Steamworks::InventoryItem::*)(::Il2CppObject*)>(&Steamworks::InventoryItem::Equals)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryItem), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: Steamworks::InventoryItem::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Steamworks::InventoryItem::*)()>(&Steamworks::InventoryItem::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::InventoryItem), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

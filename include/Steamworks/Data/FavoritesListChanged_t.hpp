// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Steamworks
namespace Steamworks {
  // Forward declaring type: CallbackType
  struct CallbackType;
}
// Completed forward declares
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Forward declaring type: FavoritesListChanged_t
  struct FavoritesListChanged_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::FavoritesListChanged_t, "Steamworks.Data", "FavoritesListChanged_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.FavoritesListChanged_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct FavoritesListChanged_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt32 IP
    // Size: 0x4
    // Offset: 0x0
    uint IP;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 QueryPort
    // Size: 0x4
    // Offset: 0x4
    uint QueryPort;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 ConnPort
    // Size: 0x4
    // Offset: 0x8
    uint ConnPort;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 AppID
    // Size: 0x4
    // Offset: 0xC
    uint AppID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 Flags
    // Size: 0x4
    // Offset: 0x10
    uint Flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Boolean Add
    // Size: 0x1
    // Offset: 0x14
    bool Add;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Add and: AccountId
    char __padding5[0x3] = {};
    // System.UInt32 AccountId
    // Size: 0x4
    // Offset: 0x18
    uint AccountId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: FavoritesListChanged_t
    constexpr FavoritesListChanged_t(uint IP_ = {}, uint QueryPort_ = {}, uint ConnPort_ = {}, uint AppID_ = {}, uint Flags_ = {}, bool Add_ = {}, uint AccountId_ = {}) noexcept : IP{IP_}, QueryPort{QueryPort_}, ConnPort{ConnPort_}, AppID{AppID_}, Flags{Flags_}, Add{Add_}, AccountId{AccountId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Steamworks::ICallbackData
    operator ::Steamworks::ICallbackData() noexcept {
      return *reinterpret_cast<::Steamworks::ICallbackData*>(this);
    }
    // Get static field: static public System.Int32 _datasize
    static int _get__datasize();
    // Set static field: static public System.Int32 _datasize
    static void _set__datasize(int value);
    // Get instance field reference: System.UInt32 IP
    [[deprecated("Use field access instead!")]] uint& dyn_IP();
    // Get instance field reference: System.UInt32 QueryPort
    [[deprecated("Use field access instead!")]] uint& dyn_QueryPort();
    // Get instance field reference: System.UInt32 ConnPort
    [[deprecated("Use field access instead!")]] uint& dyn_ConnPort();
    // Get instance field reference: System.UInt32 AppID
    [[deprecated("Use field access instead!")]] uint& dyn_AppID();
    // Get instance field reference: System.UInt32 Flags
    [[deprecated("Use field access instead!")]] uint& dyn_Flags();
    // Get instance field reference: System.Boolean Add
    [[deprecated("Use field access instead!")]] bool& dyn_Add();
    // Get instance field reference: System.UInt32 AccountId
    [[deprecated("Use field access instead!")]] uint& dyn_AccountId();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45F670
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45F5D0
    static void _cctor();
  }; // Steamworks.Data.FavoritesListChanged_t
  #pragma pack(pop)
  static check_size<sizeof(FavoritesListChanged_t), 24 + sizeof(uint)> __Steamworks_Data_FavoritesListChanged_tSizeCheck;
  static_assert(sizeof(FavoritesListChanged_t) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::FavoritesListChanged_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::FavoritesListChanged_t::*)()>(&Steamworks::Data::FavoritesListChanged_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::FavoritesListChanged_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::FavoritesListChanged_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::FavoritesListChanged_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::FavoritesListChanged_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.ICallbackData
#include "Steamworks/ICallbackData.hpp"
// Including type: Steamworks.Result
#include "Steamworks/Result.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: JoinPartyCallback_t
  struct JoinPartyCallback_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::JoinPartyCallback_t, "Steamworks.Data", "JoinPartyCallback_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.JoinPartyCallback_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct JoinPartyCallback_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // Padding between fields: Result and: BeaconID
    char __padding0[0x4] = {};
    // System.UInt64 BeaconID
    // Size: 0x8
    // Offset: 0x8
    uint64_t BeaconID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDBeaconOwner
    // Size: 0x8
    // Offset: 0x10
    uint64_t SteamIDBeaconOwner;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Byte[] ConnectString
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> ConnectString;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating value type constructor for type: JoinPartyCallback_t
    constexpr JoinPartyCallback_t(::Steamworks::Result Result_ = {}, uint64_t BeaconID_ = {}, uint64_t SteamIDBeaconOwner_ = {}, ::ArrayW<uint8_t> ConnectString_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr))) noexcept : Result{Result_}, BeaconID{BeaconID_}, SteamIDBeaconOwner{SteamIDBeaconOwner_}, ConnectString{ConnectString_} {}
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
    // Get instance field reference: Steamworks.Result Result
    [[deprecated]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.UInt64 BeaconID
    [[deprecated]] uint64_t& dyn_BeaconID();
    // Get instance field reference: System.UInt64 SteamIDBeaconOwner
    [[deprecated]] uint64_t& dyn_SteamIDBeaconOwner();
    // Get instance field reference: System.Byte[] ConnectString
    [[deprecated]] ::ArrayW<uint8_t>& dyn_ConnectString();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x462850
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x4627B0
    static void _cctor();
  }; // Steamworks.Data.JoinPartyCallback_t
  #pragma pack(pop)
  static check_size<sizeof(JoinPartyCallback_t), 24 + sizeof(::ArrayW<uint8_t>)> __Steamworks_Data_JoinPartyCallback_tSizeCheck;
  static_assert(sizeof(JoinPartyCallback_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::JoinPartyCallback_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::JoinPartyCallback_t::*)()>(&Steamworks::Data::JoinPartyCallback_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::JoinPartyCallback_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::JoinPartyCallback_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::JoinPartyCallback_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::JoinPartyCallback_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

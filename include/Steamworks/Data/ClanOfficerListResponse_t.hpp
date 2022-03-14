// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
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
  // Forward declaring type: ClanOfficerListResponse_t
  struct ClanOfficerListResponse_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::ClanOfficerListResponse_t, "Steamworks.Data", "ClanOfficerListResponse_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0xD
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.ClanOfficerListResponse_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClanOfficerListResponse_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDClan
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDClan;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Int32 COfficers
    // Size: 0x4
    // Offset: 0x8
    int COfficers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Byte Success
    // Size: 0x1
    // Offset: 0xC
    uint8_t Success;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: ClanOfficerListResponse_t
    constexpr ClanOfficerListResponse_t(uint64_t SteamIDClan_ = {}, int COfficers_ = {}, uint8_t Success_ = {}) noexcept : SteamIDClan{SteamIDClan_}, COfficers{COfficers_}, Success{Success_} {}
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
    // Get instance field reference: System.UInt64 SteamIDClan
    uint64_t& dyn_SteamIDClan();
    // Get instance field reference: System.Int32 COfficers
    int& dyn_COfficers();
    // Get instance field reference: System.Byte Success
    uint8_t& dyn_Success();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA51468
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA51470
    static void _cctor();
  }; // Steamworks.Data.ClanOfficerListResponse_t
  #pragma pack(pop)
  static check_size<sizeof(ClanOfficerListResponse_t), 12 + sizeof(uint8_t)> __Steamworks_Data_ClanOfficerListResponse_tSizeCheck;
  static_assert(sizeof(ClanOfficerListResponse_t) == 0xD);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::ClanOfficerListResponse_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::ClanOfficerListResponse_t::*)()>(&Steamworks::Data::ClanOfficerListResponse_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ClanOfficerListResponse_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::ClanOfficerListResponse_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::ClanOfficerListResponse_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::ClanOfficerListResponse_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

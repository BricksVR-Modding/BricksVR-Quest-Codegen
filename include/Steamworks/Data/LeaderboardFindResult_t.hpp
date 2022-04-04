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
  // Forward declaring type: LeaderboardFindResult_t
  struct LeaderboardFindResult_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::LeaderboardFindResult_t, "Steamworks.Data", "LeaderboardFindResult_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.LeaderboardFindResult_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct LeaderboardFindResult_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamLeaderboard
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamLeaderboard;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Byte LeaderboardFound
    // Size: 0x1
    // Offset: 0x8
    uint8_t LeaderboardFound;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: LeaderboardFindResult_t
    constexpr LeaderboardFindResult_t(uint64_t SteamLeaderboard_ = {}, uint8_t LeaderboardFound_ = {}) noexcept : SteamLeaderboard{SteamLeaderboard_}, LeaderboardFound{LeaderboardFound_} {}
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
    // Get instance field reference: System.UInt64 SteamLeaderboard
    [[deprecated]] uint64_t& dyn_SteamLeaderboard();
    // Get instance field reference: System.Byte LeaderboardFound
    [[deprecated]] uint8_t& dyn_LeaderboardFound();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x462900
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x462860
    static void _cctor();
  }; // Steamworks.Data.LeaderboardFindResult_t
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardFindResult_t), 8 + sizeof(uint8_t)> __Steamworks_Data_LeaderboardFindResult_tSizeCheck;
  static_assert(sizeof(LeaderboardFindResult_t) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::LeaderboardFindResult_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::LeaderboardFindResult_t::*)()>(&Steamworks::Data::LeaderboardFindResult_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LeaderboardFindResult_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::LeaderboardFindResult_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::LeaderboardFindResult_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::LeaderboardFindResult_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

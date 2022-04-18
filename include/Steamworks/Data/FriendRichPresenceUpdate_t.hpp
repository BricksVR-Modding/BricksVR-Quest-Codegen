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
// Including type: Steamworks.AppId
#include "Steamworks/AppId.hpp"
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
  // Forward declaring type: FriendRichPresenceUpdate_t
  struct FriendRichPresenceUpdate_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::FriendRichPresenceUpdate_t, "Steamworks.Data", "FriendRichPresenceUpdate_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.FriendRichPresenceUpdate_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct FriendRichPresenceUpdate_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDFriend
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDFriend;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Steamworks.AppId AppID
    // Size: 0x4
    // Offset: 0x8
    ::Steamworks::AppId AppID;
    // Field size check
    static_assert(sizeof(::Steamworks::AppId) == 0x4);
    public:
    // Creating value type constructor for type: FriendRichPresenceUpdate_t
    constexpr FriendRichPresenceUpdate_t(uint64_t SteamIDFriend_ = {}, ::Steamworks::AppId AppID_ = {}) noexcept : SteamIDFriend{SteamIDFriend_}, AppID{AppID_} {}
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
    // Get instance field reference: System.UInt64 SteamIDFriend
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamIDFriend();
    // Get instance field reference: Steamworks.AppId AppID
    [[deprecated("Use field access instead!")]] ::Steamworks::AppId& dyn_AppID();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45F7D0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45F730
    static void _cctor();
  }; // Steamworks.Data.FriendRichPresenceUpdate_t
  #pragma pack(pop)
  static check_size<sizeof(FriendRichPresenceUpdate_t), 8 + sizeof(::Steamworks::AppId)> __Steamworks_Data_FriendRichPresenceUpdate_tSizeCheck;
  static_assert(sizeof(FriendRichPresenceUpdate_t) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::FriendRichPresenceUpdate_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::FriendRichPresenceUpdate_t::*)()>(&Steamworks::Data::FriendRichPresenceUpdate_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::FriendRichPresenceUpdate_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::FriendRichPresenceUpdate_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::FriendRichPresenceUpdate_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::FriendRichPresenceUpdate_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

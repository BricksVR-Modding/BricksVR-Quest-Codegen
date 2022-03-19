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
// Including type: Steamworks.Data.GameId
#include "Steamworks/Data/GameId.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: UserAchievementIconFetched_t
  struct UserAchievementIconFetched_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::UserAchievementIconFetched_t, "Steamworks.Data", "UserAchievementIconFetched_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.UserAchievementIconFetched_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserAchievementIconFetched_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Data.GameId GameID
    // Size: 0x8
    // Offset: 0x0
    ::Steamworks::Data::GameId GameID;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::GameId) == 0x8);
    // System.Byte[] AchievementName
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> AchievementName;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Boolean Achieved
    // Size: 0x1
    // Offset: 0x10
    bool Achieved;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Achieved and: IconHandle
    char __padding2[0x3] = {};
    // System.Int32 IconHandle
    // Size: 0x4
    // Offset: 0x14
    int IconHandle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: UserAchievementIconFetched_t
    constexpr UserAchievementIconFetched_t(::Steamworks::Data::GameId GameID_ = {}, ::ArrayW<uint8_t> AchievementName_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool Achieved_ = {}, int IconHandle_ = {}) noexcept : GameID{GameID_}, AchievementName{AchievementName_}, Achieved{Achieved_}, IconHandle{IconHandle_} {}
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
    // Get instance field reference: Steamworks.Data.GameId GameID
    ::Steamworks::Data::GameId& dyn_GameID();
    // Get instance field reference: System.Byte[] AchievementName
    ::ArrayW<uint8_t>& dyn_AchievementName();
    // Get instance field reference: System.Boolean Achieved
    bool& dyn_Achieved();
    // Get instance field reference: System.Int32 IconHandle
    int& dyn_IconHandle();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0xA5B03C
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0xA5B044
    static void _cctor();
    // System.String AchievementNameUTF8()
    // Offset: 0xA5AFB0
    ::StringW AchievementNameUTF8();
  }; // Steamworks.Data.UserAchievementIconFetched_t
  #pragma pack(pop)
  static check_size<sizeof(UserAchievementIconFetched_t), 20 + sizeof(int)> __Steamworks_Data_UserAchievementIconFetched_tSizeCheck;
  static_assert(sizeof(UserAchievementIconFetched_t) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementIconFetched_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::UserAchievementIconFetched_t::*)()>(&Steamworks::Data::UserAchievementIconFetched_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementIconFetched_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementIconFetched_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::UserAchievementIconFetched_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementIconFetched_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementIconFetched_t::AchievementNameUTF8
// Il2CppName: AchievementNameUTF8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::UserAchievementIconFetched_t::*)()>(&Steamworks::Data::UserAchievementIconFetched_t::AchievementNameUTF8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementIconFetched_t), "AchievementNameUTF8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

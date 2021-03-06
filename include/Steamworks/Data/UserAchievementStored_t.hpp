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
  // Forward declaring type: UserAchievementStored_t
  struct UserAchievementStored_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::UserAchievementStored_t, "Steamworks.Data", "UserAchievementStored_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.UserAchievementStored_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct UserAchievementStored_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 GameID
    // Size: 0x8
    // Offset: 0x0
    uint64_t GameID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Boolean GroupAchievement
    // Size: 0x1
    // Offset: 0x8
    bool GroupAchievement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: GroupAchievement and: AchievementName
    char __padding1[0x7] = {};
    // System.Byte[] AchievementName
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> AchievementName;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.UInt32 CurProgress
    // Size: 0x4
    // Offset: 0x18
    uint CurProgress;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt32 MaxProgress
    // Size: 0x4
    // Offset: 0x1C
    uint MaxProgress;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: UserAchievementStored_t
    constexpr UserAchievementStored_t(uint64_t GameID_ = {}, bool GroupAchievement_ = {}, ::ArrayW<uint8_t> AchievementName_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), uint CurProgress_ = {}, uint MaxProgress_ = {}) noexcept : GameID{GameID_}, GroupAchievement{GroupAchievement_}, AchievementName{AchievementName_}, CurProgress{CurProgress_}, MaxProgress{MaxProgress_} {}
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
    // Get instance field reference: System.UInt64 GameID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_GameID();
    // Get instance field reference: System.Boolean GroupAchievement
    [[deprecated("Use field access instead!")]] bool& dyn_GroupAchievement();
    // Get instance field reference: System.Byte[] AchievementName
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_AchievementName();
    // Get instance field reference: System.UInt32 CurProgress
    [[deprecated("Use field access instead!")]] uint& dyn_CurProgress();
    // Get instance field reference: System.UInt32 MaxProgress
    [[deprecated("Use field access instead!")]] uint& dyn_MaxProgress();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x4677B0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x467710
    static void _cctor();
    // System.String AchievementNameUTF8()
    // Offset: 0x467690
    ::StringW AchievementNameUTF8();
  }; // Steamworks.Data.UserAchievementStored_t
  #pragma pack(pop)
  static check_size<sizeof(UserAchievementStored_t), 28 + sizeof(uint)> __Steamworks_Data_UserAchievementStored_tSizeCheck;
  static_assert(sizeof(UserAchievementStored_t) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementStored_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::UserAchievementStored_t::*)()>(&Steamworks::Data::UserAchievementStored_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementStored_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementStored_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::UserAchievementStored_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementStored_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::UserAchievementStored_t::AchievementNameUTF8
// Il2CppName: AchievementNameUTF8
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Steamworks::Data::UserAchievementStored_t::*)()>(&Steamworks::Data::UserAchievementStored_t::AchievementNameUTF8)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::UserAchievementStored_t), "AchievementNameUTF8", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

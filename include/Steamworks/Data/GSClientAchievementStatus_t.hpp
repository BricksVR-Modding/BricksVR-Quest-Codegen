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
  // Forward declaring type: GSClientAchievementStatus_t
  struct GSClientAchievementStatus_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GSClientAchievementStatus_t, "Steamworks.Data", "GSClientAchievementStatus_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GSClientAchievementStatus_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GSClientAchievementStatus_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamID
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Byte[] PchAchievement
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<uint8_t> PchAchievement;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Boolean Unlocked
    // Size: 0x1
    // Offset: 0x10
    bool Unlocked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: GSClientAchievementStatus_t
    constexpr GSClientAchievementStatus_t(uint64_t SteamID_ = {}, ::ArrayW<uint8_t> PchAchievement_ = ::ArrayW<uint8_t>(static_cast<void*>(nullptr)), bool Unlocked_ = {}) noexcept : SteamID{SteamID_}, PchAchievement{PchAchievement_}, Unlocked{Unlocked_} {}
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
    // Get instance field reference: System.UInt64 SteamID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_SteamID();
    // Get instance field reference: System.Byte[] PchAchievement
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_PchAchievement();
    // Get instance field reference: System.Boolean Unlocked
    [[deprecated("Use field access instead!")]] bool& dyn_Unlocked();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45FA90
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45F9F0
    static void _cctor();
  }; // Steamworks.Data.GSClientAchievementStatus_t
  #pragma pack(pop)
  static check_size<sizeof(GSClientAchievementStatus_t), 16 + sizeof(bool)> __Steamworks_Data_GSClientAchievementStatus_tSizeCheck;
  static_assert(sizeof(GSClientAchievementStatus_t) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GSClientAchievementStatus_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GSClientAchievementStatus_t::*)()>(&Steamworks::Data::GSClientAchievementStatus_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSClientAchievementStatus_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GSClientAchievementStatus_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GSClientAchievementStatus_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSClientAchievementStatus_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

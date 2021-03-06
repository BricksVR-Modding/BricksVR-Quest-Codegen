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
  // Forward declaring type: GSReputation_t
  struct GSReputation_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GSReputation_t, "Steamworks.Data", "GSReputation_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GSReputation_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GSReputation_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // Steamworks.Result Result
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Result Result;
    // Field size check
    static_assert(sizeof(::Steamworks::Result) == 0x4);
    // System.UInt32 ReputationScore
    // Size: 0x4
    // Offset: 0x4
    uint ReputationScore;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Boolean Banned
    // Size: 0x1
    // Offset: 0x8
    bool Banned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Banned and: BannedIP
    char __padding2[0x3] = {};
    // System.UInt32 BannedIP
    // Size: 0x4
    // Offset: 0xC
    uint BannedIP;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.UInt16 BannedPort
    // Size: 0x2
    // Offset: 0x10
    uint16_t BannedPort;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // Padding between fields: BannedPort and: BannedGameID
    char __padding4[0x6] = {};
    // System.UInt64 BannedGameID
    // Size: 0x8
    // Offset: 0x18
    uint64_t BannedGameID;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt32 BanExpires
    // Size: 0x4
    // Offset: 0x20
    uint BanExpires;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: GSReputation_t
    constexpr GSReputation_t(::Steamworks::Result Result_ = {}, uint ReputationScore_ = {}, bool Banned_ = {}, uint BannedIP_ = {}, uint16_t BannedPort_ = {}, uint64_t BannedGameID_ = {}, uint BanExpires_ = {}) noexcept : Result{Result_}, ReputationScore{ReputationScore_}, Banned{Banned_}, BannedIP{BannedIP_}, BannedPort{BannedPort_}, BannedGameID{BannedGameID_}, BanExpires{BanExpires_} {}
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
    [[deprecated("Use field access instead!")]] ::Steamworks::Result& dyn_Result();
    // Get instance field reference: System.UInt32 ReputationScore
    [[deprecated("Use field access instead!")]] uint& dyn_ReputationScore();
    // Get instance field reference: System.Boolean Banned
    [[deprecated("Use field access instead!")]] bool& dyn_Banned();
    // Get instance field reference: System.UInt32 BannedIP
    [[deprecated("Use field access instead!")]] uint& dyn_BannedIP();
    // Get instance field reference: System.UInt16 BannedPort
    [[deprecated("Use field access instead!")]] uint16_t& dyn_BannedPort();
    // Get instance field reference: System.UInt64 BannedGameID
    [[deprecated("Use field access instead!")]] uint64_t& dyn_BannedGameID();
    // Get instance field reference: System.UInt32 BanExpires
    [[deprecated("Use field access instead!")]] uint& dyn_BanExpires();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45FF60
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45FEC0
    static void _cctor();
  }; // Steamworks.Data.GSReputation_t
  #pragma pack(pop)
  static check_size<sizeof(GSReputation_t), 32 + sizeof(uint)> __Steamworks_Data_GSReputation_tSizeCheck;
  static_assert(sizeof(GSReputation_t) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GSReputation_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GSReputation_t::*)()>(&Steamworks::Data::GSReputation_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSReputation_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GSReputation_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GSReputation_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSReputation_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

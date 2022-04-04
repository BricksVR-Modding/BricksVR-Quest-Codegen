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
  // Forward declaring type: GSClientGroupStatus_t
  struct GSClientGroupStatus_t;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Data::GSClientGroupStatus_t, "Steamworks.Data", "GSClientGroupStatus_t");
// Type namespace: Steamworks.Data
namespace Steamworks::Data {
  // Size: 0x12
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Data.GSClientGroupStatus_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct GSClientGroupStatus_t/*, public ::System::ValueType, public ::Steamworks::ICallbackData*/ {
    public:
    public:
    // System.UInt64 SteamIDUser
    // Size: 0x8
    // Offset: 0x0
    uint64_t SteamIDUser;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.UInt64 SteamIDGroup
    // Size: 0x8
    // Offset: 0x8
    uint64_t SteamIDGroup;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // System.Boolean Member
    // Size: 0x1
    // Offset: 0x10
    bool Member;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean Officer
    // Size: 0x1
    // Offset: 0x11
    bool Officer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: GSClientGroupStatus_t
    constexpr GSClientGroupStatus_t(uint64_t SteamIDUser_ = {}, uint64_t SteamIDGroup_ = {}, bool Member_ = {}, bool Officer_ = {}) noexcept : SteamIDUser{SteamIDUser_}, SteamIDGroup{SteamIDGroup_}, Member{Member_}, Officer{Officer_} {}
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
    // Get instance field reference: System.UInt64 SteamIDUser
    [[deprecated]] uint64_t& dyn_SteamIDUser();
    // Get instance field reference: System.UInt64 SteamIDGroup
    [[deprecated]] uint64_t& dyn_SteamIDGroup();
    // Get instance field reference: System.Boolean Member
    [[deprecated]] bool& dyn_Member();
    // Get instance field reference: System.Boolean Officer
    [[deprecated]] bool& dyn_Officer();
    // public Steamworks.CallbackType get_CallbackType()
    // Offset: 0x45FCA0
    ::Steamworks::CallbackType get_CallbackType();
    // static private System.Void .cctor()
    // Offset: 0x45FC00
    static void _cctor();
  }; // Steamworks.Data.GSClientGroupStatus_t
  #pragma pack(pop)
  static check_size<sizeof(GSClientGroupStatus_t), 17 + sizeof(bool)> __Steamworks_Data_GSClientGroupStatus_tSizeCheck;
  static_assert(sizeof(GSClientGroupStatus_t) == 0x12);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Steamworks::Data::GSClientGroupStatus_t::get_CallbackType
// Il2CppName: get_CallbackType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Steamworks::CallbackType (Steamworks::Data::GSClientGroupStatus_t::*)()>(&Steamworks::Data::GSClientGroupStatus_t::get_CallbackType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSClientGroupStatus_t), "get_CallbackType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Steamworks::Data::GSClientGroupStatus_t::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Steamworks::Data::GSClientGroupStatus_t::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Steamworks::Data::GSClientGroupStatus_t), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};

// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Steamworks.Dispatch
#include "Steamworks/Dispatch.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Steamworks.Data.HSteamUser
#include "Steamworks/Data/HSteamUser.hpp"
// Including type: Steamworks.CallbackType
#include "Steamworks/CallbackType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Steamworks::Dispatch::CallbackMsg_t, "Steamworks", "Dispatch/CallbackMsg_t");
// Type namespace: Steamworks
namespace Steamworks {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Steamworks.Dispatch/Steamworks.CallbackMsg_t
  // [TokenAttribute] Offset: FFFFFFFF
  struct Dispatch::CallbackMsg_t/*, public ::System::ValueType*/ {
    public:
    public:
    // public Steamworks.Data.HSteamUser m_hSteamUser
    // Size: 0x4
    // Offset: 0x0
    ::Steamworks::Data::HSteamUser m_hSteamUser;
    // Field size check
    static_assert(sizeof(::Steamworks::Data::HSteamUser) == 0x4);
    // public Steamworks.CallbackType Type
    // Size: 0x4
    // Offset: 0x4
    ::Steamworks::CallbackType Type;
    // Field size check
    static_assert(sizeof(::Steamworks::CallbackType) == 0x4);
    // public System.IntPtr Data
    // Size: 0x8
    // Offset: 0x8
    ::System::IntPtr Data;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Int32 DataSize
    // Size: 0x4
    // Offset: 0x10
    int DataSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: CallbackMsg_t
    constexpr CallbackMsg_t(::Steamworks::Data::HSteamUser m_hSteamUser_ = {}, ::Steamworks::CallbackType Type_ = {}, ::System::IntPtr Data_ = {}, int DataSize_ = {}) noexcept : m_hSteamUser{m_hSteamUser_}, Type{Type_}, Data{Data_}, DataSize{DataSize_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Steamworks.Data.HSteamUser m_hSteamUser
    [[deprecated]] ::Steamworks::Data::HSteamUser& dyn_m_hSteamUser();
    // Get instance field reference: public Steamworks.CallbackType Type
    [[deprecated]] ::Steamworks::CallbackType& dyn_Type();
    // Get instance field reference: public System.IntPtr Data
    [[deprecated]] ::System::IntPtr& dyn_Data();
    // Get instance field reference: public System.Int32 DataSize
    [[deprecated]] int& dyn_DataSize();
  }; // Steamworks.Dispatch/Steamworks.CallbackMsg_t
  #pragma pack(pop)
  static check_size<sizeof(Dispatch::CallbackMsg_t), 16 + sizeof(int)> __Steamworks_Dispatch_CallbackMsg_tSizeCheck;
  static_assert(sizeof(Dispatch::CallbackMsg_t) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

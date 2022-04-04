// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: PersistenceMessageEvent
  struct PersistenceMessageEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::PersistenceMessageEvent, "Normal.Realtime.Native", "PersistenceMessageEvent");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x11
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Native.PersistenceMessageEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct PersistenceMessageEvent/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 clientID
    // Size: 0x4
    // Offset: 0x0
    int clientID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: clientID and: messageLength
    char __padding0[0x4] = {};
    // public System.UIntPtr messageLength
    // Size: 0x8
    // Offset: 0x8
    ::System::UIntPtr messageLength;
    // Field size check
    static_assert(sizeof(::System::UIntPtr) == 0x8);
    // public System.Byte reliable
    // Size: 0x1
    // Offset: 0x10
    uint8_t reliable;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: PersistenceMessageEvent
    constexpr PersistenceMessageEvent(int clientID_ = {}, ::System::UIntPtr messageLength_ = {}, uint8_t reliable_ = {}) noexcept : clientID{clientID_}, messageLength{messageLength_}, reliable{reliable_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 clientID
    [[deprecated]] int& dyn_clientID();
    // Get instance field reference: public System.UIntPtr messageLength
    [[deprecated]] ::System::UIntPtr& dyn_messageLength();
    // Get instance field reference: public System.Byte reliable
    [[deprecated]] uint8_t& dyn_reliable();
  }; // Normal.Realtime.Native.PersistenceMessageEvent
  #pragma pack(pop)
  static check_size<sizeof(PersistenceMessageEvent), 16 + sizeof(uint8_t)> __Normal_Realtime_Native_PersistenceMessageEventSizeCheck;
  static_assert(sizeof(PersistenceMessageEvent) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

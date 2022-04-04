// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: NetworkInfo
  struct NetworkInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::NetworkInfo, "Normal.Realtime.Native", "NetworkInfo");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Native.NetworkInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Single roundTripTime
    // Size: 0x4
    // Offset: 0x0
    float roundTripTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single percentOfPacketsLost
    // Size: 0x4
    // Offset: 0x4
    float percentOfPacketsLost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sentBandwidth
    // Size: 0x4
    // Offset: 0x8
    float sentBandwidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single receivedBandwidth
    // Size: 0x4
    // Offset: 0xC
    float receivedBandwidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single ackedBandwidth
    // Size: 0x4
    // Offset: 0x10
    float ackedBandwidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: ackedBandwidth and: numberOfPacketsSent
    char __padding4[0x4] = {};
    // public System.UInt64 numberOfPacketsSent
    // Size: 0x8
    // Offset: 0x18
    uint64_t numberOfPacketsSent;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 numberOfPacketsReceived
    // Size: 0x8
    // Offset: 0x20
    uint64_t numberOfPacketsReceived;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // public System.UInt64 numberOfPacketsAcked
    // Size: 0x8
    // Offset: 0x28
    uint64_t numberOfPacketsAcked;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: NetworkInfo
    constexpr NetworkInfo(float roundTripTime_ = {}, float percentOfPacketsLost_ = {}, float sentBandwidth_ = {}, float receivedBandwidth_ = {}, float ackedBandwidth_ = {}, uint64_t numberOfPacketsSent_ = {}, uint64_t numberOfPacketsReceived_ = {}, uint64_t numberOfPacketsAcked_ = {}) noexcept : roundTripTime{roundTripTime_}, percentOfPacketsLost{percentOfPacketsLost_}, sentBandwidth{sentBandwidth_}, receivedBandwidth{receivedBandwidth_}, ackedBandwidth{ackedBandwidth_}, numberOfPacketsSent{numberOfPacketsSent_}, numberOfPacketsReceived{numberOfPacketsReceived_}, numberOfPacketsAcked{numberOfPacketsAcked_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single roundTripTime
    [[deprecated]] float& dyn_roundTripTime();
    // Get instance field reference: public System.Single percentOfPacketsLost
    [[deprecated]] float& dyn_percentOfPacketsLost();
    // Get instance field reference: public System.Single sentBandwidth
    [[deprecated]] float& dyn_sentBandwidth();
    // Get instance field reference: public System.Single receivedBandwidth
    [[deprecated]] float& dyn_receivedBandwidth();
    // Get instance field reference: public System.Single ackedBandwidth
    [[deprecated]] float& dyn_ackedBandwidth();
    // Get instance field reference: public System.UInt64 numberOfPacketsSent
    [[deprecated]] uint64_t& dyn_numberOfPacketsSent();
    // Get instance field reference: public System.UInt64 numberOfPacketsReceived
    [[deprecated]] uint64_t& dyn_numberOfPacketsReceived();
    // Get instance field reference: public System.UInt64 numberOfPacketsAcked
    [[deprecated]] uint64_t& dyn_numberOfPacketsAcked();
  }; // Normal.Realtime.Native.NetworkInfo
  #pragma pack(pop)
  static check_size<sizeof(NetworkInfo), 40 + sizeof(uint64_t)> __Normal_Realtime_Native_NetworkInfoSizeCheck;
  static_assert(sizeof(NetworkInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"

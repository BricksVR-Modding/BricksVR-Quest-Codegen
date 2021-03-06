// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Forward declaring type: Cluster
  struct Cluster;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Normal::Realtime::Native::Cluster, "Normal.Realtime.Native", "Cluster");
// Type namespace: Normal.Realtime.Native
namespace Normal::Realtime::Native {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Normal.Realtime.Native.Cluster
  // [TokenAttribute] Offset: FFFFFFFF
  struct Cluster/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.String address
    // Size: 0x8
    // Offset: 0x8
    ::StringW address;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 ping
    // Size: 0x4
    // Offset: 0x10
    int ping;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Cluster
    constexpr Cluster(::StringW name_ = {}, ::StringW address_ = {}, int ping_ = {}) noexcept : name{name_}, address{address_}, ping{ping_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public readonly System.String address
    [[deprecated("Use field access instead!")]] ::StringW& dyn_address();
    // Get instance field reference: public System.Int32 ping
    [[deprecated("Use field access instead!")]] int& dyn_ping();
    // public System.Void .ctor(System.String name, System.String address)
    // Offset: 0x8B6A10
    Cluster(::StringW name, ::StringW address);
  }; // Normal.Realtime.Native.Cluster
  #pragma pack(pop)
  static check_size<sizeof(Cluster), 16 + sizeof(int)> __Normal_Realtime_Native_ClusterSizeCheck;
  static_assert(sizeof(Cluster) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Normal::Realtime::Native::Cluster::Cluster
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
